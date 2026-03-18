/*
 * XREFs of EmboldPoint @ 0x1C02C55D8
 * Callers:
 *     fsg_Embold @ 0x1C02C6F38 (fsg_Embold.c)
 * Callees:
 *     Mul26Dot6 @ 0x1C02BD3AC (Mul26Dot6.c)
 *     Intersect26Dot6 @ 0x1C02C5958 (Intersect26Dot6.c)
 *     itrp_Normalize @ 0x1C02D7070 (itrp_Normalize.c)
 */

__int64 __fastcall EmboldPoint(
        unsigned int a1,
        unsigned int a2,
        int a3,
        int a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        _QWORD *a13)
{
  int v13; // ebx
  int v15; // r8d
  unsigned int v16; // r12d
  int v17; // ecx
  int v18; // r9d
  __int64 v19; // rdx
  unsigned int v20; // edi
  int v21; // r14d
  int v22; // esi
  int v23; // r15d
  int v24; // r13d
  int v25; // edi
  int v26; // esi
  int v27; // edx
  int v28; // esi
  int v29; // edx
  int v30; // r14d
  int v31; // r12d
  int v32; // edx
  int v33; // eax
  int v34; // edx
  int v35; // r14d
  int v36; // edx
  int v37; // eax
  _QWORD *v38; // r9
  __int64 v39; // r8
  int v40; // edx
  int v41; // ecx
  int v42; // r11d
  int v43; // ebx
  int v44; // r10d
  int v45; // ecx
  __int64 result; // rax
  __int64 i; // r10
  __int64 v48; // rcx
  __int64 v49; // [rsp+30h] [rbp-10h]
  int v52; // [rsp+90h] [rbp+50h] BYREF

  v52 = a3;
  v13 = a6;
  v15 = a6;
  v16 = a1;
  v17 = a5;
  v18 = a7;
  v19 = (unsigned int)(a6 - a5);
  v20 = a7 - a6;
  v21 = HIDWORD(a6) - HIDWORD(a7);
  v22 = HIDWORD(a5) - HIDWORD(a6);
  if ( a4 )
  {
    v22 = HIDWORD(a6) - HIDWORD(a5);
    v19 = (unsigned int)(a5 - a6);
    v21 = HIDWORD(a7) - HIDWORD(a6);
    v20 = a6 - a7;
  }
  v23 = a11;
  v24 = a9;
  v49 = a6;
  if ( !v52 )
  {
    itrp_Normalize((unsigned int)v22, v19, &v52);
    a11 = (__int16)v52 >> 8;
    v28 = SHIWORD(v52) >> 8;
    itrp_Normalize((unsigned int)v21, v20, &v52);
    v25 = a8;
    v29 = a8;
    v30 = (__int16)v52 >> 8;
    v31 = SHIWORD(v52) >> 8;
    if ( a11 <= 0 )
      v29 = v24;
    v52 = Mul26Dot6(a11, v29);
    v32 = v23;
    if ( v28 >= 0 )
      v32 = a10;
    v33 = Mul26Dot6(v28, v32);
    v34 = v25;
    LODWORD(a5) = v52 + a5;
    HIDWORD(a5) += v33;
    HIDWORD(v49) += v33;
    v26 = v52 + v13;
    LODWORD(v49) = v52 + v13;
    if ( v30 <= 0 )
      v34 = v24;
    v35 = Mul26Dot6(v30, v34);
    v36 = v23;
    if ( v31 >= 0 )
      v36 = a10;
    v37 = Mul26Dot6(v31, v36);
    HIDWORD(a7) += v37;
    v13 += v35;
    LODWORD(a7) = v35 + a7;
    v18 = a7;
    v27 = v37 + HIDWORD(a6);
    v17 = a5;
    v16 = a1;
    HIDWORD(a6) += v37;
    goto LABEL_18;
  }
  v25 = a8;
  if ( v22 <= 0 )
  {
    v26 = a6;
  }
  else
  {
    v26 = a6 + a8;
    LODWORD(v49) = a6 + a8;
  }
  v27 = HIDWORD(a6);
  if ( v21 > 0 )
  {
    v13 = a8 + a6;
LABEL_18:
    LODWORD(a6) = v13;
    v15 = v13;
  }
  if ( v26 == v13 && HIDWORD(v49) == v27 )
  {
    v38 = a13;
    v39 = 4LL * v16;
    *(_DWORD *)(v39 + *a13) = v13;
    *(_DWORD *)(v39 + v38[1]) = v27;
  }
  else
  {
    Intersect26Dot6(v17, v49, v15, v18, (__int64)&a6);
    v38 = a13;
    v40 = a6;
    v41 = HIDWORD(a6);
    v39 = 4LL * v16;
    v42 = *(_DWORD *)(v39 + *a13);
    v43 = *(_DWORD *)(v39 + a13[1]);
    v44 = HIDWORD(a6) - v43;
    if ( (int)a6 - v42 > v25 )
      v40 = v42 + v25;
    if ( (int)a6 - v42 < -v24 )
      v40 = v42 - v24;
    if ( v44 < -v23 )
      v41 = v43 - v23;
    if ( v44 > a10 )
      v41 = v43 + v23;
    *(_DWORD *)(v39 + *a13) = v40;
    *(_DWORD *)(v39 + v38[1]) = v41;
  }
  v45 = a12;
  *(_DWORD *)(v39 + *v38) += v24;
  *(_DWORD *)(v38[1] + v39) += v23;
  result = v38[1];
  if ( *(_DWORD *)(result + v39) < v45 )
    *(_DWORD *)(result + v39) = v45;
  if ( v16 != a2 )
  {
    for ( i = v16 + 1; (unsigned int)i <= a2; i = (unsigned int)(i + 1) )
    {
      *(_DWORD *)(*v38 + 4 * i) = *(_DWORD *)(*v38 + v39);
      v48 = v38[1];
      result = *(unsigned int *)(v48 + v39);
      *(_DWORD *)(v48 + 4 * i) = result;
    }
  }
  return result;
}
