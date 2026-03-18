/*
 * XREFs of DNG_DrawRow @ 0x1C0010DB0
 * Callers:
 *     DNG_StretchCol @ 0x1C000E220 (DNG_StretchCol.c)
 *     RenderNineGridInternal @ 0x1C0010030 (RenderNineGridInternal.c)
 * Callees:
 *     DNG_StretchRow @ 0x1C000D9C4 (DNG_StretchRow.c)
 *     memmove @ 0x1C01456C0 (memmove.c)
 */

unsigned __int64 __fastcall DNG_DrawRow(__int64 a1)
{
  int v1; // eax
  __int64 v3; // rbx
  __int64 v4; // rdi
  __int64 v5; // rax
  int v6; // ecx
  char *v7; // rdx
  char *v8; // r9
  size_t v9; // r8
  char *v10; // r10
  char *v11; // rax
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // r11
  __int64 v14; // rcx
  unsigned __int64 result; // rax
  int v16; // edx
  __int64 v17; // r15
  __int64 v18; // r14
  int v19; // r8d
  int v20; // r9d
  __int64 v21; // rdi
  int v22; // esi
  unsigned int v23; // r10d
  _DWORD *v24; // r9
  _DWORD *v25; // rax
  unsigned __int64 v26; // rbx
  unsigned __int64 v27; // r11
  bool v28; // cf
  __int64 v29; // rcx
  __int64 v30; // r8
  int v31; // ecx
  int v32; // ecx
  char *v33; // rdx
  char *v34; // r9
  size_t v35; // r8
  char *v36; // rcx
  unsigned __int64 v37; // r10
  unsigned __int64 v38; // r11
  int v39; // esi
  int v40; // edx
  _DWORD *v41; // r11
  int v42; // r10d
  _DWORD *v43; // rcx
  int v44; // eax
  _DWORD *v45; // rbx
  unsigned int v46; // edi
  __int64 v47; // rdx
  _DWORD *v48; // rax
  _DWORD *v49; // rax

  v1 = *(_DWORD *)(a1 + 168);
  v3 = *(_QWORD *)(a1 + 8);
  v4 = *(_QWORD *)(a1 + 32);
  *(_DWORD *)(a1 + 56) = 0;
  if ( *(_DWORD *)a1 < v1 )
  {
    if ( *(_DWORD *)(a1 + 60) == v1 )
    {
      v5 = *(int *)(a1 + 64);
      v6 = 4 * (*(_DWORD *)(a1 + 68) - v5);
      v7 = (char *)(v4 + 4 * v5);
      v8 = (char *)(v3 + 4 * v5);
      if ( v6 > 0 )
      {
        v9 = v6;
        v10 = &v8[v6];
        if ( v10 > v8 )
        {
          v11 = &v7[v6];
          if ( v11 > v7 )
          {
            v12 = *(_QWORD *)(a1 + 216);
            if ( v12 <= (unsigned __int64)v8 )
            {
              v13 = *(_QWORD *)(a1 + 224);
              if ( (unsigned __int64)v10 <= v13
                && (v12 <= (unsigned __int64)v7 && (unsigned __int64)v11 <= v13
                 || *(_QWORD *)(a1 + 232) <= (unsigned __int64)v7 && (unsigned __int64)v11 <= *(_QWORD *)(a1 + 240)) )
              {
                memmove(v8, v7, v9);
              }
            }
          }
        }
      }
    }
    else
    {
      DNG_StretchRow(a1, v3, v4, (unsigned int *)(a1 + 104));
    }
  }
  v14 = *(int *)(a1 + 60);
  *(_DWORD *)(a1 + 56) += v14;
  result = *(int *)(a1 + 168);
  v16 = *(_DWORD *)(a1 + 56);
  v17 = v4 + 4 * v14;
  v18 = v3 + 4 * result;
  if ( v16 >= (int)v14 )
  {
    if ( *(_DWORD *)(a1 + 100) )
    {
      v19 = *(_DWORD *)(a1 + 92);
      v20 = *(_DWORD *)(a1 + 96);
      if ( v19 < v20 )
      {
        if ( *(_DWORD *)(a1 + 176) )
        {
          v39 = *(_DWORD *)(a1 + 84);
          v40 = (v19 - (int)v14) % v39;
          v41 = (_DWORD *)(v18 + 4LL * (v19 - (int)v14));
          v42 = v39 - v40;
          v43 = (_DWORD *)(v17 + 4LL * v40);
          v44 = v20 - v19;
          v45 = v43;
          v46 = v20 - v19;
          if ( v20 - v19 > v39 - v40 )
            v46 = *(_DWORD *)(a1 + 84);
          if ( v44 > v42 )
            v45 = (_DWORD *)v17;
          if ( v44 > 0 && (unsigned int)v44 < 0x3FFFFFFF && v46 < 0x3FFFFFFF )
          {
            v47 = v44;
            v48 = &v41[v44];
            if ( v41 < v48
              && *(_QWORD *)(a1 + 216) <= (unsigned __int64)v41
              && (unsigned __int64)v48 <= *(_QWORD *)(a1 + 224) )
            {
              v49 = &v45[v46];
              if ( v45 < v49
                && *(_QWORD *)(a1 + 232) <= (unsigned __int64)v45
                && (unsigned __int64)v49 <= *(_QWORD *)(a1 + 240)
                && v39 >= 0
                && v19 < v20 )
              {
                do
                {
                  *v41 = *v43;
                  if ( !--v42 )
                  {
                    v42 = *(_DWORD *)(a1 + 84);
                    v43 -= v42;
                  }
                  ++v41;
                  ++v43;
                  --v47;
                }
                while ( v47 );
              }
            }
          }
        }
        else
        {
          v21 = *(unsigned int *)(a1 + 192);
          v22 = *(_DWORD *)(a1 + 188);
          v23 = *(_DWORD *)(a1 + 184);
          v24 = (_DWORD *)(v18 + 4LL * *(int *)(a1 + 204));
          v25 = (_DWORD *)(v17 + 4LL * *(unsigned int *)(a1 + 180));
          if ( *(_QWORD *)(a1 + 216) <= (unsigned __int64)v24 )
          {
            v26 = v18 + 4LL * *(int *)(a1 + 208);
            if ( v26 <= *(_QWORD *)(a1 + 224) && *(_QWORD *)(a1 + 232) <= (unsigned __int64)v25 )
            {
              v27 = v17 + 4LL * (*(_DWORD *)(a1 + 52) - v16);
              if ( v27 <= *(_QWORD *)(a1 + 240) && (unsigned __int64)v24 < v26 )
              {
                do
                {
                  if ( (unsigned __int64)v25 >= v27 )
                    break;
                  v28 = v23 + v22 < v23;
                  *v24 = *v25;
                  v23 += v22;
                  ++v24;
                  v25 += v28 + v21;
                }
                while ( (unsigned __int64)v24 < v26 );
              }
            }
          }
        }
      }
      result = *(int *)(a1 + 88);
      v18 += 4 * result;
    }
    v29 = *(int *)(a1 + 84);
    *(_DWORD *)(a1 + 56) += v29;
    v30 = v17 + 4 * v29;
    if ( *(_DWORD *)(a1 + 56) >= (int)v29 )
    {
      v31 = *(_DWORD *)(a1 + 172);
      result = (unsigned int)(*(_DWORD *)(a1 + 20) - v31);
      if ( *(_DWORD *)(a1 + 4) > (int)result )
      {
        if ( *(_DWORD *)(a1 + 72) == v31 )
        {
          result = *(int *)(a1 + 76);
          v32 = 4 * (*(_DWORD *)(a1 + 80) - result);
          v33 = (char *)(v30 + 4 * result);
          v34 = (char *)(v18 + 4 * result);
          if ( v32 > 0 )
          {
            v35 = v32;
            v36 = &v34[v32];
            if ( v36 > v34 )
            {
              result = (unsigned __int64)&v33[v35];
              if ( &v33[v35] > v33 )
              {
                v37 = *(_QWORD *)(a1 + 216);
                if ( v37 <= (unsigned __int64)v34 )
                {
                  v38 = *(_QWORD *)(a1 + 224);
                  if ( (unsigned __int64)v36 <= v38
                    && (v37 <= (unsigned __int64)v33 && result <= v38
                     || *(_QWORD *)(a1 + 232) <= (unsigned __int64)v33 && result <= *(_QWORD *)(a1 + 240)) )
                  {
                    return (unsigned __int64)memmove(v34, v33, v35);
                  }
                }
              }
            }
          }
        }
        else
        {
          return DNG_StretchRow(a1, v18, v30, (unsigned int *)(a1 + 136));
        }
      }
    }
  }
  return result;
}
