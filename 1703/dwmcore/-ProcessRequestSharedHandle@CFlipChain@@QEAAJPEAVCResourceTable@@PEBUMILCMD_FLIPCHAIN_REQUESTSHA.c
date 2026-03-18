/*
 * XREFs of ?ProcessRequestSharedHandle@CFlipChain@@QEAAJPEAVCResourceTable@@PEBUMILCMD_FLIPCHAIN_REQUESTSHAREDHANDLE@@@Z @ 0x1800B139C
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18005CD70 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??0CSyncSharedDataGuard@CFlipChain@@QEAA@PEAV1@@Z @ 0x1800B0CC0 (--0CSyncSharedDataGuard@CFlipChain@@QEAA@PEAV1@@Z.c)
 *     ?WriteSharedDataToDwm@CFlipChain@@AEAAJXZ @ 0x1800B1154 (-WriteSharedDataToDwm@CFlipChain@@AEAAJXZ.c)
 *     ?CacheSharedHandle@CFlipChain@@AEAAJU_LUID@@PEAUHMONITOR__@@_NI@Z @ 0x1800D1AF0 (-CacheSharedHandle@CFlipChain@@AEAAJU_LUID@@PEAUHMONITOR__@@_NI@Z.c)
 */

__int64 __fastcall CFlipChain::ProcessRequestSharedHandle(
        CFlipChain *this,
        struct CResourceTable *a2,
        const struct MILCMD_FLIPCHAIN_REQUESTSHAREDHANDLE *a3)
{
  int v5; // eax
  CFlipChain *v7; // [rsp+48h] [rbp+10h] BYREF

  v7 = a2;
  CFlipChain::CSyncSharedDataGuard::CSyncSharedDataGuard((CFlipChain::CSyncSharedDataGuard *)&v7, this);
  v5 = CFlipChain::CacheSharedHandle(
         this,
         *(struct _LUID *)((char *)a3 + 8),
         *((HMONITOR *)a3 + 2),
         (*((_DWORD *)a3 + 6) & 8) != 0,
         0);
  if ( v5 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x127u);
  if ( v7 )
    CFlipChain::WriteSharedDataToDwm(v7);
  return 0LL;
}
