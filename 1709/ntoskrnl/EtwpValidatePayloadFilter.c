/*
 * XREFs of EtwpValidatePayloadFilter @ 0x140753838
 * Callers:
 *     EtwpAllocatePayloadFilterData @ 0x14075059C (EtwpAllocatePayloadFilterData.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall EtwpValidatePayloadFilter(_QWORD *a1, __int64 a2, unsigned int a3)
{
  unsigned __int16 v6; // dx
  __int64 v7; // rcx
  __int64 v8; // r10
  int v9; // r14d
  int v10; // eax
  unsigned __int64 v11; // rdi
  __int64 v12; // r11
  int v13; // eax
  unsigned int v14; // esi
  __int64 v15; // rbx
  int v16; // eax
  __int64 v17; // r15
  unsigned int v18; // ebp
  int v19; // eax
  unsigned int v20; // r12d
  int v21; // eax
  unsigned int v22; // esi
  int v23; // ecx
  unsigned int v24; // ebp
  unsigned int v25; // eax
  __int64 v26; // rdi
  unsigned int v27; // edx
  __int64 v28; // r12
  _WORD *v29; // r11
  unsigned int v30; // ebx
  int v31; // r8d
  unsigned __int16 *v32; // r13
  __int64 v33; // r10
  unsigned int v34; // edx
  unsigned int v35; // ecx
  unsigned int v36; // r15d
  unsigned int v37; // r10d
  unsigned int v38; // r11d
  unsigned int v39; // ecx
  _WORD *v40; // rcx
  unsigned __int64 v41; // rdx
  _WORD *v42; // rcx
  _BYTE *v43; // rcx
  unsigned __int64 i; // rdx
  _BYTE *v45; // rcx
  int v46; // [rsp+0h] [rbp-98h]
  int v47; // [rsp+4h] [rbp-94h]
  int v48; // [rsp+8h] [rbp-90h]
  int v49; // [rsp+Ch] [rbp-8Ch]
  int v50; // [rsp+14h] [rbp-84h]
  int v51; // [rsp+1Ch] [rbp-7Ch]
  int v52; // [rsp+20h] [rbp-78h]
  unsigned int v53; // [rsp+28h] [rbp-70h]
  _WORD *v54; // [rsp+30h] [rbp-68h]
  _BYTE *v55; // [rsp+38h] [rbp-60h]
  _WORD *v56; // [rsp+40h] [rbp-58h]
  __int64 v57; // [rsp+48h] [rbp-50h]
  __int64 v58; // [rsp+50h] [rbp-48h]
  int v59; // [rsp+B0h] [rbp+18h]
  int v60; // [rsp+B8h] [rbp+20h]

  if ( a3 < 0x50 )
    return 3221225485LL;
  if ( *(unsigned __int16 *)(a2 + 2) != a3 )
    return 3221225485LL;
  if ( a3 > 0x1000 )
    return 3221225485LL;
  if ( (*(_WORD *)a2 & 0xFFF) != 0xA66 )
    return 3221225485LL;
  if ( (*(_WORD *)a2 & 0xF000) != 0x1000 )
    return 3221225485LL;
  v6 = *(_WORD *)(a2 + 4);
  if ( v6 > 0xAAu || *(_WORD *)(a2 + 6) )
    return 3221225485LL;
  v7 = *a1 - *(_QWORD *)(a2 + 16);
  if ( *a1 == *(_QWORD *)(a2 + 16) )
    v7 = a1[1] - *(_QWORD *)(a2 + 24);
  if ( v7 )
    return 3221225485LL;
  v8 = *(unsigned __int16 *)(a2 + 32);
  v9 = v6;
  v48 = v6;
  v10 = 24 * v6 + 56;
  if ( (_DWORD)v8 != v10 )
    return 3221225485LL;
  v11 = *(unsigned __int16 *)(a2 + 34);
  v12 = *(unsigned __int16 *)(a2 + 36);
  v13 = v11 + v10;
  if ( (_DWORD)v12 != v13 )
    return 3221225485LL;
  v14 = *(unsigned __int16 *)(a2 + 38);
  v15 = *(unsigned __int16 *)(a2 + 40);
  v16 = v14 + v13;
  if ( (_DWORD)v15 != v16 )
    return 3221225485LL;
  v17 = *(unsigned __int16 *)(a2 + 44);
  v18 = *(unsigned __int16 *)(a2 + 42);
  v19 = v18 + v16;
  v52 = v17;
  if ( (_DWORD)v17 != v19 )
    return 3221225485LL;
  v20 = *(unsigned __int16 *)(a2 + 46);
  v21 = v20 + v19;
  v49 = *(unsigned __int16 *)(a2 + 48);
  if ( v49 != v21 )
    return 3221225485LL;
  v51 = *(unsigned __int16 *)(a2 + 50);
  if ( a3 != v51 + v21
    || v11 != 12 * (v11 / 0xC)
    || (v14 & 3) != 0
    || (v18 & 3) != 0
    || (v20 & 1) != 0
    || (v8 & 3) != 0
    || (v12 & 3) != 0
    || (v15 & 3) != 0
    || (v17 & 3) != 0 )
  {
    return 3221225485LL;
  }
  v22 = v14 >> 2;
  v23 = 0;
  v24 = v18 >> 2;
  v46 = 0;
  v25 = (unsigned int)v11 / 0xC;
  v26 = a2 + v8;
  v27 = v20 >> 1;
  v54 = (_WORD *)(a2 + v17);
  v28 = a2 + v12;
  v29 = (_WORD *)(a2 + v15);
  v30 = 0;
  v47 = 0;
  v59 = 0;
  v31 = 0;
  v60 = 0;
  v32 = (unsigned __int16 *)(a2 + 56);
  v53 = v27;
  v33 = 0LL;
  v56 = v29;
  v55 = (_BYTE *)(a2 + (unsigned __int16)v49);
  v50 = 0;
  if ( v25 )
  {
    while ( 1 )
    {
      v33 |= 1LL << (*(_WORD *)v26 % 0x3Fu);
      v58 = v33;
      if ( *(unsigned __int16 *)(v26 + 4) != v47 )
        return 3221225485LL;
      v34 = *(unsigned __int16 *)(v26 + 6);
      v47 += v34;
      v35 = 0;
      v57 = v28;
      if ( *(_WORD *)(v26 + 6) )
      {
        while ( *(_WORD *)(v28 + 2) < 0x40u
             && *(_BYTE *)(v28 + 1) < 0x40u
             && *(_BYTE *)v28 < 0x40u
             && (*(_BYTE *)v28 & 0xFu) < 9 )
        {
          ++v35;
          v28 += 4LL;
          if ( v35 >= v34 )
            goto LABEL_34;
        }
        return 3221225485LL;
      }
LABEL_34:
      if ( *(unsigned __int16 *)(v26 + 8) != v60 )
        return 3221225485LL;
      v36 = *(unsigned __int16 *)(v26 + 10);
      v23 = v36 + v60;
      v60 += v36;
      if ( *(_WORD *)(v26 + 10) )
      {
        do
        {
          if ( (*v29 & 0xFCu) > 0x20 || (unsigned __int16)v29[1] != v46 )
            return 3221225485LL;
          v37 = (unsigned __int8)*v29 >> 2;
          v38 = 0;
          v46 += v37;
          if ( v37 )
          {
            while ( 1 )
            {
              v39 = *v32;
              if ( v39 >= v22
                || (unsigned __int16)v39 >= (unsigned __int16)v34
                || (unsigned __int16)v39 > *(unsigned __int8 *)(v26 + 3) )
              {
                return 3221225485LL;
              }
              if ( (*(_BYTE *)(v57 + 4LL * *v32) & 0xF) == 3 )
                break;
              if ( (*(_BYTE *)(v57 + 4LL * *v32) & 0xF) == 4 )
              {
                if ( *((_QWORD *)v32 + 1) != v59 || *((_QWORD *)v32 + 2) )
                  return 3221225485LL;
                v40 = v54;
                v41 = a2 + (unsigned int)*(unsigned __int16 *)(a2 + 46) + v52;
                v9 = v48;
                if ( *v54 )
                {
                  do
                  {
                    if ( (unsigned __int64)v40 >= v41 - 2 )
                      break;
                    ++v40;
                  }
                  while ( *v40 );
                  v9 = v48;
                }
                v42 = v40 + 1;
                if ( (unsigned __int64)v42 > v41 )
                  return 3221225485LL;
                v59 += v42 - v54;
                v54 = v42;
LABEL_59:
                LOWORD(v34) = *(_WORD *)(v26 + 6);
              }
              ++v38;
              v32 += 12;
              if ( v38 >= v37 )
                goto LABEL_61;
            }
            if ( *((_QWORD *)v32 + 1) != v31 || *((_QWORD *)v32 + 2) )
              return 3221225485LL;
            v43 = v55;
            for ( i = a2 + (unsigned int)(v49 + v51); *v43; ++v43 )
            {
              if ( (unsigned __int64)v43 >= i - 1 )
                break;
            }
            v45 = v43 + 1;
            if ( (unsigned __int64)v45 > i )
              return 3221225485LL;
            v31 += (_DWORD)v45 - (_DWORD)v55;
            v55 = v45;
            goto LABEL_59;
          }
LABEL_61:
          ++v30;
          v29 = v56 + 2;
          v56 += 2;
        }
        while ( v30 < v36 );
        v23 = v60;
        v33 = v58;
      }
      v26 += 12LL;
      if ( ++v50 >= v25 )
        break;
      v30 = 0;
    }
    v27 = v53;
  }
  if ( v33 != *(_QWORD *)(a2 + 8) || v46 != v9 || v47 != v22 || v23 != v24 || v59 != v27 )
    return 3221225485LL;
  return v51 != v31 ? 0xC000000D : 0;
}
