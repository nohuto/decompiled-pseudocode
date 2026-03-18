/*
 * XREFs of Isoch_Stage_FreeScatterGatherList @ 0x1C002AD10
 * Callers:
 *     Isoch_CompleteStaleTransfers @ 0x1C00279F4 (Isoch_CompleteStaleTransfers.c)
 *     Isoch_CompleteTransfers @ 0x1C0027C6C (Isoch_CompleteTransfers.c)
 *     Isoch_Stage_CompleteTD @ 0x1C002A500 (Isoch_Stage_CompleteTD.c)
 *     Isoch_Stage_MapIntoRing @ 0x1C002AEC0 (Isoch_Stage_MapIntoRing.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00086E0 (_guard_dispatch_icall_nop.c)
 *     TR_SendCompleteStageRequest @ 0x1C0023860 (TR_SendCompleteStageRequest.c)
 *     SecureDmaEnabler_ReleaseResourcesAfterDma @ 0x1C003F8A4 (SecureDmaEnabler_ReleaseResourcesAfterDma.c)
 */

void __fastcall Isoch_Stage_FreeScatterGatherList(__int64 a1, __int64 a2, char a3)
{
  __int64 v5; // rcx
  __int64 v7; // rbx
  __int64 v8; // rsi
  KIRQL v9; // di
  __int64 v10; // r8

  v5 = *(_QWORD *)(a1 + 40);
  if ( *(_BYTE *)(v5 + 441) )
  {
    if ( *(_DWORD *)(a2 + 160) )
    {
      if ( a3 )
        KeLowerIrql(0);
      TR_SendCompleteStageRequest(a1, *(_DWORD *)(a2 + 160));
      SecureDmaEnabler_ReleaseResourcesAfterDma(*(_QWORD *)(*(_QWORD *)(a1 + 40) + 104LL), a2 + 128);
      if ( a3 )
        KfRaiseIrql(2u);
    }
  }
  else if ( *(_QWORD *)(a2 + 72) )
  {
    v7 = *(_QWORD *)(*(_QWORD *)a2 + 48LL);
    v8 = *(_QWORD *)(*(_QWORD *)(v5 + 96) + 24LL);
    v9 = KfRaiseIrql(2u);
    LOBYTE(v10) = (*(_BYTE *)(v7 + 32) & 1) == 0;
    (*(void (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)(v8 + 8) + 96LL))(v8, *(_QWORD *)(a2 + 72), v10);
    KeLowerIrql(v9);
    *(_QWORD *)(a2 + 72) = 0LL;
  }
}
