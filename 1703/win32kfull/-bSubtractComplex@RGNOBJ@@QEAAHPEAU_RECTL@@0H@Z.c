/*
 * XREFs of ?bSubtractComplex@RGNOBJ@@QEAAHPEAU_RECTL@@0H@Z @ 0x1C007E154
 * Callers:
 *     ?bSubtract@RGNOBJAPI@@QEAAHPEAU_RECTL@@0H@Z @ 0x1C007F294 (-bSubtract@RGNOBJAPI@@QEAAHPEAU_RECTL@@0H@Z.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C002CB34 (PALLOCMEM2.c)
 *     UIntAdd @ 0x1C00367BC (UIntAdd.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     memcmp @ 0x1C013C6B0 (memcmp.c)
 *     memmove @ 0x1C01401C0 (memmove.c)
 *     UIntMult @ 0x1C019B168 (UIntMult.c)
 */

__int64 __fastcall RGNOBJ::bSubtractComplex(RGNOBJ *this, struct _RECTL *a2, struct _RECTL *a3, signed int a4)
{
  int v4; // r11d
  struct _RECTL *v6; // r15
  RGNOBJ *v7; // rsi
  _BYTE *v8; // rdi
  __int64 v9; // r10
  int v10; // r9d
  __int64 v11; // rcx
  LONG *p_top; // r8
  __int64 i; // rdx
  __int64 v14; // r11
  __int64 v15; // rax
  int v16; // r8d
  __int64 v17; // r14
  unsigned int *v18; // r14
  unsigned int *v19; // rbx
  LONG top; // r10d
  __int64 v21; // rax
  _BYTE *v22; // rcx
  __int64 v23; // r12
  __int64 v24; // r13
  int v25; // r9d
  const void *v26; // rdx
  unsigned int v27; // r9d
  __int64 v28; // r11
  __int64 v29; // rax
  LONG bottom; // r15d
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r11
  __int64 v34; // rax
  __int64 v35; // rcx
  signed int *v36; // rax
  __int64 v37; // r9
  signed int v38; // edx
  int v39; // edi
  __int64 v40; // r15
  int v41; // r11d
  signed int v42; // r12d
  UINT *v43; // r10
  signed int *v44; // rdx
  int v45; // r13d
  int v46; // r14d
  UINT *v47; // r8
  signed int v48; // ecx
  BOOL v49; // eax
  int v50; // esi
  int v51; // ecx
  int v52; // ecx
  int v53; // ecx
  int v54; // esi
  UINT v55; // eax
  signed int v56; // ecx
  __int64 v57; // rdx
  signed int v58; // ecx
  __int64 v59; // rax
  int v60; // ecx
  unsigned int v62; // eax
  UINT puResult; // [rsp+20h] [rbp-E0h] BYREF
  int v64; // [rsp+24h] [rbp-DCh]
  int v65; // [rsp+28h] [rbp-D8h]
  __int64 v66; // [rsp+30h] [rbp-D0h]
  int v67; // [rsp+38h] [rbp-C8h]
  unsigned int v68; // [rsp+3Ch] [rbp-C4h]
  signed int v69; // [rsp+40h] [rbp-C0h]
  signed int v70; // [rsp+44h] [rbp-BCh]
  int v71; // [rsp+48h] [rbp-B8h]
  int v72; // [rsp+4Ch] [rbp-B4h]
  LONG v73; // [rsp+50h] [rbp-B0h]
  __int64 v74; // [rsp+58h] [rbp-A8h]
  UINT *v75; // [rsp+60h] [rbp-A0h]
  signed int *v76; // [rsp+68h] [rbp-98h]
  UINT *v77; // [rsp+70h] [rbp-90h]
  unsigned int *v78; // [rsp+78h] [rbp-88h]
  __int64 v79; // [rsp+80h] [rbp-80h]
  struct _RECTL *v80; // [rsp+88h] [rbp-78h]
  _BYTE *v81; // [rsp+90h] [rbp-70h]
  __int64 v82; // [rsp+98h] [rbp-68h]
  __int64 v83; // [rsp+A0h] [rbp-60h]
  RGNOBJ *v84; // [rsp+A8h] [rbp-58h]
  _DWORD v85[4]; // [rsp+B0h] [rbp-50h] BYREF
  _BYTE v86[800]; // [rsp+C0h] [rbp-40h] BYREF

  v69 = a4;
  v80 = a2;
  v4 = a4;
  v84 = this;
  v6 = a2;
  v7 = this;
  if ( a4 < 100 )
  {
    v8 = v86;
    v81 = v86;
LABEL_7:
    v9 = v4;
    v10 = 0;
    v11 = 0LL;
    if ( v4 > 0 )
    {
      p_top = &a3->top;
      do
      {
        for ( i = v11; i; *(_QWORD *)&v8[8 * i--] = v14 )
        {
          v14 = *(_QWORD *)&v8[8 * i - 8];
          if ( *p_top >= *(_DWORD *)(v14 + 4) )
            break;
        }
        ++v11;
        v15 = v10++;
        p_top += 4;
        *(_QWORD *)&v8[8 * i] = &a3[v15];
      }
      while ( v11 < v9 );
      v4 = v69;
    }
    v85[1] = v6->bottom;
    v85[0] = 0;
    v85[2] = 0;
    v85[3] = 0x7FFFFFFF;
    v16 = 0;
    *(_QWORD *)&v8[8 * v9] = v85;
    v17 = *(_QWORD *)v7;
    *(_DWORD *)(v17 + 108) = 0x80000000;
    v18 = (unsigned int *)(v17 + 104);
    v19 = v18 + 4;
    v78 = v18;
    v65 = 0;
    *v18 = 0;
    *((_QWORD *)v18 + 1) = 0x7FFFFFFFLL;
    *(_DWORD *)(*(_QWORD *)v7 + 80LL) = 120;
    *(_DWORD *)(*(_QWORD *)v7 + 84LL) = 1;
    *(_DWORD *)(*(_QWORD *)v7 + 88LL) = 0x7FFFFFFF;
    *(_DWORD *)(*(_QWORD *)v7 + 96LL) = 0x80000000;
    top = v6->top;
    v21 = *(_QWORD *)v8;
    v68 = top;
    if ( *(_DWORD *)(v21 + 12) <= top )
    {
      v22 = v8;
      do
      {
        v22 += 8;
        ++v16;
      }
      while ( *(_DWORD *)(*(_QWORD *)v22 + 12LL) <= top );
      v65 = v16;
    }
    v23 = v16;
    v79 = v16;
    v24 = v16;
    v82 = v16;
    while ( 1 )
    {
      v25 = *(_DWORD *)(*(_QWORD *)v7 + 80LL) + 8 * (v4 - v16 + 5);
      if ( v25 > *(_DWORD *)(*(_QWORD *)v7 + 24LL) )
      {
        *(_QWORD *)(*(_QWORD *)v7 + 40LL) = v19;
        if ( !RGNOBJ::bExpand(v7, v25 + 4 * (v4 - v16) * (v4 - v16 + 4)) )
        {
          if ( v8 != v86 )
            Win32FreePool(v8);
          return 0LL;
        }
        v16 = v65;
        top = v68;
        v19 = *(unsigned int **)(*(_QWORD *)v7 + 40LL);
        v18 = &v19[-*(v19 - 1) - 4];
        v78 = v18;
      }
      v26 = v19 + 3;
      v27 = 2;
      v64 = 2;
      v28 = 2LL;
      v66 = 2LL;
      v19[3] = v6->left;
      v19[4] = v6->right;
      v29 = *(_QWORD *)&v8[8 * v23];
      bottom = *(_DWORD *)(v29 + 4);
      if ( bottom <= top )
      {
        v31 = *(_QWORD *)&v8[8 * v24];
        bottom = *(_DWORD *)(v29 + 12);
        if ( *(_DWORD *)(v31 + 4) <= top )
        {
          do
          {
            v32 = v24;
            if ( *(_DWORD *)(v31 + 12) < bottom )
              bottom = *(_DWORD *)(v31 + 12);
            if ( v24 > v23 )
            {
              do
              {
                v33 = *(_QWORD *)&v8[8 * v32 - 8];
                if ( *(_DWORD *)(v31 + 12) >= *(_DWORD *)(v33 + 12) )
                  break;
                *(_QWORD *)&v8[8 * v32--] = v33;
              }
              while ( v32 > v23 );
            }
            if ( *(_DWORD *)(*(_QWORD *)&v8[8 * v32] + 12LL) > top )
            {
              *(_QWORD *)&v8[8 * v32] = v31;
            }
            else
            {
              ++v16;
              ++v23;
            }
            ++v24;
            v31 = *(_QWORD *)&v8[8 * v24];
          }
          while ( *(_DWORD *)(v31 + 4) <= top );
          v65 = v16;
          v28 = 2LL;
          v82 = v24;
          v79 = v23;
        }
        v34 = *(_QWORD *)&v8[8 * v24];
        v35 = v23;
        v83 = v23;
        if ( *(_DWORD *)(v34 + 4) < bottom )
          bottom = *(_DWORD *)(v34 + 4);
        v73 = bottom;
        if ( v23 < v24 )
        {
          while ( 1 )
          {
            v36 = *(signed int **)&v8[8 * v35];
            v37 = 0LL;
            v71 = 0;
            v74 = 0LL;
            v38 = *v36;
            puResult = v36[2];
            v70 = v38;
            if ( v28 <= 0 )
              goto LABEL_54;
            v39 = v71;
            v40 = v66;
            v41 = 1;
            v42 = v70;
            v43 = v19 + 5;
            v44 = (signed int *)(v19 + 4);
            v76 = (signed int *)(v19 + 4);
            v72 = 2;
            v45 = 2;
            v46 = 3;
            v47 = v19 + 3;
            v75 = v19 + 3;
            v67 = 1;
            v77 = v19 + 5;
            do
            {
              v70 = *v44;
              if ( v42 >= v70 )
                goto LABEL_52;
              v48 = *v47;
              if ( (int)puResult <= (int)*v47 )
                break;
              v66 = v41;
              v49 = v42 <= v48;
              v50 = v64;
              v51 = v49 + 2;
              if ( (int)puResult < v70 )
                v51 = v49;
              if ( v51 )
              {
                v52 = v51 - 1;
                if ( !v52 )
                {
                  *v47 = puResult;
                  goto LABEL_52;
                }
                v53 = v52 - 1;
                if ( !v53 )
                {
                  *v44 = v42;
                  goto LABEL_52;
                }
                if ( v53 != 1 )
                  goto LABEL_52;
                memmove(&v19[v39 + 3], &v19[v45 + 3], 4LL * (v64 - v39 - 2));
                v54 = v50 - 2;
                v41 = v67 - 2;
                v37 = v74 - 2;
                v47 = v75 - 2;
                v44 = v76 - 2;
                v40 -= 2LL;
                v39 -= 2;
                v45 -= 2;
                v46 -= 2;
                v43 = v77 - 2;
              }
              else
              {
                memmove(&v19[v46 + 3], &v19[v66 + 3], 4LL * (v64 - v39 - 1));
                v44 = v76;
                v54 = v50 + 2;
                v43 = v77;
                v40 += 2LL;
                v55 = puResult;
                v47 = v75;
                v37 = v74;
                v41 = v67;
                *v76 = v42;
                *v43 = v55;
              }
              v64 = v54;
LABEL_52:
              v41 += 2;
              v37 += 2LL;
              v47 += 2;
              v67 = v41;
              v44 += 2;
              v74 = v37;
              v43 += 2;
              v75 = v47;
              v39 += 2;
              v76 = v44;
              v45 += 2;
              v77 = v43;
              v46 += 2;
            }
            while ( v37 < v40 );
            v8 = v81;
            v28 = v40;
            v24 = v82;
            v35 = v83;
            v66 = v40;
LABEL_54:
            v83 = ++v35;
            if ( v35 >= v24 )
            {
              v7 = v84;
              v18 = v78;
              bottom = v73;
              v23 = v79;
              v27 = v64;
              break;
            }
          }
        }
        v26 = v19 + 3;
      }
      if ( bottom > v80->bottom )
        bottom = v80->bottom;
      if ( *v18 == v27 )
      {
        if ( !memcmp(v18 + 3, v26, 4LL * v27) )
        {
          v18[2] = bottom;
          goto LABEL_70;
        }
        v27 = v64;
      }
      if ( v27 )
      {
        v56 = v19[3];
        if ( v56 < *(_DWORD *)(*(_QWORD *)v7 + 88LL) )
          *(_DWORD *)(*(_QWORD *)v7 + 88LL) = v56;
        v57 = v66;
        v58 = v19[v66 + 2];
        if ( v58 > *(_DWORD *)(*(_QWORD *)v7 + 96LL) )
          *(_DWORD *)(*(_QWORD *)v7 + 96LL) = v58;
      }
      else
      {
        v57 = v66;
      }
      v59 = *(_QWORD *)v7;
      v18 = v19;
      v78 = v19;
      ++*(_DWORD *)(v59 + 84);
      *v19 = v27;
      *(_DWORD *)(*(_QWORD *)v7 + 80LL) += 4 * v27 + 16;
      v19[1] = v68;
      v19[2] = bottom;
      v19[v57 + 3] = v27;
      v19 += *v19 + 4;
LABEL_70:
      v68 = bottom;
      top = bottom;
      if ( v23 < v24 )
      {
        v60 = v65;
        do
        {
          if ( *(_DWORD *)(*(_QWORD *)&v8[8 * v23] + 12LL) > bottom )
            break;
          ++v60;
          ++v23;
        }
        while ( v23 < v24 );
        v65 = v60;
        v79 = v23;
      }
      if ( bottom >= v80->bottom )
      {
        if ( *(_DWORD *)(*(_QWORD *)v7 + 84LL) == 1 )
        {
          *(_DWORD *)(*(_QWORD *)v7 + 92LL) = 0;
          *(_DWORD *)(*(_QWORD *)v7 + 100LL) = 0;
          *(_DWORD *)(*(_QWORD *)v7 + 88LL) = 0;
          *(_DWORD *)(*(_QWORD *)v7 + 96LL) = 0;
          v18[2] = 0x7FFFFFFF;
          *(_QWORD *)(*(_QWORD *)v7 + 40LL) = v19;
        }
        else
        {
          if ( *v18 )
          {
            v19[1] = v18[2];
            ++*(_DWORD *)(*(_QWORD *)v7 + 84LL);
            *v19 = 0;
            v19[3] = 0;
            *(_DWORD *)(*(_QWORD *)v7 + 80LL) += 4 * *v19 + 16;
          }
          else
          {
            v19 = v18;
          }
          *(_DWORD *)(*(_QWORD *)v7 + 112LL) = *(_DWORD *)((unsigned int)(4 * *(_DWORD *)(*(_QWORD *)v7 + 104LL) + 16)
                                                         + *(_QWORD *)v7
                                                         + 108LL);
          *(_DWORD *)(*(_QWORD *)v7 + 92LL) = *(_DWORD *)(*(_QWORD *)v7 + 112LL);
          *(_DWORD *)(*(_QWORD *)v7 + 100LL) = v19[1];
          v62 = *v19;
          v19[2] = 0x7FFFFFFF;
          *(_QWORD *)(*(_QWORD *)v7 + 40LL) = &v19[v62 + 4];
        }
        if ( v8 != v86 )
          Win32FreePool(v8);
        return 1LL;
      }
      v16 = v65;
      v6 = v80;
      v4 = v69;
    }
  }
  if ( UIntAdd(1u, a4, &puResult) >= 0 && UIntMult(puResult, 8u, &puResult) >= 0 )
  {
    v81 = PALLOCMEM2(puResult, 1852273223LL, 0);
    v8 = v81;
    if ( v81 )
    {
      v4 = v69;
      goto LABEL_7;
    }
  }
  return 0LL;
}
