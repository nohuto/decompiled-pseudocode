/*
 * XREFs of ?WriteSharedDataToDwm@CFlipChain@@AEAAJXZ @ 0x1801667DC
 * Callers:
 *     ?GetBitmapSource@CFlipChain@@UEAAJPEAPEAVIBitmapSource@@PEBUBitmapSourceInfo@@@Z @ 0x1801653C0 (-GetBitmapSource@CFlipChain@@UEAAJPEAPEAVIBitmapSource@@PEBUBitmapSourceInfo@@@Z.c)
 *     ?ProcessInitializeSharedDataObjects@CFlipChain@@QEAAJPEAVCResourceTable@@PEBUMILCMD_FLIPCHAIN_INITIALIZESHAREDDATAOBJECTS@@@Z @ 0x180165874 (-ProcessInitializeSharedDataObjects@CFlipChain@@QEAAJPEAVCResourceTable@@PEBUMILCMD_FLIPCHAIN_IN.c)
 *     ?ProcessRequestSharedHandle@CFlipChain@@QEAAJPEAVCResourceTable@@PEBUMILCMD_FLIPCHAIN_REQUESTSHAREDHANDLE@@@Z @ 0x1801659C0 (-ProcessRequestSharedHandle@CFlipChain@@QEAAJPEAVCResourceTable@@PEBUMILCMD_FLIPCHAIN_REQUESTSHA.c)
 *     ?ProcessResetSourceFrameCounters@CFlipChain@@QEAAJPEAVCResourceTable@@PEBUMILCMD_FLIPCHAIN_RESETSOURCEFRAMECOUNTERS@@@Z @ 0x180165A3C (-ProcessResetSourceFrameCounters@CFlipChain@@QEAAJPEAVCResourceTable@@PEBUMILCMD_FLIPCHAIN_RESET.c)
 *     ?ProcessVistaBltToken@CFlipChain@@QEAAXT_ULARGE_INTEGER@@PEAXPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180165A80 (-ProcessVistaBltToken@CFlipChain@@QEAAXT_ULARGE_INTEGER@@PEAXPEBV-$TMilRect_@MUMilRectF@@UMilPoi.c)
 *     ?ReleaseDeviceResources@CFlipChain@@QEAAXXZ @ 0x180165BAC (-ReleaseDeviceResources@CFlipChain@@QEAAXXZ.c)
 *     ?UpdatePending@CFlipChain@@QEAAXT_ULARGE_INTEGER@@H@Z @ 0x180166688 (-UpdatePending@CFlipChain@@QEAAXT_ULARGE_INTEGER@@H@Z.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?UpdateData@?$CMrowWriter@USharedBufferDataFlipChain@@@@QEAAJPEAUSharedBufferDataFlipChain@@@Z @ 0x18016603C (-UpdateData@-$CMrowWriter@USharedBufferDataFlipChain@@@@QEAAJPEAUSharedBufferDataFlipChain@@@Z.c)
 */

__int64 __fastcall CFlipChain::WriteSharedDataToDwm(CFlipChain *this)
{
  __int64 v1; // r10
  unsigned int v2; // ebx
  int v4; // r8d
  int v5; // edx
  int v6; // ecx
  __int64 v7; // rax
  signed int updated; // eax
  _DWORD v10[4]; // [rsp+30h] [rbp-9h] BYREF
  __int64 v11; // [rsp+40h] [rbp+7h]
  __int64 v12; // [rsp+48h] [rbp+Fh]
  __int64 v13; // [rsp+50h] [rbp+17h]
  __int64 v14; // [rsp+58h] [rbp+1Fh]
  CFlipChain *v15; // [rsp+60h] [rbp+27h]
  char v16; // [rsp+68h] [rbp+2Fh]
  __int64 v17; // [rsp+6Ch] [rbp+33h]
  __int64 v18; // [rsp+78h] [rbp+3Fh]
  int v19; // [rsp+80h] [rbp+47h]
  __int64 v20; // [rsp+88h] [rbp+4Fh]

  v1 = *((_QWORD *)this + 27);
  v2 = 0;
  if ( v1 )
  {
    v4 = *((_DWORD *)this + 52);
    v5 = *((_DWORD *)this + 42);
    v6 = *((_DWORD *)this + 30);
    v12 = 0LL;
    v7 = *((_QWORD *)this + 4);
    v10[2] = v6;
    v11 = *((_QWORD *)this + 23);
    v14 = *(_QWORD *)(v7 + 336);
    LOBYTE(v6) = v16 ^ *((_BYTE *)this + 288);
    v10[1] = v5;
    v10[0] = v4;
    v15 = this;
    v16 ^= v6 & 3;
    v17 = *((_QWORD *)this + 33);
    v18 = *((_QWORD *)this + 34);
    LODWORD(v12) = *((_DWORD *)this + 48);
    v13 = *((_QWORD *)this + 25);
    v19 = *((_DWORD *)this + 64);
    v20 = *((_QWORD *)this + 29);
    HIDWORD(v12) = v4;
    updated = CMrowWriter<SharedBufferDataFlipChain>::UpdateData(v1, (const struct SharedBufferDataFlipChain *)v10);
    v2 = updated;
    if ( updated < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, updated, 0x312u);
    WPF::ProcessHeapImpl::Free(0LL);
  }
  return v2;
}
