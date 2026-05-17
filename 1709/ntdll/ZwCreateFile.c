/*
 * XREFs of ZwCreateFile @ 0x1800A0B60
 * Callers:
 *     RtlpFileIsWin32WithRCManifest @ 0x18001621C (RtlpFileIsWin32WithRCManifest.c)
 *     LdrpMapResourceFile @ 0x180018AC4 (LdrpMapResourceFile.c)
 *     GetProcessIptTraceSize @ 0x18005D1E4 (GetProcessIptTraceSize.c)
 *     EtwpCreateFile @ 0x180065084 (EtwpCreateFile.c)
 *     RtlpGetVolumeHandle @ 0x18008A3C0 (RtlpGetVolumeHandle.c)
 *     RtlCreateSystemVolumeInformationFolder @ 0x18008A8F0 (RtlCreateSystemVolumeInformationFolder.c)
 *     LdrpResMapFile @ 0x1800E2DF4 (LdrpResMapFile.c)
 *     RtlCreateBootStatusDataFile @ 0x1800EA8B0 (RtlCreateBootStatusDataFile.c)
 *     RtlpQueryDiskSpacePolicy @ 0x18010CA48 (RtlpQueryDiskSpacePolicy.c)
 *     GetProcessIptTrace @ 0x18010E404 (GetProcessIptTrace.c)
 *     _ResCreateFile @ 0x18010F424 (_ResCreateFile.c)
 * Callees:
 *     <none>
 */

__int64 ZwCreateFile()
{
  __int64 result; // rax

  result = 85LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
