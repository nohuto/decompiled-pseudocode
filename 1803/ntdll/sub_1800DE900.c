/*
 * XREFs of sub_1800DE900 @ 0x1800DE900
 * Callers:
 *     sub_1800DE154 @ 0x1800DE154 (sub_1800DE154.c)
 *     sub_1800DE200 @ 0x1800DE200 (sub_1800DE200.c)
 * Callees:
 *     ZwSetInformationFile @ 0x18009AFA0 (ZwSetInformationFile.c)
 */

__int64 __fastcall sub_1800DE900(__int64 a1)
{
  if ( (unsigned __int64)(a1 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
    return 3221225480LL;
  else
    return ZwSetInformationFile();
}
