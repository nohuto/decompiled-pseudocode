/*
 * XREFs of ?EnsureD2DBitmap@CDxHandleBitmapRealization@@MEAAJXZ @ 0x180079BA0
 * Callers:
 *     ?GetTextureFormat@CDxHandleBitmapRealization@@UEAA?AW4DXGI_FORMAT@@XZ @ 0x18000B3B0 (-GetTextureFormat@CDxHandleBitmapRealization@@UEAA-AW4DXGI_FORMAT@@XZ.c)
 *     ?GetD2DBitmap@CDxHandleBitmapRealization@@UEAAJAEBURenderTargetInfo@@PEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@_NPEAPEAUID2D1Bitmap1@@@Z @ 0x18000B470 (-GetD2DBitmap@CDxHandleBitmapRealization@@UEAAJAEBURenderTargetInfo@@PEBV-$TMilRect@IUMilRectU@@.c)
 *     ?GetBitmapShaderResourceViewNoRef@CDxHandleBitmapRealization@@UEAAJAEBURenderTargetInfo@@PEAPEAUID3D11ShaderResourceView@@@Z @ 0x18007A250 (-GetBitmapShaderResourceViewNoRef@CDxHandleBitmapRealization@@UEAAJAEBURenderTargetInfo@@PEAPEAU.c)
 *     ?Initialize@CDxHandleBitmapRealization@@IEAAJXZ @ 0x18007A43C (-Initialize@CDxHandleBitmapRealization@@IEAAJXZ.c)
 *     ?EnsureD2DBitmap@CDxHandleStereoBitmapRealization@@MEAAJXZ @ 0x1801B60B0 (-EnsureD2DBitmap@CDxHandleStereoBitmapRealization@@MEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180071260 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?GetD2DAlphaMode@CDxHandleBitmapRealization@@IEBA?AW4D2D1_ALPHA_MODE@@XZ @ 0x180079B78 (-GetD2DAlphaMode@CDxHandleBitmapRealization@@IEBA-AW4D2D1_ALPHA_MODE@@XZ.c)
 *     ?InitializeCache@CD2DBitmapCache@@UEAAXPEAVID2DBitmapCacheSource@@@Z @ 0x18007A4B0 (-InitializeCache@CD2DBitmapCache@@UEAAXPEAVID2DBitmapCacheSource@@@Z.c)
 *     ?CreateFromSharedHandle@CD2DBitmap@@SAJAEBU_GUID@@U_LUID@@PEAXW4D2D1_ALPHA_MODE@@MMVDisplayId@@PEAPEAV1@@Z @ 0x18007CACC (-CreateFromSharedHandle@CD2DBitmap@@SAJAEBU_GUID@@U_LUID@@PEAXW4D2D1_ALPHA_MODE@@MMVDisplayId@@P.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDxHandleBitmapRealization::EnsureD2DBitmap(CDxHandleBitmapRealization *this)
{
  int v1; // ebx
  unsigned int D2DAlphaMode; // eax
  int v5; // eax
  char *v6; // rdi
  __int64 v7; // rcx
  unsigned int v8; // edx
  unsigned int v9; // eax
  CD2DBitmapCache *v10; // rcx
  struct ID2DBitmapCacheSource *v11; // rdx
  void (__fastcall *v12)(CD2DBitmapCache *__hidden, struct ID2DBitmapCacheSource *); // rax
  int v13; // eax
  char *v14; // [rsp+50h] [rbp+8h] BYREF

  v1 = 0;
  v14 = 0LL;
  if ( !*((_QWORD *)this + 51) )
  {
    D2DAlphaMode = CDxHandleBitmapRealization::GetD2DAlphaMode(this);
    v5 = CD2DBitmap::CreateFromSharedHandle(
           (char *)this + 32,
           *((_QWORD *)this + 32),
           *((_QWORD *)this + 31),
           D2DAlphaMode,
           LODWORD(FLOAT_96_0),
           LODWORD(FLOAT_96_0),
           *((_DWORD *)this + 104),
           &v14);
    v6 = v14;
    v1 = v5;
    if ( v5 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x144u);
    }
    else
    {
      v14 = (char *)this + 24;
      v7 = *((unsigned int *)v6 + 20);
      v8 = (_DWORD)this + 24;
      v9 = v7 + 1;
      if ( (int)v7 + 1 >= (unsigned int)v7 )
        v8 = v7 + 1;
      v1 = v9 < (unsigned int)v7 ? 0x80070216 : 0;
      if ( v9 < (unsigned int)v7 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v1, 0xB5u);
      }
      else if ( v8 > *((_DWORD *)v6 + 19) )
      {
        v13 = DynArrayImpl<0>::AddMultipleAndSet((__int64)(v6 + 56), 8u, 1, &v14);
        v1 = v13;
        if ( v13 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0xC0u);
      }
      else
      {
        *(_QWORD *)(*((_QWORD *)v6 + 7) + 8 * v7) = v14;
        *((_DWORD *)v6 + 20) = v8;
      }
      if ( v1 >= 0 )
      {
        *((_QWORD *)this + 51) = v6;
        v10 = (CDxHandleBitmapRealization *)((char *)this + 16);
        v11 = (struct ID2DBitmapCacheSource *)((unsigned __int64)(v6 + 112) & -(__int64)(v6 != 0LL));
        v12 = *(void (__fastcall **)(CD2DBitmapCache *__hidden, struct ID2DBitmapCacheSource *))(*((_QWORD *)this + 2)
                                                                                               + 24LL);
        if ( v12 == CD2DBitmapCache::InitializeCache )
          CD2DBitmapCache::InitializeCache(v10, v11);
        else
          v12(v10, v11);
        return (unsigned int)v1;
      }
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v1, 0x149u);
    }
    if ( v6 )
      (*(void (__fastcall **)(char *))(*(_QWORD *)v6 + 16LL))(v6);
  }
  return (unsigned int)v1;
}
