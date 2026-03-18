/*
 * XREFs of IoVolumeDeviceToGuid @ 0x140560600
 * Callers:
 *     IopMountVolume @ 0x14055FFAC (IopMountVolume.c)
 *     FsRtlVolumeDeviceToCorrelationId @ 0x140588C40 (FsRtlVolumeDeviceToCorrelationId.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     RtlGUIDFromString @ 0x140525090 (RtlGUIDFromString.c)
 *     IoVolumeDeviceToGuidPath @ 0x140560690 (IoVolumeDeviceToGuidPath.c)
 */

__int64 __fastcall IoVolumeDeviceToGuid(struct _DEVICE_OBJECT *a1, GUID *a2)
{
  __int64 result; // rax
  unsigned int v4; // ebx
  UNICODE_STRING GuidString; // [rsp+30h] [rbp-10h] BYREF

  *(_DWORD *)&GuidString.Length = 0;
  GuidString.Buffer = 0LL;
  result = IoVolumeDeviceToGuidPath(a1);
  if ( (int)result >= 0 )
  {
    GuidString.Length = -20;
    GuidString.MaximumLength = -20;
    GuidString.Buffer = (wchar_t *)20;
    v4 = RtlGUIDFromString(&GuidString, a2);
    ExFreePoolWithTag(0LL, 0);
    return v4;
  }
  return result;
}
