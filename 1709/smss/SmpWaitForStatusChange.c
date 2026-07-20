/*
 * XREFs of SmpWaitForStatusChange @ 0x140013368
 * Callers:
 *     SmpWaitForSubSysStartup @ 0x140004940 (SmpWaitForSubSysStartup.c)
 *     SmpWaitForSingleSubSys @ 0x140004B24 (SmpWaitForSingleSubSys.c)
 * Callees:
 *     SmpUnlockKnownSubSysList @ 0x140004668 (SmpUnlockKnownSubSysList.c)
 *     SmpLockKnownSubSysList @ 0x140004A5C (SmpLockKnownSubSysList.c)
 *     SmpCheckSubSysStatus @ 0x140004B5C (SmpCheckSubSysStatus.c)
 *     SmpDisposeSubSysSynch @ 0x14001320C (SmpDisposeSubSysSynch.c)
 *     SmpGetSubSysSynch @ 0x1400132A0 (SmpGetSubSysSynch.c)
 */

__int64 __fastcall SmpWaitForStatusChange(__int64 a1, int a2, int *a3)
{
  HANDLE *SubSysSynch; // rbx
  unsigned int v4; // edi
  HANDLE *v5; // rbp
  ULONG v9; // ecx
  NTSTATUS v10; // eax
  signed __int64 v11; // rax
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
        v11 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 16), (signed __int64)SubSysSynch, 0LL);
        if ( v11 )
        {
          v5 = SubSysSynch;
          SubSysSynch = (HANDLE *)v11;
        }
      }
LABEL_8:
      _InterlockedIncrement((volatile signed __int32 *)SubSysSynch);
      SmpUnlockKnownSubSysList((__int64)a3);
      if ( v5 )
        SmpDisposeSubSysSynch(v5);
      v9 = 1;
      Object[0] = SubSysSynch[1];
      if ( a2 == 1 )
      {
        v9 = 2;
        Object[1] = *(HANDLE *)(a1 + 32);
      }
      v10 = NtWaitForMultipleObjects(v9, Object, WaitAny, 0, 0LL);
      if ( v10 )
      {
        if ( v10 == 1 )
          v10 = -1073741823;
        v4 = v10;
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
