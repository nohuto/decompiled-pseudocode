/*
 * XREFs of bInitWinResData @ 0x1C0237E44
 * Callers:
 *     bBmfdLoadFont @ 0x1C023550C (bBmfdLoadFont.c)
 *     bVtfdLoadFont @ 0x1C0238704 (bVtfdLoadFont.c)
 * Callees:
 *     bMappedViewRangeCheck @ 0x1C0238004 (bMappedViewRangeCheck.c)
 */

__int64 __fastcall bInitWinResData(__int64 a1, unsigned int a2, __int64 a3)
{
  unsigned int v4; // ebx
  __int64 v7; // rdx
  __int64 v8; // rcx
  unsigned __int8 *v9; // r8
  int v10; // ebp
  __int64 v11; // rdx
  __int64 v12; // rcx
  _WORD *v13; // r8
  unsigned __int16 v14; // ax
  int v15; // ebp
  __int64 v16; // rdx
  __int64 v17; // rcx
  unsigned __int16 *v18; // r8
  int v19; // r13d
  int v20; // eax
  unsigned __int16 *v21; // rbp
  unsigned __int16 *v22; // r8
  unsigned __int16 *v23; // r14
  bool v24; // zf
  int v25; // r15d
  unsigned int v26; // eax
  __int64 v27; // rdx
  unsigned __int16 *v28; // r8
  int v29; // ebp
  unsigned __int16 *v30; // r8

  v4 = 0;
  *(_QWORD *)a3 = a1;
  *(_DWORD *)(a3 + 8) = a2;
  if ( (unsigned int)bMappedViewRangeCheck(a1, a2, a1 + 60, 4LL) )
  {
    if ( *(_WORD *)v8 == 23117 )
    {
      v10 = (*(unsigned __int8 *)(v8 + 63) << 24) | *v9 | (*(unsigned __int16 *)(v8 + 61) << 8);
      *(_DWORD *)(a3 + 12) = v10;
      if ( (unsigned int)bMappedViewRangeCheck(v8, v7, v8 + v10, 64LL) )
      {
        if ( *v13 == 17742 )
        {
          v14 = v13[18];
          if ( v13[19] > v14 )
          {
            v15 = v14 + v10;
            *(_DWORD *)(a3 + 20) = v15;
            if ( (unsigned int)bMappedViewRangeCheck(v12, v11, v12 + v15, 10LL) )
            {
              v19 = *v18;
              v20 = v15 + 2;
              v21 = 0LL;
              v22 = (unsigned __int16 *)(v17 + v20);
              *(_DWORD *)(a3 + 16) = v19;
              *(_DWORD *)(a3 + 20) = v20;
              v23 = 0LL;
              do
              {
                switch ( *v22 )
                {
                  case 0u:
LABEL_21:
                    *(_QWORD *)(a3 + 24) = 0LL;
                    return v4;
                  case 0x8007u:
                    v23 = v22;
                    v24 = v21 == 0LL;
                    break;
                  case 0x8008u:
                    v21 = v22;
                    v24 = v23 == 0LL;
                    break;
                  default:
                    continue;
                }
                if ( !v24 )
                {
                  v25 = v21[1];
                  *(_DWORD *)(a3 + 24) = v25;
                  v26 = (_DWORD)v21 - a1 + 8;
                  *(_DWORD *)(a3 + 28) = v26;
                  if ( v26 <= a2 )
                  {
                    if ( (unsigned int)bMappedViewRangeCheck(a1, v16, v23 + 4, 12LL) )
                    {
                      v29 = *v28 << v19;
                      *(_DWORD *)(a3 + 32) = v29;
                      if ( (unsigned int)bMappedViewRangeCheck(a1, v27, a1 + v29, 2LL) )
                      {
                        if ( *v30 == v25 )
                        {
                          v4 = 1;
                          *(_DWORD *)(a3 + 32) = v29 + 2;
                          return v4;
                        }
                      }
                    }
                  }
                  goto LABEL_21;
                }
              }
              while ( (unsigned int)bMappedViewRangeCheck(a1, v16, &v22[6 * v22[1] + 4], 8LL) );
            }
          }
        }
      }
    }
  }
  return v4;
}
