/*
 * XREFs of ?CreateAndCacheBitmap@CD2DBitmapCache@@IEAAJU_LUID@@PEAPEAVCSecondaryD2DBitmap@@@Z @ 0x180077CC0
 * Callers:
 *     ?GetBitmapInternalNoRef@CD2DBitmapCache@@IEAAJU_LUID@@VDisplayId@@_NPEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAPEAVID2DBitmap@@@Z @ 0x180077EBC (-GetBitmapInternalNoRef@CD2DBitmapCache@@IEAAJU_LUID@@VDisplayId@@_NPEBV-$TMilRect@IUMilRectU@@U.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18007968C (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?Create@CSecondaryD2DBitmap@@SAJU_LUID@@IIAEBUPixelFormatInfo@@AEBVCResourceTag@@PEAPEAV1@@Z @ 0x180083270 (-Create@CSecondaryD2DBitmap@@SAJU_LUID@@IIAEBUPixelFormatInfo@@AEBVCResourceTag@@PEAPEAV1@@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     _Init_thread_footer @ 0x1800DB248 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x1800DB2A8 (_Init_thread_header.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD2DBitmapCache::CreateAndCacheBitmap(
        CD2DBitmapCache *this,
        struct _LUID a2,
        struct CSecondaryD2DBitmap **a3)
{
  __int64 v4; // rcx
  const struct CResourceTag *v7; // rdi
  const struct PixelFormatInfo *v8; // rax
  int v9; // ebx
  struct CSecondaryD2DBitmap *v10; // r10
  unsigned int v11; // eax
  unsigned int v12; // edx
  unsigned int v13; // eax
  unsigned int v14; // edx
  int v15; // eax
  int v17; // eax
  unsigned int v18; // eax
  struct CSecondaryD2DBitmap *v19; // [rsp+30h] [rbp-30h] BYREF
  unsigned int v20; // [rsp+38h] [rbp-28h] BYREF
  unsigned int v21; // [rsp+3Ch] [rbp-24h] BYREF
  _QWORD v22[2]; // [rsp+40h] [rbp-20h] BYREF

  *a3 = 0LL;
  v4 = *((_QWORD *)this + 4);
  v19 = 0LL;
  (*(void (__fastcall **)(__int64, unsigned int *, unsigned int *))(*(_QWORD *)v4 + 32LL))(v4, &v21, &v20);
  if ( dword_1802D9BF0 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index)
                                   + 4LL) )
  {
    Init_thread_header(&dword_1802D9BF0);
    if ( dword_1802D9BF0 == -1 )
    {
      dword_1802D9C00 = 24;
      qword_1802D9BF8 = (__int64)"DWM Sysmem Source Bitmap";
      dword_1802D9C10 = 23;
      qword_1802D9C08 = (__int64)"DWM Cross-Device Bitmap";
      Init_thread_footer(&dword_1802D9BF0);
    }
  }
  v7 = (const struct CResourceTag *)off_1802D39C8;
  if ( !*((_QWORD *)this + 5) )
    v7 = off_1802D39C0;
  v8 = (const struct PixelFormatInfo *)(*(__int64 (__fastcall **)(_QWORD, _QWORD *))(**((_QWORD **)this + 4) + 24LL))(
                                         *((_QWORD *)this + 4),
                                         v22);
  v9 = CSecondaryD2DBitmap::Create(a2, v21, v20, v8, v7, &v19);
  if ( v9 < 0 )
  {
    v18 = 277;
  }
  else
  {
    v10 = v19;
    v22[0] = (char *)this + 24;
    v11 = *((_DWORD *)v19 + 20);
    v12 = v11 + 1;
    v9 = v11 + 1 < v11 ? 0x80070216 : 0;
    if ( v11 + 1 < v11 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0xB5u);
    }
    else if ( v12 > *((_DWORD *)v19 + 19) )
    {
      v17 = DynArrayImpl<0>::AddMultipleAndSet((char *)v19 + 56, 8LL, 1LL, v22);
      v9 = v17;
      if ( v17 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v17, 0xC0u);
    }
    else
    {
      *(_QWORD *)(*((_QWORD *)v19 + 7) + 8LL * v11) = v22[0];
      *((_DWORD *)v10 + 20) = v12;
    }
    if ( v9 < 0 )
    {
      v18 = 283;
    }
    else
    {
      v13 = *((_DWORD *)this + 20);
      v14 = v13 + 1;
      v9 = v13 + 1 < v13 ? 0x80070216 : 0;
      if ( v13 + 1 < v13 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0xB5u);
      }
      else if ( v14 <= *((_DWORD *)this + 19) )
      {
        *(_QWORD *)(*((_QWORD *)this + 7) + 8LL * *((unsigned int *)this + 20)) = v19;
        *((_DWORD *)this + 20) = v14;
      }
      else
      {
        v15 = DynArrayImpl<0>::AddMultipleAndSet((char *)this + 56, 8LL, 1LL, &v19);
        v9 = v15;
        if ( v15 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v15, 0xC0u);
      }
      if ( v9 >= 0 )
      {
        *a3 = v19;
        return (unsigned int)v9;
      }
      v18 = 285;
    }
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, v18);
  if ( v19 )
    (*(void (__fastcall **)(struct CSecondaryD2DBitmap *))(*(_QWORD *)v19 + 16LL))(v19);
  return (unsigned int)v9;
}
