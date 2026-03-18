/*
 * XREFs of ?GetBitmapShaderResourceViewNoRef@CDxHandleAdvancedDirectFlipBitmapRealization@@UEAAJAEBURenderTargetInfo@@PEAPEAUID3D11ShaderResourceView@@@Z @ 0x1801B5380
 * Callers:
 *     <none>
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@UID2D1Ink@@@@YAXPEAUID2D1Ink@@@Z @ 0x180001C80 (--$ReleaseInterfaceNoNULL@UID2D1Ink@@@@YAXPEAUID2D1Ink@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetBitmapShaderResourceViewNoRef@CDxHandleBitmapRealization@@UEAAJAEBURenderTargetInfo@@PEAPEAUID3D11ShaderResourceView@@@Z @ 0x18007A250 (-GetBitmapShaderResourceViewNoRef@CDxHandleBitmapRealization@@UEAAJAEBURenderTargetInfo@@PEAPEAU.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ?GetBitmapShaderResourceViewFromBitmapSourceNoRef@@YAJPEAVIBitmapSource@@PEBUPixelFormatInfo@@PEBUBitmapSourceInfo@@AEBU_GUID@@PEAPEAUID3D11ShaderResourceView@@@Z @ 0x180186D9C (-GetBitmapShaderResourceViewFromBitmapSourceNoRef@@YAJPEAVIBitmapSource@@PEBUPixelFormatInfo@@PE.c)
 *     ?EnsureRestoredContent@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJXZ @ 0x1801B51BC (-EnsureRestoredContent@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJXZ.c)
 */

__int64 __fastcall CDxHandleAdvancedDirectFlipBitmapRealization::GetBitmapShaderResourceViewNoRef(
        CDxHandleAdvancedDirectFlipBitmapRealization *this,
        struct _LUID *a2,
        struct ID3D11ShaderResourceView **a3)
{
  CDxHandleAdvancedDirectFlipBitmapRealization *v4; // rcx
  int BitmapShaderResourceViewNoRef; // eax
  unsigned int v8; // ebx
  int v9; // eax
  int v10; // eax
  struct _LUID v11; // rax
  int BitmapShaderResourceViewFromBitmapSourceNoRef; // eax
  _DWORD v14[4]; // [rsp+30h] [rbp-30h] BYREF
  struct _LUID v15; // [rsp+40h] [rbp-20h] BYREF
  DWORD LowPart; // [rsp+48h] [rbp-18h]
  int v17; // [rsp+4Ch] [rbp-14h]
  int v18; // [rsp+50h] [rbp-10h]
  __int64 v19; // [rsp+58h] [rbp-8h]
  struct IBitmapSource *v20; // [rsp+80h] [rbp+20h] BYREF

  v20 = 0LL;
  *a3 = 0LL;
  v4 = (CDxHandleAdvancedDirectFlipBitmapRealization *)((char *)this - 104);
  if ( *((_OWORD *)v4 + 27) == 0LL )
  {
    BitmapShaderResourceViewNoRef = CDxHandleBitmapRealization::GetBitmapShaderResourceViewNoRef(this, a2, a3);
    v8 = BitmapShaderResourceViewNoRef;
    if ( BitmapShaderResourceViewNoRef < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, BitmapShaderResourceViewNoRef, 0xA3u);
  }
  else
  {
    v9 = CDxHandleAdvancedDirectFlipBitmapRealization::EnsureRestoredContent(v4, (__int64)a2);
    v8 = v9;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x89u);
    }
    else
    {
      v10 = (*(__int64 (__fastcall **)(_QWORD, struct IBitmapSource **))(**((_QWORD **)this + 41) + 184LL))(
              *((_QWORD *)this + 41),
              &v20);
      v8 = v10;
      if ( v10 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x8Bu);
      }
      else
      {
        v11 = *a2;
        v14[2] = 0;
        v17 = 0;
        v19 = 0LL;
        v15 = v11;
        LowPart = a2[1].LowPart;
        v14[0] = 87;
        v14[1] = 3;
        v18 = 1;
        BitmapShaderResourceViewFromBitmapSourceNoRef = GetBitmapShaderResourceViewFromBitmapSourceNoRef(
                                                          v20,
                                                          (const struct PixelFormatInfo *)v14,
                                                          (const struct BitmapSourceInfo *)&v15,
                                                          (struct _GUID *)((char *)this - 72),
                                                          a3);
        v8 = BitmapShaderResourceViewFromBitmapSourceNoRef;
        if ( BitmapShaderResourceViewFromBitmapSourceNoRef < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, BitmapShaderResourceViewFromBitmapSourceNoRef, 0x9Eu);
      }
    }
  }
  ReleaseInterfaceNoNULL<ID2D1Ink>((__int64)v20);
  return v8;
}
