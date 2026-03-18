/*
 * XREFs of ?WriteSharedDataToDwm@CFlipChain@@AEAAJXZ @ 0x1800B1154
 * Callers:
 *     ?UpdatePending@CFlipChain@@QEAAXT_ULARGE_INTEGER@@H@Z @ 0x1800B12A4 (-UpdatePending@CFlipChain@@QEAAXT_ULARGE_INTEGER@@H@Z.c)
 *     ?ProcessVistaBltToken@CFlipChain@@QEAAXT_ULARGE_INTEGER@@PEAXPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800B1304 (-ProcessVistaBltToken@CFlipChain@@QEAAXT_ULARGE_INTEGER@@PEAXPEBV-$TMilRect_@MUMilRectF@@UMilPoi.c)
 *     ?ProcessRequestSharedHandle@CFlipChain@@QEAAJPEAVCResourceTable@@PEBUMILCMD_FLIPCHAIN_REQUESTSHAREDHANDLE@@@Z @ 0x1800B139C (-ProcessRequestSharedHandle@CFlipChain@@QEAAJPEAVCResourceTable@@PEBUMILCMD_FLIPCHAIN_REQUESTSHA.c)
 *     ?ProcessInitializeSharedDataObjects@CFlipChain@@QEAAJPEAVCResourceTable@@PEBUMILCMD_FLIPCHAIN_INITIALIZESHAREDDATAOBJECTS@@@Z @ 0x18012D7C8 (-ProcessInitializeSharedDataObjects@CFlipChain@@QEAAJPEAVCResourceTable@@PEBUMILCMD_FLIPCHAIN_IN.c)
 *     ?ProcessResetSourceFrameCounters@CFlipChain@@QEAAJPEAVCResourceTable@@PEBUMILCMD_FLIPCHAIN_RESETSOURCEFRAMECOUNTERS@@@Z @ 0x18012D914 (-ProcessResetSourceFrameCounters@CFlipChain@@QEAAJPEAVCResourceTable@@PEBUMILCMD_FLIPCHAIN_RESET.c)
 *     ?GetBitmapSource@CFlipChain@@UEAAJPEAPEAVIBitmapSource@@PEBUBitmapSourceInfo@@@Z @ 0x180163D90 (-GetBitmapSource@CFlipChain@@UEAAJPEAPEAVIBitmapSource@@PEBUBitmapSourceInfo@@@Z.c)
 *     ?ReleaseDeviceResources@CFlipChain@@QEAAXXZ @ 0x180163F5C (-ReleaseDeviceResources@CFlipChain@@QEAAXXZ.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?UpdateData@?$CMrowWriter@USharedBufferDataFlipChain@@@@QEAAJPEAUSharedBufferDataFlipChain@@@Z @ 0x1800B1440 (-UpdateData@-$CMrowWriter@USharedBufferDataFlipChain@@@@QEAAJPEAUSharedBufferDataFlipChain@@@Z.c)
 */

__int64 __fastcall CFlipChain::WriteSharedDataToDwm(CFlipChain *this)
{
  __int64 v1; // r10
  unsigned int v2; // ebx
  int v4; // r8d
  int v5; // edx
  int v6; // ecx
  __int64 v7; // rax
  int updated; // eax
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

  v1 = *((_QWORD *)this + 26);
  v2 = 0;
  if ( v1 )
  {
    v4 = *((_DWORD *)this + 50);
    v5 = *((_DWORD *)this + 40);
    v6 = *((_DWORD *)this + 28);
    v12 = 0LL;
    v7 = *((_QWORD *)this + 4);
    v10[2] = v6;
    v11 = *((_QWORD *)this + 22);
    v14 = *(_QWORD *)(v7 + 376);
    LOBYTE(v6) = v16 ^ *((_BYTE *)this + 280);
    v10[1] = v5;
    v10[0] = v4;
    v15 = this;
    v16 ^= v6 & 3;
    v17 = *((_QWORD *)this + 32);
    v18 = *((_QWORD *)this + 33);
    LODWORD(v12) = *((_DWORD *)this + 46);
    v13 = *((_QWORD *)this + 24);
    v19 = *((_DWORD *)this + 62);
    v20 = *((_QWORD *)this + 28);
    HIDWORD(v12) = v4;
    updated = CMrowWriter<SharedBufferDataFlipChain>::UpdateData(v1, v10);
    v2 = updated;
    if ( updated < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, updated, 0x312u);
    WPF::ProcessHeapImpl::Free(0LL);
  }
  return v2;
}
