/*
 * XREFs of KiRaiseException @ 0x140249930
 * Callers:
 *     NtRaiseException @ 0x1401AB8A0 (NtRaiseException.c)
 * Callees:
 *     KiDispatchException @ 0x140130BA0 (KiDispatchException.c)
 *     RtlGetExtendedContextLength @ 0x140131758 (RtlGetExtendedContextLength.c)
 *     RtlInitializeExtendedContext @ 0x140131818 (RtlInitializeExtendedContext.c)
 *     KiSetupForInstrumentationReturn @ 0x140144468 (KiSetupForInstrumentationReturn.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     KeContextToKframes @ 0x1401AB000 (KeContextToKframes.c)
 *     _alloca_probe @ 0x1401B3450 (_alloca_probe.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 *     RtlpSanitizeContextFlags @ 0x1405B8358 (RtlpSanitizeContextFlags.c)
 *     RtlpReadExtendedContext @ 0x1405B8618 (RtlpReadExtendedContext.c)
 */

NTSTATUS __fastcall KiRaiseException(void *a1, __int64 a2, __int64 a3, __int64 a4, char a5)
{
  __int64 v7; // r14
  char PreviousMode; // r12
  __int64 v9; // rax
  NTSTATUS result; // eax
  ULONG v11; // ebx
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // rcx
  void *v14; // rsp
  void *v15; // rsp
  int v16; // edx
  int v17; // ecx
  CONTEXT_CHUNK *p_XState; // rsi
  __int64 v19; // rax
  unsigned int v20; // ebx
  char *v21; // rax
  EXCEPTION_RECORD *v22; // rcx
  struct _KTHREAD *CurrentThread; // rdx
  unsigned __int8 v24; // r9
  __int64 v25; // [rsp+20h] [rbp-10h]
  ULONG ContextFlags; // [rsp+30h] [rbp+0h] BYREF
  ULONG ContextLength; // [rsp+34h] [rbp+4h] BYREF
  void *Src; // [rsp+38h] [rbp+8h]
  unsigned int v29; // [rsp+40h] [rbp+10h]
  PCONTEXT_EX ContextEx; // [rsp+48h] [rbp+18h] BYREF
  _BYTE v31[24]; // [rsp+50h] [rbp+20h] BYREF
  unsigned int v32; // [rsp+68h] [rbp+38h]

  v7 = a2;
  Src = a1;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( !PreviousMode )
  {
LABEL_18:
    LOBYTE(v25) = PreviousMode;
    KeContextToKframes(a4, a3, v7, *(_DWORD *)(v7 + 48), v25);
    v22 = (EXCEPTION_RECORD *)Src;
    *(_DWORD *)Src &= ~0x10000000u;
    KiDispatchException(v22, a3, a4, PreviousMode, a5);
    if ( PreviousMode )
    {
      CurrentThread = KeGetCurrentThread();
      if ( (CurrentThread->Header.Reserved1 & 2) != 0
        && *(void **)(a4 + 360) != CurrentThread->Process->InstrumentationCallback )
      {
        KeGetCurrentIrql();
        __writecr8(1uLL);
        KiSetupForInstrumentationReturn(a4);
        __writecr8(v24);
      }
    }
    return 0;
  }
  v9 = a2 + 48;
  if ( (unsigned __int64)(a2 + 48) >= 0x7FFFFFFF0000LL )
    v9 = 0x7FFFFFFF0000LL;
  ContextFlags = *(_DWORD *)v9;
  LOBYTE(a2) = PreviousMode;
  result = RtlpSanitizeContextFlags(&ContextFlags, a2);
  if ( result >= 0 )
  {
    v11 = ContextFlags;
    result = RtlGetExtendedContextLength(ContextFlags, &ContextLength);
    if ( result >= 0 )
    {
      v12 = ContextLength + 15LL;
      if ( v12 <= ContextLength )
        v12 = 0xFFFFFFFFFFFFFF0LL;
      v13 = v12 & 0xFFFFFFFFFFFFFFF0uLL;
      v14 = alloca(v13);
      v15 = alloca(v13);
      result = RtlInitializeExtendedContext((PCONTEXT)&ContextFlags, v11, &ContextEx);
      if ( result >= 0 )
      {
        p_XState = &ContextEx[-39].XState;
        LOBYTE(v16) = 1;
        result = RtlpReadExtendedContext(v17, v16, (_DWORD)ContextEx, v11, v7, 0LL);
        if ( result >= 0 )
        {
          v7 = (__int64)p_XState;
          v19 = (__int64)Src + 24;
          if ( (unsigned __int64)Src + 24 >= 0x7FFFFFFF0000LL )
            v19 = 0x7FFFFFFF0000LL;
          v20 = *(_DWORD *)v19;
          v29 = v20;
          if ( v20 > 0xF )
            return -1073741811;
          ContextLength = 8 * v20 + 32;
          v21 = (char *)Src + ContextLength;
          if ( (unsigned __int64)v21 > 0x7FFFFFFF0000LL || v21 < Src )
            MEMORY[0x7FFFFFFF0000] = 0;
          memmove(v31, Src, 8 * v20 + 32);
          Src = v31;
          v32 = v20;
          goto LABEL_18;
        }
      }
    }
  }
  return result;
}
