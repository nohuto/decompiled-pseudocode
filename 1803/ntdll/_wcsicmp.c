/*
 * XREFs of _wcsicmp @ 0x18008CAD0
 * Callers:
 *     sub_180030B84 @ 0x180030B84 (sub_180030B84.c)
 *     sub_180030EF0 @ 0x180030EF0 (sub_180030EF0.c)
 *     sub_180030F54 @ 0x180030F54 (sub_180030F54.c)
 *     sub_1800321EC @ 0x1800321EC (sub_1800321EC.c)
 *     sub_180032DB4 @ 0x180032DB4 (sub_180032DB4.c)
 *     LdrRscIsTypeExist @ 0x180033CA0 (LdrRscIsTypeExist.c)
 *     sub_180036758 @ 0x180036758 (sub_180036758.c)
 *     RtlCultureNameToLCID @ 0x1800367F0 (RtlCultureNameToLCID.c)
 *     sub_18004D42C @ 0x18004D42C (sub_18004D42C.c)
 *     RtlGetFileMUIPath @ 0x18004EF20 (RtlGetFileMUIPath.c)
 *     sub_1800515C0 @ 0x1800515C0 (sub_1800515C0.c)
 *     sub_180070D0C @ 0x180070D0C (sub_180070D0C.c)
 *     LdrRemoveLoadAsDataTable @ 0x180073DE0 (LdrRemoveLoadAsDataTable.c)
 *     sub_1800D4CE4 @ 0x1800D4CE4 (sub_1800D4CE4.c)
 *     sub_1800D4DBC @ 0x1800D4DBC (sub_1800D4DBC.c)
 *     sub_1800D5064 @ 0x1800D5064 (sub_1800D5064.c)
 *     sub_1800D5528 @ 0x1800D5528 (sub_1800D5528.c)
 *     sub_1800D5A4C @ 0x1800D5A4C (sub_1800D5A4C.c)
 *     RtlpCleanupRegistryKeys @ 0x1800E8720 (RtlpCleanupRegistryKeys.c)
 *     sub_1800F8548 @ 0x1800F8548 (sub_1800F8548.c)
 *     sub_1800F891C @ 0x1800F891C (sub_1800F891C.c)
 *     sub_1800F985C @ 0x1800F985C (sub_1800F985C.c)
 *     sub_18010B4DC @ 0x18010B4DC (sub_18010B4DC.c)
 * Callees:
 *     <none>
 */

int __cdecl wcsicmp(const wchar_t *String1, const wchar_t *String2)
{
  const wchar_t *v2; // r10
  signed __int64 v3; // r9
  unsigned __int16 v4; // r8
  unsigned __int16 v5; // cx
  unsigned __int16 v6; // dx
  unsigned __int16 v7; // r8

  v2 = String2;
  v3 = (char *)String1 - (char *)String2;
  do
  {
    v4 = *(const wchar_t *)((char *)v2 + v3);
    v5 = *v2++;
    v6 = v4 + 32;
    if ( (unsigned __int16)(v4 - 65) > 0x19u )
      v6 = v4;
    v7 = v5 + 32;
    if ( (unsigned __int16)(v5 - 65) > 0x19u )
      v7 = v5;
  }
  while ( v6 && v6 == v7 );
  return v6 - v7;
}
