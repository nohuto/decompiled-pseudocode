/*
 * XREFs of FsRtlNotifyVolumeEvent @ 0x14059E900
 * Callers:
 *     RawCleanup @ 0x1405474D8 (RawCleanup.c)
 *     RawUserFsCtrl @ 0x1405DE444 (RawUserFsCtrl.c)
 * Callees:
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     FsRtlNotifyVolumeEventEx @ 0x140552BA0 (FsRtlNotifyVolumeEventEx.c)
 */

NTSTATUS __stdcall FsRtlNotifyVolumeEvent(PFILE_OBJECT FileObject, ULONG EventCode)
{
  struct _TARGET_DEVICE_CUSTOM_NOTIFICATION Event; // [rsp+20h] [rbp-38h] BYREF

  Event.FileObject = 0LL;
  Event.NameBufferOffset = -1;
  *(_DWORD *)&Event.Version = 2359297;
  return FsRtlNotifyVolumeEventEx(FileObject, EventCode, &Event);
}
