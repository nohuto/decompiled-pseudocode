/*
 * XREFs of sub_1800E34A8 @ 0x1800E34A8
 * Callers:
 *     sub_1800E2D04 @ 0x1800E2D04 (sub_1800E2D04.c)
 *     sub_1800E2DB0 @ 0x1800E2DB0 (sub_1800E2DB0.c)
 * Callees:
 *     ZwSetInformationFile @ 0x1800A57E0 (ZwSetInformationFile.c)
 */

__int64 __fastcall sub_1800E34A8(__int64 a1)
{
  if ( (unsigned __int64)(a1 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
    return 3221225480LL;
  else
    return ZwSetInformationFile();
}
