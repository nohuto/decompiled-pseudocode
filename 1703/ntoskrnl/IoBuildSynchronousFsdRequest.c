/*
 * XREFs of IoBuildSynchronousFsdRequest @ 0x1404DDD40
 * Callers:
 *     IoShutdownSystem @ 0x140415678 (IoShutdownSystem.c)
 *     IopShutdownBaseFileSystems @ 0x1404159A4 (IopShutdownBaseFileSystems.c)
 *     IopCreateArcNamesCd @ 0x1407F6A7C (IopCreateArcNamesCd.c)
 * Callees:
 *     IopBuildSynchronousFsdRequest @ 0x1404DDEB0 (IopBuildSynchronousFsdRequest.c)
 */

PIRP __stdcall IoBuildSynchronousFsdRequest(
        ULONG MajorFunction,
        PDEVICE_OBJECT DeviceObject,
        PVOID Buffer,
        ULONG Length,
        PLARGE_INTEGER StartingOffset,
        PKEVENT Event,
        PIO_STATUS_BLOCK IoStatusBlock)
{
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  return (PIRP)IopBuildSynchronousFsdRequest(
                 MajorFunction,
                 (_DWORD)DeviceObject,
                 (_DWORD)Buffer,
                 Length,
                 (__int64)StartingOffset,
                 (__int64)Event,
                 (__int64)IoStatusBlock,
                 retaddr);
}
