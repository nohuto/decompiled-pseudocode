/*
 * XREFs of bInitXform @ 0x1C0239D80
 * Callers:
 *     vtfdOpenFontContext @ 0x1C023A08C (vtfdOpenFontContext.c)
 * Callees:
 *     XFORMOBJ_iGetXform @ 0x1C00B8450 (XFORMOBJ_iGetXform.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     bXformUnitVector @ 0x1C023A380 (bXformUnitVector.c)
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
  int v10; // ecx
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // ecx
  int v15; // eax
  float *v16; // r14
  signed int v17; // eax
  int v18; // eax
  int v19; // ecx
  __int64 v20; // rcx
  float v21; // xmm1_4
  int v22; // eax
  int v24; // [rsp+30h] [rbp-30h] BYREF
  int v25; // [rsp+34h] [rbp-2Ch]
  char v26; // [rsp+38h] [rbp-28h] BYREF
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
      v12 = 32;
      if ( *(float *)(a1 + 28) >= 0.0 )
        v12 = 16;
      *(_DWORD *)(a1 + 120) |= v12;
    }
    else
    {
      v10 = *(_DWORD *)(a1 + 120) | 8;
      *(_DWORD *)(a1 + 120) = v10;
      v11 = 64;
      if ( *(float *)(a1 + 28) >= 0.0 )
        v11 = 128;
      *(_DWORD *)(a1 + 120) = v11 | v10;
    }
  }
  if ( *(float *)(a1 + 28) == 0.0 && *v3 == 0.0 )
  {
    if ( *(float *)(a1 + 24) < 0.0 )
    {
      v13 = 2048;
      v14 = 1024;
    }
    else
    {
      v13 = 512;
      v14 = 256;
    }
    if ( v9 >= 0.0 )
      v13 = v14;
    *(_DWORD *)(a1 + 120) |= v13;
  }
  v15 = *(_DWORD *)(a1 + 120);
  v25 = 0;
  v16 = (float *)(a1 + 40);
  v24 = 1;
  bXformUnitVector(
    (unsigned int)&v24,
    (unsigned int)&pxform,
    a1 + 52,
    a1 + 44,
    (a1 + 64) & -(__int64)((v15 & 1) != 0),
    a1 + 40);
  *(_DWORD *)(a1 + 88) = 0;
  if ( (*(_DWORD *)(a1 + 120) & 1) != 0 )
  {
    v17 = ((int)*v16 + 8) & 0xFFFFFFF0;
    *(_DWORD *)(a1 + 88) = v17;
    if ( v17 >= 24 )
    {
      *(_DWORD *)(a1 + 80) = (int)*(float *)(a1 + 52);
      *(_DWORD *)(a1 + 84) = (int)*(float *)(a1 + 56);
    }
    else
    {
      v18 = (*(_DWORD *)(a1 + 68) + 8) >> 4;
      v19 = (*(_DWORD *)(a1 + 76) + 8) >> 4;
      *(_DWORD *)(a1 + 88) = 16;
      *(_DWORD *)(a1 + 80) = v18;
      *(_DWORD *)(a1 + 84) = v19;
      if ( v18 == v19 || v18 == -v19 )
        *(_DWORD *)(a1 + 84) = 0;
      *(_DWORD *)(a1 + 84) *= 16;
      *(_DWORD *)(a1 + 80) = 16 * v18;
    }
  }
  v24 = 0;
  v25 = -1;
  bXformUnitVector((unsigned int)&v24, (unsigned int)&pxform, (unsigned int)&v26, a1 + 100, 0LL, a1 + 96);
  v20 = *(_QWORD *)(a1 + 8);
  v21 = *(float *)(a1 + 96);
  *(_DWORD *)(a1 + 32) = (int)(float)((float)*(__int16 *)(v20 + 60) * v21);
  v22 = *(__int16 *)(v20 + 62);
  *(_DWORD *)(a1 + 92) = 0;
  *(_DWORD *)(a1 + 36) = -(int)(float)((float)v22 * v21);
  if ( (*(_DWORD *)(a1 + 120) & 2) != 0 )
    *(_DWORD *)(a1 + 92) = (8
                          - (int)(float)((float)((float)(*(__int16 *)(v20 + 62) + 1 + *(__int16 *)(v20 + 60)) * *v16)
                                       * -0.5)) & 0xFFFFFFF0;
  return 1LL;
}
