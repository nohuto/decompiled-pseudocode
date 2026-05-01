/*
 * XREFs of RtlpQueryDiskWriteConstraintPolicy @ 0x18004CF7C
 * Callers:
 *     RtlQueryResourcePolicy @ 0x180025798 (RtlQueryResourcePolicy.c)
 * Callees:
 *     NtClose_0 @ 0x180026466 (NtClose_0.c)
 *     RtlpGetVolumeHandle @ 0x18004CBE8 (RtlpGetVolumeHandle.c)
 *     RtlpQueryDiskWriteConstraintPolicyByHandle @ 0x18004CFDC (RtlpQueryDiskWriteConstraintPolicyByHandle.c)
 */

__int64 __fastcall RtlpQueryDiskWriteConstraintPolicy(unsigned __int16 *a1, __int64 a2)
{
  NTSTATUS VolumeHandle; // ebx
  HANDLE Handle; // [rsp+40h] [rbp+18h] BYREF

  Handle = 0LL;
  VolumeHandle = RtlpGetVolumeHandle(a1, &Handle);
  if ( VolumeHandle >= 0 )
  {
    VolumeHandle = RtlpQueryDiskWriteConstraintPolicyByHandle(Handle, a2);
    if ( VolumeHandle >= 0 )
      VolumeHandle = 0;
  }
  if ( Handle )
    NtClose_0(Handle);
  return (unsigned int)VolumeHandle;
}
