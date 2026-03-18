/*
 * XREFs of rimExtractData @ 0x1C01121CC
 * Callers:
 *     rimExtractPenInfo @ 0x1C0112870 (rimExtractPenInfo.c)
 *     rimExtractPointerDeviceUsages @ 0x1C011294C (rimExtractPointerDeviceUsages.c)
 *     rimExtractTouchInfo @ 0x1C0113088 (rimExtractTouchInfo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall rimExtractData(__int64 a1, __int16 a2, __int16 a3, int a4, _DWORD *a5)
{
  unsigned int v5; // r10d
  __int64 v6; // rax
  unsigned int v7; // r11d
  __int64 v10; // rcx
  unsigned int v11; // edx
  int v12; // r8d
  int v13; // r9d
  int v14; // eax

  v5 = 0;
  v6 = a1 + 30;
  v7 = 0;
  while ( 1 )
  {
    if ( *(_WORD *)(v6 - 2) == a2 && *(_WORD *)v6 == a3 )
    {
      v10 = *(unsigned int *)(v6 + 2);
      if ( (_DWORD)v10 != -1 )
        break;
    }
    ++v7;
    v6 += 16LL;
    if ( v7 >= 6 )
      return v5;
  }
  v11 = *(_DWORD *)(a1 + 16LL * v7 + 40);
  v12 = *(_DWORD *)(a1 + 16LL * v7 + 36);
  v5 = *(_DWORD *)(60 * v10 + a1 + 380);
  if ( v11 != v12 )
  {
    v13 = *(_DWORD *)(60 * v10 + a1 + 364);
    v14 = *(_DWORD *)(60 * (v10 + 6) + a1);
    if ( v13 != v14 )
    {
      if ( (int)v5 >= v14 )
      {
        if ( (int)v5 <= v13 )
          v5 = v12 + (int)((v11 - v12) * (v5 - v14)) / (v13 - v14);
        else
          v5 = v11;
      }
      else
      {
        v5 = *(_DWORD *)(a1 + 16LL * v7 + 36);
      }
    }
  }
  if ( a5 )
    *a5 |= a4;
  return v5;
}
