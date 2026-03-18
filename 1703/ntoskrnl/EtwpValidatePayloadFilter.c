/*
 * XREFs of EtwpValidatePayloadFilter @ 0x140714694
 * Callers:
 *     EtwpAllocatePayloadFilterData @ 0x140712504 (EtwpAllocatePayloadFilterData.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall EtwpValidatePayloadFilter(_QWORD *a1, __int64 a2, unsigned int a3)
{
  unsigned __int16 v6; // dx
  __int64 v7; // rcx
  __int64 v8; // r10
  int v9; // r15d
  int v10; // eax
  unsigned __int64 v11; // rdi
  __int64 v12; // r11
  int v13; // eax
  unsigned int v14; // r14d
  __int64 v15; // rbx
  int v16; // eax
  unsigned int v17; // r12d
  int v18; // esi
  int v19; // eax
  unsigned int v20; // r13d
  int v21; // eax
  unsigned int v22; // r14d
  int v23; // ecx
  int v24; // r8d
  unsigned int v25; // kr00_4
  __int64 v26; // rdi
  unsigned int v27; // r12d
  __int64 v28; // r10
  _WORD *v29; // r11
  unsigned int v30; // eax
  unsigned __int16 *v31; // r13
  __int64 v32; // rbx
  unsigned int v33; // ebp
  __int64 v34; // rdx
  unsigned int v35; // ecx
  unsigned int v36; // esi
  unsigned int v37; // ebx
  unsigned int v38; // r10d
  unsigned int v39; // r11d
  __int64 v40; // rcx
  int v41; // ecx
  _WORD *v42; // rcx
  int v43; // edx
  unsigned __int64 v44; // rax
  _WORD *v45; // rcx
  __int64 v46; // rax
  int v47; // edx
  _BYTE *v48; // rcx
  unsigned __int64 v49; // rax
  _BYTE *v50; // rcx
  bool v51; // cf
  int v52; // [rsp+0h] [rbp-98h]
  int v53; // [rsp+4h] [rbp-94h]
  int v54; // [rsp+8h] [rbp-90h]
  int v55; // [rsp+Ch] [rbp-8Ch]
  int v56; // [rsp+14h] [rbp-84h]
  _WORD *v57; // [rsp+18h] [rbp-80h]
  unsigned int v58; // [rsp+24h] [rbp-74h]
  _BYTE *v59; // [rsp+28h] [rbp-70h]
  _WORD *v60; // [rsp+30h] [rbp-68h]
  __int64 v61; // [rsp+38h] [rbp-60h]
  __int64 v62; // [rsp+40h] [rbp-58h]
  __int64 v63; // [rsp+58h] [rbp-40h]
  int v64; // [rsp+B0h] [rbp+18h]
  int v65; // [rsp+B8h] [rbp+20h]

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
  v54 = v6;
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
  v17 = *(unsigned __int16 *)(a2 + 42);
  v18 = *(unsigned __int16 *)(a2 + 44);
  v19 = v17 + v16;
  if ( v18 != v19 )
    return 3221225485LL;
  v20 = *(unsigned __int16 *)(a2 + 46);
  v21 = v20 + v19;
  if ( *(unsigned __int16 *)(a2 + 48) != v21 )
    return 3221225485LL;
  v56 = *(unsigned __int16 *)(a2 + 50);
  if ( a3 != v56 + v21
    || v11 != 12 * (v11 / 0xC)
    || (v14 & 3) != 0
    || (v17 & 3) != 0
    || (v20 & 1) != 0
    || (v8 & 3) != 0
    || (v12 & 3) != 0
    || (v15 & 3) != 0
    || (v18 & 3) != 0 )
  {
    return 3221225485LL;
  }
  v22 = v14 >> 2;
  v52 = 0;
  v23 = 0;
  v53 = 0;
  v24 = 0;
  v65 = 0;
  v64 = 0;
  v25 = *(unsigned __int16 *)(a2 + 34);
  v26 = a2 + v8;
  v27 = v17 >> 2;
  v28 = a2 + v12;
  v29 = (_WORD *)(a2 + v15);
  v61 = v28;
  v57 = (_WORD *)(a2 + *(unsigned __int16 *)(a2 + 44));
  v30 = v20 >> 1;
  v31 = (unsigned __int16 *)(a2 + 56);
  v58 = v30;
  v32 = 0LL;
  v60 = v29;
  v59 = (_BYTE *)(a2 + *(unsigned __int16 *)(a2 + 48));
  v55 = 0;
  if ( v25 / 0xC )
  {
    while ( 1 )
    {
      v62 = v32 | (1LL << (*(_WORD *)v26 % 0x3Fu));
      if ( *(unsigned __int16 *)(v26 + 4) != v53 )
        return 3221225485LL;
      v33 = *(unsigned __int16 *)(v26 + 6);
      v34 = v28;
      v63 = v28;
      v53 += v33;
      v35 = 0;
      if ( *(_WORD *)(v26 + 6) )
      {
        while ( *(_WORD *)(v28 + 2) < 0x40u
             && *(_BYTE *)(v28 + 1) < 0x40u
             && *(_BYTE *)v28 < 0x40u
             && (*(_BYTE *)v28 & 0xFu) < 9 )
        {
          v28 += 4LL;
          ++v35;
          v61 = v28;
          if ( v35 >= v33 )
            goto LABEL_34;
        }
        return 3221225485LL;
      }
LABEL_34:
      if ( *(unsigned __int16 *)(v26 + 8) != v65 )
        return 3221225485LL;
      v36 = *(unsigned __int16 *)(v26 + 10);
      v23 = v36 + v65;
      v37 = 0;
      v65 += v36;
      if ( *(_WORD *)(v26 + 10) )
      {
        while ( (*v29 & 0xFCu) <= 0x20 && (unsigned __int16)v29[1] == v52 )
        {
          v38 = (unsigned __int8)*v29 >> 2;
          v39 = 0;
          v52 += v38;
          if ( v38 )
          {
            do
            {
              v40 = *v31;
              if ( (unsigned int)v40 >= v22
                || (unsigned __int16)v40 >= (unsigned __int16)v33
                || (unsigned __int16)v40 > *(unsigned __int8 *)(v26 + 3) )
              {
                return 3221225485LL;
              }
              v41 = (*(_BYTE *)(v34 + 4 * v40) & 0xF) - 3;
              if ( v41 )
              {
                if ( v41 == 1 )
                {
                  if ( *((_QWORD *)v31 + 1) != v64 || *((_QWORD *)v31 + 2) )
                    return 3221225485LL;
                  v42 = v57;
                  v43 = v64;
                  v44 = a2 + *(unsigned __int16 *)(a2 + 44) + (unsigned __int64)*(unsigned __int16 *)(a2 + 46);
                  v9 = v54;
                  if ( *v57 )
                  {
                    do
                    {
                      if ( (unsigned __int64)v42 >= v44 - 2 )
                        break;
                      ++v42;
                    }
                    while ( *v42 );
                    v9 = v54;
                    v43 = v64;
                  }
                  v45 = v42 + 1;
                  if ( (unsigned __int64)v45 > v44 )
                    return 3221225485LL;
                  v46 = v45 - v57;
                  v57 = v45;
                  v64 = v46 + v43;
                }
              }
              else
              {
                if ( *((_QWORD *)v31 + 1) != v24 || *((_QWORD *)v31 + 2) )
                  return 3221225485LL;
                v47 = (int)v59;
                v48 = v59;
                v49 = a2 + *(unsigned __int16 *)(a2 + 48) + (unsigned __int64)(unsigned __int16)v56;
                if ( *v59 )
                {
                  do
                  {
                    if ( (unsigned __int64)v48 >= v49 - 1 )
                      break;
                    ++v48;
                  }
                  while ( *v48 );
                  v47 = (int)v59;
                }
                v50 = v48 + 1;
                if ( (unsigned __int64)v50 > v49 )
                  return 3221225485LL;
                v59 = v50;
                v24 += (_DWORD)v50 - v47;
              }
              v34 = v63;
              ++v39;
              v31 += 12;
            }
            while ( v39 < v38 );
          }
          ++v37;
          v29 = v60 + 2;
          v60 += 2;
          if ( v37 >= v36 )
          {
            v28 = v61;
            v23 = v65;
            goto LABEL_63;
          }
        }
        return 3221225485LL;
      }
LABEL_63:
      v26 += 12LL;
      v51 = ++v55 < v25 / 0xC;
      v32 = v62;
      if ( !v51 )
      {
        v30 = v58;
        break;
      }
    }
  }
  if ( v32 != *(_QWORD *)(a2 + 8) || v52 != v9 || v53 != v22 || v23 != v27 || v64 != v30 )
    return 3221225485LL;
  return v56 != v24 ? 0xC000000D : 0;
}
