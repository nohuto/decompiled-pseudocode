/*
 * XREFs of RaidBusEnumeratorReleaseUnit @ 0x1C00136B8
 * Callers:
 *     RaidBusEnumeratorProbeLunZero @ 0x1C000D948 (RaidBusEnumeratorProbeLunZero.c)
 *     RaidBusEnumeratorVisitUnit @ 0x1C0012FEC (RaidBusEnumeratorVisitUnit.c)
 *     RaidBusEnumeratorGetLunList @ 0x1C00134B0 (RaidBusEnumeratorGetLunList.c)
 * Callees:
 *     RaidAdapterRemoveUnit @ 0x1C0013708 (RaidAdapterRemoveUnit.c)
 */

__int64 __fastcall RaidBusEnumeratorReleaseUnit(_QWORD *a1, __int64 a2)
{
  __int64 v3; // rdi
  __int64 result; // rax

  v3 = *(_QWORD *)(a2 + 8);
  if ( *(_BYTE *)(a2 + 92) )
  {
    RaidAdapterRemoveUnit(*a1, *(_QWORD *)(a2 + 8));
    KeCancelTimer((PKTIMER)(v3 + 824));
    result = *(_QWORD *)(a2 + 8);
    *(_DWORD *)(result + 428) = 0;
  }
  return result;
}
