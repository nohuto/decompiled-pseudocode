/*
 * XREFs of SmpWaitForStatusChange @ 0x1400134D8
 * Callers:
 *     SmpWaitForSubSysStartup @ 0x140004958 (SmpWaitForSubSysStartup.c)
 *     SmpWaitForSingleSubSys @ 0x140004B40 (SmpWaitForSingleSubSys.c)
 * Callees:
 *     SmpUnlockKnownSubSysList @ 0x140004678 (SmpUnlockKnownSubSysList.c)
 *     SmpLockKnownSubSysList @ 0x140004A78 (SmpLockKnownSubSysList.c)
 *     SmpCheckSubSysStatus @ 0x140004B78 (SmpCheckSubSysStatus.c)
 *     SmpDisposeSubSysSynch @ 0x14001337C (SmpDisposeSubSysSynch.c)
 *     SmpGetSubSysSynch @ 0x140013410 (SmpGetSubSysSynch.c)
 */

__int64 __fastcall SmpWaitForStatusChange(__int64 a1, int a2, int *a3)
{
  HANDLE *SubSysSynch; // rbx
  unsigned int v4; // edi
  HANDLE *v5; // rbp
  NTSTATUS v9; // eax
  signed __int64 v10; // rax
  HANDLE Object[5]; // [rsp+30h] [rbp-28h] BYREF
  LARGE_INTEGER Interval; // [rsp+60h] [rbp+8h] BYREF

  SubSysSynch = *(HANDLE **)(a1 + 16);
  v4 = 0;
  v5 = 0LL;
  while ( 1 )
  {
    if ( SubSysSynch )
      goto LABEL_8;
    SmpUnlockKnownSubSysList((__int64)a3);
    SubSysSynch = (HANDLE *)SmpGetSubSysSynch();
    if ( !SubSysSynch )
    {
      Interval.QuadPart = -50000000LL;
      NtDelayExecution(0, &Interval);
    }
    SmpLockKnownSubSysList(*(_DWORD *)(a1 + 64), *a3, 0LL);
    if ( (unsigned int)SmpCheckSubSysStatus(a1) )
      break;
    if ( SubSysSynch )
    {
      if ( *(_QWORD *)(a1 + 16) )
      {
        v5 = SubSysSynch;
        SubSysSynch = *(HANDLE **)(a1 + 16);
      }
      else
      {
        v10 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 16), (signed __int64)SubSysSynch, 0LL);
        if ( v10 )
        {
          v5 = SubSysSynch;
          SubSysSynch = (HANDLE *)v10;
        }
      }
LABEL_8:
      _InterlockedIncrement((volatile signed __int32 *)SubSysSynch);
      SmpUnlockKnownSubSysList((__int64)a3);
      if ( v5 )
        SmpDisposeSubSysSynch(v5);
      Object[0] = SubSysSynch[1];
      if ( a2 == 1 )
        Object[1] = *(HANDLE *)(a1 + 32);
      v9 = NtWaitForMultipleObjects((a2 == 1) + 1, Object, WaitAny, 0, 0LL);
      if ( v9 )
      {
        if ( v9 == 1 )
          v9 = -1073741823;
        v4 = v9;
      }
      else if ( _InterlockedExchangeAdd((volatile signed __int32 *)SubSysSynch, 0xFFFFFFFF) == 1 )
      {
        SmpDisposeSubSysSynch(SubSysSynch);
      }
      SmpLockKnownSubSysList(*(_DWORD *)(a1 + 64), *a3, 0LL);
      return v4;
    }
    SubSysSynch = *(HANDLE **)(a1 + 16);
  }
  if ( SubSysSynch )
    SmpDisposeSubSysSynch(SubSysSynch);
  return 0LL;
}
