/*
 * XREFs of IoGetRelatedTargetDevice @ 0x1404224F4
 * Callers:
 *     FsRtlNotifyVolumeEventEx @ 0x140422420 (FsRtlNotifyVolumeEventEx.c)
 *     NtSetVolumeInformationFile @ 0x140574C30 (NtSetVolumeInformationFile.c)
 *     NtGetDevicePowerState @ 0x1406CBFEC (NtGetDevicePowerState.c)
 * Callees:
 *     PnpGetRelatedTargetDevice @ 0x140005C74 (PnpGetRelatedTargetDevice.c)
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
