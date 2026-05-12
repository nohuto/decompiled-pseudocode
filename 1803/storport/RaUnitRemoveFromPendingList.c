/*
 * XREFs of RaUnitRemoveFromPendingList @ 0x1C0007D34
 * Callers:
 *     RaidUnitReleaseIrp @ 0x1C0007EEC (RaidUnitReleaseIrp.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0017BC0 (__security_check_cookie.c)
 *     StorRemoveEventQueue @ 0x1C002D4EC (StorRemoveEventQueue.c)
 *     RaidUnitDisablePendingTimer @ 0x1C00359A8 (RaidUnitDisablePendingTimer.c)
 *     McTemplateK0qcq @ 0x1C003A190 (McTemplateK0qcq.c)
 */

__int64 __fastcall RaUnitRemoveFromPendingList(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v5; // rdx
  __int64 v6; // rdx
  int v7; // edx
  int v8; // ecx
  int v9; // r9d
  _QWORD v10[2]; // [rsp+38h] [rbp-20h] BYREF

  result = *(_QWORD *)(a2 + 184);
  v5 = *(_QWORD *)(result + 8);
  if ( *(_BYTE *)(v5 + 2) == 40 )
    v6 = *(_QWORD *)(v5 + 96);
  else
    v6 = *(_QWORD *)(v5 + 48);
  if ( (*(_BYTE *)(v6 + 16) & 2) != 0 )
  {
    StorRemoveEventQueue(*(_QWORD *)(a1 + 208), v6 + 48);
    if ( StorEtwLoggingEnabled )
    {
      v10[0] = 0LL;
      v10[1] = 0LL;
      IoGetActivityIdIrp(a2, v10);
      if ( ((__int64)WPP_MAIN_CB.Dpc.DpcData & 0x800000) != 0 )
        McTemplateK0qcq(v8, v7, (unsigned int)v10, v9, 4);
    }
    if ( *(char *)(a1 + 153) < 0 || (result = *(_QWORD *)(a1 + 24), *(_QWORD *)(result + 5088)) )
    {
      result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 1532), 0xFFFFFFFF);
      if ( (_DWORD)result == 1 )
        return RaidUnitDisablePendingTimer(a1);
    }
  }
  return result;
}
