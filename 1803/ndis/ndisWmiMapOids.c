/*
 * XREFs of ndisWmiMapOids @ 0x1C00C3EC0
 * Callers:
 *     ndisQuerySupportedGuidToOidList @ 0x1C00C3A64 (ndisQuerySupportedGuidToOidList.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ndisWmiMapOids(
        __int64 a1,
        unsigned __int16 a2,
        __int64 a3,
        unsigned __int16 a4,
        __int64 a5,
        unsigned int a6)
{
  unsigned __int16 i; // r10
  unsigned __int16 v8; // ax
  __int64 v9; // r11
  int v10; // edx
  __int64 v12; // rdx

  for ( i = 0; i < a6; ++i )
  {
    v8 = 0;
    if ( a4 )
    {
      v9 = a5 + 28LL * i;
      v10 = *(_DWORD *)(v9 + 16);
      while ( !v10 || v10 != *(_DWORD *)(a3 + 4LL * v8) )
      {
        if ( ++v8 >= a4 )
          goto LABEL_7;
      }
      if ( a1 )
      {
        v12 = 28LL * a2;
        *(_OWORD *)(v12 + a1) = *(_OWORD *)v9;
        *(_QWORD *)(v12 + a1 + 16) = *(_QWORD *)(v9 + 16);
        *(_DWORD *)(v12 + a1 + 24) = *(_DWORD *)(v9 + 24);
      }
      ++a2;
    }
LABEL_7:
    ;
  }
  return a2;
}
