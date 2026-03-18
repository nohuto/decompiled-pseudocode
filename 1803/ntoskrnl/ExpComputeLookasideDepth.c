/*
 * XREFs of ExpComputeLookasideDepth @ 0x1400A536C
 * Callers:
 *     ExpScanSystemLookasideList @ 0x1400A51F4 (ExpScanSystemLookasideList.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ExpComputeLookasideDepth(__int64 a1, int a2, int a3)
{
  int v3; // eax
  unsigned int v5; // ecx
  unsigned __int16 v6; // r11
  __int64 result; // rax
  int v8; // r10d
  unsigned int v9; // eax
  unsigned int v10; // edx

  v3 = *(_DWORD *)(a1 + 20);
  v5 = v3 - *(_DWORD *)(a1 + 80);
  v6 = *(_WORD *)(a1 + 18);
  *(_DWORD *)(a1 + 80) = v3;
  result = 0xFFFFLL;
  if ( v6 != 0xFFFF )
  {
    v8 = *(unsigned __int16 *)(a1 + 16);
    if ( v5 >= 25 * a3 )
    {
      v9 = 1000 * a2 / v5;
      if ( v9 >= 5 )
      {
        v10 = v9 * (v6 - v8) / 0x7D0 + 5;
        if ( v10 > 0x1E )
          v10 = 30;
        result = v8 + v10;
        if ( (int)result > v6 )
          result = v6;
        goto LABEL_6;
      }
      result = (unsigned int)(v8 - 1);
    }
    else
    {
      result = (unsigned int)(v8 - 10);
    }
    if ( (int)result < 4 )
      result = 4LL;
LABEL_6:
    *(_WORD *)(a1 + 16) = result;
  }
  return result;
}
