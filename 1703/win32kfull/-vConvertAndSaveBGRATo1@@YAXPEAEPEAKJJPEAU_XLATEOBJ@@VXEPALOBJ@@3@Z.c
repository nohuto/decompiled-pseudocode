/*
 * XREFs of ?vConvertAndSaveBGRATo1@@YAXPEAEPEAKJJPEAU_XLATEOBJ@@VXEPALOBJ@@3@Z @ 0x1C02A02F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall vConvertAndSaveBGRATo1(
        __int64 a1,
        unsigned int *a2,
        int a3,
        int a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  int v7; // eax
  int v8; // r14d
  unsigned __int8 *v10; // r15
  int v11; // r9d
  unsigned __int8 v12; // r13
  int v13; // esi
  int v14; // r15d
  int v15; // ecx
  unsigned __int64 v16; // r13
  char NearestIndexFromColorref; // al
  char v18; // si
  char v19; // si
  char v20; // si
  char v21; // si
  char v22; // si
  char v23; // si
  unsigned __int8 v24; // r13
  char v25; // r15
  char v26; // si
  unsigned __int8 *v28; // [rsp+60h] [rbp+40h]
  unsigned int v29; // [rsp+70h] [rbp+50h]
  unsigned int v30; // [rsp+70h] [rbp+50h]
  unsigned int v31; // [rsp+70h] [rbp+50h]
  unsigned int v32; // [rsp+70h] [rbp+50h]
  unsigned int v33; // [rsp+70h] [rbp+50h]
  unsigned int v34; // [rsp+70h] [rbp+50h]
  unsigned int v35; // [rsp+70h] [rbp+50h]
  unsigned int v36; // [rsp+70h] [rbp+50h]
  unsigned int v37; // [rsp+70h] [rbp+50h]
  unsigned int v38; // [rsp+70h] [rbp+50h]

  LOBYTE(v7) = 7;
  v8 = a3;
  v10 = (unsigned __int8 *)(a1 + ((__int64)a4 >> 3));
  v28 = v10;
  v11 = a4 & 7;
  if ( v11 )
  {
    v12 = *v10;
    v13 = 7 - v11;
    v7 = 7 - v11 + 1;
    if ( v7 >= a3 )
      v7 = a3;
    v8 = a3 - v7;
    if ( v7 )
    {
      v14 = v7;
      do
      {
        v29 = *a2;
        LOBYTE(v29) = BYTE2(*a2);
        BYTE2(v29) = *a2;
        HIBYTE(v29) = 2;
        ++a2;
        LOBYTE(v7) = (unsigned __int8)ulGetNearestIndexFromColorref(a6, a7, v29, *(_DWORD *)(a6 + 28) != 0) << v13;
        v15 = v12 & ~(1 << v13--);
        v12 = v15 | v7;
        --v14;
      }
      while ( v14 );
      v10 = v28;
    }
    *v10++ = v12;
    v28 = v10;
  }
  if ( v8 >= 8 )
  {
    v16 = (unsigned __int64)(unsigned int)v8 >> 3;
    v8 -= 8 * ((unsigned int)v8 >> 3);
    do
    {
      v30 = *a2;
      LOBYTE(v30) = BYTE2(*a2);
      BYTE2(v30) = *a2;
      HIBYTE(v30) = 2;
      NearestIndexFromColorref = ulGetNearestIndexFromColorref(a6, a7, v30, *(_DWORD *)(a6 + 28) != 0);
      v31 = a2[1];
      BYTE2(v31) = v31;
      LOBYTE(v31) = BYTE2(a2[1]);
      HIBYTE(v31) = 2;
      v18 = ((unsigned __int8)ulGetNearestIndexFromColorref(a6, a7, v31, *(_DWORD *)(a6 + 28) != 0) << 6) | (NearestIndexFromColorref << 7);
      v32 = a2[2];
      LOBYTE(v32) = BYTE2(v32);
      BYTE2(v32) = a2[2];
      HIBYTE(v32) = 2;
      v19 = (32 * ulGetNearestIndexFromColorref(a6, a7, v32, *(_DWORD *)(a6 + 28) != 0)) | v18;
      v33 = a2[3];
      LOBYTE(v33) = BYTE2(v33);
      BYTE2(v33) = a2[3];
      HIBYTE(v33) = 2;
      v20 = (16 * ulGetNearestIndexFromColorref(a6, a7, v33, *(_DWORD *)(a6 + 28) != 0)) | v19;
      v34 = a2[4];
      LOBYTE(v34) = BYTE2(v34);
      BYTE2(v34) = a2[4];
      HIBYTE(v34) = 2;
      v21 = (8 * ulGetNearestIndexFromColorref(a6, a7, v34, *(_DWORD *)(a6 + 28) != 0)) | v20;
      v35 = a2[5];
      LOBYTE(v35) = BYTE2(v35);
      BYTE2(v35) = a2[5];
      HIBYTE(v35) = 2;
      v22 = (4 * ulGetNearestIndexFromColorref(a6, a7, v35, *(_DWORD *)(a6 + 28) != 0)) | v21;
      v36 = a2[6];
      LOBYTE(v36) = BYTE2(v36);
      BYTE2(v36) = a2[6];
      HIBYTE(v36) = 2;
      v23 = (2 * ulGetNearestIndexFromColorref(a6, a7, v36, *(_DWORD *)(a6 + 28) != 0)) | v22;
      v37 = a2[7];
      LOBYTE(v37) = BYTE2(v37);
      BYTE2(v37) = a2[7];
      HIBYTE(v37) = 2;
      LOBYTE(v7) = v23 | ulGetNearestIndexFromColorref(a6, a7, v37, *(_DWORD *)(a6 + 28) != 0);
      a2 += 8;
      *v10++ = v7;
      --v16;
    }
    while ( v16 );
    v28 = v10;
  }
  if ( v8 )
  {
    v24 = *v10;
    v25 = 7;
    do
    {
      v38 = *a2;
      LOBYTE(v38) = BYTE2(*a2);
      BYTE2(v38) = *a2;
      HIBYTE(v38) = 2;
      v26 = v25;
      ++a2;
      LOBYTE(v7) = (unsigned __int8)ulGetNearestIndexFromColorref(a6, a7, v38, *(_DWORD *)(a6 + 28) != 0) << v25--;
      v24 = v24 & ~(1 << v26) | v7;
      --v8;
    }
    while ( v8 );
    *v28 = v24;
  }
  return v7;
}
