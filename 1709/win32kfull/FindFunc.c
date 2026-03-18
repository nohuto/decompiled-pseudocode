/*
 * XREFs of FindFunc @ 0x1C02889AC
 * Callers:
 *     InitializeDriver @ 0x1C02889E8 (InitializeDriver.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall FindFunc(int a1)
{
  _DWORD *v1; // rdx
  __int64 v2; // r8
  unsigned int v3; // eax

  v1 = (_DWORD *)qword_1C03341E0;
  v2 = 0LL;
  v3 = 0;
  while ( *v1 != a1 )
  {
    ++v3;
    v1 += 4;
    if ( v3 >= 0x13 )
      return v2;
  }
  return *(_QWORD *)(qword_1C03341E0 + 16LL * v3 + 8);
}
