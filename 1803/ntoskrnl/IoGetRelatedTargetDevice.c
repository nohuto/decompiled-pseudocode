/*
 * XREFs of IoGetRelatedTargetDevice @ 0x1404981D4
 * Callers:
 *     FsRtlNotifyVolumeEventEx @ 0x140498100 (FsRtlNotifyVolumeEventEx.c)
 *     NtSetVolumeInformationFile @ 0x1405E59A0 (NtSetVolumeInformationFile.c)
 *     NtGetDevicePowerState @ 0x140765314 (NtGetDevicePowerState.c)
 * Callees:
 *     PnpGetRelatedTargetDevice @ 0x140006DB4 (PnpGetRelatedTargetDevice.c)
 */

__int64 __fastcall IoGetRelatedTargetDevice(struct _FILE_OBJECT *a1, _QWORD *a2)
{
  __int64 result; // rax
  __int64 v4; // [rsp+40h] [rbp+18h] BYREF

  v4 = 0LL;
  result = PnpGetRelatedTargetDevice(a1, &v4);
  if ( (int)result >= 0 )
  {
    if ( v4 )
      *a2 = *(_QWORD *)(v4 + 32);
  }
  return result;
}
