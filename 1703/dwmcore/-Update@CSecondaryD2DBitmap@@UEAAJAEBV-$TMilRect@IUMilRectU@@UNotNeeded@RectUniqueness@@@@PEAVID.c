/*
 * XREFs of ?Update@CSecondaryD2DBitmap@@UEAAJAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAVID2DBitmapCacheSource@@@Z @ 0x180006ED0
 * Callers:
 *     <none>
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@VCD2DPencil@@@@YAXPEAVCD2DPencil@@@Z @ 0x180002A58 (--$ReleaseInterfaceNoNULL@VCD2DPencil@@@@YAXPEAVCD2DPencil@@@Z.c)
 *     ?HasPrefilterScale@CSecondaryD2DBitmap@@IEBA_NXZ @ 0x180006E94 (-HasPrefilterScale@CSecondaryD2DBitmap@@IEBA_NXZ.c)
 *     ?GetBitmapRect@CSecondaryBitmap@@IEBAXPEAUMilRectU@@@Z @ 0x18002524C (-GetBitmapRect@CSecondaryBitmap@@IEBAXPEAUMilRectU@@@Z.c)
 *     ?RectInBounds@CSecondaryBitmap@@IEBA_NUMilRectU@@@Z @ 0x1800253EC (-RectInBounds@CSecondaryBitmap@@IEBA_NUMilRectU@@@Z.c)
 *     ?AddValidRect@CSecondaryBitmap@@IEAAJAEBUMilRectU@@@Z @ 0x180025430 (-AddValidRect@CSecondaryBitmap@@IEAAJAEBUMilRectU@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?UpdateSubresource@CD3DDeviceLevel1@@QEAAXPEAUID3D11Resource@@PEBUtagRECT@@PEBXI_N@Z @ 0x1800798A0 (-UpdateSubresource@CD3DDeviceLevel1@@QEAAXPEAUID3D11Resource@@PEBUtagRECT@@PEBXI_N@Z.c)
 *     ?GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z @ 0x18007E584 (-GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x180099530 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ?Scale@CMILMatrix@@QEAAXMMM@Z @ 0x18009ADE8 (-Scale@CMILMatrix@@QEAAXMMM@Z.c)
 *     ?IsEmpty@?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x1800B3FEC (-IsEmpty@-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     ceilf_0 @ 0x1800D5354 (ceilf_0.c)
 *     floorf_0 @ 0x1800D536C (floorf_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     Template_qqqq @ 0x18013BCF4 (Template_qqqq.c)
 *     ?CreateScaledLock@CSecondaryD2DBitmap@@IEAAJAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAVID2DBitmapCacheSource@@PEAPEAVIBitmapLock@@@Z @ 0x18015AD90 (-CreateScaledLock@CSecondaryD2DBitmap@@IEAAJAEBV-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness.c)
 *     ?FormatConvertLock@CSecondaryD2DBitmap@@IEAAJPEAPEAVIBitmapLock@@@Z @ 0x18015B134 (-FormatConvertLock@CSecondaryD2DBitmap@@IEAAJPEAPEAVIBitmapLock@@@Z.c)
 *     ?ReleaseD3DResourceSourceAfterFrameRetiresInDriver@CD3DResourceManager@@QEAAJPEAUIUnknown@@@Z @ 0x18019AB40 (-ReleaseD3DResourceSourceAfterFrameRetiresInDriver@CD3DResourceManager@@QEAAJPEAUIUnknown@@@Z.c)
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
  int v13; // eax
  int left; // eax
  unsigned int v16; // xmm0_4
  unsigned int v17; // xmm1_4
  int right; // eax
  unsigned int v19; // xmm0_4
  int bottom; // eax
  float v21; // xmm2_4
  float v22; // xmm1_4
  unsigned int v23; // ecx
  unsigned int top; // edx
  unsigned int v25; // eax
  unsigned int v26; // r8d
  int v27; // r9d
  unsigned __int8 PixelFormatSize; // al
  char v29; // r10
  unsigned int v30; // [rsp+20h] [rbp-99h]
  bool v31; // [rsp+28h] [rbp-91h]
  struct IBitmapLock *v32; // [rsp+30h] [rbp-89h] BYREF
  enum DXGI_FORMAT v33; // [rsp+38h] [rbp-81h] BYREF
  unsigned int v34; // [rsp+3Ch] [rbp-7Dh] BYREF
  struct ID3D11Resource *v35; // [rsp+40h] [rbp-79h] BYREF
  struct IUnknown *v36; // [rsp+48h] [rbp-71h] BYREF
  _BYTE v37[8]; // [rsp+50h] [rbp-69h] BYREF
  void *v38; // [rsp+58h] [rbp-61h] BYREF
  _OWORD v39[4]; // [rsp+60h] [rbp-59h] BYREF
  __int16 v40; // [rsp+A0h] [rbp-19h]
  struct tagRECT v41; // [rsp+B0h] [rbp-9h] BYREF
  unsigned int v42; // [rsp+C0h] [rbp+7h] BYREF
  unsigned int v43; // [rsp+C4h] [rbp+Bh]
  unsigned int v44; // [rsp+C8h] [rbp+Fh]
  float v45; // [rsp+CCh] [rbp+13h]
  struct tagRECT X; // [rsp+D0h] [rbp+17h] BYREF

  v3 = *((_QWORD *)this - 30);
  v4 = (CSecondaryBitmap *)((char *)this - 264);
  v32 = 0LL;
  v36 = 0LL;
  v35 = 0LL;
  v7 = *(int **)(v3 + 24);
  if ( CSecondaryD2DBitmap::HasPrefilterScale((CSecondaryBitmap *)((char *)this - 264)) )
  {
    left = v9->left;
    v39[1] = _xmm;
    v40 = 32085;
    v39[0] = _xmm;
    *(float *)&v16 = (float)left;
    *(float *)&v17 = (float)v9->top;
    right = v9->right;
    v42 = v16;
    *(float *)&v19 = (float)right;
    bottom = v9->bottom;
    v43 = v17;
    v39[2] = _xmm;
    v21 = *((float *)this - 9) / 96.0;
    v45 = (float)bottom;
    v22 = *((float *)this - 10) / 96.0;
    v39[3] = _xmm;
    v44 = v19;
    CMILMatrix::Scale((CMILMatrix *)v39, v22, v21, 1.0);
    CMILMatrix::Transform2DBoundsHelper<0>(v39, &v42, &X);
    v41.left = (int)floorf_0(*(float *)&X.left);
    v41.top = (int)floorf_0(*(float *)&X.top);
    v41.right = (int)ceilf_0(*(float *)&X.right);
    v41.bottom = (int)ceilf_0(*(float *)&X.bottom);
    CSecondaryBitmap::GetBitmapRect(this, (struct MilRectU *)&v42);
    v23 = v41.left;
    top = v41.top;
    if ( v42 > v41.left )
      v23 = v42;
    v25 = v41.right;
    if ( v43 > v41.top )
      top = v43;
    v26 = v41.bottom;
    if ( v44 < v41.right )
      v25 = v44;
    v41.left = v23;
    if ( LODWORD(v45) < v41.bottom )
      v26 = LODWORD(v45);
    v41.bottom = v26;
    v41.top = top;
    v41.right = v25;
    if ( v25 <= v23 || v26 <= top )
    {
      v41.bottom = 0;
      v41.right = 0;
      v41.top = 0;
      v41.left = 0;
    }
  }
  else
  {
    v41 = *v9;
  }
  X = v41;
  if ( !(unsigned __int8)CSecondaryBitmap::RectInBounds(this, &X)
    || (unsigned __int8)TMilRect<unsigned int,MilRectU,RectUniqueness::NotNeeded>::IsEmpty(&v41) )
  {
    v12 = -2147024809;
    v30 = 216;
    v27 = -2147024809;
    goto LABEL_46;
  }
  if ( !CSecondaryD2DBitmap::HasPrefilterScale(v4) )
  {
    valid = (*(__int64 (__fastcall **)(__int64, struct tagRECT *, struct IBitmapLock **))(*(_QWORD *)a3 + 80LL))(
              a3,
              &v41,
              &v32);
    v12 = valid;
    if ( valid >= 0 )
      goto LABEL_7;
    v30 = 225;
LABEL_35:
    v27 = valid;
LABEL_46:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v27, v30);
    goto LABEL_16;
  }
  valid = CSecondaryD2DBitmap::CreateScaledLock(v10, &v41, a3, &v32);
  v12 = valid;
  if ( valid < 0 )
  {
    v30 = 221;
    goto LABEL_35;
  }
LABEL_7:
  valid = (*(__int64 (__fastcall **)(struct IBitmapLock *, enum DXGI_FORMAT *))(*(_QWORD *)v32 + 24LL))(v32, &v33);
  v12 = valid;
  if ( valid < 0 )
  {
    v30 = 228;
    goto LABEL_35;
  }
  v13 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)this - 19) + 32LL))((char *)this - 152);
  if ( v33 != v13 )
  {
    valid = CSecondaryD2DBitmap::FormatConvertLock(v4, &v32);
    v12 = valid;
    if ( valid < 0 )
    {
      v30 = 236;
      goto LABEL_35;
    }
  }
  valid = (*(__int64 (__fastcall **)(struct IBitmapLock *, unsigned int *))(*(_QWORD *)v32 + 56LL))(v32, &v34);
  v12 = valid;
  if ( valid < 0 )
  {
    v30 = 239;
    goto LABEL_35;
  }
  valid = (*(__int64 (__fastcall **)(struct IBitmapLock *, _BYTE *, void **))(*(_QWORD *)v32 + 64LL))(v32, v37, &v38);
  v12 = valid;
  if ( valid < 0 )
  {
    v30 = 240;
    goto LABEL_35;
  }
  if ( v7[185] < 40960
    && (*(int (__fastcall **)(struct IBitmapLock *, struct IUnknown **))(*(_QWORD *)v32 + 72LL))(v32, &v36) >= 0 )
  {
    CD3DResourceManager::ReleaseD3DResourceSourceAfterFrameRetiresInDriver((CD3DResourceManager *)(v7 + 232), v36);
  }
  valid = (***((__int64 (__fastcall ****)(_QWORD, GUID *, struct ID3D11Resource **))this - 16))(
            *((_QWORD *)this - 16),
            &GUID_dc8e63f3_d12b_4952_b47b_5e45026a862d,
            &v35);
  v12 = valid;
  if ( valid < 0 )
  {
    v30 = 259;
    goto LABEL_35;
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
  {
    PixelFormatSize = GetPixelFormatSize(v33);
    Template_qqqq(
      PixelFormatSize >> 3,
      (unsigned int)&EVTDESC_ETWGUID_BITMAPCOPYEVENT,
      v41.right - v41.left,
      v41.bottom - v41.top,
      v29,
      PixelFormatSize >> 3);
  }
  CD3DDeviceLevel1::UpdateSubresource((CD3DDeviceLevel1 *)v7, v35, &v41, v38, v34, v31);
  valid = CSecondaryBitmap::AddValidRect(this, a2);
  v12 = valid;
  if ( valid < 0 )
  {
    v30 = 277;
    goto LABEL_35;
  }
LABEL_16:
  if ( v35 )
    ((void (__fastcall *)(struct ID3D11Resource *))v35->lpVtbl->Release)(v35);
  if ( v36 )
    ((void (__fastcall *)(struct IUnknown *))v36->lpVtbl->Release)(v36);
  ReleaseInterfaceNoNULL<CD2DPencil>((__int64)v32);
  return v12;
}
