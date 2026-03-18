/*
 * XREFs of BiSetObjectDescription @ 0x1407792D4
 * Callers:
 *     BiCreateObject @ 0x140778F1C (BiCreateObject.c)
 * Callees:
 *     BiCreateKey @ 0x1405AF19C (BiCreateKey.c)
 *     BiCloseKey @ 0x1405AFC68 (BiCloseKey.c)
 *     BiSetRegistryValue @ 0x1405B0308 (BiSetRegistryValue.c)
 */

__int64 __fastcall BiSetObjectDescription(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  bool v5; // [rsp+50h] [rbp+18h] BYREF
  void *v6; // [rsp+58h] [rbp+20h] BYREF

  v6 = 0LL;
  result = BiCreateKey(a1, L"Description", 0x20019u, 1u, &v6, &v5);
  if ( (int)result >= 0 )
  {
    BiCloseKey(v6);
    return BiSetRegistryValue(a1, L"Type", L"Description", 4u, (PVOID)(a2 + 4), 4u);
  }
  return result;
}
