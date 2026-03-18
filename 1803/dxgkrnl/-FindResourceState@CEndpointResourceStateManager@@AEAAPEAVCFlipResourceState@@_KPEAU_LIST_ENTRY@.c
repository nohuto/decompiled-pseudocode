/*
 * XREFs of ?FindResourceState@CEndpointResourceStateManager@@AEAAPEAVCFlipResourceState@@_KPEAU_LIST_ENTRY@@@Z @ 0x1C0051364
 * Callers:
 *     ?ConsumerAdjustUsageReference@FlipManagerObject@@QEAAJ_K_N@Z @ 0x1C004DD90 (-ConsumerAdjustUsageReference@FlipManagerObject@@QEAAJ_K_N@Z.c)
 *     ?RemoveContent@FlipManagerObject@@QEAAJ_K@Z @ 0x1C004E17C (-RemoveContent@FlipManagerObject@@QEAAJ_K@Z.c)
 *     ?RemovePoolBuffer@FlipManagerObject@@QEAAJ_K@Z @ 0x1C004E1F8 (-RemovePoolBuffer@FlipManagerObject@@QEAAJ_K@Z.c)
 *     ?AddContent@CFlipManager@@QEAAJ_KPEAVCFlipPropertySet@@@Z @ 0x1C004FDC4 (-AddContent@CFlipManager@@QEAAJ_KPEAVCFlipPropertySet@@@Z.c)
 *     ?AddPoolBuffer@CFlipManager@@QEAAJ_KPEAXAEBU_LUID@@PEAVCFlipPropertySet@@@Z @ 0x1C004FE48 (-AddPoolBuffer@CFlipManager@@QEAAJ_KPEAXAEBU_LUID@@PEAVCFlipPropertySet@@@Z.c)
 *     ?ConsumerQueryBufferInfo@CFlipManager@@QEAAJ_KPEAU_LUID@@PEAPEAX@Z @ 0x1C00501D0 (-ConsumerQueryBufferInfo@CFlipManager@@QEAAJ_KPEAU_LUID@@PEAPEAX@Z.c)
 *     ?QueryBufferAvailableEvent@CFlipManager@@QEAAJ_KPEAPEAX@Z @ 0x1C0050BC0 (-QueryBufferAvailableEvent@CFlipManager@@QEAAJ_KPEAPEAX@Z.c)
 *     ?SetContent@CFlipManager@@QEAAJ_K0PEAVCFlipPropertySet@@@Z @ 0x1C0050D58 (-SetContent@CFlipManager@@QEAAJ_K0PEAVCFlipPropertySet@@@Z.c)
 *     ?ApplyIncrementalUpdate@CEndpointResourceStateManager@@QEAAJPEBVCFlipPresentUpdate@@@Z @ 0x1C0050FD4 (-ApplyIncrementalUpdate@CEndpointResourceStateManager@@QEAAJPEBVCFlipPresentUpdate@@@Z.c)
 * Callees:
 *     <none>
 */

struct CFlipResourceState *__fastcall CEndpointResourceStateManager::FindResourceState(
        CEndpointResourceStateManager *this,
        __int64 a2,
        struct _LIST_ENTRY *a3)
{
  struct _LIST_ENTRY *i; // r9

  for ( i = a3->Flink; ; i = i->Flink )
  {
    if ( i == a3 )
      return 0LL;
    if ( (*(_BYTE *)(((unsigned __int64)&i[-1].Blink & -(__int64)(i != 0LL)) + 0x20) & 2) == 0
      && *(_QWORD *)(*(_QWORD *)(((unsigned __int64)&i[-1].Blink & -(__int64)(i != 0LL)) + 0x18) + 40LL) == a2 )
    {
      break;
    }
  }
  return (struct CFlipResourceState *)((unsigned __int64)&i[-1].Blink & -(__int64)(i != 0LL));
}
