/*
 * XREFs of ?EnsureD2DBitmap@CDxHandleBitmapRealization@@MEAAJXZ @ 0x180045860
 * Callers:
 *     ?GetDeviceTexture@CDxHandleBitmapRealization@@UEAAJAEBURenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x1800459A0 (-GetDeviceTexture@CDxHandleBitmapRealization@@UEAAJAEBURenderTargetInfo@@PEAPEAVIDeviceTexture@@.c)
 *     ?Initialize@CDxHandleBitmapRealization@@IEAAJXZ @ 0x180045BD8 (-Initialize@CDxHandleBitmapRealization@@IEAAJXZ.c)
 *     ?EnsureD2DBitmap@CDxHandleStereoBitmapRealization@@MEAAJXZ @ 0x180214C90 (-EnsureD2DBitmap@CDxHandleStereoBitmapRealization@@MEAAJXZ.c)
 * Callees:
 *     ?CreateFromSharedHandle@CD2DBitmap@@SAJU_LUID@@PEAX_NW4DXGI_ALPHA_MODE@@W4DXGI_COLOR_SPACE_TYPE@@MMVDisplayId@@PEAPEAV1@@Z @ 0x1800250A0 (-CreateFromSharedHandle@CD2DBitmap@@SAJU_LUID@@PEAX_NW4DXGI_ALPHA_MODE@@W4DXGI_COLOR_SPACE_TYPE@.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?InitializeCache@CD2DBitmapCache@@UEAAXPEAVID2DBitmapCacheSource@@@Z @ 0x180077A60 (-InitializeCache@CD2DBitmapCache@@UEAAXPEAVID2DBitmapCacheSource@@@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18007968C (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDxHandleBitmapRealization::EnsureD2DBitmap(CDxHandleBitmapRealization *this)
{
  int v1; // ebx
  unsigned int v4; // eax
  __int64 v5; // r9
  int v6; // eax
  char *v7; // rdi
  unsigned int v8; // eax
  unsigned int v9; // edx
  CD2DBitmapCache *v10; // rcx
  struct ID2DBitmapCacheSource *v11; // rdx
  void (__fastcall *v12)(CD2DBitmapCache *__hidden, struct ID2DBitmapCacheSource *); // rax
  int v13; // eax
  unsigned int v14; // eax
  char *v15; // [rsp+60h] [rbp+8h] BYREF

  v1 = 0;
  v15 = 0LL;
  if ( !*((_QWORD *)this + 49) )
  {
    v4 = *((_DWORD *)this + 38);
    v5 = 3LL;
    if ( v4 )
      v5 = v4;
    v6 = CD2DBitmap::CreateFromSharedHandle(
           *((_QWORD *)this + 36),
           *((_QWORD *)this + 35),
           *((_BYTE *)this + 404),
           v5,
           *((_DWORD *)this + 49),
           SLODWORD(FLOAT_96_0),
           SLODWORD(FLOAT_96_0),
           *((_DWORD *)this + 100),
           &v15);
    v7 = v15;
    v1 = v6;
    if ( v6 < 0 )
    {
      v14 = 372;
    }
    else
    {
      v15 = (char *)this + 24;
      v8 = *((_DWORD *)v7 + 20);
      v9 = v8 + 1;
      v1 = v8 + 1 < v8 ? 0x80070216 : 0;
      if ( v8 + 1 < v8 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v1, 0xB5u);
      }
      else if ( v9 > *((_DWORD *)v7 + 19) )
      {
        v13 = DynArrayImpl<0>::AddMultipleAndSet(v7 + 56, 8LL, 1LL, &v15);
        v1 = v13;
        if ( v13 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v13, 0xC0u);
      }
      else
      {
        *(_QWORD *)(*((_QWORD *)v7 + 7) + 8LL * v8) = v15;
        *((_DWORD *)v7 + 20) = v9;
      }
      if ( v1 >= 0 )
      {
        *((_QWORD *)this + 49) = v7;
        v10 = (CDxHandleBitmapRealization *)((char *)this + 16);
        v11 = (struct ID2DBitmapCacheSource *)((unsigned __int64)(v7 + 112) & -(__int64)(v7 != 0LL));
        v12 = *(void (__fastcall **)(CD2DBitmapCache *__hidden, struct ID2DBitmapCacheSource *))(*((_QWORD *)this + 2)
                                                                                               + 24LL);
        if ( v12 == CD2DBitmapCache::InitializeCache )
          CD2DBitmapCache::InitializeCache(v10, v11);
        else
          v12(v10, v11);
        return (unsigned int)v1;
      }
      v14 = 376;
    }
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v1, v14);
    if ( v7 )
      (*(void (__fastcall **)(char *))(*(_QWORD *)v7 + 16LL))(v7);
  }
  return (unsigned int)v1;
}
