/*
 * XREFs of ?Update@CSecondaryD2DBitmap@@UEAAJAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAVID2DBitmapCacheSource@@@Z @ 0x1800834A0
 * Callers:
 *     <none>
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@UIWICBitmap@@@@YAXPEAUIWICBitmap@@@Z @ 0x1800213F4 (--$ReleaseInterfaceNoNULL@UIWICBitmap@@@@YAXPEAUIWICBitmap@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?UpdateSubresource@CD3DDeviceLevel1@@QEAAXPEAUID3D11Resource@@PEBUtagRECT@@PEBXI_N3@Z @ 0x180076A30 (-UpdateSubresource@CD3DDeviceLevel1@@QEAAXPEAUID3D11Resource@@PEBUtagRECT@@PEBXI_N3@Z.c)
 *     ?HasPrefilterScale@CSecondaryD2DBitmap@@IEBA_NXZ @ 0x180083470 (-HasPrefilterScale@CSecondaryD2DBitmap@@IEBA_NXZ.c)
 *     ?GetBitmapRect@CSecondaryBitmap@@IEBAXPEAUMilRectU@@@Z @ 0x180083744 (-GetBitmapRect@CSecondaryBitmap@@IEBAXPEAUMilRectU@@@Z.c)
 *     ?RectInBounds@CSecondaryBitmap@@IEBA_NUMilRectU@@@Z @ 0x1800838C4 (-RectInBounds@CSecondaryBitmap@@IEBA_NUMilRectU@@@Z.c)
 *     ?AddValidRect@CSecondaryBitmap@@IEAAJAEBUMilRectU@@@Z @ 0x180083908 (-AddValidRect@CSecondaryBitmap@@IEAAJAEBUMilRectU@@@Z.c)
 *     ?IsEmpty@?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x1800839A8 (-IsEmpty@-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z @ 0x180084360 (-GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z.c)
 *     ?Scale@CMILMatrix@@QEAAXMMM@Z @ 0x1800A3E90 (-Scale@CMILMatrix@@QEAAXMMM@Z.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x1800A4FF0 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     ceilf_0 @ 0x1800DD3B9 (ceilf_0.c)
 *     floorf_0 @ 0x1800DD3C5 (floorf_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0qqqq @ 0x180148DD8 (McTemplateU0qqqq.c)
 *     ?CreateScaledLock@CSecondaryD2DBitmap@@IEAAJAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAVID2DBitmapCacheSource@@PEAPEAVIBitmapLock@@@Z @ 0x180179D24 (-CreateScaledLock@CSecondaryD2DBitmap@@IEAAJAEBV-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness.c)
 *     ?FormatConvertLock@CSecondaryD2DBitmap@@IEAAJPEAPEAVIBitmapLock@@@Z @ 0x18017A06C (-FormatConvertLock@CSecondaryD2DBitmap@@IEAAJPEAPEAVIBitmapLock@@@Z.c)
 *     ?ReleaseD3DResourceSourceAfterFrameRetiresInDriver@CD3DResourceManager@@QEAAJPEAUIUnknown@@@Z @ 0x1801E5CD8 (-ReleaseD3DResourceSourceAfterFrameRetiresInDriver@CD3DResourceManager@@QEAAJPEAUIUnknown@@@Z.c)
 */

