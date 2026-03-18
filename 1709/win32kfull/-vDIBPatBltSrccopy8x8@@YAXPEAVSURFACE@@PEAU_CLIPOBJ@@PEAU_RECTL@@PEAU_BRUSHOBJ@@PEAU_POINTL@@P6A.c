/*
 * XREFs of ?vDIBPatBltSrccopy8x8@@YAXPEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_RECTL@@PEAU_BRUSHOBJ@@PEAU_POINTL@@P6AXPEAU_PATBLTFRAME@@H@Z@Z @ 0x1C029DAA4
 * Callers:
 *     EngBitBlt @ 0x1C002DC60 (EngBitBlt.c)
 * Callees:
 *     ?bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z @ 0x1C002D16C (-bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z.c)
 *     ?cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z @ 0x1C002D380 (-cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0145690 (_guard_dispatch_icall_nop.c)
 */

void __fastcall vDIBPatBltSrccopy8x8(
        struct SURFACE *a1,
        struct _CLIPOBJ *a2,
        __m128i *a3,
        struct _BRUSHOBJ *a4,
        struct _POINTL *a5,
        void (*a6)(struct _PATBLTFRAME *, int))
{
  _QWORD *pvRbrush; // rcx
  int v9; // r14d
  int v10; // edx
  __int64 *v11; // rcx
  LONG v12; // eax
  LONG v13; // eax
  LONG v14; // eax
  int v15; // eax
  int v16; // eax
  LONG v17; // edx
  LONG v18; // ecx
  LONG v19; // eax
  __int32 v20; // r8d
  LONG v21; // r9d
  _QWORD v22[2]; // [rsp+50h] [rbp-1C8h] BYREF
  int v23; // [rsp+60h] [rbp-1B8h]
  int v24; // [rsp+64h] [rbp-1B4h]
  __m128i *p_rclBounds; // [rsp+68h] [rbp-1B0h]
  int v26; // [rsp+70h] [rbp-1A8h]
  int v27; // [rsp+74h] [rbp-1A4h]
  unsigned int v28; // [rsp+90h] [rbp-188h] BYREF
  __m128i rclBounds; // [rsp+94h] [rbp-184h] BYREF

  v22[0] = *((_QWORD *)a1 + 10);
  v23 = *((_DWORD *)a1 + 22);
  pvRbrush = a4[1].pvRbrush;
  v22[1] = pvRbrush[4];
  v24 = *((_DWORD *)pvRbrush + 7);
  v26 = a5->x & 7;
  v27 = a5->y & 7;
  if ( a2 && a2->iDComplexity )
  {
    if ( a2->iDComplexity == 1 )
    {
      rclBounds = (__m128i)a2->rclBounds;
      v17 = _mm_cvtsi128_si32(rclBounds);
      if ( v17 <= a3->m128i_i32[0] )
        v17 = a3->m128i_i32[0];
      rclBounds.m128i_i32[0] = v17;
      v18 = rclBounds.m128i_i32[2];
      if ( rclBounds.m128i_i32[2] >= a3->m128i_i32[2] )
        v18 = a3->m128i_i32[2];
      rclBounds.m128i_i32[2] = v18;
      v19 = a3->m128i_i32[1];
      v20 = rclBounds.m128i_i32[1];
      if ( rclBounds.m128i_i32[1] <= v19 )
        v20 = v19;
      rclBounds.m128i_i32[1] = v20;
      v21 = rclBounds.m128i_i32[3];
      if ( rclBounds.m128i_i32[3] >= a3->m128i_i32[3] )
        v21 = a3->m128i_i32[3];
      rclBounds.m128i_i32[3] = v21;
      if ( v17 < v18 && v20 < v21 )
      {
        p_rclBounds = &rclBounds;
        ((void (__fastcall *)(_QWORD *, __int64))a6)(v22, 1LL);
      }
    }
    else if ( a2->iDComplexity == 3 )
    {
      XCLIPOBJ::cEnumStart((XCLIPOBJ *)a2, 0, 0, 4u, 0x14u);
      do
      {
        v9 = XCLIPOBJ::bEnum((XCLIPOBJ *)a2, 0x144u, (char *)&v28, 0LL);
        if ( v28 - 1 <= 0x13 )
        {
          v10 = 0;
          v11 = &rclBounds.m128i_i64[1];
          while ( v10 < (int)v28 )
          {
            if ( *((_DWORD *)v11 - 2) < a3->m128i_i32[0] )
              *((_DWORD *)v11 - 2) = a3->m128i_i32[0];
            v12 = a3->m128i_i32[2];
            if ( *(_DWORD *)v11 > v12 )
              *(_DWORD *)v11 = v12;
            v13 = a3->m128i_i32[1];
            if ( *((_DWORD *)v11 - 1) < v13 )
              *((_DWORD *)v11 - 1) = v13;
            v14 = a3->m128i_i32[3];
            if ( *((_DWORD *)v11 + 1) > v14 )
              *((_DWORD *)v11 + 1) = v14;
            v15 = *((_DWORD *)v11 - 2);
            if ( *(_DWORD *)v11 < v15 )
              *(_DWORD *)v11 = v15;
            v16 = *((_DWORD *)v11 - 1);
            if ( *((_DWORD *)v11 + 1) < v16 )
              *((_DWORD *)v11 + 1) = v16;
            ++v10;
            v11 += 2;
          }
          p_rclBounds = &rclBounds;
          ((void (__fastcall *)(_QWORD *, _QWORD))a6)(v22, v28);
        }
      }
      while ( v9 );
    }
  }
  else
  {
    p_rclBounds = a3;
    ((void (__fastcall *)(_QWORD *, __int64))a6)(v22, 1LL);
  }
}
