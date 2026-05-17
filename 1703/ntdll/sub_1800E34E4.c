/*
 * XREFs of sub_1800E34E4 @ 0x1800E34E4
 * Callers:
 *     LdrResSearchResource @ 0x180059D70 (LdrResSearchResource.c)
 * Callees:
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     ZwQueryInformationFile @ 0x1800A5520 (ZwQueryInformationFile.c)
 */

__int64 __fastcall sub_1800E34E4(__int64 a1)
{
  if ( (unsigned __int64)(a1 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
    return 3221225480LL;
  else
    return ZwQueryInformationFile();
}
