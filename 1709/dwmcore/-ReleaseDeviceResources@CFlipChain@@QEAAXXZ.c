/*
 * XREFs of ?ReleaseDeviceResources@CFlipChain@@QEAAXXZ @ 0x180165BAC
 * Callers:
 *     ??1CFlipChain@@MEAA@XZ @ 0x1801649AC (--1CFlipChain@@MEAA@XZ.c)
 *     ?NotifyInvalidResource@CFlipChain@@UEAAXPEBVIDeviceResource@@@Z @ 0x1801657F0 (-NotifyInvalidResource@CFlipChain@@UEAAXPEBVIDeviceResource@@@Z.c)
 *     ?ProcessInitializeSharedDataObjects@CFlipChain@@QEAAJPEAVCResourceTable@@PEBUMILCMD_FLIPCHAIN_INITIALIZESHAREDDATAOBJECTS@@@Z @ 0x180165874 (-ProcessInitializeSharedDataObjects@CFlipChain@@QEAAJPEAVCResourceTable@@PEBUMILCMD_FLIPCHAIN_IN.c)
 * Callees:
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x180068870 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ??0CSyncSharedDataGuard@CFlipChain@@QEAA@PEAV1@@Z @ 0x18016494C (--0CSyncSharedDataGuard@CFlipChain@@QEAA@PEAV1@@Z.c)
 *     ?WriteSharedDataToDwm@CFlipChain@@AEAAJXZ @ 0x1801667DC (-WriteSharedDataToDwm@CFlipChain@@AEAAJXZ.c)
 */

void __fastcall CFlipChain::ReleaseDeviceResources(CFlipChain *this)
{
  CFlipChain *v2; // [rsp+30h] [rbp+8h] BYREF

  CFlipChain::CSyncSharedDataGuard::CSyncSharedDataGuard((CFlipChain::CSyncSharedDataGuard *)&v2, this);
  *((_DWORD *)this + 64) = 0;
  DynArrayImpl<0>::ShrinkToSize((__int64)this + 232, 0x58u);
  if ( v2 )
    CFlipChain::WriteSharedDataToDwm(v2);
}
