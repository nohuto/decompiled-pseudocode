/*
 * XREFs of sub_1800F5294 @ 0x1800F5294
 * Callers:
 *     sub_1800F56C8 @ 0x1800F56C8 (sub_1800F56C8.c)
 * Callees:
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     ZwQueryInformationFile @ 0x1800A5520 (ZwQueryInformationFile.c)
 */

__int64 __fastcall sub_1800F5294(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax
  __int64 v4; // [rsp+48h] [rbp-20h]

  result = ZwQueryInformationFile();
  if ( (int)result >= 0 )
  {
    *a2 = v4;
    return 0LL;
  }
  return result;
}
