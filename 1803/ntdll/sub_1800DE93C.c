/*
 * XREFs of sub_1800DE93C @ 0x1800DE93C
 * Callers:
 *     LdrResSearchResource @ 0x180051250 (LdrResSearchResource.c)
 * Callees:
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 *     ZwQueryInformationFile @ 0x18009ACE0 (ZwQueryInformationFile.c)
 */

__int64 __fastcall sub_1800DE93C(__int64 a1)
{
  if ( (unsigned __int64)(a1 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
    return 3221225480LL;
  else
    return ZwQueryInformationFile();
}
