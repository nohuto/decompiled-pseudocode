/*
 * XREFs of bCvtUnToMac @ 0x1C02271CC
 * Callers:
 *     bComputeIDs @ 0x1C02262C4 (bComputeIDs.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall bCvtUnToMac(__int64 a1, __int64 a2, __int16 a3)
{
  BOOL v4; // r10d
  unsigned int v5; // r9d
  __int64 v6; // rax
  bool v7; // cf
  __int64 v8; // rdx
  unsigned __int64 v9; // r9
  unsigned __int16 v10; // r8
  int v11; // r11d
  __int64 v12; // rcx
  _WORD *v13; // rdx

  v4 = a3 == 1;
  v5 = v4;
  if ( a3 != 1 )
    return v5;
  v6 = *(unsigned int *)(a2 + 104);
  if ( !(_DWORD)v6 || (v7 = *(_DWORD *)(a2 + 108) < 0x10u, v8 = a1 + v6, v7) )
    v8 = 0LL;
  if ( !v8 || _byteswap_ulong(*(_DWORD *)v8) != 0x20000 )
    return v5;
  v9 = *(unsigned int *)(a2 + 108);
  if ( (unsigned int)v9 >= 0x22 )
  {
    v10 = __ROR2__(*(_WORD *)(v8 + 32), 8);
    if ( 2 * (unsigned __int64)v10 + 34 <= v9 )
    {
      v11 = 0;
      v12 = 0LL;
      if ( v10 )
      {
        v13 = (_WORD *)(v8 + 34);
        do
        {
          if ( (unsigned __int8)*v13 && (char)HIBYTE(*v13) > 1 )
            break;
          ++v11;
          ++v12;
          ++v13;
        }
        while ( v12 < v10 );
      }
      v5 = v4;
      if ( v11 < v10 )
        return 0;
      return v5;
    }
  }
  return v4;
}
