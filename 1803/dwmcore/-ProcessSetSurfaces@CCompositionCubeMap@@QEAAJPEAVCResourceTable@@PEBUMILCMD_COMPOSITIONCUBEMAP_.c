/*
 * XREFs of ?ProcessSetSurfaces@CCompositionCubeMap@@QEAAJPEAVCResourceTable@@PEBUMILCMD_COMPOSITIONCUBEMAP_SETSURFACES@@PEBXI@Z @ 0x180183B74
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x18002E640 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?InternalAddRef@CMILCOMBase@@QEAAKXZ @ 0x18001DA50 (-InternalAddRef@CMILCOMBase@@QEAAKXZ.c)
 *     ?GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z @ 0x18002D108 (-GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x18005122C (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800515A0 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?InternalRelease@?$ComPtr@VCCompositionSurfaceBitmap@@@WRL@Microsoft@@IEAAKXZ @ 0x180183A1C (-InternalRelease@-$ComPtr@VCCompositionSurfaceBitmap@@@WRL@Microsoft@@IEAAKXZ.c)
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
  int v15; // eax
  __int64 v16; // rdi
  __int64 v17; // rsi
  struct CResource *v18; // rdx
  __int64 v19; // rax
  __int64 v20; // rcx
  CMILCOMBase *v21; // rax
  unsigned int v22; // ecx
  CMILCOMBase *v24; // [rsp+80h] [rbp+8h] BYREF
  struct CResourceTable *v25; // [rsp+88h] [rbp+10h]
  CMILCOMBase *v26; // [rsp+90h] [rbp+18h] BYREF

  v25 = a2;
  v6 = a2;
  v8 = *((_DWORD *)a3 + 2);
  if ( v8 > *((_DWORD *)this + 26) )
  {
    v9 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003303421, 0xC3u);
    return v9;
  }
  v10 = 0LL;
  if ( !v8 )
  {
LABEL_14:
    *((_DWORD *)this + 28) = -1;
    v22 = 0;
    if ( *((_DWORD *)a3 + 2) )
    {
      while ( !*(_QWORD *)(32LL * v22 + *((_QWORD *)this + 10) + 8) )
      {
        if ( ++v22 >= *((_DWORD *)a3 + 2) )
          goto LABEL_19;
      }
      *((_DWORD *)this + 28) = v22;
    }
LABEL_19:
    *((_BYTE *)this + 144) = 1;
    return 0;
  }
  while ( 1 )
  {
    v11 = 0LL;
    v24 = 0LL;
    v12 = 0LL;
    ResourceWithoutType = CResourceTable::GetResourceWithoutType(v6, a4[5 * v10]);
    v14 = ResourceWithoutType;
    if ( !ResourceWithoutType )
      goto LABEL_7;
    if ( !(*(unsigned __int8 (__fastcall **)(struct CResource *, __int64))(*(_QWORD *)ResourceWithoutType + 48LL))(
            ResourceWithoutType,
            37LL) )
      break;
    CMILCOMBase::InternalAddRef(v14);
    v26 = 0LL;
    v11 = v14;
    v24 = v14;
    Microsoft::WRL::ComPtr<CCompositionSurfaceBitmap>::InternalRelease(&v26);
    v12 = *(_OWORD *)&a4[5 * v10 + 1];
    v15 = CResource::RegisterNotifier(this, v14);
    v9 = v15;
    if ( v15 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v15, 0xE1u);
      goto LABEL_13;
    }
LABEL_7:
    v16 = *((_QWORD *)this + 10);
    v17 = 32LL * (unsigned int)v10;
    v18 = *(struct CResource **)(v16 + v17);
    if ( v18 )
    {
      CResource::UnRegisterNotifierInternal(this, v18);
      *(_QWORD *)(v16 + 32LL * (unsigned int)v10) = 0LL;
    }
    v19 = *((_QWORD *)this + 10);
    v24 = 0LL;
    *(_QWORD *)(v17 + v19) = v14;
    v20 = *((_QWORD *)this + 10);
    v21 = *(CMILCOMBase **)(v20 + v17 + 8);
    *(_QWORD *)(v20 + v17 + 8) = v11;
    v26 = v21;
    Microsoft::WRL::ComPtr<CCompositionSurfaceBitmap>::InternalRelease(&v26);
    *(_OWORD *)(*((_QWORD *)this + 10) + v17 + 16) = v12;
    Microsoft::WRL::ComPtr<CCompositionSurfaceBitmap>::InternalRelease(&v24);
    v10 = (unsigned int)(v10 + 1);
    if ( (unsigned int)v10 >= *((_DWORD *)a3 + 2) )
      goto LABEL_14;
    v6 = v25;
  }
  v9 = -2003303421;
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003303421, 0xDEu);
LABEL_13:
  Microsoft::WRL::ComPtr<CCompositionSurfaceBitmap>::InternalRelease(&v24);
  return v9;
}
