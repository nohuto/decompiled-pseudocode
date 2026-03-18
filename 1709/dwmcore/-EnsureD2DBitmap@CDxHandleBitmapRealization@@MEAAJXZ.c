/*
 * XREFs of ?EnsureD2DBitmap@CDxHandleBitmapRealization@@MEAAJXZ @ 0x18004D390
 * Callers:
 *     ?GetDeviceTexture@CDxHandleBitmapRealization@@UEAAJAEBURenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x18004D7E0 (-GetDeviceTexture@CDxHandleBitmapRealization@@UEAAJAEBURenderTargetInfo@@PEAPEAVIDeviceTexture@@.c)
 *     ?Initialize@CDxHandleBitmapRealization@@IEAAJXZ @ 0x18004DCC0 (-Initialize@CDxHandleBitmapRealization@@IEAAJXZ.c)
 *     ?EnsureD2DBitmap@CDxHandleStereoBitmapRealization@@MEAAJXZ @ 0x1801D2DC0 (-EnsureD2DBitmap@CDxHandleStereoBitmapRealization@@MEAAJXZ.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180068800 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?InitializeCache@CD2DBitmapCache@@UEAAXPEAVID2DBitmapCacheSource@@@Z @ 0x180089F90 (-InitializeCache@CD2DBitmapCache@@UEAAXPEAVID2DBitmapCacheSource@@@Z.c)
 *     ?CreateFromSharedHandle@CD2DBitmap@@SAJU_LUID@@PEAX_NW4DXGI_ALPHA_MODE@@W4DXGI_COLOR_SPACE_TYPE@@MMVDisplayId@@PEAPEAV1@@Z @ 0x1800BAA30 (-CreateFromSharedHandle@CD2DBitmap@@SAJU_LUID@@PEAX_NW4DXGI_ALPHA_MODE@@W4DXGI_COLOR_SPACE_TYPE@.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDxHandleBitmapRealization::EnsureD2DBitmap(
        CDxHandleBitmapRealization *this,
        __int64 a2,
        __int64 a3)
{
  int v3; // ebx
  unsigned int v6; // eax
  __int64 v7; // r9
  int v8; // eax
  char *v9; // rdi
  __int64 v10; // rcx
  unsigned int v11; // edx
  unsigned int v12; // eax
  CD2DBitmapCache *v13; // rcx
  struct ID2DBitmapCacheSource *v14; // rdx
  void (__fastcall *v15)(CD2DBitmapCache *__hidden, struct ID2DBitmapCacheSource *); // rax
  int v16; // eax
  char *v17; // [rsp+60h] [rbp+8h] BYREF

  v3 = 0;
  v17 = 0LL;
  if ( !*((_QWORD *)this + 49) )
  {
    v6 = *((_DWORD *)this + 38);
    v7 = 3LL;
    if ( v6 )
      v7 = v6;
    LOBYTE(a3) = *((_BYTE *)this + 404);
    v8 = CD2DBitmap::CreateFromSharedHandle(
           *((_QWORD *)this + 36),
           *((_QWORD *)this + 35),
           a3,
           v7,
           *((_DWORD *)this + 49),
           LODWORD(FLOAT_96_0),
           LODWORD(FLOAT_96_0),
           *((_DWORD *)this + 100),
           &v17);
    v9 = v17;
    v3 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0x174u);
    }
    else
    {
      v17 = (char *)this + 24;
      v10 = *((unsigned int *)v9 + 20);
      v11 = (_DWORD)this + 24;
      v12 = v10 + 1;
      if ( (int)v10 + 1 >= (unsigned int)v10 )
        v11 = v10 + 1;
      v3 = v12 < (unsigned int)v10 ? 0x80070216 : 0;
      if ( v12 < (unsigned int)v10 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v3, 0xB5u);
      }
      else if ( v11 > *((_DWORD *)v9 + 19) )
      {
        v16 = DynArrayImpl<0>::AddMultipleAndSet(v9 + 56, 8LL, 1LL, &v17);
        v3 = v16;
        if ( v16 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v16, 0xC0u);
      }
      else
      {
        *(_QWORD *)(*((_QWORD *)v9 + 7) + 8 * v10) = v17;
        *((_DWORD *)v9 + 20) = v11;
      }
      if ( v3 >= 0 )
      {
        *((_QWORD *)this + 49) = v9;
        v13 = (CDxHandleBitmapRealization *)((char *)this + 16);
        v14 = (struct ID2DBitmapCacheSource *)((unsigned __int64)(v9 + 112) & -(__int64)(v9 != 0LL));
        v15 = *(void (__fastcall **)(CD2DBitmapCache *__hidden, struct ID2DBitmapCacheSource *))(*((_QWORD *)this + 2)
                                                                                               + 24LL);
        if ( v15 == CD2DBitmapCache::InitializeCache )
          CD2DBitmapCache::InitializeCache(v13, v14);
        else
          v15(v13, v14);
        return (unsigned int)v3;
      }
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v3, 0x178u);
    }
    if ( v9 )
      (*(void (__fastcall **)(char *))(*(_QWORD *)v9 + 16LL))(v9);
  }
  return (unsigned int)v3;
}
