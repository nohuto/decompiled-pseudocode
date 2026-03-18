/*
 * XREFs of IoBuildAsynchronousFsdRequest @ 0x1400DE310
 * Callers:
 *     FsRtlPrepareMdlWriteEx @ 0x14059C6D0 (FsRtlPrepareMdlWriteEx.c)
 *     FsRtlMdlReadEx @ 0x14059C7F0 (FsRtlMdlReadEx.c)
 *     ?Read@NT_DISK@@UEAAJ_KKPEAE@Z @ 0x1405C93B0 (-Read@NT_DISK@@UEAAJ_KKPEAE@Z.c)
 *     ?Write@NT_DISK@@UEAAJ_KKPEAE@Z @ 0x1406B2500 (-Write@NT_DISK@@UEAAJ_KKPEAE@Z.c)
 * Callees:
 *     IopBuildAsynchronousFsdRequest @ 0x1400DE350 (IopBuildAsynchronousFsdRequest.c)
 */

PIRP __stdcall IoBuildAsynchronousFsdRequest(
        ULONG MajorFunction,
        PDEVICE_OBJECT DeviceObject,
        PVOID Buffer,
        ULONG Length,
        PLARGE_INTEGER StartingOffset,
        PIO_STATUS_BLOCK IoStatusBlock)
{
  void *retaddr; // [rsp+48h] [rbp+0h]

  return (PIRP)IopBuildAsynchronousFsdRequest(
                 MajorFunction,
                 DeviceObject,
                 Buffer,
                 Length,
                 StartingOffset,
                 IoStatusBlock,
                 retaddr);
}
