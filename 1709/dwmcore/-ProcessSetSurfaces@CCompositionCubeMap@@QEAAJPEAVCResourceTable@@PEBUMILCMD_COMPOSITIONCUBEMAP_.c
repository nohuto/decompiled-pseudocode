/*
 * XREFs of ?ProcessSetSurfaces@CCompositionCubeMap@@QEAAJPEAVCResourceTable@@PEBUMILCMD_COMPOSITIONCUBEMAP_SETSURFACES@@PEBXI@Z @ 0x18015A8C4
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x1800ABB40 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?InternalAddRef@CMILCOMBase@@QEAAKXZ @ 0x180027AA0 (-InternalAddRef@CMILCOMBase@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800A9E50 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x1800AA098 (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z @ 0x1800AA228 (-GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?InternalRelease@?$ComPtr@VCCompositionSurfaceBitmap@@@WRL@Microsoft@@IEAAKXZ @ 0x18015A76C (-InternalRelease@-$ComPtr@VCCompositionSurfaceBitmap@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall CCompositionCubeMap::ProcessSetSurfaces(
        CCompositionCubeMap *this,
        struct CResourceTable *a2,
        const struct MILCMD_COMPOSITIONCUBEMAP_SETSURFACES *a3,
        _DWORD *a4)
{
  CResourceTable *v6; // r8
  unsigned int v8; // eax
  unsigned int v9; // edi
  __int64 v10; // r12
  CMILCOMBase *v11; // r15
  __int128 v12; // xmm6
  struct CResource *ResourceWithoutType; // rax
  CMILCOMBase *v14; // r14
  signed int v15; // eax
  __int64 v16; // rdi
  __int64 v17; // rsi
  __int64 v18; // rax
  __int64 v19; // rcx
  CMILCOMBase *v20; // rax
  unsigned int v21; // ecx
  CMILCOMBase *v23; // [rsp+80h] [rbp+8h] BYREF
  struct CResourceTable *v24; // [rsp+88h] [rbp+10h]
  CMILCOMBase *v25; // [rsp+90h] [rbp+18h] BYREF

  v24 = a2;
  v6 = a2;
  v8 = *((_DWORD *)a3 + 2);
  if ( v8 > *((_DWORD *)this + 26) )
  {
    v9 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x88980403, 0xC3u);
    return v9;
  }
  v10 = 0LL;
  if ( !v8 )
  {
LABEL_14:
    *((_DWORD *)this + 28) = -1;
    v21 = 0;
    if ( *((_DWORD *)a3 + 2) )
    {
      while ( !*(_QWORD *)(32LL * v21 + *((_QWORD *)this + 10) + 8) )
      {
        if ( ++v21 >= *((_DWORD *)a3 + 2) )
          goto LABEL_19;
      }
      *((_DWORD *)this + 28) = v21;
    }
LABEL_19:
    *((_BYTE *)this + 144) = 1;
    return 0;
  }
  while ( 1 )
  {
    v11 = 0LL;
    v23 = 0LL;
    v12 = 0LL;
    ResourceWithoutType = CResourceTable::GetResourceWithoutType(v6, a4[5 * v10]);
    v14 = ResourceWithoutType;
    if ( !ResourceWithoutType )
      goto LABEL_7;
    if ( !(*(unsigned __int8 (__fastcall **)(struct CResource *, __int64))(*(_QWORD *)ResourceWithoutType + 48LL))(
            ResourceWithoutType,
            35LL) )
      break;
    CMILCOMBase::InternalAddRef(v14);
    v25 = 0LL;
    v11 = v14;
    v23 = v14;
    Microsoft::WRL::ComPtr<CCompositionSurfaceBitmap>::InternalRelease(&v25);
    v12 = *(_OWORD *)&a4[5 * v10 + 1];
    v15 = CResource::RegisterNotifier(this, v14);
    v9 = v15;
    if ( v15 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v15, 0xE1u);
      goto LABEL_13;
    }
LABEL_7:
    v16 = *((_QWORD *)this + 10);
    v17 = 32LL * (unsigned int)v10;
    if ( *(_QWORD *)(v16 + v17) )
    {
      CResource::UnRegisterNotifierInternal(this, *(struct CResource **)(v16 + 32LL * (unsigned int)v10));
      *(_QWORD *)(v16 + 32LL * (unsigned int)v10) = 0LL;
    }
    v18 = *((_QWORD *)this + 10);
    v23 = 0LL;
    *(_QWORD *)(v17 + v18) = v14;
    v19 = *((_QWORD *)this + 10);
    v20 = *(CMILCOMBase **)(v19 + v17 + 8);
    *(_QWORD *)(v19 + v17 + 8) = v11;
    v25 = v20;
    Microsoft::WRL::ComPtr<CCompositionSurfaceBitmap>::InternalRelease(&v25);
    *(_OWORD *)(*((_QWORD *)this + 10) + v17 + 16) = v12;
    Microsoft::WRL::ComPtr<CCompositionSurfaceBitmap>::InternalRelease(&v23);
    v10 = (unsigned int)(v10 + 1);
    if ( (unsigned int)v10 >= *((_DWORD *)a3 + 2) )
      goto LABEL_14;
    v6 = v24;
  }
  v9 = -2003303421;
  MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x88980403, 0xDEu);
LABEL_13:
  Microsoft::WRL::ComPtr<CCompositionSurfaceBitmap>::InternalRelease(&v23);
  return v9;
}
