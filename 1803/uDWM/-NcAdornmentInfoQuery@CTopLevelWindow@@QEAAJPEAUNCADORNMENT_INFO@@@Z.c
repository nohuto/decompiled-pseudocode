/*
 * XREFs of ?NcAdornmentInfoQuery@CTopLevelWindow@@QEAAJPEAUNCADORNMENT_INFO@@@Z @ 0x180003F4C
 * Callers:
 *     ?GetTitleBarInfo@CTopLevelWindow@@QEAAXPEAUtagTITLEBARINFOEX@@PEA_N@Z @ 0x1800040DC (-GetTitleBarInfo@CTopLevelWindow@@QEAAXPEAUtagTITLEBARINFOEX@@PEA_N@Z.c)
 *     ?GetNcAdornmentInfoAttribute@CWindowList@@AEAAJPEAUHWND__@@PEAUNCADORNMENT_INFO@@@Z @ 0x180084A84 (-GetNcAdornmentInfoAttribute@CWindowList@@AEAAJPEAUHWND__@@PEAUNCADORNMENT_INFO@@@Z.c)
 * Callees:
 *     ?D3DXVec2TransformCoord@@YAPEAUD2DVector2@@PEAU1@PEBU1@PEBUD2DMatrix@@@Z @ 0x180004364 (-D3DXVec2TransformCoord@@YAPEAUD2DVector2@@PEAU1@PEBU1@PEBUD2DMatrix@@@Z.c)
 *     ?GetLocalToWorldTransform@CVisual@@QEAAXPEAUD2DMatrix@@@Z @ 0x180004540 (-GetLocalToWorldTransform@CVisual@@QEAAXPEAUD2DMatrix@@@Z.c)
 *     __security_check_cookie @ 0x180048EF0 (__security_check_cookie.c)
 */

__int64 __fastcall CTopLevelWindow::NcAdornmentInfoQuery(CTopLevelWindow *this, struct NCADORNMENT_INFO *a2)
{
  unsigned int v4; // r14d
  unsigned int *v5; // rbx
  __m128i v6; // xmm1
  __m128i v7; // xmm0
  float v8; // xmm5_4
  float v9; // xmm1_4
  __int64 v10; // r8
  RECT v11; // xmm0
  float v13; // [rsp+30h] [rbp-29h] BYREF
  float v14; // [rsp+34h] [rbp-25h]
  float v15; // [rsp+38h] [rbp-21h] BYREF
  float v16; // [rsp+3Ch] [rbp-1Dh]
  RECT rcSrc2; // [rsp+40h] [rbp-19h] BYREF
  _BYTE v18[64]; // [rsp+50h] [rbp-9h] BYREF

  v4 = -2147024809;
  if ( *(_DWORD *)a2 )
  {
    switch ( *(_DWORD *)a2 )
    {
      case 1:
        v5 = (unsigned int *)*((_QWORD *)this + 61);
        break;
      case 2:
        v5 = (unsigned int *)*((_QWORD *)this + 62);
        break;
      case 3:
        v5 = (unsigned int *)*((_QWORD *)this + 63);
        break;
      default:
        if ( *(_DWORD *)a2 != 4 || (*((_DWORD *)this + 146) & 0x10000) == 0 )
          return v4;
        v5 = (unsigned int *)*((_QWORD *)this + 65);
        break;
    }
  }
  else
  {
    v5 = (unsigned int *)*((_QWORD *)this + 60);
  }
  if ( v5 )
  {
    CVisual::GetLocalToWorldTransform((CVisual *)v5, (struct D2DMatrix *)v18);
    v6 = _mm_cvtsi32_si128(v5[30]);
    v7 = _mm_cvtsi32_si128(v5[31]);
    v15 = 0.0;
    v16 = 0.0;
    LODWORD(v13) = _mm_cvtepi32_ps(v6).m128_u32[0];
    LODWORD(v14) = _mm_cvtepi32_ps(v7).m128_u32[0];
    D3DXVec2TransformCoord((struct D2DVector2 *)&v15, (const struct D2DVector2 *)&v15, (const struct D2DMatrix *)v18);
    D3DXVec2TransformCoord((struct D2DVector2 *)&v13, (const struct D2DVector2 *)&v13, (const struct D2DMatrix *)v18);
    v8 = v15;
    v9 = v13;
    if ( v15 > v13 )
    {
      v9 = v15;
      v8 = v13;
    }
    SetRect((LPRECT)((char *)a2 + 4), (int)v8, (int)v16, (int)v9, (int)v14);
    v4 = 0;
    v10 = *((_BYTE *)this + 240) & 8 | 0x136LL;
    v11 = *(RECT *)(*((_QWORD *)this + 90) + 48LL);
    rcSrc2 = v11;
    rcSrc2.left = *(_DWORD *)((char *)this + 2 * v10) + _mm_cvtsi128_si32((__m128i)v11);
    rcSrc2.right = v11.right - *(_DWORD *)((char *)this + 2 * v10 + 4);
    rcSrc2.top = *(_DWORD *)((char *)this + 2 * v10 + 8) + v11.top;
    rcSrc2.bottom = v11.bottom - *(_DWORD *)((char *)this + 2 * v10 + 12);
    IntersectRect((LPRECT)((char *)a2 + 4), (const RECT *)((char *)a2 + 4), &rcSrc2);
  }
  return v4;
}