__int64 __fastcall CSecondaryD2DBitmap::Update(CSecondaryBitmap *this, struct MilRectU *a2, __int64 a3)
{
  __int64 v3; // rax
  CSecondaryD2DBitmap *v4; // rsi
  int *v7; // r14
  struct tagRECT *v9; // rdx
  __int64 v10; // rcx
  int valid; // eax
  unsigned int v12; // ebx
  enum DXGI_FORMAT v13; // r15d
  int left; // eax
  unsigned int v16; // xmm0_4
  unsigned int v17; // xmm1_4
  int right; // eax
  unsigned int v19; // xmm0_4
  int bottom; // eax
  float v21; // xmm2_4
  float v22; // xmm1_4
  LONG v23; // eax
  LONG top; // eax
  LONG v25; // eax
  LONG v26; // eax
  int v27; // r9d
  unsigned __int8 PixelFormatSize; // al
  unsigned int v29; // [rsp+20h] [rbp-B9h]
  bool v30; // [rsp+28h] [rbp-B1h]
  struct IBitmapLock *v31; // [rsp+40h] [rbp-99h] BYREF
  unsigned int v32; // [rsp+48h] [rbp-91h] BYREF
  struct ID3D11Resource *v33; // [rsp+50h] [rbp-89h] BYREF
  struct IUnknown *v34; // [rsp+58h] [rbp-81h] BYREF
  _BYTE v35[8]; // [rsp+60h] [rbp-79h] BYREF
  void *v36; // [rsp+68h] [rbp-71h] BYREF
  _OWORD v37[4]; // [rsp+70h] [rbp-69h] BYREF
  __int16 v38; // [rsp+B0h] [rbp-29h]
  struct tagRECT v39; // [rsp+C0h] [rbp-19h] BYREF
  unsigned int v40; // [rsp+D0h] [rbp-9h] BYREF
  unsigned int v41; // [rsp+D4h] [rbp-5h]
  unsigned int v42; // [rsp+D8h] [rbp-1h]
  float v43; // [rsp+DCh] [rbp+3h]
  struct tagRECT X; // [rsp+E0h] [rbp+7h] BYREF

  v3 = *((_QWORD *)this - 30);
  v4 = (CSecondaryBitmap *)((char *)this - 264);
  v31 = 0LL;
  v34 = 0LL;
  v33 = 0LL;
  v7 = *(int **)(v3 + 24);
  if ( CSecondaryD2DBitmap::HasPrefilterScale((CSecondaryBitmap *)((char *)this - 264)) )
  {
    left = v9->left;
    v37[1] = _xmm;
    v38 = 32085;
    v37[0] = _xmm;
    *(float *)&v16 = (float)left;
    *(float *)&v17 = (float)v9->top;
    right = v9->right;
    v40 = v16;
    *(float *)&v19 = (float)right;
    bottom = v9->bottom;
    v41 = v17;
    v37[2] = _xmm;
    v21 = *((float *)this - 9);
    v43 = (float)bottom;
    v22 = *((float *)this - 10);
    v42 = v19;
    v37[3] = _xmm;
    CMILMatrix::Scale((CMILMatrix *)v37, v22 / 96.0, v21 / 96.0, 1.0);
    CMILMatrix::Transform2DBoundsHelper<0>((CMILMatrix *)v37);
    v39.left = (int)floorf_0(*(float *)&X.left);
    v39.top = (int)floorf_0(*(float *)&X.top);
    v39.right = (int)ceilf_0(*(float *)&X.right);
    v39.bottom = (int)ceilf_0(*(float *)&X.bottom);
    CSecondaryBitmap::GetBitmapRect(this, (struct MilRectU *)&v40);
    v23 = v39.left;
    if ( v40 > v39.left )
      v23 = v40;
    v39.left = v23;
    top = v39.top;
    if ( v41 > v39.top )
      top = v41;
    v39.top = top;
    v25 = v39.right;
    if ( v42 < v39.right )
      v25 = v42;
    v39.right = v25;
    v26 = v39.bottom;
    if ( LODWORD(v43) < v39.bottom )
      v26 = LODWORD(v43);
    v39.bottom = v26;
    if ( (unsigned __int8)TMilRect<unsigned int,MilRectU,RectUniqueness::NotNeeded>::IsEmpty(&v39) )
    {
      v39.bottom = 0;
      v39.right = 0;
      v39.top = 0;
      v39.left = 0;
    }
  }
  else
  {
    v39 = *v9;
  }
  X = v39;
  if ( !(unsigned __int8)CSecondaryBitmap::RectInBounds(this, &X)
    || (unsigned __int8)TMilRect<unsigned int,MilRectU,RectUniqueness::NotNeeded>::IsEmpty(&v39) )
  {
    v12 = -2147024809;
    v29 = 216;
    v27 = -2147024809;
    goto LABEL_41;
  }
  if ( CSecondaryD2DBitmap::HasPrefilterScale(v4) )
  {
    valid = CSecondaryD2DBitmap::CreateScaledLock(v10, &v39, a3, &v31);
    v12 = valid;
    if ( valid >= 0 )
      goto LABEL_7;
    v29 = 221;
LABEL_31:
    v27 = valid;
LABEL_41:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v27, v29);
    goto LABEL_15;
  }
  valid = (*(__int64 (__fastcall **)(__int64, struct tagRECT *, struct IBitmapLock **))(*(_QWORD *)a3 + 64LL))(
            a3,
            &v39,
            &v31);
  v12 = valid;
  if ( valid < 0 )
  {
    v29 = 225;
    goto LABEL_31;
  }
