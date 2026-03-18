/*
 * XREFs of ??2?$DXGQUOTAALLOCATOR@$00$0HFHAEDEG@@@SAPEAX_K@Z @ 0x1C004FCD8
 * Callers:
 *     ?ConsumerBeginProcessPresent@CFlipManager@@QEAAJPEAI0@Z @ 0x1C004FFD8 (-ConsumerBeginProcessPresent@CFlipManager@@QEAAJPEAI0@Z.c)
 *     ?CreatePresentUpdateForProducer@CFlipManager@@QEAAJ_K_NPEAVCFlipPropertySet@@PEAPEAVCFlipPresentUpdate@@@Z @ 0x1C0050264 (-CreatePresentUpdateForProducer@CFlipManager@@QEAAJ_K_NPEAVCFlipPropertySet@@PEAPEAVCFlipPresent.c)
 * Callees:
 *     <none>
 */

PVOID DXGQUOTAALLOCATOR<1,1970291526>::operator new()
{
  return ExAllocatePoolWithQuotaTag((POOL_TYPE)9, 0x50uLL, 0x75704346u);
}
