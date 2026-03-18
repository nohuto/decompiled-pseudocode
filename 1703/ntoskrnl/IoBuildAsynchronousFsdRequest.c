/*
 * XREFs of IoBuildAsynchronousFsdRequest @ 0x140081210
 * Callers:
 *     FsRtlPrepareMdlWriteEx @ 0x140457D90 (FsRtlPrepareMdlWriteEx.c)
 *     FsRtlMdlReadEx @ 0x140457EB0 (FsRtlMdlReadEx.c)
 *     ?Read@PC_ENVIRONMENT@@SAJPEAX0K_K@Z @ 0x1405C25B4 (-Read@PC_ENVIRONMENT@@SAJPEAX0K_K@Z.c)
 *     ?Write@PC_ENVIRONMENT@@SAJPEAX0K_K@Z @ 0x140687044 (-Write@PC_ENVIRONMENT@@SAJPEAX0K_K@Z.c)
 * Callees:
 *     IopBuildAsynchronousFsdRequest @ 0x140081250 (IopBuildAsynchronousFsdRequest.c)
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
