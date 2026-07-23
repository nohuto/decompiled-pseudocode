/*
 * XREFs of sub_18007D620 @ 0x18007D620
 * Callers:
 *     sub_18007D4C0 @ 0x18007D4C0 (sub_18007D4C0.c)
 * Callees:
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     ZwQueryVolumeInformationFile @ 0x1800A5C20 (ZwQueryVolumeInformationFile.c)
 */

NTSTATUS __fastcall sub_18007D620(void *a1, int *a2)
{
  NTSTATUS result; // eax
  unsigned __int64 v4; // rcx
  int v5; // eax
  _IO_STATUS_BLOCK IoStatusBlock; // [rsp+30h] [rbp-48h] BYREF
  _QWORD FsInformation[3]; // [rsp+40h] [rbp-38h] BYREF
  unsigned int v8; // [rsp+58h] [rbp-20h]
  unsigned int v9; // [rsp+5Ch] [rbp-1Ch]

  result = ZwQueryVolumeInformationFile(a1, &IoStatusBlock, FsInformation, 0x20u, FileFsFullSizeInformation);
  if ( result >= 0 )
  {
    v4 = FsInformation[0] * v8 * (unsigned __int64)v9;
    if ( v4 <= 0x200000000LL )
    {
      *a2 = 5;
    }
    else if ( v4 <= 0x800000000LL )
    {
      *a2 = 10;
    }
    else
    {
      v5 = 20;
      if ( v4 <= 0x2000000000LL )
        v5 = 15;
      *a2 = v5;
    }
    return 0;
  }
  return result;
}
