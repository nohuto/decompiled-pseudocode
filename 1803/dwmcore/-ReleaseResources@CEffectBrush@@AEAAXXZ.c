/*
 * XREFs of ?ReleaseResources@CEffectBrush@@AEAAXXZ @ 0x1800956D0
 * Callers:
 *     ??1CEffectBrush@@MEAA@XZ @ 0x1800958B8 (--1CEffectBrush@@MEAA@XZ.c)
 *     ?ProcessSetTemplate@CEffectBrush@@QEAAJPEAVCResourceTable@@PEBUMILCMD_EFFECTBRUSH_SETTEMPLATE@@@Z @ 0x1800959D8 (-ProcessSetTemplate@CEffectBrush@@QEAAJPEAVCResourceTable@@PEBUMILCMD_EFFECTBRUSH_SETTEMPLATE@@@.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x18001F244 (-InternalRelease@-$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x1800213B4 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ @ 0x1800357C4 (-InternalRelease@-$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800515A0 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x180079700 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 */

void __fastcall CEffectBrush::ReleaseResources(CEffectBrush *this)
{
  __int64 v2; // rax
  unsigned int v3; // eax
  __int64 v4; // rsi
  __int64 v5; // rbp
  __int64 v6; // rbx

  Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease((__int64 *)this + 8);
  v2 = *((_QWORD *)this + 11);
  if ( v2 )
  {
    *(_QWORD *)(v2 + 72) = 0LL;
    Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)this + 11);
  }
  v3 = *((_DWORD *)this + 32);
  if ( v3 )
  {
    v4 = 0LL;
    v5 = v3;
    do
    {
      v6 = *((_QWORD *)this + 13);
      CResource::UnRegisterNotifierInternal(this, *(struct CResource **)(v4 + v6));
      *(_QWORD *)(v4 + v6) = 0LL;
      v4 += 8LL;
      --v5;
    }
    while ( v5 );
  }
  *((_DWORD *)this + 32) = 0;
  DynArrayImpl<0>::ShrinkToSize((__int64)this + 104, 8u);
  Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease((__int64 *)this + 12);
  CResource::UnRegisterNotifierInternal(this, *((struct CResource **)this + 10));
  *((_QWORD *)this + 10) = 0LL;
}
