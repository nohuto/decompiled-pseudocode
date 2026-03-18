/*
 * XREFs of ?ReleaseResources@CEffectBrush@@AEAAXXZ @ 0x180010D14
 * Callers:
 *     ??1CEffectBrush@@MEAA@XZ @ 0x180010F08 (--1CEffectBrush@@MEAA@XZ.c)
 *     ?ProcessSetTemplate@CEffectBrush@@QEAAJPEAVCResourceTable@@PEBUMILCMD_EFFECTBRUSH_SETTEMPLATE@@@Z @ 0x180010F68 (-ProcessSetTemplate@CEffectBrush@@QEAAJPEAVCResourceTable@@PEBUMILCMD_EFFECTBRUSH_SETTEMPLATE@@@.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ @ 0x180005BBC (-InternalRelease@-$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAccelerator@@@WRL@Microsoft@@IEAAKXZ @ 0x180022A2C (-InternalRelease@-$ComPtr@UIAccelerator@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x180034728 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800711F0 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?InternalRelease@?$ComPtr@UID3DDeviceContextState@@@WRL@Microsoft@@IEAAKXZ @ 0x1800B3698 (-InternalRelease@-$ComPtr@UID3DDeviceContextState@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall CEffectBrush::ReleaseResources(CEffectBrush *this)
{
  __int64 v2; // rax
  unsigned int v3; // eax
  __int64 v4; // rsi
  __int64 v5; // rbp
  __int64 v6; // rbx

  Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease((__int64 *)this + 8);
  v2 = *((_QWORD *)this + 12);
  if ( v2 )
  {
    *(_QWORD *)(v2 + 136) = 0LL;
    Microsoft::WRL::ComPtr<ID3DDeviceContextState>::InternalRelease((char *)this + 96);
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
  DynArrayImpl<0>::ShrinkToSize((char *)this + 112, 8LL);
  Microsoft::WRL::ComPtr<IAccelerator>::InternalRelease((char *)this + 104);
  CResource::UnRegisterNotifierInternal(this, *((struct CResource **)this + 11));
  *((_QWORD *)this + 11) = 0LL;
}
