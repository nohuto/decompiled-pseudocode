/*
 * XREFs of ?ReleaseResources@CEffectBrush@@AEAAXXZ @ 0x180082BC4
 * Callers:
 *     ??1CEffectBrush@@MEAA@XZ @ 0x180082E38 (--1CEffectBrush@@MEAA@XZ.c)
 *     ?ProcessSetTemplate@CEffectBrush@@QEAAJPEAVCResourceTable@@PEBUMILCMD_EFFECTBRUSH_SETTEMPLATE@@@Z @ 0x18008308C (-ProcessSetTemplate@CEffectBrush@@QEAAJPEAVCResourceTable@@PEBUMILCMD_EFFECTBRUSH_SETTEMPLATE@@@.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x180001680 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x180068870 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?InternalRelease@?$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ @ 0x180070244 (-InternalRelease@-$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800A9E50 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?InternalRelease@?$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x1800BB1A4 (-InternalRelease@-$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall CEffectBrush::ReleaseResources(CEffectBrush *this)
{
  __int64 v2; // rax
  unsigned int v3; // eax
  __int64 v4; // rsi
  __int64 v5; // rbp
  __int64 v6; // rbx

  Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease((CMILRefCountBase **)this + 8);
  v2 = *((_QWORD *)this + 12);
  if ( v2 )
  {
    *(_QWORD *)(v2 + 136) = 0LL;
    Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)this + 12);
  }
  v3 = *((_DWORD *)this + 34);
  if ( v3 )
  {
    v4 = 0LL;
    v5 = v3;
    do
    {
      v6 = *((_QWORD *)this + 14);
      CResource::UnRegisterNotifierInternal(this, *(struct CResource **)(v4 + v6));
      *(_QWORD *)(v4 + v6) = 0LL;
      v4 += 8LL;
      --v5;
    }
    while ( v5 );
  }
  *((_DWORD *)this + 34) = 0;
  DynArrayImpl<0>::ShrinkToSize((__int64)this + 112, 8u);
  Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease((char *)this + 104);
  CResource::UnRegisterNotifierInternal(this, *((struct CResource **)this + 11));
  *((_QWORD *)this + 11) = 0LL;
}
