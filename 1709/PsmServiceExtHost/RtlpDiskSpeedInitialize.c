/*
 * XREFs of RtlpDiskSpeedInitialize @ 0x18004CB80
 * Callers:
 *     <none>
 * Callees:
 *     NtClose_0 @ 0x180026466 (NtClose_0.c)
 *     RtlQueryVolumeDiskSpeedPolicy @ 0x18004CAC0 (RtlQueryVolumeDiskSpeedPolicy.c)
 *     RtlpGetVolumeHandle @ 0x18004CBE8 (RtlpGetVolumeHandle.c)
 */

_BOOL8 RtlpDiskSpeedInitialize()
{
  __int64 NtSystemRoot; // rax
  NTSTATUS VolumeHandle; // ebx
  HANDLE Handle[3]; // [rsp+20h] [rbp-18h] BYREF
  int v4; // [rsp+58h] [rbp+20h] BYREF

  Handle[0] = 0LL;
  NtSystemRoot = RtlGetNtSystemRoot();
  VolumeHandle = RtlpGetVolumeHandle(NtSystemRoot, Handle);
  if ( VolumeHandle >= 0 )
  {
    VolumeHandle = RtlQueryVolumeDiskSpeedPolicy(Handle[0], &v4);
    if ( VolumeHandle >= 0 )
    {
      VolumeHandle = 0;
      RtlpDiskSpeedPolicy = v4;
    }
  }
  if ( Handle[0] )
    NtClose_0(Handle[0]);
  return VolumeHandle >= 0;
}
