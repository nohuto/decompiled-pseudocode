/*
 * XREFs of CmpGetValueDataFromCache @ 0x1404A17F4
 * Callers:
 *     CmpCompareNewValueDataAgainstKCBCache @ 0x1404A3C14 (CmpCompareNewValueDataAgainstKCBCache.c)
 *     CmpQueryKeyValueData @ 0x1404A6780 (CmpQueryKeyValueData.c)
 * Callees:
 *     CmpGetValueData @ 0x1404A6CE0 (CmpGetValueData.c)
 */

__int64 __fastcall CmpGetValueDataFromCache(__int64 a1, int a2, int a3, __int64 a4, __int64 a5)
{
  char ValueData; // al
  __int64 v7; // [rsp+50h] [rbp+8h] BYREF
  __int64 v8; // [rsp+60h] [rbp+18h] BYREF

  ValueData = CmpGetValueData(*(_QWORD *)(a1 + 24), a2, a3, (unsigned int)&v7, (__int64)&v8, a4, a5);
  return v8 & -(__int64)(ValueData != 0);
}
