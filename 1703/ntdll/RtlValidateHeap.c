/*
 * XREFs of RtlValidateHeap @ 0x180077E50
 * Callers:
 *     RtlValidateProcessHeaps @ 0x1800EFD20 (RtlValidateProcessHeaps.c)
 * Callees:
 *     RtlLockHeap @ 0x18001F870 (RtlLockHeap.c)
 *     sub_18001F9B0 @ 0x18001F9B0 (sub_18001F9B0.c)
 *     RtlUnlockHeap @ 0x180021980 (RtlUnlockHeap.c)
 *     sub_180023990 @ 0x180023990 (sub_180023990.c)
 *     RtlGetCurrentServiceSessionId @ 0x180024AB0 (RtlGetCurrentServiceSessionId.c)
 *     RtlLeaveCriticalSection @ 0x18002F090 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x18002F9C0 (RtlEnterCriticalSection.c)
 *     sub_1800588D4 @ 0x1800588D4 (sub_1800588D4.c)
 *     RtlNtStatusToDosError @ 0x18005D5F0 (RtlNtStatusToDosError.c)
 *     sub_180078084 @ 0x180078084 (sub_180078084.c)
 *     sub_180090710 @ 0x180090710 (sub_180090710.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     ZwTraceEvent @ 0x1800A5EB0 (ZwTraceEvent.c)
 *     _guard_dispatch_icall_nop @ 0x1800A8C20 (_guard_dispatch_icall_nop.c)
 *     sub_1800F22CC @ 0x1800F22CC (sub_1800F22CC.c)
 */

BOOLEAN __cdecl RtlValidateHeap(PVOID HeapHandle, ULONG Flags, PVOID BaseAddress)
{
  __int16 v4; // r14
  char v6; // r15
  char *v7; // rdx
  BOOLEAN v8; // al
  __int64 v9; // rsi
  __int64 UserModeGlobalLogger; // rcx
  BOOLEAN v12; // di
  ULONG v13; // r15d
  int v14; // ecx
  unsigned int v15; // edx
  int v16; // r8d
  int v17; // ecx
  int v18; // edx
  int v19; // eax
  int v20; // edx
  BOOLEAN v22; // [rsp+20h] [rbp-68h]
  int v23; // [rsp+24h] [rbp-64h]
  _BYTE Fields[6]; // [rsp+30h] [rbp-58h] BYREF
  __int16 v25; // [rsp+36h] [rbp-52h]
  PVOID v26; // [rsp+50h] [rbp-38h]

  v4 = Flags;
  v6 = 0;
  if ( *((_DWORD *)HeapHandle + 4) == -571548178 )
  {
    v12 = 1;
    v13 = Flags & 1;
    if ( !v13 )
      RtlLockHeap(HeapHandle);
    v14 = v13 | 2;
    if ( (v4 & 8) == 0 )
      v14 = v4 & 1;
    v15 = v14 | 0x80000000;
    if ( (v4 & 4) == 0 )
      v15 = v14;
    v16 = v15 | 0x100;
    if ( (v4 & 0x100) == 0 )
      v16 = v15;
    v17 = v4 & 0xE00 | v16;
    if ( (v4 & 0xE00) == 0 )
      v17 = v16;
    v18 = v17 | 0x2000000;
    if ( (v4 & 0x10) == 0 )
      v18 = v17;
    v19 = v18 | 0x1000000;
    if ( (v4 & 2) == 0 )
      v19 = v18;
    v23 = v19;
    v20 = *((_DWORD *)HeapHandle + 10);
    if ( v20 && v20 == LODWORD(NtCurrentTeb()->ClientId.UniqueThread) )
      v23 = v19 | 1;
    if ( BaseAddress )
    {
      if ( (dword_180158684 & 2) != 0
        && !((_WORD)BaseAddress ? 0 : sub_1800588D4(&stru_180159600, (unsigned __int64)BaseAddress >> 16, 1uLL)) )
      {
        BaseAddress = (char *)BaseAddress - 16;
      }
      v12 = sub_180023990((__int64)HeapHandle, (unsigned __int64)BaseAddress, v23) != -1;
    }
    if ( !v13 )
      RtlUnlockHeap(HeapHandle);
    return v12;
  }
  else
  {
    v22 = 0;
    if ( (*((_DWORD *)HeapHandle + 29) & 0x1000000) != 0 )
    {
      v22 = _guard_dispatch_icall_fptr();
    }
    else if ( sub_18001F9B0(HeapHandle, "RtlValidateHeap") )
    {
      if ( ((*((_BYTE *)HeapHandle + 116) | (unsigned __int8)v4) & 1) == 0 )
      {
        RtlEnterCriticalSection(*((PRTL_CRITICAL_SECTION *)HeapHandle + 44));
        v6 = 1;
      }
      if ( BaseAddress )
      {
        v7 = (char *)BaseAddress - 16;
        _m_prefetchw((char *)BaseAddress - 16);
        if ( *((char *)BaseAddress - 1) == 5 )
          v7 -= 16 * (unsigned __int8)v7[14];
        v8 = sub_180078084(HeapHandle, v7, "RtlValidateHeap");
      }
      else
      {
        v8 = sub_180090710(HeapHandle);
      }
      v22 = v8;
    }
    if ( v6 )
      RtlLeaveCriticalSection(*((PRTL_CRITICAL_SECTION *)HeapHandle + 44));
    v9 = 2147353472LL;
    if ( RtlGetCurrentServiceSessionId() )
      UserModeGlobalLogger = (__int64)NtCurrentPeb()->SharedData->UserModeGlobalLogger;
    else
      UserModeGlobalLogger = 2147353472LL;
    if ( *(_BYTE *)UserModeGlobalLogger && (NtCurrentPeb()->TracingFlags & 1) != 0 )
    {
      v25 = 4141;
      v26 = HeapHandle;
      if ( RtlGetCurrentServiceSessionId() )
        v9 = (__int64)NtCurrentPeb()->SharedData->UserModeGlobalLogger;
      ZwTraceEvent((HANDLE)*(unsigned __int8 *)v9, 0x402u, 8u, Fields);
    }
    return v22;
  }
}
