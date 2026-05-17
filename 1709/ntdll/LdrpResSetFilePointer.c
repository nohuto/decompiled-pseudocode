/*
 * XREFs of LdrpResSetFilePointer @ 0x1800E38FC
 * Callers:
 *     LdrpResReadFile @ 0x1800E3164 (LdrpResReadFile.c)
 *     LdrpResSearchResourceHandle @ 0x1800E3210 (LdrpResSearchResourceHandle.c)
 * Callees:
 *     ZwSetInformationFile @ 0x1800A05A0 (ZwSetInformationFile.c)
 */

__int64 __fastcall LdrpResSetFilePointer(__int64 a1)
{
  if ( (unsigned __int64)(a1 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
    return 3221225480LL;
  else
    return ZwSetInformationFile();
}
