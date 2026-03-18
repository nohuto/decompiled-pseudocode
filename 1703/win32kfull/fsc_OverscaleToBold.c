/*
 * XREFs of fsc_OverscaleToBold @ 0x1C02CC118
 * Callers:
 *     fs_ContourScan @ 0x1C02BA328 (fs_ContourScan.c)
 * Callees:
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     memset @ 0x1C0140500 (memset.c)
 *     EmboldenOverscaleConst @ 0x1C02CBE4C (EmboldenOverscaleConst.c)
 *     FindNext @ 0x1C02CBF28 (FindNext.c)
 */

char __fastcall fsc_OverscaleToBold(unsigned __int16 a1, __int64 a2, unsigned __int16 *a3)
{
  unsigned __int16 *v3; // r14
  unsigned __int16 v4; // bx
  unsigned __int16 v5; // ax
  unsigned __int64 v6; // r8
  __int64 v7; // r10
  __int64 v8; // rdi
  unsigned __int64 v9; // r9
  unsigned __int64 i; // rcx
  unsigned __int64 v11; // r15
  unsigned __int16 v12; // r10
  __int64 v13; // rcx
  __int64 v14; // rsi
  unsigned __int64 v15; // r13
  char *v16; // r14
  char *v17; // rdi
  _BYTE *v18; // r11
  char v19; // r8
  unsigned __int8 v20; // r9
  unsigned __int8 *v21; // r8
  _BYTE *v22; // r14
  unsigned __int16 v23; // r15
  int v24; // edi
  unsigned __int16 v25; // r13
  BOOL v26; // r10d
  unsigned __int8 *v27; // r12
  __int16 v28; // dx
  unsigned __int8 *v29; // rsi
  unsigned __int8 v30; // r11
  unsigned __int16 v31; // cx
  unsigned __int16 v32; // dx
  __int64 v33; // r12
  int Next; // eax
  unsigned __int16 v35; // r9
  unsigned int v36; // eax
  char *v37; // r10
  unsigned __int8 v38; // dl
  unsigned __int64 v39; // r12
  unsigned __int8 *v40; // r14
  unsigned __int16 v41; // bx
  unsigned __int8 **v42; // r8
  unsigned __int8 v43; // di
  int v44; // r15d
  unsigned __int8 v45; // r13
  unsigned __int8 *v46; // rdx
  char v47; // si
  char v48; // r11
  __int64 v49; // r13
  size_t v50; // r9
  size_t v51; // r8
  char result; // al
  unsigned __int8 v53; // [rsp+40h] [rbp-C0h] BYREF
  char v54; // [rsp+41h] [rbp-BFh] BYREF
  unsigned __int16 v55; // [rsp+42h] [rbp-BEh]
  unsigned __int16 v56; // [rsp+44h] [rbp-BCh]
  unsigned __int16 v57; // [rsp+48h] [rbp-B8h]
  unsigned __int8 *v58; // [rsp+50h] [rbp-B0h] BYREF
  char *v59; // [rsp+58h] [rbp-A8h]
  char *v60; // [rsp+60h] [rbp-A0h]
  _BYTE *v61; // [rsp+68h] [rbp-98h]
  unsigned __int64 v62; // [rsp+70h] [rbp-90h]
  unsigned __int64 v63; // [rsp+78h] [rbp-88h]
  unsigned __int16 *v64; // [rsp+80h] [rbp-80h]
  __int64 v65; // [rsp+88h] [rbp-78h]
  __int64 v66; // [rsp+90h] [rbp-70h]
  _QWORD v67[48]; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v68[48]; // [rsp+220h] [rbp+120h] BYREF

  v3 = a3;
  v4 = *(_WORD *)(a2 + 2) - *(_WORD *)(a2 + 4);
  v64 = a3;
  v57 = v4;
  if ( a1 > 0x18u || v4 > 0x30u )
    return EmboldenOverscaleConst((unsigned __int16 *)a2);
  v5 = *(_WORD *)a2;
  v6 = *(_QWORD *)(a2 + 40);
  v7 = *((_QWORD *)v3 + 5);
  v55 = *(_WORD *)a2;
  if ( v4 )
  {
    v8 = v4;
    do
    {
      v9 = v5;
      if ( v6 > v5 + v6 )
        v9 = 0LL;
      if ( v9 )
      {
        for ( i = 0LL; i < v9; ++i )
          *(_BYTE *)(i + v7) = *(_BYTE *)(i + v6);
      }
      v7 += v5;
      v6 += v5;
      --v8;
    }
    while ( v8 );
    v5 = v55;
  }
  v11 = *((_QWORD *)v3 + 5);
  v12 = 0;
  v13 = *(_QWORD *)(a2 + 40);
  v62 = v11;
  v54 = 0;
  v56 = 0;
  if ( v4 )
  {
    v14 = v5;
    v65 = 8LL;
    do
    {
      v13 += v14;
      v15 = v14 + v11;
      v66 = v13;
      v63 = v14 + v11;
      v16 = &v54;
      v59 = &v54;
      v17 = (char *)(v13 - 1);
      v60 = (char *)(v13 - 1);
      if ( v14 + v11 - 1 >= v11 )
      {
        v18 = (_BYTE *)(v14 + v11 - 1);
        v61 = v18;
        do
        {
          while ( 1 )
          {
            v19 = *v18;
            if ( !*v18 || v19 == -1 && ((unsigned __int8)*v16 >> 7 == 1 || v16 == &v54) )
              break;
            v20 = byte_1C02F46D0[(unsigned __int8)(v19 & (((unsigned __int8)*v16 >> 7 == 0) | (2 * ~(v19 | *v17))))];
            if ( v20 == 8 )
              break;
            v21 = v18;
            v58 = v18;
            v22 = (_BYTE *)v11;
            v53 = v20;
            v23 = v12;
            v24 = 0;
            v25 = 0;
            while ( 1 )
            {
              v26 = 0;
              v27 = &v22[v14 - 1];
              v28 = ~v20;
              v29 = v21;
              v68[v25] = v20;
              v67[v25] = v21;
              v30 = *v21 & StartMask[v20 + 1];
              do
              {
                if ( v28 >= 10 )
                  break;
                if ( v21 <= v27 )
                {
                  ++v29;
                  v31 = byte_1C02F4590[v30];
                  v30 = *v29;
                  v28 += v31;
                  v26 = v31 < (unsigned __int16)v65;
                }
                else
                {
                  v28 = 10;
                }
              }
              while ( !v26 );
              v4 = v57;
              if ( v28 > 4 )
                v32 = v28 < 10 ? v28 - 4 : 6;
              else
                v32 = 0;
              v33 = v55;
              v24 += v32;
              ++v25;
              Next = FindNext(v57, v55, v23++, v22, v21, v20, &v58, &v53);
              v22 += v33;
              v14 = (unsigned int)v33;
              if ( !Next )
                break;
              v20 = v53;
              v21 = v58;
            }
            v11 = v62;
            v16 = v59;
            v35 = 0;
            v36 = v24 + (v25 >> 1);
            v17 = v60;
            v37 = v60;
            v38 = v36 / v25;
            if ( v38 < 2u )
              v38 = 2;
            v18 = v61;
            v39 = v63 - 1;
            if ( v25 )
            {
              v40 = v68;
              v41 = v25;
              v42 = (unsigned __int8 **)v67;
              v43 = EndMask[v38];
              v44 = v25 - 1;
              do
              {
                v45 = *v40;
                v46 = *v42;
                v58 = *v42;
                v47 = v43 >> (v45 + 1);
                v48 = v43 << (7 - v45);
                if ( v47 )
                {
                  v49 = byte_1C02F4590[*v37 & StartMask[v45 + 1]];
                  v46 = v58;
                  *v37 |= v47 & EndMask[v49];
                }
                else
                {
                  LOBYTE(v49) = 8;
                }
                if ( v48 && (_BYTE)v49 == 8 && (unsigned __int64)v46 < v39 )
                  v37[1] |= v48 & EndMask[byte_1C02F4590[(unsigned __int8)v37[1]]];
                if ( v35 < v44 )
                  v37 += v42[1] - v58;
                v39 += v55;
                v14 = v55;
                ++v35;
                ++v40;
                ++v42;
              }
              while ( v35 < v41 );
              v4 = v57;
              v17 = v60;
              v11 = v62;
              v18 = v61;
              v12 = v56;
              v16 = v59;
            }
            else
            {
              v12 = v56;
            }
          }
          --v18;
          v59 = v17;
          v16 = v17;
          v61 = v18;
          v60 = --v17;
        }
        while ( (unsigned __int64)v18 >= v11 );
        v13 = v66;
        v15 = v63;
      }
      ++v12;
      v62 = v15;
      v56 = v12;
      v11 = v15;
    }
    while ( v12 < v4 );
    v3 = v64;
  }
  v50 = *((_QWORD *)v3 + 5);
  v51 = v4 * *v3;
  result = v4 * *v3 + v50;
  if ( v50 > v51 + v50 )
    v51 = 0LL;
  if ( v51 )
    return (unsigned __int8)memset(*((void **)v3 + 5), 0, v51);
  return result;
}
