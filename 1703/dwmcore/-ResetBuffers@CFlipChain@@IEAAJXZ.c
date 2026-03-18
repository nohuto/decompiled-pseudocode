/*
 * XREFs of ?ResetBuffers@CFlipChain@@IEAAJXZ @ 0x180163FE4
 * Callers:
 *     ?Reset@CFlipChain@@IEAAXXZ @ 0x180163F9C (-Reset@CFlipChain@@IEAAXXZ.c)
 * Callees:
 *     ??$ReleaseInterface@VCBitmapOfDeviceBitmaps@@@@YAXAEAPEAVCBitmapOfDeviceBitmaps@@@Z @ 0x18004B9C0 (--$ReleaseInterface@VCBitmapOfDeviceBitmaps@@@@YAXAEAPEAVCBitmapOfDeviceBitmaps@@@Z.c)
 *     ??$ReleaseInterface@UID2D1Geometry@@@@YAXAEAPEAUID2D1Geometry@@@Z @ 0x18004CFE8 (--$ReleaseInterface@UID2D1Geometry@@@@YAXAEAPEAUID2D1Geometry@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800711F0 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?RemoveResourceNotifier@CBitmapOfDeviceBitmaps@@UEAAJPEBVIDeviceResourceNotify@@@Z @ 0x1800B2230 (-RemoveResourceNotifier@CBitmapOfDeviceBitmaps@@UEAAJPEBVIDeviceResourceNotify@@@Z.c)
 *     memset_0 @ 0x1800D539C (memset_0.c)
 */

__int64 __fastcall CFlipChain::ResetBuffers(CFlipChain *this)
{
  unsigned int v1; // esi
  unsigned int i; // edi
  __int64 v4; // r14
  int v5; // eax
  __int64 v6; // rax
  unsigned int j; // edi
  __int64 v8; // rcx

  v1 = 0;
  for ( i = 0; i < *((_DWORD *)this + 40); ++i )
  {
    v4 = 16LL * i;
    v5 = CBitmapOfDeviceBitmaps::RemoveResourceNotifier(
           (CBitmapOfDeviceBitmaps *)(*(_QWORD *)(v4 + *((_QWORD *)this + 17)) + 224LL),
           (CFlipChain *)((char *)this + 88));
    v1 = v5;
    if ( v5 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x85u);
    ReleaseInterface<CBitmapOfDeviceBitmaps>((CMILCOMBase **)(v4 + *((_QWORD *)this + 17)));
  }
  *((_DWORD *)this + 40) = 0;
  DynArrayImpl<0>::ShrinkToSize((__int64)this + 136, 0x10u);
  if ( *((_BYTE *)this + 282) )
  {
    v6 = *((_QWORD *)this + 4);
    *((_BYTE *)this + 282) = 0;
    --*(_DWORD *)(v6 + 280);
  }
  for ( j = 0; j < *((_DWORD *)this + 62); ++j )
  {
    v8 = 88LL * j;
    *(_DWORD *)(v8 + *((_QWORD *)this + 28) + 20) = 0;
    memset_0((void *)(*((_QWORD *)this + 28) + 24LL + v8), 0, 0x40uLL);
  }
  ReleaseInterface<ID2D1Geometry>((__int64 *)this + 10);
  return v1;
}
