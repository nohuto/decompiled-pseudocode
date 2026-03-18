/*
 * XREFs of ?GetBits@CHwDisplayRenderTarget@@UEAAJAEBUMilRectF@@PEAVIBitmapDest@@HH@Z @ 0x18003AB40
 * Callers:
 *     ?GetBits@CHwDisplayRenderTarget@@WLA@EAAJAEBUMilRectF@@PEAVIBitmapDest@@HH@Z @ 0x1800D63E0 (-GetBits@CHwDisplayRenderTarget@@WLA@EAAJAEBUMilRectF@@PEAVIBitmapDest@@HH@Z.c)
 * Callees:
 *     ?GetBits@CHwSurfaceRenderTarget@@UEAAJAEBUMilRectF@@PEAVIBitmapDest@@HH@Z @ 0x180049AF8 (-GetBits@CHwSurfaceRenderTarget@@UEAAJAEBUMilRectF@@PEAVIBitmapDest@@HH@Z.c)
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x18004C100 (-Release@CMILPoolResource@@UEAAKXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ?CopyPixelsToSlicerBitmap@CD3DDeviceLevel1@@QEAAJPEAVCD3DSurface@@AEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAVISlicerBitmap@@HH@Z @ 0x18019605C (-CopyPixelsToSlicerBitmap@CD3DDeviceLevel1@@QEAAJPEAVCD3DSurface@@AEBV-$TMilRect@IUMilRectU@@UNo.c)
 */

