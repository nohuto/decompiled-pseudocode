/*
 * XREFs of ?bSubtractComplex@RGNOBJ@@QEAAHPEAU_RECTL@@0H@Z @ 0x1C0017378
 * Callers:
 *     ?bSubtract@RGNOBJAPI@@QEAAHPEAU_RECTL@@0H@Z @ 0x1C0017BB8 (-bSubtract@RGNOBJAPI@@QEAAHPEAU_RECTL@@0H@Z.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C00B22B0 (PALLOCMEM2.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     memcmp @ 0x1C0143590 (memcmp.c)
 *     memmove @ 0x1C01456C0 (memmove.c)
 */

__int64 __fastcall RGNOBJ::bSubtractComplex(RGNOBJ *this, struct _RECTL *a2, struct _RECTL *a3, int a4)
{
  int v4; // r11d
  struct _RECTL *v6; // rbp
  RGNOBJ *v7; // rsi
  _BYTE *v8; // rdi
  int v9; // r9d
  __int64 v10; // r10
  __int64 v11; // rdx
  LONG *p_top; // r8
  __int64 i; // rcx
  __int64 v14; // r11
  __int64 v15; // rax
  int v16; // r13d
  __int64 v17; // r14
  char *v18; // r14
  _DWORD *v19; // rbx
  LONG top; // r10d
  __int64 v21; // r15
  __int64 v22; // r12
  int v23; // r8d
  const void *v24; // rdx
  _DWORD *v25; // r9
  __int64 v26; // r11
  __int64 v27; // rax
  __int64 v28; // r8
  LONG bottom; // ebp
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r9
  __int64 v33; // rcx
  int v34; // esi
  int *v35; // rax
  __int64 v36; // r10
  int v37; // edi
  _DWORD *v38; // r11
  __int64 v39; // r13
  int v40; // r14d
  _DWORD *v41; // rdx
  _DWORD *v42; // r8
  int v43; // eax
  int v44; // r12d
  int v45; // r15d
  int v46; // ecx
  int v47; // ecx
  int v48; // ecx
  int v49; // ecx
  __int64 v50; // rdx
  int v51; // ecx
  int v52; // eax
  __int64 v54; // rdx
  __int64 v55; // r8
  unsigned __int64 v56; // rax
  _BYTE *v57; // rcx
  int v58; // [rsp+20h] [rbp-408h]
  unsigned int v59; // [rsp+28h] [rbp-400h]
  _DWORD *v60; // [rsp+28h] [rbp-400h]
  int v61; // [rsp+30h] [rbp-3F8h]
  LONG v62; // [rsp+34h] [rbp-3F4h]
  __int64 v64; // [rsp+40h] [rbp-3E8h]
  int v65; // [rsp+4Ch] [rbp-3DCh]
  __int64 v66; // [rsp+58h] [rbp-3D0h]
  _DWORD *v67; // [rsp+60h] [rbp-3C8h]
  _DWORD *v68; // [rsp+68h] [rbp-3C0h]
  char *v69; // [rsp+70h] [rbp-3B8h]
  __int64 v70; // [rsp+78h] [rbp-3B0h]
  _BYTE *v72; // [rsp+88h] [rbp-3A0h]
  __int64 v73; // [rsp+90h] [rbp-398h]
  __int64 v74; // [rsp+98h] [rbp-390h]
  _DWORD v76[6]; // [rsp+A8h] [rbp-380h] BYREF
  _BYTE v77[800]; // [rsp+C0h] [rbp-368h] BYREF

  v4 = a4;
  v6 = a2;
  v7 = this;
  if ( a4 < 100 )
  {
    v8 = v77;
    v72 = v77;
LABEL_3:
    v9 = 0;
    v10 = v4;
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
        v15 = v9++;
        p_top += 4;
        *(_QWORD *)&v8[8 * i] = &a3[v15];
      }
      while ( v11 < v10 );
      v4 = a4;
    }
    v76[1] = v6->bottom;
    v76[0] = 0;
    v76[2] = 0;
    v76[3] = 0x7FFFFFFF;
    *(_QWORD *)&v8[8 * v10] = v76;
    v16 = 0;
    v17 = *(_QWORD *)v7;
    *(_DWORD *)(v17 + 108) = 0x80000000;
    v18 = (char *)(v17 + 104);
    v19 = v18 + 16;
    v69 = v18;
    v61 = 0;
    *(_DWORD *)v18 = 0;
    *((_QWORD *)v18 + 1) = 0x7FFFFFFFLL;
    *(_DWORD *)(*(_QWORD *)v7 + 80LL) = 120;
    *(_DWORD *)(*(_QWORD *)v7 + 84LL) = 1;
    *(_DWORD *)(*(_QWORD *)v7 + 88LL) = 0x7FFFFFFF;
    *(_DWORD *)(*(_QWORD *)v7 + 96LL) = 0x80000000;
    top = v6->top;
    v62 = top;
    if ( *(_DWORD *)(*(_QWORD *)v8 + 12LL) <= top )
    {
      v57 = v8;
      do
      {
        v57 += 8;
        ++v16;
      }
      while ( *(_DWORD *)(*(_QWORD *)v57 + 12LL) <= top );
      v61 = v16;
    }
    v21 = v16;
    v70 = v16;
    v22 = v16;
    v73 = v16;
    while ( 1 )
    {
      v23 = *(_DWORD *)(*(_QWORD *)v7 + 80LL) + 8 * (v4 - v16 + 5);
      if ( v23 > *(_DWORD *)(*(_QWORD *)v7 + 24LL) )
      {
        *(_QWORD *)(*(_QWORD *)v7 + 40LL) = v19;
        if ( !RGNOBJ::bExpand(v7, v23 + 4 * (v4 - v16) * (v4 - v16 + 4)) )
        {
          if ( v8 != v77 )
            Win32FreePool(v8, v54, v55);
          return 0LL;
        }
        top = v62;
        v19 = *(_DWORD **)(*(_QWORD *)v7 + 40LL);
        v18 = (char *)v19 - (unsigned int)(4 * *(v19 - 1) + 16);
        v69 = v18;
      }
      v24 = v19 + 3;
      v19[3] = v6->left;
      v25 = v19 + 4;
      v26 = 2LL;
      v19[4] = v6->right;
      v27 = *(_QWORD *)&v8[8 * v21];
      v28 = 2LL;
      v59 = 2;
      v64 = 2LL;
      bottom = *(_DWORD *)(v27 + 4);
      if ( bottom <= top )
      {
        v30 = *(_QWORD *)&v8[8 * v22];
        bottom = *(_DWORD *)(v27 + 12);
        if ( *(_DWORD *)(v30 + 4) <= top )
        {
          do
          {
            v31 = v22;
            if ( *(_DWORD *)(v30 + 12) < bottom )
              bottom = *(_DWORD *)(v30 + 12);
            if ( v22 > v21 )
            {
              do
              {
                v32 = *(_QWORD *)&v8[8 * v31 - 8];
                if ( *(_DWORD *)(v30 + 12) >= *(_DWORD *)(v32 + 12) )
                  break;
                *(_QWORD *)&v8[8 * v31--] = v32;
              }
              while ( v31 > v21 );
            }
            if ( *(_DWORD *)(*(_QWORD *)&v8[8 * v31] + 12LL) <= top )
            {
              ++v16;
              ++v21;
            }
            else
            {
              *(_QWORD *)&v8[8 * v31] = v30;
            }
            ++v22;
            v30 = *(_QWORD *)&v8[8 * v22];
          }
          while ( *(_DWORD *)(v30 + 4) <= top );
          v61 = v16;
          v25 = v19 + 4;
          v73 = v22;
          v70 = v21;
        }
        if ( *(_DWORD *)(*(_QWORD *)&v8[8 * v22] + 4LL) < bottom )
          bottom = *(_DWORD *)(*(_QWORD *)&v8[8 * v22] + 4LL);
        v33 = v21;
        v74 = v21;
        if ( v21 < v22 )
        {
          v34 = 2;
          while ( 1 )
          {
            v35 = *(int **)&v8[8 * v33];
            v36 = 0LL;
            v66 = 0LL;
            v65 = v35[2];
            v58 = *v35;
            if ( v26 <= 0 )
              goto LABEL_40;
            v37 = 0;
            v38 = v19 + 5;
            v39 = v64;
            v40 = 3;
            v41 = v25;
            v60 = v19 + 3;
            v42 = v19 + 3;
            v68 = v19 + 5;
            v43 = *v35;
            v44 = 1;
            v45 = 2;
            v67 = v25;
            do
            {
              if ( v43 >= *v41 )
                goto LABEL_38;
              if ( v65 <= *v42 )
                break;
              v46 = (v58 <= *v42) + 2;
              if ( v65 < *v41 )
                v46 = v58 <= *v42;
              if ( v46 )
              {
                v47 = v46 - 1;
                if ( v47 )
                {
                  v48 = v47 - 1;
                  if ( !v48 )
                  {
                    v43 = v58;
                    *v41 = v58;
                    goto LABEL_38;
                  }
                  if ( v48 == 1 )
                  {
                    memmove(&v19[v37 + 3], &v19[v45 + 3], 4LL * (v34 - v37 - 2));
                    v34 -= 2;
                    v36 = v66 - 2;
                    v42 = v60 - 2;
                    v41 = v67 - 2;
                    v39 -= 2LL;
                    v37 -= 2;
                    v45 -= 2;
                    v44 -= 2;
                    v40 -= 2;
                    v38 = v68 - 2;
                  }
                }
                else
                {
                  *v42 = v65;
                }
                v43 = v58;
              }
              else
              {
                memmove(&v19[v40 + 3], &v19[v44 + 3], 4LL * (v34 - v37 - 1));
                v41 = v67;
                v34 += 2;
                v38 = v68;
                v39 += 2LL;
                v43 = v58;
                v42 = v60;
                v36 = v66;
                *v67 = v58;
                *v68 = v65;
              }
LABEL_38:
              v36 += 2LL;
              v42 += 2;
              v41 += 2;
              v66 = v36;
              v38 += 2;
              v60 = v42;
              v37 += 2;
              v67 = v41;
              v45 += 2;
              v68 = v38;
              v44 += 2;
              v40 += 2;
            }
            while ( v36 < v39 );
            v8 = v72;
            v26 = v39;
            v22 = v73;
            v33 = v74;
            v64 = v39;
            v59 = v34;
LABEL_40:
            ++v33;
            v25 = v19 + 4;
            v74 = v33;
            if ( v33 >= v22 )
            {
              v7 = this;
              v18 = v69;
              v21 = v70;
              v16 = v61;
              v28 = v59;
              break;
            }
          }
        }
        v24 = v19 + 3;
      }
      if ( bottom > a2->bottom )
        bottom = a2->bottom;
      if ( *(_DWORD *)v18 == (_DWORD)v28 )
      {
        if ( !memcmp(v18 + 12, v24, 4 * v28) )
        {
          *((_DWORD *)v18 + 2) = bottom;
          goto LABEL_52;
        }
        v28 = v59;
      }
      if ( (_DWORD)v28 )
      {
        v49 = v19[3];
        if ( v49 < *(_DWORD *)(*(_QWORD *)v7 + 88LL) )
          *(_DWORD *)(*(_QWORD *)v7 + 88LL) = v49;
        v50 = v64;
        v51 = v19[v64 + 2];
        if ( v51 > *(_DWORD *)(*(_QWORD *)v7 + 96LL) )
          *(_DWORD *)(*(_QWORD *)v7 + 96LL) = v51;
      }
      else
      {
        v50 = v64;
      }
      v18 = (char *)v19;
      v69 = (char *)v19;
      ++*(_DWORD *)(*(_QWORD *)v7 + 84LL);
      *v19 = v28;
      *(_DWORD *)(*(_QWORD *)v7 + 80LL) += 4 * v28 + 16;
      v19[1] = v62;
      v19[2] = bottom;
      v19[v50 + 3] = v28;
      v19 = (_DWORD *)((char *)v19 + (unsigned int)(4 * *v19 + 16));
LABEL_52:
      v62 = bottom;
      top = bottom;
      if ( v21 < v22 )
      {
        do
        {
          if ( *(_DWORD *)(*(_QWORD *)&v8[8 * v21] + 12LL) > bottom )
            break;
          ++v16;
          ++v21;
        }
        while ( v21 < v22 );
        v61 = v16;
        v70 = v21;
      }
      if ( bottom >= a2->bottom )
      {
        if ( *(_DWORD *)(*(_QWORD *)v7 + 84LL) == 1 )
        {
          *(_DWORD *)(*(_QWORD *)v7 + 92LL) = 0;
          *(_DWORD *)(*(_QWORD *)v7 + 100LL) = 0;
          *(_DWORD *)(*(_QWORD *)v7 + 88LL) = 0;
          *(_DWORD *)(*(_QWORD *)v7 + 96LL) = 0;
          *((_DWORD *)v18 + 2) = 0x7FFFFFFF;
          *(_QWORD *)(*(_QWORD *)v7 + 40LL) = v19;
        }
        else
        {
          if ( *(_DWORD *)v18 )
          {
            v19[1] = *((_DWORD *)v18 + 2);
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
          v52 = *v19;
          v19[2] = 0x7FFFFFFF;
          v50 = (__int64)v19 + (unsigned int)(4 * v52 + 16);
          *(_QWORD *)(*(_QWORD *)v7 + 40LL) = v50;
        }
        if ( v8 != v77 )
          Win32FreePool(v8, v50, v28);
        return 1LL;
      }
      v4 = a4;
      v6 = a2;
    }
  }
  v56 = 8LL * (unsigned int)(a4 + 1);
  if ( v56 <= 0xFFFFFFFF )
  {
    v72 = (_BYTE *)PALLOCMEM2((unsigned int)v56);
    v8 = v72;
    if ( v72 )
    {
      v4 = a4;
      goto LABEL_3;
    }
  }
  return 0LL;
}
