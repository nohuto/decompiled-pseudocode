/*
 * XREFs of sfac_ComputeMapping @ 0x1C02C32F0
 * Callers:
 *     fs_NewSfnt @ 0x1C02B5E84 (fs_NewSfnt.c)
 * Callees:
 *     InvokeReleaseSfntFrag @ 0x1C02C2D94 (InvokeReleaseSfntFrag.c)
 *     sfac_ComputeBinarySearchParams @ 0x1C02C2F4C (sfac_ComputeBinarySearchParams.c)
 *     sfac_GetDataPtr @ 0x1C02C378C (sfac_GetDataPtr.c)
 */

__int64 __fastcall sfac_ComputeMapping(__int64 a1, __int16 a2, __int16 a3)
{
  int v3; // esi
  __int64 result; // rax
  __int64 v8; // rbp
  unsigned int v9; // edi
  unsigned __int64 v10; // r9
  unsigned __int64 v11; // r8
  unsigned int v12; // ecx
  unsigned __int16 v13; // ax
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // r10
  __int64 v16; // rcx
  _WORD *v17; // r8
  unsigned __int64 v18; // r11
  __int16 v19; // ax
  _WORD *v20; // rax
  int v21; // ecx
  unsigned __int64 v22; // [rsp+78h] [rbp+20h] BYREF

  v3 = 0;
  if ( a2 == -1 )
  {
    *(_DWORD *)(a1 + 212) = 1;
    return 0LL;
  }
  v8 = *(unsigned int *)(a1 + 92);
  result = sfac_GetDataPtr(a1, 0, *(_DWORD *)(a1 + 92), 8, 0, (__int64)&v22);
  v9 = result;
  if ( !(_DWORD)result )
  {
    v10 = v22;
    if ( !v22 )
    {
      *(_DWORD *)(a1 + 212) = 1;
      return 0LL;
    }
    if ( (unsigned int)v8 < 4
      || ((v11 = v22 + 4, v12 = 8 * (unsigned __int16)__ROR2__(*(_WORD *)(v22 + 2), 8), v12 > 0xFFFF)
        ? (v13 = -1)
        : (v13 = v12),
          v12 > 0xFFFF) )
    {
      *(_DWORD *)(a1 + 20) = 0;
    }
    else
    {
      v14 = v11 + v13;
      if ( v14 < v11 )
      {
        *(_DWORD *)(a1 + 20) = 0;
      }
      else
      {
        v15 = v11 + v13;
        if ( v11 < v14 )
        {
          while ( !v3 )
          {
            if ( v11 > v10 + (unsigned int)(v8 - 8) )
              goto LABEL_39;
            if ( __ROR2__(*(_WORD *)v11, 8) == a2 && __ROR2__(*(_WORD *)(v11 + 2), 8) == a3 )
            {
              v3 = 1;
              *(_DWORD *)(a1 + 20) = _byteswap_ulong(*(_DWORD *)(v11 + 4));
            }
            v11 += 8LL;
            if ( v11 >= v15 )
            {
              if ( !v3 )
                goto LABEL_39;
              break;
            }
          }
          v16 = *(unsigned int *)(a1 + 20);
          v17 = (_WORD *)(v16 + v10);
          if ( v16 + v10 >= v10 && (int)v16 + 6 >= (unsigned int)v16 )
          {
            *(_DWORD *)(a1 + 20) = v16 + 6;
            v18 = v8 + v10 - 2;
            if ( (unsigned __int64)v17 <= v18 )
            {
              v19 = __ROR2__(*v17, 8);
              *(_WORD *)(a1 + 208) = v19;
              if ( v19 )
              {
                switch ( v19 )
                {
                  case 2:
                    *(_DWORD *)(a1 + 212) = 3;
                    break;
                  case 4:
                    v20 = (_WORD *)(v10 + (unsigned int)(v16 + 6));
                    *(_DWORD *)(a1 + 212) = 4;
                    if ( (unsigned __int64)v20 <= v18 )
                    {
                      sfac_ComputeBinarySearchParams(
                        __ROR2__(*v20, 8) >> 1,
                        (_WORD *)(a1 + 218),
                        (_WORD *)(a1 + 220),
                        (_WORD *)(a1 + 222));
                    }
                    else
                    {
                      *(_DWORD *)(a1 + 20) = 0;
                      v9 = 5126;
                      *(_DWORD *)(a1 + 212) = 1;
                    }
                    break;
                  case 6:
                    *(_DWORD *)(a1 + 212) = 5;
                    break;
                  default:
                    *(_DWORD *)(a1 + 212) = 1;
                    v9 = 5130;
                    break;
                }
              }
              else
              {
                *(_DWORD *)(a1 + 212) = 2;
              }
              InvokeReleaseSfntFrag(*(_DWORD *)(a1 + 12));
              return v9;
            }
          }
        }
LABEL_39:
        *(_DWORD *)(a1 + 20) = 0;
      }
    }
    v21 = *(_DWORD *)(a1 + 12);
    *(_DWORD *)(a1 + 212) = 1;
    InvokeReleaseSfntFrag(v21);
    return 5126LL;
  }
  return result;
}
