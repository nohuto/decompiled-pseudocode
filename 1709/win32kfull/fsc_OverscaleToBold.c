/*
 * XREFs of fsc_OverscaleToBold @ 0x1C02C5F4C
 * Callers:
 *     fs_ContourScan @ 0x1C02B4134 (fs_ContourScan.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     memset @ 0x1C0145A00 (memset.c)
 *     EmboldenOverscaleConst @ 0x1C02C5C58 (EmboldenOverscaleConst.c)
 *     FindNext @ 0x1C02C5D34 (FindNext.c)
 */

char __fastcall fsc_OverscaleToBold(unsigned __int16 a1, __int64 a2, unsigned __int16 *a3)
{
  unsigned __int16 *v3; // r14
  unsigned __int16 v4; // bx
  __int64 v5; // rax
  unsigned __int64 v6; // r8
  __int64 v7; // r10
  __int64 v8; // rdi
  unsigned __int64 v9; // r9
  unsigned __int64 i; // rcx
  unsigned __int64 v11; // r15
  unsigned __int16 v12; // r11
  __int64 v13; // rcx
  unsigned __int64 v14; // rsi
  _BYTE *v15; // r9
  _BYTE *v16; // rdi
  _BYTE *v17; // r10
  char v18; // r8
  __int64 v19; // rcx
  unsigned __int8 v20; // r9
  __int64 v21; // rdi
  _BYTE *v22; // rsi
  int v23; // r15d
  unsigned __int16 v24; // r14
  unsigned __int8 *v25; // r8
  unsigned __int16 v26; // r12
  BOOL v27; // r10d
  __int16 v28; // dx
  unsigned __int8 *v29; // r11
  unsigned __int8 v30; // al
  unsigned __int16 v31; // cx
  unsigned __int16 v32; // dx
  int Next; // eax
  _BYTE *v34; // r11
  int v35; // ecx
  unsigned int v36; // eax
  unsigned __int8 v37; // dl
  unsigned __int64 v38; // r12
  unsigned __int16 v39; // r8
  unsigned __int16 v40; // bx
  unsigned __int8 *v41; // rsi
  __int64 v42; // rdi
  unsigned __int64 *v43; // r14
  unsigned __int8 v44; // r15
  unsigned __int64 v45; // rdx
  char v46; // r10
  char v47; // r9
  __int64 v48; // r13
  size_t v49; // r9
  size_t v50; // r8
  char result; // al
  _BYTE v52[2]; // [rsp+40h] [rbp-C0h] BYREF
  unsigned __int16 v53; // [rsp+42h] [rbp-BEh] BYREF
  unsigned __int16 v54; // [rsp+44h] [rbp-BCh]
  unsigned __int16 v55; // [rsp+46h] [rbp-BAh]
  unsigned __int16 v56; // [rsp+48h] [rbp-B8h]
  int v57; // [rsp+4Ch] [rbp-B4h]
  unsigned __int8 *v58; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v59; // [rsp+58h] [rbp-A8h]
  _BYTE *v60; // [rsp+60h] [rbp-A0h]
  _BYTE *v61; // [rsp+68h] [rbp-98h]
  _BYTE *v62; // [rsp+70h] [rbp-90h]
  unsigned __int64 v63; // [rsp+78h] [rbp-88h]
  unsigned __int64 v64; // [rsp+80h] [rbp-80h]
  unsigned __int64 v65; // [rsp+88h] [rbp-78h]
  unsigned __int16 *v66; // [rsp+90h] [rbp-70h]
  __int64 v67; // [rsp+98h] [rbp-68h]
  __int64 v68; // [rsp+A0h] [rbp-60h]
  _QWORD v69[48]; // [rsp+B0h] [rbp-50h] BYREF
  _BYTE v70[48]; // [rsp+230h] [rbp+130h] BYREF

  v3 = a3;
  v4 = *(_WORD *)(a2 + 2) - *(_WORD *)(a2 + 4);
  v66 = a3;
  v56 = v4;
  if ( a1 > 0x18u || v4 > 0x30u )
    return EmboldenOverscaleConst((unsigned __int16 *)a2);
  LOWORD(v5) = *(_WORD *)a2;
  v6 = *(_QWORD *)(a2 + 40);
  v7 = *((_QWORD *)v3 + 5);
  v55 = *(_WORD *)a2;
  if ( v4 )
  {
    v8 = v4;
    do
    {
      v9 = (unsigned __int16)v5;
      if ( v6 > (unsigned __int16)v5 + v6 )
        v9 = 0LL;
      if ( v9 )
      {
        for ( i = 0LL; i < v9; ++i )
          *(_BYTE *)(i + v7) = *(_BYTE *)(i + v6);
      }
      v7 += (unsigned __int16)v5;
      v6 += (unsigned __int16)v5;
      --v8;
    }
    while ( v8 );
    LOWORD(v5) = v55;
  }
  v11 = *((_QWORD *)v3 + 5);
  v12 = 0;
  v13 = *(_QWORD *)(a2 + 40);
  v63 = v11;
  v52[0] = 0;
  v54 = 0;
  if ( v4 )
  {
    v5 = (unsigned __int16)v5;
    v59 = (unsigned __int16)v5;
    v67 = 8LL;
    do
    {
      v13 += v5;
      v14 = v5 + v11;
      v68 = v13;
      v65 = v5 + v11;
      v15 = v52;
      v60 = v52;
      v16 = (_BYTE *)(v13 - 1);
      v61 = (_BYTE *)(v13 - 1);
      if ( v5 + v11 - 1 >= v11 )
      {
        v17 = (_BYTE *)(v5 + v11 - 1);
        v62 = v17;
        do
        {
          while ( 1 )
          {
            v18 = *v17;
            if ( !*v17 || v18 == -1 && (*v15 >> 7 == 1 || v15 == v52) )
              break;
            v19 = (unsigned __int8)(v18 & ((*v15 >> 7 == 0) | (2 * ~(v18 | *v16))));
            v20 = byte_1C02F1230[v19 + 256];
            if ( v20 == 8 )
              break;
            v21 = v59;
            v22 = (_BYTE *)v11;
            v23 = 0;
            LOBYTE(v53) = byte_1C02F1230[v19 + 256];
            v24 = 0;
            v58 = v17;
            v25 = v17;
            v26 = v12;
            while ( 1 )
            {
              v27 = 0;
              v28 = ~v20;
              v70[v24] = v20;
              v29 = v25;
              v69[v24] = v25;
              v30 = *v25 & StartMask[v20 + 1];
              do
              {
                if ( v28 >= 10 )
                  break;
                if ( v25 <= &v22[v21 - 1] )
                {
                  ++v29;
                  v31 = byte_1C02F1230[v30];
                  v30 = *v29;
                  v28 += v31;
                  v27 = v31 < (unsigned __int16)v67;
                }
                else
                {
                  v28 = 10;
                }
              }
              while ( !v27 );
              v4 = v56;
              v21 = v59;
              if ( v28 > 4 )
                v32 = v28 < 10 ? v28 - 4 : 6;
              else
                v32 = 0;
              v23 += v32;
              ++v24;
              Next = FindNext(v56, v55, v26++, v22, v25, v20, &v58, &v53);
              v22 += v21;
              if ( !Next )
                break;
              v20 = v53;
              v25 = v58;
            }
            v14 = v65;
            v16 = v61;
            v17 = v62;
            v34 = v61;
            v15 = v60;
            v35 = v24;
            v53 = v24;
            v36 = v23 + (v24 >> 1);
            v11 = v63;
            v37 = v36 / v24;
            if ( v37 < 2u )
              v37 = 2;
            v38 = v65 - 1;
            v39 = 0;
            if ( v24 )
            {
              v40 = v53;
              v41 = v70;
              v42 = v59;
              v43 = v69;
              v44 = EndMask[v37];
              LODWORD(v58) = v35 - 1;
              do
              {
                v45 = *v43;
                v57 = *v41;
                v64 = v45;
                v46 = v44 >> (v57 + 1);
                v47 = v44 << (7 - v57);
                LOBYTE(v48) = 8;
                if ( v46 )
                {
                  v48 = byte_1C02F1230[*v34 & StartMask[v57 + 1]];
                  v45 = v64;
                  *v34 |= v46 & EndMask[v48];
                }
                if ( v47 && (_BYTE)v48 == 8 && v45 < v38 )
                  v34[1] |= v47 & EndMask[byte_1C02F1230[(unsigned __int8)v34[1]]];
                if ( v39 < (int)v58 )
                  v34 += v69[(unsigned int)v39 + 1] - v64;
                v38 += v42;
                ++v39;
                ++v41;
                ++v43;
              }
              while ( v39 < v40 );
              v4 = v56;
              v16 = v61;
              v11 = v63;
              v17 = v62;
              v15 = v60;
              v14 = v65;
            }
            v12 = v54;
          }
          --v17;
          v60 = v16;
          v15 = v16;
          v62 = v17;
          v61 = --v16;
        }
        while ( (unsigned __int64)v17 >= v11 );
        v13 = v68;
        v5 = v59;
      }
      ++v12;
      v63 = v14;
      v54 = v12;
      v11 = v14;
    }
    while ( v12 < v4 );
    v3 = v66;
  }
  v49 = *((_QWORD *)v3 + 5);
  v50 = v4 * *v3;
  result = v4 * *v3 + v49;
  if ( v49 > v50 + v49 )
    v50 = 0LL;
  if ( v50 )
    return (unsigned __int8)memset(*((void **)v3 + 5), 0, v50);
  return result;
}
