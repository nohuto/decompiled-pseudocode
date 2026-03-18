/*
 * XREFs of bInitXform @ 0x1C02387D0
 * Callers:
 *     vtfdOpenFontContext @ 0x1C0238ACC (vtfdOpenFontContext.c)
 * Callees:
 *     XFORMOBJ_iGetXform @ 0x1C009B3A0 (XFORMOBJ_iGetXform.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     bXformUnitVector @ 0x1C0238DBC (bXformUnitVector.c)
 */

__int64 __fastcall bInitXform(__int64 a1, XFORMOBJ *a2)
{
  float *v3; // rdx
  FLOATL eM12; // xmm1_4
  float *v5; // rax
  __int64 v6; // rcx
  FLOATL eM21; // xmm0_4
  FLOATL eM22; // xmm1_4
  float v9; // xmm2_4
  int v10; // eax
  int v11; // eax
  int v12; // ecx
  int v13; // eax
  float *v14; // r14
  signed int v15; // eax
  int v16; // eax
  int v17; // ecx
  __int64 v18; // rcx
  int v19; // eax
  int v21; // [rsp+30h] [rbp-30h] BYREF
  int v22; // [rsp+34h] [rbp-2Ch]
  char v23; // [rsp+38h] [rbp-28h] BYREF
  XFORML pxform; // [rsp+40h] [rbp-20h] BYREF

  XFORMOBJ_iGetXform(a2, &pxform);
  v3 = (float *)(a1 + 16);
  eM12 = pxform.eM12;
  v5 = (float *)(a1 + 16);
  *(FLOATL *)(a1 + 16) = pxform.eM11;
  v6 = 4LL;
  eM21 = pxform.eM21;
  *(FLOATL *)(a1 + 20) = eM12;
  eM22 = pxform.eM22;
  *(FLOATL *)(a1 + 24) = eM21;
  *(FLOATL *)(a1 + 28) = eM22;
  do
  {
    *v5 = *v5 * 16.0;
    ++v5;
    --v6;
  }
  while ( v6 );
  v9 = *(float *)(a1 + 20);
  if ( v9 == 0.0 && *(float *)(a1 + 24) == 0.0 )
  {
    *(_DWORD *)(a1 + 120) |= 4u;
    if ( *v3 >= 0.0 )
    {
      v10 = 32;
      if ( *(float *)(a1 + 28) >= 0.0 )
        v10 = 16;
    }
    else
    {
      *(_DWORD *)(a1 + 120) |= 8u;
      v10 = 64;
      if ( *(float *)(a1 + 28) >= 0.0 )
        v10 = 128;
    }
    *(_DWORD *)(a1 + 120) |= v10;
  }
  if ( *(float *)(a1 + 28) == 0.0 && *v3 == 0.0 )
  {
    if ( *(float *)(a1 + 24) < 0.0 )
    {
      v11 = 2048;
      v12 = 1024;
    }
    else
    {
      v11 = 512;
      v12 = 256;
    }
    if ( v9 >= 0.0 )
      v11 = v12;
    *(_DWORD *)(a1 + 120) |= v11;
  }
  v13 = *(_DWORD *)(a1 + 120);
  v22 = 0;
  v14 = (float *)(a1 + 40);
  v21 = 1;
  bXformUnitVector(
    (unsigned int)&v21,
    (unsigned int)&pxform,
    a1 + 52,
    a1 + 44,
    (a1 + 64) & -(__int64)((v13 & 1) != 0),
    a1 + 40);
  *(_DWORD *)(a1 + 88) = 0;
  if ( (*(_DWORD *)(a1 + 120) & 1) != 0 )
  {
    v15 = ((int)*v14 + 8) & 0xFFFFFFF0;
    *(_DWORD *)(a1 + 88) = v15;
    if ( v15 >= 24 )
    {
      *(_DWORD *)(a1 + 80) = (int)*(float *)(a1 + 52);
      *(_DWORD *)(a1 + 84) = (int)*(float *)(a1 + 56);
    }
    else
    {
      v16 = (*(_DWORD *)(a1 + 68) + 8) >> 4;
      v17 = (*(_DWORD *)(a1 + 76) + 8) >> 4;
      *(_DWORD *)(a1 + 88) = 16;
      *(_DWORD *)(a1 + 80) = v16;
      *(_DWORD *)(a1 + 84) = v17;
      if ( v16 == v17 || v16 == -v17 )
        *(_DWORD *)(a1 + 84) = 0;
      *(_DWORD *)(a1 + 84) *= 16;
      *(_DWORD *)(a1 + 80) = 16 * v16;
    }
  }
  v21 = 0;
  v22 = -1;
  bXformUnitVector((unsigned int)&v21, (unsigned int)&pxform, (unsigned int)&v23, a1 + 100, 0LL, a1 + 96);
  v18 = *(_QWORD *)(a1 + 8);
  *(_DWORD *)(a1 + 32) = (int)(float)((float)*(__int16 *)(v18 + 60) * *(float *)(a1 + 96));
  v19 = *(__int16 *)(v18 + 62);
  *(_DWORD *)(a1 + 92) = 0;
  *(_DWORD *)(a1 + 36) = -(int)(float)((float)v19 * *(float *)(a1 + 96));
  if ( (*(_DWORD *)(a1 + 120) & 2) != 0 )
    *(_DWORD *)(a1 + 92) = (8
                          - (int)(float)((float)((float)(*(__int16 *)(v18 + 62) + 1 + *(__int16 *)(v18 + 60)) * *v14)
                                       * -0.5)) & 0xFFFFFFF0;
  return 1LL;
}
