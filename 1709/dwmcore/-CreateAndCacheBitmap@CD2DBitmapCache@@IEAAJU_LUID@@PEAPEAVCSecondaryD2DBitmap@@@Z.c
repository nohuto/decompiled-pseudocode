/*
 * XREFs of ?CreateAndCacheBitmap@CD2DBitmapCache@@IEAAJU_LUID@@PEAPEAVCSecondaryD2DBitmap@@@Z @ 0x18008A28C
 * Callers:
 *     ?GetBitmapInternalNoRef@CD2DBitmapCache@@IEAAJU_LUID@@VDisplayId@@_NPEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAPEAVID2DBitmap@@@Z @ 0x18008A438 (-GetBitmapInternalNoRef@CD2DBitmapCache@@IEAAJU_LUID@@VDisplayId@@_NPEBV-$TMilRect@IUMilRectU@@U.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180068800 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?Create@CSecondaryD2DBitmap@@SAJU_LUID@@IIAEBUPixelFormatInfo@@AEBVCResourceTag@@PEAPEAV1@@Z @ 0x180088258 (-Create@CSecondaryD2DBitmap@@SAJU_LUID@@IIAEBUPixelFormatInfo@@AEBVCResourceTag@@PEAPEAV1@@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     _Init_thread_footer @ 0x1800C2F28 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x1800C2F88 (_Init_thread_header.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD2DBitmapCache::CreateAndCacheBitmap(
        CD2DBitmapCache *this,
        struct _LUID a2,
        struct CSecondaryD2DBitmap **a3)
{
  __int64 v4; // rcx
  const struct CResourceTag *v7; // rdi
  enum DXGI_COLOR_SPACE_TYPE *v8; // rax
  int v9; // eax
  signed int v10; // ebx
  struct CSecondaryD2DBitmap *v11; // r10
  unsigned int v12; // edx
  __int64 v13; // rcx
  unsigned int v14; // eax
  __int64 v15; // rcx
  unsigned int v16; // edx
  unsigned int v17; // eax
  signed int v18; // eax
  signed int v20; // eax
  DWORD v21; // r9d
  unsigned int v22; // [rsp+20h] [rbp-40h]
  unsigned int v23; // [rsp+30h] [rbp-30h] BYREF
  struct CSecondaryD2DBitmap *v24; // [rsp+38h] [rbp-28h] BYREF
  unsigned int v25; // [rsp+40h] [rbp-20h] BYREF
  _QWORD v26[2]; // [rsp+48h] [rbp-18h] BYREF

  *a3 = 0LL;
  v4 = *((_QWORD *)this + 4);
  v24 = 0LL;
  (*(void (__fastcall **)(__int64, unsigned int *, unsigned int *))(*(_QWORD *)v4 + 32LL))(v4, &v23, &v25);
  if ( dword_180272828 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index)
                                   + 4LL) )
  {
    Init_thread_header(&dword_180272828);
    if ( dword_180272828 == -1 )
    {
      dword_180272FC0 = 24;
      qword_180272FB8 = (__int64)"DWM Sysmem Source Bitmap";
      dword_180272630 = 23;
      qword_180272628 = (__int64)"DWM Cross-Device Bitmap";
      Init_thread_footer(&dword_180272828);
    }
  }
  v7 = (const struct CResourceTag *)off_18026D6C0;
  if ( !*((_QWORD *)this + 5) )
    v7 = off_18026DC40;
  v8 = (enum DXGI_COLOR_SPACE_TYPE *)(*(__int64 (__fastcall **)(_QWORD, _QWORD *))(**((_QWORD **)this + 4) + 24LL))(
                                       *((_QWORD *)this + 4),
                                       v26);
  v9 = CSecondaryD2DBitmap::Create(a2, v23, v25, v8, v7, &v24);
  v10 = v9;
  if ( v9 < 0 )
  {
    v22 = 277;
    v21 = v9;
  }
  else
  {
    v11 = v24;
    v12 = v23;
    v26[0] = (char *)this + 24;
    v13 = *((unsigned int *)v24 + 20);
    v14 = v13 + 1;
    if ( (int)v13 + 1 >= (unsigned int)v13 )
      v12 = v13 + 1;
    v10 = v14 < (unsigned int)v13 ? 0x80070216 : 0;
    if ( v14 < (unsigned int)v13 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v10, 0xB5u);
    }
    else if ( v12 > *((_DWORD *)v24 + 19) )
    {
      v20 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v24 + 56, 8u, 1, v26);
      v10 = v20;
      if ( v20 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v20, 0xC0u);
    }
    else
    {
      *(_QWORD *)(*((_QWORD *)v24 + 7) + 8 * v13) = v26[0];
      *((_DWORD *)v11 + 20) = v12;
    }
    if ( v10 < 0 )
    {
      v22 = 283;
    }
    else
    {
      v15 = *((unsigned int *)this + 20);
      v16 = v23;
      v17 = v15 + 1;
      if ( (int)v15 + 1 >= (unsigned int)v15 )
        v16 = v15 + 1;
      v10 = v17 < (unsigned int)v15 ? 0x80070216 : 0;
      if ( v17 < (unsigned int)v15 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v10, 0xB5u);
      }
      else if ( v16 <= *((_DWORD *)this + 19) )
      {
        *(_QWORD *)(*((_QWORD *)this + 7) + 8 * v15) = v24;
        *((_DWORD *)this + 20) = v16;
      }
      else
      {
        v18 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 56, 8u, 1, &v24);
        v10 = v18;
        if ( v18 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v18, 0xC0u);
      }
      if ( v10 >= 0 )
      {
        *a3 = v24;
        return (unsigned int)v10;
      }
      v22 = 285;
    }
    v21 = v10;
  }
  MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v21, v22);
  if ( v24 )
    (*(void (__fastcall **)(struct CSecondaryD2DBitmap *))(*(_QWORD *)v24 + 16LL))(v24);
  return (unsigned int)v10;
}
