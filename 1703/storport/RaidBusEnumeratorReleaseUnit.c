/*
 * XREFs of RaidBusEnumeratorReleaseUnit @ 0x1C0014744
 * Callers:
 *     RaidBusEnumeratorVisitUnit @ 0x1C0014154 (RaidBusEnumeratorVisitUnit.c)
 *     RaidBusEnumeratorProbeLunZero @ 0x1C0014390 (RaidBusEnumeratorProbeLunZero.c)
 *     RaidBusEnumeratorGetLunList @ 0x1C0014530 (RaidBusEnumeratorGetLunList.c)
 * Callees:
 *     RaidAdapterRemoveUnit @ 0x1C0014790 (RaidAdapterRemoveUnit.c)
 */

__int64 __fastcall RaidBusEnumeratorReleaseUnit(_QWORD *a1, __int64 a2)
{
  __int64 v3; // rdi
  __int64 result; // rax

  v3 = *(_QWORD *)(a2 + 8);
  if ( *(_BYTE *)(a2 + 92) )
  {
    RaidAdapterRemoveUnit(*a1, *(_QWORD *)(a2 + 8));
    KeCancelTimer((PKTIMER)(v3 + 792));
    result = *(_QWORD *)(a2 + 8);
    *(_DWORD *)(result + 428) = 0;
  }
  return result;
}
