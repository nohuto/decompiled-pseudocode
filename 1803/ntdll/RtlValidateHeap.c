/*
 * XREFs of RtlValidateHeap @ 0x1800723C0
 * Callers:
 *     RtlValidateProcessHeaps @ 0x1800EBD00 (RtlValidateProcessHeaps.c)
 * Callees:
 *     RtlNtStatusToDosError @ 0x180008400 (RtlNtStatusToDosError.c)
 *     RtlGetCurrentServiceSessionId @ 0x180017410 (RtlGetCurrentServiceSessionId.c)
 *     sub_18001BA50 @ 0x18001BA50 (sub_18001BA50.c)
 *     sub_18001BD60 @ 0x18001BD60 (sub_18001BD60.c)
 *     RtlLeaveCriticalSection @ 0x18001E290 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x18001EE90 (RtlEnterCriticalSection.c)
 *     RtlUnlockHeap @ 0x18001FB70 (RtlUnlockHeap.c)
 *     sub_18001FC58 @ 0x18001FC58 (sub_18001FC58.c)
 *     RtlLockHeap @ 0x18001FC90 (RtlLockHeap.c)
 *     sub_180072588 @ 0x180072588 (sub_180072588.c)
 *     _guard_dispatch_icall_nop @ 0x18009E4A0 (_guard_dispatch_icall_nop.c)
 *     sub_1800FEA60 @ 0x1800FEA60 (sub_1800FEA60.c)
 *     sub_18010120C @ 0x18010120C (sub_18010120C.c)
 *     sub_18010473C @ 0x18010473C (sub_18010473C.c)
 */

BOOLEAN __cdecl RtlValidateHeap(PVOID HeapHandle, ULONG Flags, PVOID BaseAddress)
{
  __int16 v4; // r14
  char v6; // r15
  char *v7; // rdx
  BOOLEAN v8; // al
  __int64 UserModeGlobalLogger; // rcx
  BOOLEAN v11; // di
  int v12; // ecx
  BOOLEAN v13; // [rsp+20h] [rbp-28h]
  int v14; // [rsp+68h] [rbp+20h]

  v4 = Flags;
  v6 = 0;
  if ( *((_DWORD *)HeapHandle + 4) == -571548178 )
  {
    v11 = 1;
    if ( (Flags & 1) == 0 )
      RtlLockHeap(HeapHandle);
    v14 = sub_18001BD60(v4);
    v12 = *((_DWORD *)HeapHandle + 16);
    if ( v12 && v12 == LODWORD(NtCurrentTeb()->ClientId.UniqueThread) )
      v14 |= 1u;
    if ( BaseAddress )
    {
      if ( (dword_180159760 & 2) != 0 )
        BaseAddress = (char *)BaseAddress - *((_QWORD *)BaseAddress - 2);
      v11 = sub_18001BA50((__int64)HeapHandle, (unsigned __int64)BaseAddress, v14) != -1;
    }
    if ( (v4 & 1) == 0 )
      RtlUnlockHeap(HeapHandle);
    return v11;
  }
  else
  {
    v13 = 0;
    if ( (*((_DWORD *)HeapHandle + 29) & 0x1000000) != 0 )
    {
      v13 = _guard_dispatch_icall_fptr();
    }
    else if ( sub_18001FC58(HeapHandle, "RtlValidateHeap") )
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
        v8 = sub_180072588(HeapHandle, v7, "RtlValidateHeap");
      }
      else
      {
        v8 = sub_18010120C((_DWORD)HeapHandle);
      }
      v13 = v8;
    }
    if ( v6 )
      RtlLeaveCriticalSection(*((PRTL_CRITICAL_SECTION *)HeapHandle + 44));
    if ( RtlGetCurrentServiceSessionId() )
      UserModeGlobalLogger = (__int64)NtCurrentPeb()->SharedData->UserModeGlobalLogger;
    else
      UserModeGlobalLogger = 2147353472LL;
    if ( *(_BYTE *)UserModeGlobalLogger )
    {
      if ( (NtCurrentPeb()->TracingFlags & 1) != 0 )
        sub_1800FEA60(HeapHandle);
    }
    return v13;
  }
}
