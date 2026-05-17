/*
 * XREFs of sub_18005CAB4 @ 0x18005CAB4
 * Callers:
 *     LdrpResGetResourceDirectory @ 0x18005A920 (LdrpResGetResourceDirectory.c)
 *     sub_18005AD34 @ 0x18005AD34 (sub_18005AD34.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18005CAB4(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5, char a6)
{
  __int64 v8; // r10
  int v9; // edx
  unsigned int v10; // ecx

  v8 = a4;
  if ( a3 )
  {
    if ( a4 || (v8 = *(unsigned __int16 *)(a3 + 20) + a3 + 24) != 0 )
    {
      v9 = 0;
      if ( *(_WORD *)(a3 + 6) )
      {
        while ( a4 || !a6 || v8 + 40 <= a2 + (a1 & 0xFFFFFFFFFFFFFFFCuLL) )
        {
          v10 = *(_DWORD *)(v8 + 12);
          if ( a5 == v10 || a5 > v10 && a5 < *(_DWORD *)(v8 + 16) + v10 )
            return v8;
          v8 += 40LL;
          if ( ++v9 >= *(unsigned __int16 *)(a3 + 6) )
            return 0LL;
        }
      }
    }
  }
  return 0LL;
}