LABEL_7:
  v13 = *(_DWORD *)(*(__int64 (__fastcall **)(struct IBitmapLock *, unsigned int *))(*(_QWORD *)v31 + 24LL))(v31, &v40);
  if ( v13 != *(_DWORD *)(*(__int64 (__fastcall **)(char *, unsigned int *))(*((_QWORD *)this - 20) + 24LL))(
                           (char *)this - 160,
                           &v40) )
  {
    valid = CSecondaryD2DBitmap::FormatConvertLock(v4, &v31);
    v12 = valid;
    if ( valid < 0 )
    {
      v29 = 236;
      goto LABEL_31;
    }
  }
  valid = (*(__int64 (__fastcall **)(struct IBitmapLock *, unsigned int *))(*(_QWORD *)v31 + 40LL))(v31, &v32);
  v12 = valid;
  if ( valid < 0 )
  {
    v29 = 239;
    goto LABEL_31;
  }
  valid = (*(__int64 (__fastcall **)(struct IBitmapLock *, _BYTE *, void **))(*(_QWORD *)v31 + 48LL))(v31, v35, &v36);
  v12 = valid;
  if ( valid < 0 )
  {
    v29 = 240;
    goto LABEL_31;
  }
  if ( v7[189] < 40960
    && (*(int (__fastcall **)(struct IBitmapLock *, struct IUnknown **))(*(_QWORD *)v31 + 56LL))(v31, &v34) >= 0 )
  {
    CD3DResourceManager::ReleaseD3DResourceSourceAfterFrameRetiresInDriver((CD3DResourceManager *)(v7 + 224), v34);
  }
  valid = (***((__int64 (__fastcall ****)(_QWORD, GUID *, struct ID3D11Resource **))this - 16))(
            *((_QWORD *)this - 16),
            &GUID_dc8e63f3_d12b_4952_b47b_5e45026a862d,
            &v33);
  v12 = valid;
  if ( valid < 0 )
  {
    v29 = 259;
    goto LABEL_31;
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
  {
    PixelFormatSize = GetPixelFormatSize(v13);
    McTemplateU0qqqq(
      PixelFormatSize >> 3,
      (unsigned int)&EVTDESC_ETWGUID_BITMAPCOPYEVENT,
      v39.right - v39.left,
      v39.bottom - v39.top,
      v13,
      PixelFormatSize >> 3);
  }
  CD3DDeviceLevel1::UpdateSubresource((CD3DDeviceLevel1 *)v7, v33, &v39, v36, v32, v30, 0);
  valid = CSecondaryBitmap::AddValidRect(this, a2);
  v12 = valid;
  if ( valid < 0 )
  {
    v29 = 278;
    goto LABEL_31;
  }
LABEL_15:
  ReleaseInterfaceNoNULL<IWICBitmap>((__int64)v33);
  if ( v34 )
    ((void (__fastcall *)(struct IUnknown *))v34->lpVtbl->Release)(v34);
  ReleaseInterfaceNoNULL<IWICBitmap>((__int64)v31);
  return v12;
}
