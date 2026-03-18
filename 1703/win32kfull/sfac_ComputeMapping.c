/*
 * XREFs of sfac_ComputeMapping @ 0x1C02C94E4
 * Callers:
 *     fs_NewSfnt @ 0x1C02BC070 (fs_NewSfnt.c)
 * Callees:
 *     InvokeReleaseSfntFrag @ 0x1C02C8F8C (InvokeReleaseSfntFrag.c)
 *     sfac_ComputeBinarySearchParams @ 0x1C02C9144 (sfac_ComputeBinarySearchParams.c)
 *     sfac_GetDataPtr @ 0x1C02C9974 (sfac_GetDataPtr.c)
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
  unsigned __int64 v13; // rcx
  __int64 v14; // rcx
  _WORD *v15; // r8
  unsigned __int64 v16; // r11
  __int16 v17; // ax
  _WORD *v18; // rax
  int v19; // ecx
  unsigned __int64 v20; // [rsp+78h] [rbp+20h] BYREF

  v3 = 0;
  if ( a2 == -1 )
  {
    *(_DWORD *)(a1 + 212) = 1;
    return 0LL;
  }
  v8 = *(unsigned int *)(a1 + 92);
  result = sfac_GetDataPtr(a1, 0, *(_DWORD *)(a1 + 92), 8, 0, (__int64)&v20);
  v9 = result;
  if ( !(_DWORD)result )
  {
    v10 = v20;
    if ( !v20 )
    {
      *(_DWORD *)(a1 + 212) = 1;
      return 0LL;
    }
    if ( (unsigned int)v8 < 4
      || (v11 = v20 + 4, v12 = 8 * (unsigned __int16)__ROR2__(*(_WORD *)(v20 + 2), 8), v12 > 0xFFFF) )
    {
      *(_DWORD *)(a1 + 20) = 0;
LABEL_36:
      v19 = *(_DWORD *)(a1 + 12);
      *(_DWORD *)(a1 + 212) = 1;
      InvokeReleaseSfntFrag(v19);
      return 5126LL;
    }
    v13 = v11 + (unsigned __int16)v12;
    if ( v13 < v11 )
    {
      *(_DWORD *)(a1 + 20) = 0;
      goto LABEL_36;
    }
    if ( v11 >= v13 )
      goto LABEL_35;
    while ( !v3 )
    {
      if ( v11 > v10 + (unsigned int)(v8 - 8) )
        goto LABEL_35;
      if ( __ROR2__(*(_WORD *)v11, 8) == a2 && __ROR2__(*(_WORD *)(v11 + 2), 8) == a3 )
      {
        v3 = 1;
        *(_DWORD *)(a1 + 20) = _byteswap_ulong(*(_DWORD *)(v11 + 4));
      }
      v11 += 8LL;
      if ( v11 >= v13 )
      {
        if ( !v3 )
          goto LABEL_35;
        break;
      }
    }
    v14 = *(unsigned int *)(a1 + 20);
    v15 = (_WORD *)(v14 + v10);
    if ( v14 + v10 < v10
      || (int)v14 + 6 < (unsigned int)v14
      || (*(_DWORD *)(a1 + 20) = v14 + 6, v16 = v8 + v10 - 2, (unsigned __int64)v15 > v16) )
    {
LABEL_35:
      *(_DWORD *)(a1 + 20) = 0;
      goto LABEL_36;
    }
    v17 = __ROR2__(*v15, 8);
    *(_WORD *)(a1 + 208) = v17;
    if ( v17 )
    {
      switch ( v17 )
      {
        case 2:
          *(_DWORD *)(a1 + 212) = 3;
          break;
        case 4:
          v18 = (_WORD *)(v10 + (unsigned int)(v14 + 6));
          *(_DWORD *)(a1 + 212) = 4;
          if ( (unsigned __int64)v18 <= v16 )
          {
            sfac_ComputeBinarySearchParams(
              __ROR2__(*v18, 8) >> 1,
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
  return result;
}
