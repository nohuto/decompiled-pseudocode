/*
 * XREFs of ?ndisAoAcTraceRundown@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C004ECE8
 * Callers:
 *     ?ndisMEmitTraceRundown@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C004EEF0 (-ndisMEmitTraceRundown@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     WPP_SF_d @ 0x1C00419DC (WPP_SF_d.c)
 *     WPP_SF_Zd @ 0x1C0041D80 (WPP_SF_Zd.c)
 *     WPP_SF_DDD @ 0x1C0043A38 (WPP_SF_DDD.c)
 *     WPP_SF_Ld @ 0x1C004F51C (WPP_SF_Ld.c)
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
  unsigned int Value; // [rsp+20h] [rbp-18h]

  AoAc = a1->AoAc;
  v5 = KeAcquireSpinLockRaiseToDpc(&AoAc->Lock);
  if ( byte_1C0099609 )
  {
    Value = AoAc->StopFlags.Value;
    WPP_SF_DDD(0x53u, &WPP_47403e85a6be3c322bcf4a109a5fff7e_Traceguids, AoAc->ActiveState, AoAc->ActiveRef);
  }
  TempRefReason = AoAc->TempRefReason;
  if ( TempRefReason && byte_1C0099609 )
    WPP_SF_d(0x54u, &WPP_47403e85a6be3c322bcf4a109a5fff7e_Traceguids, TempRefReason);
  for ( i = AoAc->HandleList.Flink; i != &AoAc->HandleList; i = i->Flink )
  {
    if ( byte_1C0099609 )
      WPP_SF_Ld(v4, v3, LODWORD(i[1].Flink), HIDWORD(i[1].Flink), Value);
  }
  KeReleaseSpinLock(&AoAc->Lock, v5);
  v8 = KeAcquireSpinLockRaiseToDpc(&a1->Lock);
  OpenQueue = a1->OpenQueue;
  a1->MiniportThread = KeGetCurrentThread();
  a1->LockDbg = 74727;
  while ( OpenQueue )
  {
    AoAcReferences = OpenQueue->AoAcReferences;
    if ( AoAcReferences && byte_1C0099609 )
      WPP_SF_Zd(
        0x56u,
        &WPP_47403e85a6be3c322bcf4a109a5fff7e_Traceguids,
        &OpenQueue->ProtocolHandle->Name.Length,
        AoAcReferences);
    OpenQueue = OpenQueue->MiniportNextOpen;
  }
  a1->MiniportThread = 0LL;
  a1->LockDbg = 0;
  KeReleaseSpinLock(&a1->Lock, v8);
}
