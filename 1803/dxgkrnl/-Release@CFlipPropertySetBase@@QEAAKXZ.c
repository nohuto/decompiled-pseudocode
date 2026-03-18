/*
 * XREFs of ?Release@CFlipPropertySetBase@@QEAAKXZ @ 0x1C004E14C
 * Callers:
 *     NtFlipObjectAddContent @ 0x1C004E2F0 (NtFlipObjectAddContent.c)
 *     NtFlipObjectAddPoolBuffer @ 0x1C004E440 (NtFlipObjectAddPoolBuffer.c)
 *     NtFlipObjectConsumerAcquirePresent @ 0x1C004E5D0 (NtFlipObjectConsumerAcquirePresent.c)
 *     NtFlipObjectConsumerPostMessage @ 0x1C004EA80 (NtFlipObjectConsumerPostMessage.c)
 *     NtFlipObjectQueryNextMessageToProducer @ 0x1C004F3E0 (NtFlipObjectQueryNextMessageToProducer.c)
 *     NtFlipObjectReadNextMessageToProducer @ 0x1C004F540 (NtFlipObjectReadNextMessageToProducer.c)
 *     NtFlipObjectSetContent @ 0x1C004F820 (NtFlipObjectSetContent.c)
 *     ?FlipManagerCreateProducerTokenOperation@@YAJPEAX_K_NIPEAUFlipPropertyItem@@PEAPEAVCFlipTokenOperation@@@Z @ 0x1C004FB2C (-FlipManagerCreateProducerTokenOperation@@YAJPEAX_K_NIPEAUFlipPropertyItem@@PEAPEAVCFlipTokenOpe.c)
 *     ?MarkInvalid@CFlipManager@@MEAAXXZ @ 0x1C0050740 (-MarkInvalid@CFlipManager@@MEAAXXZ.c)
 *     ?ProcessProducerDisconnect@CFlipManager@@IEAAXXZ @ 0x1C0050B10 (-ProcessProducerDisconnect@CFlipManager@@IEAAXXZ.c)
 *     ?QueryNextMessageToProducer@CFlipManager@@QEAAJ_NPEAPEAVCFlipConsumerMessage@@@Z @ 0x1C0050C24 (-QueryNextMessageToProducer@CFlipManager@@QEAAJ_NPEAPEAVCFlipConsumerMessage@@@Z.c)
 *     ?ReleaseKernelPresentUpdateReferences@CFlipManager@@AEAAXPEAVCFlipPresentUpdate@@@Z @ 0x1C0050CD4 (-ReleaseKernelPresentUpdateReferences@CFlipManager@@AEAAXPEAVCFlipPresentUpdate@@@Z.c)
 *     ??1CFlipResource@@MEAA@XZ @ 0x1C0051E34 (--1CFlipResource@@MEAA@XZ.c)
 *     ?SetBoundPropertySet@CContentResourceState@@QEAAXPEAVCFlipPropertySet@@@Z @ 0x1C00523BC (-SetBoundPropertySet@CContentResourceState@@QEAAXPEAVCFlipPropertySet@@@Z.c)
 *     ??1CFlipPresentUpdate@@UEAA@XZ @ 0x1C0052400 (--1CFlipPresentUpdate@@UEAA@XZ.c)
 *     ?SetFlipPropertySet@CFlipPresentUpdate@@QEAAXPEAVCFlipPropertySet@@@Z @ 0x1C0052640 (-SetFlipPropertySet@CFlipPresentUpdate@@QEAAXPEAVCFlipPropertySet@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CFlipPropertySetBase::Release(CFlipPropertySetBase *this)
{
  bool v1; // zf
  unsigned int v2; // ebx

  v1 = (*((_DWORD *)this + 2))-- == 1;
  v2 = *((_DWORD *)this + 2);
  if ( v1 )
    (**(void (__fastcall ***)(CFlipPropertySetBase *, __int64))this)(this, 1LL);
  return v2;
}
