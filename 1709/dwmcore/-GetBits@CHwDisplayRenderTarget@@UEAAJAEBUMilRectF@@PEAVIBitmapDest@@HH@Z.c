/*
 * XREFs of ?GetBits@CHwDisplayRenderTarget@@UEAAJAEBUMilRectF@@PEAVIBitmapDest@@HH@Z @ 0x18002C320
 * Callers:
 *     ?GetBits@CHwDisplayRenderTarget@@WMA@EAAJAEBUMilRectF@@PEAVIBitmapDest@@HH@Z @ 0x1800C6BF0 (-GetBits@CHwDisplayRenderTarget@@WMA@EAAJAEBUMilRectF@@PEAVIBitmapDest@@HH@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??$ReleaseInterfaceNoNULL@VCD3DSurface@@@@YAXPEAVCD3DSurface@@@Z @ 0x1800824B8 (--$ReleaseInterfaceNoNULL@VCD3DSurface@@@@YAXPEAVCD3DSurface@@@Z.c)
 *     ?GetBits@CHwSurfaceRenderTarget@@UEAAJAEBUMilRectF@@PEAVIBitmapDest@@HH@Z @ 0x18008F748 (-GetBits@CHwSurfaceRenderTarget@@UEAAJAEBUMilRectF@@PEAVIBitmapDest@@HH@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?CopyPixelsToSlicerBitmap@CD3DDeviceLevel1@@QEAAJPEAVCD3DSurface@@AEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAVISlicerBitmap@@HH@Z @ 0x1801A62C4 (-CopyPixelsToSlicerBitmap@CD3DDeviceLevel1@@QEAAJPEAVCD3DSurface@@AEBV-$TMilRect@IUMilRectU@@UNo.c)
 */

__int64 __fastcall CHwDisplayRenderTarget::GetBits(
        CD3DDeviceLevel1 **this,
        const struct MilRectF *a2,
        struct IBitmapDest *a3,
        int a4,
        int a5)
{
  unsigned int v5; // ebx
  float v6; // xmm0_4
  float v11; // xmm0_4
  float v12; // eax
  double v13; // xmm0_8
  int v14; // eax
  int v15; // eax
  int Bits; // eax
  __int64 v18; // r8
  __int64 v19; // rdx
  unsigned int v20; // [rsp+20h] [rbp-58h]
  float v21; // [rsp+30h] [rbp-48h] BYREF
  int v22; // [rsp+34h] [rbp-44h] BYREF
  __int64 v23; // [rsp+38h] [rbp-40h] BYREF
  struct CD3DSurface *v24; // [rsp+40h] [rbp-38h] BYREF
  __int64 v25; // [rsp+48h] [rbp-30h] BYREF
  __int64 v26; // [rsp+50h] [rbp-28h] BYREF
  _DWORD v27[4]; // [rsp+58h] [rbp-20h] BYREF

  v5 = 0;
  v6 = *(float *)a2;
  v23 = 0LL;
  v26 = 0LL;
  v24 = 0LL;
  v11 = v6 + 6291456.25;
  v21 = v11;
  v12 = v11;
  v13 = *((float *)a2 + 2);
  v27[0] = (int)(LODWORD(v12) << 10) >> 11;
  *(float *)&v13 = v13 + 6291456.25;
  v21 = *(float *)&v13;
  v14 = LODWORD(v13);
  LODWORD(v13) = *((_DWORD *)a2 + 1);
  v27[2] = v14 << 10 >> 11;
  *(float *)&v13 = *(float *)&v13 + 6291456.25;
  v21 = *(float *)&v13;
  v15 = LODWORD(v13);
  LODWORD(v13) = *((_DWORD *)a2 + 3);
  v27[1] = v15 << 10 >> 11;
  v21 = *(float *)&v13 + 6291456.25;
  v27[3] = (int)(LODWORD(v21) << 10) >> 11;
  if ( (*((unsigned __int8 (__fastcall **)(CD3DDeviceLevel1 **))*this + 4))(this) )
  {
    if ( (*((unsigned __int8 (__fastcall **)(CD3DDeviceLevel1 **))*this + 19))(this) )
    {
      v5 = -2147024891;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024891, 0x13Du);
      goto LABEL_5;
    }
    if ( (**(int (__fastcall ***)(struct IBitmapDest *, GUID *, __int64 *))a3)(
           a3,
           &GUID_41f2e53e_f3fa_4c1d_b486_f0c73a31c2d4,
           &v23) < 0 )
    {
      (*((void (__fastcall **)(CD3DDeviceLevel1 **, _DWORD *))*this + 32))(this, v27);
      Bits = CHwSurfaceRenderTarget::GetBits((CHwSurfaceRenderTarget *)this, a2, a3, a4, a5);
      v5 = Bits;
      if ( Bits >= 0 )
        goto LABEL_5;
      v20 = 369;
      goto LABEL_23;
    }
    v22 = 0;
    Bits = (*(__int64 (__fastcall **)(__int64, __int64 *, int *, float *))(*(_QWORD *)v23 + 56LL))(
             v23,
             &v25,
             &v22,
             &v21);
    v5 = Bits;
    if ( Bits < 0 )
    {
      v20 = 339;
LABEL_23:
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, Bits, v20);
      goto LABEL_5;
    }
    if ( v25 == *((_QWORD *)this[25] + 91) && v22 == *((_DWORD *)this + 29) )
    {
      v19 = LODWORD(v21);
      if ( v21 != 0.0 )
      {
        if ( (*(int (__fastcall **)(CD3DDeviceLevel1 **, GUID *, __int64 *))*this)(
               this,
               &GUID_ce9b2f4f_bd49_4551_83ee_78f4d7b06d31,
               &v26) < 0 )
          goto LABEL_5;
        v19 = LODWORD(v21);
      }
      LOBYTE(v18) = 1;
      Bits = (*((__int64 (__fastcall **)(CD3DDeviceLevel1 **, __int64, __int64, struct CD3DSurface **))*this + 29))(
               this,
               v19,
               v18,
               &v24);
      v5 = Bits;
      if ( Bits < 0 )
      {
        v20 = 348;
      }
      else
      {
        Bits = CD3DDeviceLevel1::CopyPixelsToSlicerBitmap(this[25], v24, a4, a5);
        v5 = Bits;
        if ( Bits >= 0 )
          goto LABEL_5;
        v20 = 354;
      }
      goto LABEL_23;
    }
  }
LABEL_5:
  ReleaseInterfaceNoNULL<CD3DSurface>(v24);
  if ( v26 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
  if ( v23 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
  return v5;
}
