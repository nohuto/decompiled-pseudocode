/*
 * XREFs of ?ReleaseDeviceResources@CFlipChain@@QEAAXXZ @ 0x180163F5C
 * Callers:
 *     ?ProcessInitializeSharedDataObjects@CFlipChain@@QEAAJPEAVCResourceTable@@PEBUMILCMD_FLIPCHAIN_INITIALIZESHAREDDATAOBJECTS@@@Z @ 0x18012D7C8 (-ProcessInitializeSharedDataObjects@CFlipChain@@QEAAJPEAVCResourceTable@@PEBUMILCMD_FLIPCHAIN_IN.c)
 *     ??1CFlipChain@@MEAA@XZ @ 0x180163988 (--1CFlipChain@@MEAA@XZ.c)
 *     ?NotifyInvalidResource@CFlipChain@@UEAAXPEBVIDeviceResource@@@Z @ 0x180163F50 (-NotifyInvalidResource@CFlipChain@@UEAAXPEBVIDeviceResource@@@Z.c)
 * Callees:
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800711F0 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ??0CSyncSharedDataGuard@CFlipChain@@QEAA@PEAV1@@Z @ 0x1800B0CC0 (--0CSyncSharedDataGuard@CFlipChain@@QEAA@PEAV1@@Z.c)
 *     ?WriteSharedDataToDwm@CFlipChain@@AEAAJXZ @ 0x1800B1154 (-WriteSharedDataToDwm@CFlipChain@@AEAAJXZ.c)
 */

void __fastcall CFlipChain::ReleaseDeviceResources(CFlipChain *this)
{
  CFlipChain *v2; // [rsp+30h] [rbp+8h] BYREF

  CFlipChain::CSyncSharedDataGuard::CSyncSharedDataGuard((CFlipChain::CSyncSharedDataGuard *)&v2, this);
  *((_DWORD *)this + 62) = 0;
  DynArrayImpl<0>::ShrinkToSize((__int64)this + 224, 0x58u);
  if ( v2 )
    CFlipChain::WriteSharedDataToDwm(v2);
}
