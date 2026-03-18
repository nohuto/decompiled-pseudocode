/*
 * XREFs of ?ResetBuffers@CFlipChain@@IEAAJXZ @ 0x180165CC0
 * Callers:
 *     ?Reset@CFlipChain@@IEAAXXZ @ 0x180165C70 (-Reset@CFlipChain@@IEAAXXZ.c)
 * Callees:
 *     ??$ReleaseInterface@VIBitmapLock@@@@YAXAEAPEAVIBitmapLock@@@Z @ 0x18000B600 (--$ReleaseInterface@VIBitmapLock@@@@YAXAEAPEAVIBitmapLock@@@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x180068870 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?RemoveResourceNotifier@CDeviceResource@@UEAAJPEBVIDeviceResourceNotify@@@Z @ 0x1800BDB54 (-RemoveResourceNotifier@CDeviceResource@@UEAAJPEBVIDeviceResourceNotify@@@Z.c)
 *     ??$ReleaseInterface@VCSwRenderTargetGetBounds@@@@YAXAEAPEAVCSwRenderTargetGetBounds@@@Z @ 0x1800BE1B8 (--$ReleaseInterface@VCSwRenderTargetGetBounds@@@@YAXAEAPEAVCSwRenderTargetGetBounds@@@Z.c)
 *     memset_0 @ 0x1800C3238 (memset_0.c)
 */

__int64 __fastcall CFlipChain::ResetBuffers(CFlipChain *this)
{
  unsigned int v1; // esi
  unsigned int i; // edi
  __int64 v4; // r14
  signed int v5; // eax
  __int64 v6; // rax
  unsigned int j; // edi
  __int64 v8; // rcx

  v1 = 0;
  for ( i = 0; i < *((_DWORD *)this + 42); ++i )
  {
    v4 = 16LL * i;
    v5 = CDeviceResource::RemoveResourceNotifier(
           (CDeviceResource *)(*(_QWORD *)(*((_QWORD *)this + 18) + v4) + 224LL),
           (CFlipChain *)((char *)this + 96));
    v1 = v5;
    if ( v5 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v5, 0x85u);
    ReleaseInterface<CSwRenderTargetGetBounds>((CMILCOMBase **)(v4 + *((_QWORD *)this + 18)));
  }
  *((_DWORD *)this + 42) = 0;
  DynArrayImpl<0>::ShrinkToSize((__int64)this + 144, 0x10u);
  if ( *((_BYTE *)this + 290) )
  {
    v6 = *((_QWORD *)this + 4);
    *((_BYTE *)this + 290) = 0;
    --*(_DWORD *)(v6 + 256);
  }
  for ( j = 0; j < *((_DWORD *)this + 64); ++j )
  {
    v8 = 88LL * j;
    *(_DWORD *)(*((_QWORD *)this + 29) + v8 + 20) = 0;
    memset_0((void *)(*((_QWORD *)this + 29) + 24LL + v8), 0, 0x40uLL);
  }
  ReleaseInterface<IBitmapLock>((__int64 *)this + 10);
  return v1;
}
