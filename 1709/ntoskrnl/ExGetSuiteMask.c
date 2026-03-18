/*
 * XREFs of ExGetSuiteMask @ 0x1405DE114
 * Callers:
 *     PspSiloInitializeSuiteMask @ 0x1407158E8 (PspSiloInitializeSuiteMask.c)
 *     ExpInitSystemPhase0 @ 0x14084FA14 (ExpInitSystemPhase0.c)
 * Callees:
 *     RtlGetProductInfo @ 0x1401540A0 (RtlGetProductInfo.c)
 *     ExpGetProductInfoSuiteTypeMap @ 0x1405DE1A8 (ExpGetProductInfoSuiteTypeMap.c)
 *     ExpParseSuiteMask @ 0x1405DE1F0 (ExpParseSuiteMask.c)
 */

int __fastcall ExGetSuiteMask(__int64 a1, char a2)
{
  int v3; // ebx
  int v4; // eax
  int *v5; // rdx
  __int64 v6; // r8
  int v7; // ebx
  int result; // eax
  _BYTE v9[4]; // [rsp+30h] [rbp-18h] BYREF
  int v10; // [rsp+34h] [rbp-14h]
  ULONG ReturnedProductType; // [rsp+58h] [rbp+10h] BYREF

  v3 = ExpParseSuiteMask();
  if ( RtlGetProductInfo(6u, 0, 0, 0, &ReturnedProductType) && ReturnedProductType != -1412584499 )
  {
    v4 = 0;
    v5 = &dword_14078FCF4;
    v6 = 51LL;
    do
    {
      if ( *(v5 - 1) != ReturnedProductType )
        v4 |= *v5;
      v5 += 3;
      --v6;
    }
    while ( v6 );
    v3 &= ~v4;
    if ( (unsigned __int8)ExpGetProductInfoSuiteTypeMap(ReturnedProductType, v9) )
      v3 |= v10;
  }
  v7 = v3 | 0x10;
  result = v7 | 0x100;
  if ( a2 )
    return v7;
  return result;
}
