/*
 * XREFs of ?ndisAoAcTraceRundown@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C004F880
 * Callers:
 *     ?ndisMEmitTraceRundown@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C004F9D8 (-ndisMEmitTraceRundown@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     WPP_SF_d @ 0x1C0043BDC (WPP_SF_d.c)
 *     WPP_SF_Zd @ 0x1C0044104 (WPP_SF_Zd.c)
 *     WPP_SF_Ld @ 0x1C004FFE8 (WPP_SF_Ld.c)
 *     WPP_SF_DDD @ 0x1C0066674 (WPP_SF_DDD_ea_1C0066674.c)
 */

void __fastcall ndisAoAcTraceRundown(struct _NDIS_MINIPORT_BLOCK *a1)
{
  _NDIS_MINIPORT_AOAC *AoAc; // rdi
  __int64 v3; // rdx
  __int64 v4; // rcx
  KIRQL v5; // bp
  int TempRefReason; // r8d
  _LIST_ENTRY *i; // rbx
  KIRQL v8; // bp
  _NDIS_OPEN_BLOCK *OpenQueue; // rbx
  int AoAcReferences; // r9d

  AoAc = a1->AoAc;
  v5 = KeAcquireSpinLockRaiseToDpc(&AoAc->Lock);
  if ( byte_1C0092609 )
    WPP_SF_DDD(
      86LL,
      &WPP_bde249736f00345f1574c6c7be067711_Traceguids,
      (unsigned int)AoAc->ActiveState,
      (unsigned int)AoAc->ActiveRef,
      AoAc->StopFlags.Value);
  TempRefReason = AoAc->TempRefReason;
  if ( TempRefReason && byte_1C0092609 )
    WPP_SF_d(0x57u, &WPP_bde249736f00345f1574c6c7be067711_Traceguids, TempRefReason);
  for ( i = AoAc->HandleList.Flink; i != &AoAc->HandleList; i = i->Flink )
  {
    if ( byte_1C0092609 )
      WPP_SF_Ld(v4, v3, LODWORD(i[1].Flink), HIDWORD(i[1].Flink));
  }
  KeReleaseSpinLock(&AoAc->Lock, v5);
  v8 = KeAcquireSpinLockRaiseToDpc(&a1->Lock);
  OpenQueue = a1->OpenQueue;
  a1->MiniportThread = KeGetCurrentThread();
  a1->LockDbg = 75372;
  while ( OpenQueue )
  {
    AoAcReferences = OpenQueue->AoAcReferences;
    if ( AoAcReferences && byte_1C0092609 )
      WPP_SF_Zd(
        0x59u,
        &WPP_bde249736f00345f1574c6c7be067711_Traceguids,
        &OpenQueue->ProtocolHandle->Name.Length,
        AoAcReferences);
    OpenQueue = OpenQueue->MiniportNextOpen;
  }
  a1->MiniportThread = 0LL;
  a1->LockDbg = 0;
  KeReleaseSpinLock(&a1->Lock, v8);
}
