/*
 * XREFs of sfac_LoadCriticalSfntMetrics @ 0x1C02C4318
 * Callers:
 *     fs_NewSfnt @ 0x1C02B5E84 (fs_NewSfnt.c)
 * Callees:
 *     InvokeReleaseSfntFrag @ 0x1C02C2D94 (InvokeReleaseSfntFrag.c)
 *     sfac_GetDataPtr @ 0x1C02C378C (sfac_GetDataPtr.c)
 *     sfac_ReadNumLongVertMetrics @ 0x1C02C4D08 (sfac_ReadNumLongVertMetrics.c)
 */

__int64 __fastcall sfac_LoadCriticalSfntMetrics(__int64 a1, _WORD *a2, int *a3, __int64 a4)
{
  __int64 result; // rax
  __int64 v9; // rcx
  __int16 v10; // ax
  unsigned int v11; // eax
  _WORD *v12; // rsi
  __int64 v13; // rcx
  __int16 v14; // ax
  int v15; // ecx
  int v16; // ecx
  _WORD *v17; // rcx
  unsigned __int16 v18; // dx
  unsigned __int16 v19; // cx
  unsigned __int16 v20; // ax
  __int64 v21; // [rsp+30h] [rbp-18h] BYREF
  __int64 v22[2]; // [rsp+38h] [rbp-10h] BYREF

  result = sfac_GetDataPtr(a1, 0, -1, 0, 1, &v21);
  if ( !(_DWORD)result )
  {
    result = sfac_GetDataPtr(a1, 0, -1, 1, 1, v22);
    if ( !(_DWORD)result )
    {
      v9 = v21;
      if ( _byteswap_ulong(*(_DWORD *)(v21 + 12)) == 1594834165 )
      {
        v10 = __ROR2__(*(_WORD *)(v21 + 18), 8);
        *a2 = v10;
        if ( (unsigned __int16)(v10 - 16) > 0x3FF0u )
        {
          return 5134LL;
        }
        else
        {
          v11 = *(unsigned __int16 *)(v9 + 16);
          v12 = (_WORD *)v22[0];
          LOWORD(v11) = __ROR2__(v11, 8);
          *a3 = (v11 >> 3) & 1;
          LOWORD(v11) = __ROR2__(v12[17], 8);
          *(_WORD *)(a1 + 200) = v11;
          if ( (_WORD)v11 )
          {
            *(_WORD *)(a1 + 16) = __ROR2__(*(_WORD *)(v9 + 50), 8);
            result = sfac_GetDataPtr(a1, 0, 78, 14, 0, v22);
            if ( !(_DWORD)result )
            {
              v13 = v22[0];
              if ( v22[0] )
              {
                *(_WORD *)(a1 + 224) = __ROR2__(*(_WORD *)(v22[0] + 68), 8);
                v14 = *(_WORD *)(v13 + 70);
                v15 = *(_DWORD *)(a1 + 12);
                *(_WORD *)(a1 + 226) = __ROR2__(v14, 8);
                InvokeReleaseSfntFrag(v15);
              }
              else
              {
                *(_WORD *)(a1 + 224) = __ROR2__(v12[2], 8);
                *(_WORD *)(a1 + 226) = __ROR2__(v12[3], 8);
              }
              v16 = *(_DWORD *)(a1 + 12);
              *(_WORD *)(a1 + 228) = __ROR2__(v12[3], 8);
              InvokeReleaseSfntFrag(v16);
              InvokeReleaseSfntFrag(*(_DWORD *)(a1 + 12));
              result = sfac_GetDataPtr(a1, 0, -1, 3, 1, v22);
              if ( !(_DWORD)result )
              {
                v17 = (_WORD *)v22[0];
                *(_DWORD *)a4 = _byteswap_ulong(*(_DWORD *)v22[0]);
                *(_WORD *)(a4 + 4) = __ROR2__(v17[2], 8);
                *(_WORD *)(a4 + 6) = __ROR2__(v17[3], 8);
                *(_WORD *)(a4 + 8) = __ROR2__(v17[4], 8);
                *(_WORD *)(a4 + 10) = __ROR2__(v17[5], 8);
                *(_WORD *)(a4 + 12) = __ROR2__(v17[6], 8);
                *(_WORD *)(a4 + 14) = __ROR2__(v17[7], 8);
                *(_WORD *)(a4 + 16) = __ROR2__(v17[8], 8);
                *(_WORD *)(a4 + 18) = __ROR2__(v17[9], 8);
                *(_WORD *)(a4 + 20) = __ROR2__(v17[10], 8);
                *(_WORD *)(a4 + 22) = __ROR2__(v17[11], 8);
                *(_WORD *)(a4 + 24) = __ROR2__(v17[12], 8);
                *(_WORD *)(a4 + 26) = __ROR2__(v17[13], 8);
                *(_WORD *)(a4 + 28) = __ROR2__(v17[14], 8);
                *(_WORD *)(a4 + 30) = __ROR2__(v17[15], 8);
                InvokeReleaseSfntFrag(*(_DWORD *)(a1 + 12));
                v18 = *(_WORD *)(a4 + 6);
                v19 = *(_WORD *)(a4 + 10);
                v20 = v19;
                if ( v18 > v19 )
                  v20 = *(_WORD *)(a4 + 6);
                if ( v20 <= 0xFFF6u )
                {
                  if ( v18 > 0x7FF6u )
                    *(_WORD *)(a4 + 6) = 32758;
                  if ( v19 > 0x7FF6u )
                    *(_WORD *)(a4 + 10) = 32758;
                  if ( *(_WORD *)(a4 + 16) > 0x7FFFu )
                    *(_WORD *)(a4 + 16) = 0x7FFF;
                  return sfac_ReadNumLongVertMetrics(a1, a1 + 202, a1 + 204);
                }
                else
                {
                  return 5131LL;
                }
              }
            }
          }
          else
          {
            return 5135LL;
          }
        }
      }
      else
      {
        return 5125LL;
      }
    }
  }
  return result;
}
