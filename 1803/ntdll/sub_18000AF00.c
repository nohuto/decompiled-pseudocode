/*
 * XREFs of sub_18000AF00 @ 0x18000AF00
 * Callers:
 *     sub_18000AB38 @ 0x18000AB38 (sub_18000AB38.c)
 * Callees:
 *     ZwQueryKey @ 0x18009AD80 (ZwQueryKey.c)
 */

NTSTATUS __fastcall sub_18000AF00(void *a1, __int16 a2)
{
  NTSTATUS result; // eax
  char KeyInformation; // [rsp+48h] [rbp+10h] BYREF
  ULONG ResultLength; // [rsp+50h] [rbp+18h] BYREF

  if ( (a2 & 0x100) != 0 )
    return 0;
  result = ZwQueryKey(a1, KeyTrustInformation, &KeyInformation, 4u, &ResultLength);
  if ( result >= 0 )
  {
    if ( (KeyInformation & 1) != 0 )
      return 0;
    result = -1073741790;
  }
  if ( result != -1073741431 )
    __fastfail(9u);
  return result;
}
