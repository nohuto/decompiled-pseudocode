/*
 * XREFs of ?GetBits@CHwSurfaceRenderTarget@@UEAAJAEBUMilRectF@@PEAVIBitmapDest@@HH@Z @ 0x180049AF8
 * Callers:
 *     ?GetBits@CHwDisplayRenderTarget@@UEAAJAEBUMilRectF@@PEAVIBitmapDest@@HH@Z @ 0x18003AB40 (-GetBits@CHwDisplayRenderTarget@@UEAAJAEBUMilRectF@@PEAVIBitmapDest@@HH@Z.c)
 *     ?GetBits@CHwTextureRenderTarget@@UEAAJAEBUMilRectF@@PEAVIBitmapDest@@HH@Z @ 0x18019BCF0 (-GetBits@CHwTextureRenderTarget@@UEAAJAEBUMilRectF@@PEAVIBitmapDest@@HH@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?CopyPixelsToBitmap@CD3DSurface@@QEAAJAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@IPEBV2@PEAVIBitmapDest@@HH@Z @ 0x180072AE4 (-CopyPixelsToBitmap@CD3DSurface@@QEAAJAEBV-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@IP.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CHwSurfaceRenderTarget::GetBits(
        struct CD3DSurface **this,
        const struct MilRectF *a2,
        struct IBitmapDest *a3,
        int a4,
        int a5)
{
  unsigned int v8; // edi
  float v9; // xmm0_4
  float v10; // eax
  double v11; // xmm0_8
  int v12; // eax
  int v13; // eax
  int v14; // eax
  __int64 v15; // rbx
  int v16; // eax
  __int64 *v17; // rdx
  __int64 *v18; // r8
  __int64 v19; // r9
  _QWORD *v21; // rcx
  _QWORD *v22; // rax
  __int64 v23; // [rsp+40h] [rbp-48h] BYREF
  struct tagRECT v24; // [rsp+48h] [rbp-40h] BYREF

  v8 = 0;
  v9 = *(float *)a2 + 6291456.25;
  *(float *)&v23 = v9;
  v10 = v9;
  v11 = *((float *)a2 + 2);
  v24.left = (int)(LODWORD(v10) << 10) >> 11;
  *(float *)&v11 = v11 + 6291456.25;
  LODWORD(v23) = LODWORD(v11);
  v12 = LODWORD(v11);
  LODWORD(v11) = *((_DWORD *)a2 + 1);
  v24.right = v12 << 10 >> 11;
  *(float *)&v11 = *(float *)&v11 + 6291456.25;
  LODWORD(v23) = LODWORD(v11);
  v13 = LODWORD(v11);
  LODWORD(v11) = *((_DWORD *)a2 + 3);
  v24.top = v13 << 10 >> 11;
  *(float *)&v23 = *(float *)&v11 + 6291456.25;
  v24.bottom = (int)((_DWORD)v23 << 10) >> 11;
  if ( (*((unsigned __int8 (__fastcall **)(struct CD3DSurface **))*this + 6))(this) )
  {
    if ( (*((unsigned __int8 (__fastcall **)(struct CD3DSurface **))*this + 21))(this) )
    {
      v8 = -2147024891;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024891, 0x325u);
    }
    else
    {
      v14 = (*((__int64 (__fastcall **)(struct CD3DSurface **, __int64 *))*this + 26))(this, &v23);
      v8 = v14;
      if ( v14 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, 0x32Bu);
      }
      else
      {
        v15 = v23;
        ++*(_DWORD *)(v23 + 936);
        v16 = CD3DSurface::CopyPixelsToBitmap(this[21], &v24, (__int64)a3, a4, a5);
        v8 = v16;
        if ( v16 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v16, 0x334u);
          v17 = *(__int64 **)(v15 + 1016);
          v18 = (__int64 *)(v15 + 1008);
          while ( v17 != v18 && *((_DWORD *)v17 + 8) == *(_DWORD *)(v15 + 936) )
          {
            *((_DWORD *)v17 + 8) = 0;
            v17 = (__int64 *)v17[1];
          }
        }
        else
        {
          v17 = *(__int64 **)(v15 + 1016);
          v18 = (__int64 *)(v15 + 1008);
          while ( v17 != v18 && *((_DWORD *)v17 + 8) == *(_DWORD *)(v15 + 936) )
          {
            *((_DWORD *)v17 + 8) = 0;
            v17 = (__int64 *)v17[1];
          }
        }
        v19 = *v17;
        if ( (__int64 *)*v17 != v18 )
        {
          v21 = *(_QWORD **)(v15 + 1016);
          *v17 = (__int64)v18;
          *(_QWORD *)(v15 + 1016) = v17;
          v22 = *(_QWORD **)(v15 + 1000);
          *v22 = v19;
          *(_QWORD *)(v19 + 8) = v22;
          *(_QWORD *)(v15 + 1000) = v21;
          *v21 = v15 + 992;
        }
        --*(_DWORD *)(v15 + 936);
      }
    }
  }
  return v8;
}
