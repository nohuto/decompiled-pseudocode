/*
 * XREFs of RtlpDiskSpeedInitialize @ 0x18008A2B0
 * Callers:
 *     <none>
 * Callees:
 *     RtlGetNtSystemRoot @ 0x1800179D0 (RtlGetNtSystemRoot.c)
 *     RtlQueryVolumeDiskSpeedPolicy @ 0x18008A314 (RtlQueryVolumeDiskSpeedPolicy.c)
 *     RtlpGetVolumeHandle @ 0x18008A3C0 (RtlpGetVolumeHandle.c)
 *     NtClose @ 0x1800A02A0 (NtClose.c)
 */

_BOOL8 __fastcall RtlpDiskSpeedInitialize(__int64 a1, __int64 a2)
{
  __int64 NtSystemRoot; // rax
  int VolumeHandle; // ebx
  HANDLE Handle[3]; // [rsp+20h] [rbp-18h] BYREF
  int v6; // [rsp+58h] [rbp+20h] BYREF

  Handle[0] = 0LL;
  NtSystemRoot = RtlGetNtSystemRoot(a1, a2);
  VolumeHandle = RtlpGetVolumeHandle(NtSystemRoot, Handle);
  if ( VolumeHandle >= 0 )
  {
    VolumeHandle = RtlQueryVolumeDiskSpeedPolicy(Handle[0], &v6);
    if ( VolumeHandle >= 0 )
    {
      VolumeHandle = 0;
      RtlpDiskSpeedPolicy = v6;
    }
  }
  if ( Handle[0] )
    NtClose(Handle[0]);
  return VolumeHandle >= 0;
}
