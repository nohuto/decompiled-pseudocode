/*
 * XREFs of IoVolumeDeviceToGuid @ 0x140495D70
 * Callers:
 *     IopMountVolume @ 0x140493C24 (IopMountVolume.c)
 *     CmpVolumeManagerGetContextForFile @ 0x140495B50 (CmpVolumeManagerGetContextForFile.c)
 *     FsRtlVolumeDeviceToCorrelationId @ 0x1405E1A30 (FsRtlVolumeDeviceToCorrelationId.c)
 *     CmpVolumeContextStart @ 0x140651A04 (CmpVolumeContextStart.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     IoVolumeDeviceToGuidPath @ 0x140495E00 (IoVolumeDeviceToGuidPath.c)
 *     RtlGUIDFromString @ 0x140508E70 (RtlGUIDFromString.c)
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
