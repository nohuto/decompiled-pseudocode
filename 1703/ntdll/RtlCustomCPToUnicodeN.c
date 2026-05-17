/*
 * XREFs of RtlCustomCPToUnicodeN @ 0x1800E3CD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlCustomCPToUnicodeN(
        __int64 a1,
        _WORD *a2,
        unsigned int a3,
        _DWORD *a4,
        unsigned __int8 *a5,
        unsigned int a6)
{
  unsigned int v6; // r11d
  unsigned int v7; // ebx
  unsigned int v9; // r10d
  _WORD *v10; // rdx
  __int64 v11; // r9
  unsigned __int8 *v12; // r8
  __int64 v13; // r10
  int v14; // esi
  unsigned __int8 *v15; // r8
  __int64 v16; // rcx
  unsigned __int16 v17; // ax

  v6 = a6;
  v7 = a3 >> 1;
  if ( !*(_WORD *)(a1 + 12) )
  {
    v9 = a6;
    if ( v7 < a6 )
      v9 = a3 >> 1;
    if ( a4 )
      *a4 = 2 * v9;
    v10 = a2 + 14;
    v11 = *(_QWORD *)(a1 + 32);
    v12 = a5 + 14;
    while ( v9 <= 8 )
    {
      if ( v9 == 8 )
        goto LABEL_32;
      if ( !v9 )
        goto LABEL_40;
      if ( v9 != 1 )
      {
        if ( v9 != 2 )
        {
          if ( v9 != 3 )
          {
            if ( v9 != 4 )
            {
              if ( v9 != 5 )
              {
                if ( v9 != 6 )
                  goto LABEL_33;
                goto LABEL_34;
              }
              goto LABEL_35;
            }
            goto LABEL_36;
          }
          goto LABEL_37;
        }
        goto LABEL_38;
      }
LABEL_39:
      *(v10 - 14) = *(_WORD *)(v11 + 2LL * *(v12 - 14));
LABEL_40:
      if ( v9 <= 0x10 )
        return v7 < v6 ? 0x80000005 : 0;
      v9 -= 16;
      v12 += 16;
      v10 += 16;
    }
    if ( v9 != 9 )
    {
      if ( v9 != 10 )
      {
        if ( v9 != 11 )
        {
          if ( v9 != 12 )
          {
            if ( v9 != 13 )
            {
              if ( v9 != 14 )
              {
                if ( v9 != 15 )
                  v10[1] = *(_WORD *)(v11 + 2LL * v12[1]);
                *v10 = *(_WORD *)(v11 + 2LL * *v12);
              }
              *(v10 - 1) = *(_WORD *)(v11 + 2LL * *(v12 - 1));
            }
            *(v10 - 2) = *(_WORD *)(v11 + 2LL * *(v12 - 2));
          }
          *(v10 - 3) = *(_WORD *)(v11 + 2LL * *(v12 - 3));
        }
        *(v10 - 4) = *(_WORD *)(v11 + 2LL * *(v12 - 4));
      }
      *(v10 - 5) = *(_WORD *)(v11 + 2LL * *(v12 - 5));
    }
    *(v10 - 6) = *(_WORD *)(v11 + 2LL * *(v12 - 6));
LABEL_32:
    *(v10 - 7) = *(_WORD *)(v11 + 2LL * *(v12 - 7));
LABEL_33:
    *(v10 - 8) = *(_WORD *)(v11 + 2LL * *(v12 - 8));
LABEL_34:
    *(v10 - 9) = *(_WORD *)(v11 + 2LL * *(v12 - 9));
LABEL_35:
    *(v10 - 10) = *(_WORD *)(v11 + 2LL * *(v12 - 10));
LABEL_36:
    *(v10 - 11) = *(_WORD *)(v11 + 2LL * *(v12 - 11));
LABEL_37:
    *(v10 - 12) = *(_WORD *)(v11 + 2LL * *(v12 - 12));
LABEL_38:
    *(v10 - 13) = *(_WORD *)(v11 + 2LL * *(v12 - 13));
    goto LABEL_39;
  }
  v13 = *(_QWORD *)(a1 + 56);
  v14 = (int)a2;
  if ( v7 )
  {
    v15 = a5;
    while ( v6 )
    {
      v16 = *v15;
      --v7;
      --v6;
      v17 = *(_WORD *)(v13 + 2 * v16);
      if ( v17 )
      {
        if ( !v6 )
        {
          *a2 = 0;
          LODWORD(a2) = (_DWORD)a2 + 2;
          break;
        }
        *a2++ = *(_WORD *)(v13 + 2 * (*++v15 + (unsigned __int64)v17));
        --v6;
      }
      else
      {
        *a2++ = *(_WORD *)(*(_QWORD *)(a1 + 32) + 2 * v16);
      }
      ++v15;
      if ( !v7 )
        break;
    }
  }
  if ( a4 )
    *a4 = (_DWORD)a2 - v14;
  return v7 < v6 ? 0x80000005 : 0;
}
