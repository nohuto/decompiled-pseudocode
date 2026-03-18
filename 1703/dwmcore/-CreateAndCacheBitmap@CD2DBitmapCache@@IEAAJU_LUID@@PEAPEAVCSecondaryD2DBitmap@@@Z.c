/*
 * XREFs of ?CreateAndCacheBitmap@CD2DBitmapCache@@IEAAJU_LUID@@PEAPEAVCSecondaryD2DBitmap@@@Z @ 0x1800250D8
 * Callers:
 *     ?GetBitmapInternalNoRef@CD2DBitmapCache@@IEAAJU_LUID@@VDisplayId@@_NPEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAPEAVID2DBitmap@@@Z @ 0x18007A7D8 (-GetBitmapInternalNoRef@CD2DBitmapCache@@IEAAJU_LUID@@VDisplayId@@_NPEBV-$TMilRect@IUMilRectU@@U.c)
 * Callees:
 *     ?Create@CSecondaryD2DBitmap@@SAJAEBU_GUID@@U_LUID@@IIW4DXGI_FORMAT@@W4D2D1_ALPHA_MODE@@W4DXGI_COLOR_SPACE_TYPE@@PEAPEAV1@@Z @ 0x18000711C (-Create@CSecondaryD2DBitmap@@SAJAEBU_GUID@@U_LUID@@IIW4DXGI_FORMAT@@W4D2D1_ALPHA_MODE@@W4DXGI_CO.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180071260 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD2DBitmapCache::CreateAndCacheBitmap(
        CD2DBitmapCache *this,
        struct _LUID a2,
        struct CSecondaryD2DBitmap **a3)
{
  __int64 v4; // rcx
  __int64 v7; // rsi
  enum DXGI_COLOR_SPACE_TYPE v8; // r14d
  enum D2D1_ALPHA_MODE v9; // edi
  enum DXGI_FORMAT v10; // eax
  int v11; // eax
  int v12; // ebx
  struct CSecondaryD2DBitmap *v13; // r10
  unsigned int v14; // edx
  __int64 v15; // rcx
  unsigned int v16; // eax
  __int64 v17; // rcx
  unsigned int v18; // edx
  unsigned int v19; // eax
  int v20; // eax
  int v22; // eax
  int v23; // r9d
  enum DXGI_FORMAT v24; // [rsp+20h] [rbp-30h]
  char *v25; // [rsp+40h] [rbp-10h] BYREF
  unsigned int v26; // [rsp+90h] [rbp+40h] BYREF
  unsigned int v27; // [rsp+A0h] [rbp+50h] BYREF
  struct CSecondaryD2DBitmap *v28; // [rsp+A8h] [rbp+58h] BYREF

  v28 = 0LL;
  v4 = *((_QWORD *)this + 6);
  *a3 = 0LL;
  (*(void (__fastcall **)(__int64, unsigned int *, unsigned int *))(*(_QWORD *)v4 + 24LL))(v4, &v27, &v26);
  v7 = *((_QWORD *)this + 6);
  v8 = (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v7 + 48LL))(v7);
  v9 = (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v7 + 40LL))(v7);
  v10 = (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v7 + 32LL))(v7);
  v11 = CSecondaryD2DBitmap::Create((const struct _GUID *)this + 2, a2, v27, v26, v10, v9, v8, &v28);
  v12 = v11;
  if ( v11 < 0 )
  {
    v24 = DXGI_FORMAT_R32_UINT|0x100;
    v23 = v11;
  }
  else
  {
    v13 = v28;
    v14 = v26;
    v25 = (char *)this + 24;
    v15 = *((unsigned int *)v28 + 20);
    v16 = v15 + 1;
    if ( (int)v15 + 1 >= (unsigned int)v15 )
      v14 = v15 + 1;
    v12 = v16 < (unsigned int)v15 ? 0x80070216 : 0;
    if ( v16 < (unsigned int)v15 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0xB5u);
    }
    else if ( v14 > *((_DWORD *)v28 + 19) )
    {
      v22 = DynArrayImpl<0>::AddMultipleAndSet((char *)v28 + 56, 8LL, 1LL, &v25);
      v12 = v22;
      if ( v22 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v22, 0xC0u);
    }
    else
    {
      *(_QWORD *)(*((_QWORD *)v28 + 7) + 8 * v15) = v25;
      *((_DWORD *)v13 + 20) = v14;
    }
    if ( v12 < 0 )
    {
      v24 = DXGI_FORMAT_R8G8_TYPELESS|0x100;
    }
    else
    {
      v17 = *((unsigned int *)this + 24);
      v18 = v26;
      v19 = v17 + 1;
      if ( (int)v17 + 1 >= (unsigned int)v17 )
        v18 = v17 + 1;
      v12 = v19 < (unsigned int)v17 ? 0x80070216 : 0;
      if ( v19 < (unsigned int)v17 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0xB5u);
      }
      else if ( v18 <= *((_DWORD *)this + 23) )
      {
        *(_QWORD *)(*((_QWORD *)this + 9) + 8 * v17) = v28;
        *((_DWORD *)this + 24) = v18;
      }
      else
      {
        v20 = DynArrayImpl<0>::AddMultipleAndSet((char *)this + 72, 8LL, 1LL, &v28);
        v12 = v20;
        if ( v20 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v20, 0xC0u);
      }
      if ( v12 >= 0 )
      {
        *a3 = v28;
        return (unsigned int)v12;
      }
      v24 = DXGI_FORMAT_R8G8_UINT|0x100;
    }
    v23 = v12;
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v23, v24);
  if ( v28 )
    (*(void (__fastcall **)(struct CSecondaryD2DBitmap *))(*(_QWORD *)v28 + 16LL))(v28);
  return (unsigned int)v12;
}