__int64 __fastcall CHwDisplayRenderTarget::GetBits(
        CHwDisplayRenderTarget *this,
        const struct MilRectF *a2,
        struct IBitmapDest *a3,
        int a4,
        int a5)
{
  unsigned int v5; // edi
  float v6; // xmm0_4
  float v11; // xmm0_4
  float v12; // eax
  double v13; // xmm0_8
  int v14; // eax
  int v15; // eax
  __int64 v16; // rbx
  int Bits; // eax
  __int64 *v18; // rdx
  __int64 *v19; // r8
  __int64 v20; // r9
  _QWORD *v22; // rcx
  _QWORD *v23; // rax
  int v24; // eax
  __int64 v25; // r8
  __int64 v26; // rdx
  int v27; // eax
  int v28; // eax
  float v29; // [rsp+30h] [rbp-40h] BYREF
  int v30; // [rsp+34h] [rbp-3Ch] BYREF
  __int64 v31; // [rsp+38h] [rbp-38h] BYREF
  CMILPoolResource *v32; // [rsp+40h] [rbp-30h] BYREF
  __int64 v33; // [rsp+48h] [rbp-28h] BYREF
  __int64 v34; // [rsp+50h] [rbp-20h] BYREF
  _DWORD v35[4]; // [rsp+58h] [rbp-18h] BYREF

  v5 = 0;
  v6 = *(float *)a2;
  v31 = 0LL;
  v34 = 0LL;
  v32 = 0LL;
  v11 = v6 + 6291456.25;
  v29 = v11;
  v12 = v11;
  v13 = *((float *)a2 + 2);
  v35[0] = (int)(LODWORD(v12) << 10) >> 11;
  *(float *)&v13 = v13 + 6291456.25;
  v29 = *(float *)&v13;
  v14 = LODWORD(v13);
  LODWORD(v13) = *((_DWORD *)a2 + 1);
  v35[2] = v14 << 10 >> 11;
  *(float *)&v13 = *(float *)&v13 + 6291456.25;
  v29 = *(float *)&v13;
  v15 = LODWORD(v13);
  LODWORD(v13) = *((_DWORD *)a2 + 3);
  v35[1] = v15 << 10 >> 11;
  v29 = *(float *)&v13 + 6291456.25;
  v35[3] = (int)(LODWORD(v29) << 10) >> 11;
  if ( !(*(unsigned __int8 (__fastcall **)(CHwDisplayRenderTarget *))(*(_QWORD *)this + 48LL))(this) )
    goto LABEL_10;
  if ( (*(unsigned __int8 (__fastcall **)(CHwDisplayRenderTarget *))(*(_QWORD *)this + 168LL))(this) )
  {
    v5 = -2147024891;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024891, 0x184u);
    goto LABEL_10;
  }
  v16 = *((_QWORD *)this + 23);
  ++*(_DWORD *)(v16 + 936);
  if ( (**(int (__fastcall ***)(struct IBitmapDest *, GUID *, __int64 *))a3)(
         a3,
         &GUID_41f2e53e_f3fa_4c1d_b486_f0c73a31c2d4,
         &v31) >= 0 )
  {
    v30 = 0;
    v24 = (*(__int64 (__fastcall **)(__int64, __int64 *, int *, float *))(*(_QWORD *)v31 + 56LL))(v31, &v33, &v30, &v29);
    v5 = v24;
    if ( v24 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v24, 0x19Du);
      v18 = *(__int64 **)(v16 + 1016);
      v19 = (__int64 *)(v16 + 1008);
      while ( v18 != v19 && *((_DWORD *)v18 + 8) == *(_DWORD *)(v16 + 936) )
      {
        *((_DWORD *)v18 + 8) = 0;
        v18 = (__int64 *)v18[1];
      }
      goto LABEL_7;
    }
    if ( v33 != *(_QWORD *)(*((_QWORD *)this + 23) + 712LL) || v30 != *((_DWORD *)this + 29) )
      goto LABEL_5;
    v26 = LODWORD(v29);
    if ( v29 != 0.0 )
    {
      if ( (**(int (__fastcall ***)(CHwDisplayRenderTarget *, GUID *, __int64 *))this)(
             this,
             &GUID_ce9b2f4f_bd49_4551_83ee_78f4d7b06d31,
             &v34) < 0 )
        goto LABEL_5;
      v26 = LODWORD(v29);
    }
    LOBYTE(v25) = 1;
    v27 = (*(__int64 (__fastcall **)(CHwDisplayRenderTarget *, __int64, __int64, CMILPoolResource **))(*(_QWORD *)this + 224LL))(
            this,
            v26,
            v25,
            &v32);
    v5 = v27;
    if ( v27 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v27, 0x1A6u);
      v18 = *(__int64 **)(v16 + 1016);
      v19 = (__int64 *)(v16 + 1008);
      while ( v18 != v19 && *((_DWORD *)v18 + 8) == *(_DWORD *)(v16 + 936) )
      {
        *((_DWORD *)v18 + 8) = 0;
        v18 = (__int64 *)v18[1];
      }
      goto LABEL_7;
    }
    v28 = CD3DDeviceLevel1::CopyPixelsToSlicerBitmap(*((CD3DDeviceLevel1 **)this + 23), v32, a4, a5);
    v5 = v28;
    if ( v28 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v28, 0x1ACu);
      v18 = *(__int64 **)(v16 + 1016);
      v19 = (__int64 *)(v16 + 1008);
      while ( v18 != v19 && *((_DWORD *)v18 + 8) == *(_DWORD *)(v16 + 936) )
      {
        *((_DWORD *)v18 + 8) = 0;
        v18 = (__int64 *)v18[1];
      }
      goto LABEL_7;
    }
    goto LABEL_5;
  }
  (*(void (__fastcall **)(CHwDisplayRenderTarget *, _DWORD *))(*(_QWORD *)this + 240LL))(this, v35);
  Bits = CHwSurfaceRenderTarget::GetBits(this, a2, a3, a4, a5);
  v5 = Bits;
  if ( Bits < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, Bits, 0x1BDu);
    v18 = *(__int64 **)(v16 + 1016);
    v19 = (__int64 *)(v16 + 1008);
    while ( v18 != v19 && *((_DWORD *)v18 + 8) == *(_DWORD *)(v16 + 936) )
    {
      *((_DWORD *)v18 + 8) = 0;
      v18 = (__int64 *)v18[1];
    }
    goto LABEL_7;
  }
LABEL_5:
  v18 = *(__int64 **)(v16 + 1016);
  v19 = (__int64 *)(v16 + 1008);
  while ( v18 != v19 && *((_DWORD *)v18 + 8) == *(_DWORD *)(v16 + 936) )
  {
    *((_DWORD *)v18 + 8) = 0;
    v18 = (__int64 *)v18[1];
  }
LABEL_7:
  v20 = *v18;
  if ( (__int64 *)*v18 != v19 )
  {
    v22 = *(_QWORD **)(v16 + 1016);
    *v18 = (__int64)v19;
    *(_QWORD *)(v16 + 1016) = v18;
    v23 = *(_QWORD **)(v16 + 1000);
    *v23 = v20;
    *(_QWORD *)(v20 + 8) = v23;
    *(_QWORD *)(v16 + 1000) = v22;
    *v22 = v16 + 992;
  }
  --*(_DWORD *)(v16 + 936);
LABEL_10:
  if ( v32 )
    CMILPoolResource::Release(v32);
  if ( v34 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v34 + 16LL))(v34);
  if ( v31 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 16LL))(v31);
  return v5;
}
