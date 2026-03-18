/*
 * XREFs of FsRtlNotifyVolumeEvent @ 0x1405E66C0
 * Callers:
 *     RawCleanup @ 0x140494D90 (RawCleanup.c)
 *     RawUserFsCtrl @ 0x1405E64CC (RawUserFsCtrl.c)
 * Callees:
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     FsRtlNotifyVolumeEventEx @ 0x140498100 (FsRtlNotifyVolumeEventEx.c)
 */

NTSTATUS __stdcall FsRtlNotifyVolumeEvent(PFILE_OBJECT FileObject, ULONG EventCode)
{
  struct _TARGET_DEVICE_CUSTOM_NOTIFICATION Event; // [rsp+20h] [rbp-38h] BYREF

  Event.FileObject = 0LL;
  Event.NameBufferOffset = -1;
  *(_DWORD *)&Event.Version = 2359297;
  return FsRtlNotifyVolumeEventEx(FileObject, EventCode, &Event);
}
