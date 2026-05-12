/*
 * XREFs of RaidCancelIrp @ 0x1C00393F4
 * Callers:
 *     RaUnitDisableDeviceIrp @ 0x1C003A298 (RaUnitDisableDeviceIrp.c)
 *     RaidUnitCancelPendingRequests @ 0x1C003C82C (RaidUnitCancelPendingRequests.c)
 * Callees:
 *     RaUnitReleaseRemoveLock @ 0x1C00054E4 (RaUnitReleaseRemoveLock.c)
 *     RaidSrbStatusToNtStatus @ 0x1C000ACC8 (RaidSrbStatusToNtStatus.c)
 */

__int64 __fastcall RaidCancelIrp(__int64 a1, char a2, __int64 a3)
{
  __int64 v4; // rbx
  int v5; // eax
  __int64 v6; // r8
  struct _KEVENT *v7; // r9
  _QWORD *v8; // rcx
  __int64 v9; // rax

  v4 = *(_QWORD *)(*(_QWORD *)(a3 + 184) + 8LL);
  *(_BYTE *)(v4 + 3) = a2;
  v5 = RaidSrbStatusToNtStatus(a2);
  *(_QWORD *)(v6 + 56) = 0LL;
  *(_DWORD *)(v6 + 48) = v5;
  RaUnitReleaseRemoveLock(v7);
  if ( (*(_BYTE *)(a3 + 142) & 0x20) != 0 )
  {
    if ( *(_BYTE *)(v4 + 2) == 40 )
    {
      v8 = *(_QWORD **)(v4 + 96);
      *(_QWORD *)(v4 + 96) = v8[2];
    }
    else
    {
      v8 = *(_QWORD **)(v4 + 48);
      v9 = v8[2];
      *(_QWORD *)(v4 + 56) = 0LL;
      *(_QWORD *)(v4 + 40) = 0LL;
      *(_QWORD *)(v4 + 48) = v9;
    }
    ExFreePoolWithTag(v8, 0x54436152u);
  }
  return RaidCompleteRequestEx((PIRP)a3, 0, *(_DWORD *)(a3 + 48));
}
