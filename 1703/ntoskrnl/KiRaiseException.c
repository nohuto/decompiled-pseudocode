/*
 * XREFs of KiRaiseException @ 0x140135720
 * Callers:
 *     NtRaiseException @ 0x1401821D0 (NtRaiseException.c)
 * Callees:
 *     KiSetupForInstrumentationReturn @ 0x1400073D8 (KiSetupForInstrumentationReturn.c)
 *     KiDispatchException @ 0x140007C60 (KiDispatchException.c)
 *     RtlInitializeExtendedContext @ 0x140008E98 (RtlInitializeExtendedContext.c)
 *     RtlGetExtendedContextLength @ 0x140008FAC (RtlGetExtendedContextLength.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     KeContextToKframes @ 0x1401819C0 (KeContextToKframes.c)
 *     __chkstk @ 0x140189CF0 (__chkstk.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     RtlpReadExtendedContext @ 0x140425F70 (RtlpReadExtendedContext.c)
 *     RtlpSanitizeContextFlags @ 0x140426438 (RtlpSanitizeContextFlags.c)
 */

__int64 __fastcall KiRaiseException(void *a1, __int64 a2, __int64 a3, __int64 a4, char a5)
{
  __int64 v7; // r14
  char PreviousMode; // r12
  __int64 v9; // rax
  __int64 result; // rax
  unsigned int v11; // ebx
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // rcx
  void *v14; // rsp
  void *v15; // rsp
  int v16; // edx
  int v17; // ecx
  __int64 v18; // rsi
  __int64 v19; // rax
  unsigned int v20; // eax
  unsigned int v21; // ebx
  struct _EXCEPTION_RECORD *v22; // rcx
  struct _KTHREAD *CurrentThread; // rdx
  unsigned __int8 v24; // r9
  __int64 v25; // [rsp+20h] [rbp-10h]
  unsigned int v26; // [rsp+30h] [rbp+0h] BYREF
  unsigned int v27; // [rsp+34h] [rbp+4h]
  void *Src; // [rsp+38h] [rbp+8h]
  unsigned int v29; // [rsp+40h] [rbp+10h]
  __int64 v30; // [rsp+48h] [rbp+18h] BYREF
  _BYTE v31[24]; // [rsp+50h] [rbp+20h] BYREF
  unsigned int v32; // [rsp+68h] [rbp+38h]

  v7 = a2;
  Src = a1;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( !PreviousMode )
  {
LABEL_19:
    LOBYTE(v25) = PreviousMode;
    KeContextToKframes(a4, a3, v7, *(_DWORD *)(v7 + 48), v25);
    v22 = (struct _EXCEPTION_RECORD *)Src;
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
    return 0LL;
  }
  v9 = a2 + 48;
  if ( (unsigned __int64)(a2 + 48) >= 0x7FFFFFFF0000LL )
    v9 = 0x7FFFFFFF0000LL;
  v26 = *(_DWORD *)v9;
  LOBYTE(a2) = PreviousMode;
  result = RtlpSanitizeContextFlags(&v26, a2);
  if ( (int)result >= 0 )
  {
    v11 = v26;
    result = RtlGetExtendedContextLength(v26);
    if ( (int)result >= 0 )
    {
      v12 = v27 + 15LL;
      if ( v12 <= v27 )
        v12 = 0xFFFFFFFFFFFFFF0LL;
      v13 = v12 & 0xFFFFFFFFFFFFFFF0uLL;
      v14 = alloca(v13);
      v15 = alloca(v13);
      result = RtlInitializeExtendedContext((__int64)&v26, v11, &v30);
      if ( (int)result >= 0 )
      {
        v18 = v30 - 1232;
        LOBYTE(v16) = 1;
        result = RtlpReadExtendedContext(v17, v16, v30, v11, v7, 0LL);
        if ( (int)result >= 0 )
        {
          v7 = v18;
          v19 = (__int64)Src + 24;
          if ( (unsigned __int64)Src + 24 >= 0x7FFFFFFF0000LL )
            v19 = 0x7FFFFFFF0000LL;
          v20 = *(_DWORD *)v19;
          v29 = v20;
          v21 = v20;
          if ( v20 > 0xF )
            return 3221225485LL;
          v27 = 8 * v20 + 32;
          if ( (unsigned __int64)Src + v27 > 0x7FFFFFFF0000LL || (char *)Src + v27 < Src )
            MEMORY[0x7FFFFFFF0000] = 0;
          memmove(v31, Src, v27);
          Src = v31;
          v32 = v21;
          goto LABEL_19;
        }
      }
    }
  }
  return result;
}
