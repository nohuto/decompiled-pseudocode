/*
 * XREFs of PopPdcCsCheckSystemVolumeDevice @ 0x140826ABC
 * Callers:
 *     PoInitSystem @ 0x14080B764 (PoInitSystem.c)
 * Callees:
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     ZwDeviceIoControlFile @ 0x14017E020 (ZwDeviceIoControlFile.c)
 *     ZwClose @ 0x14017E120 (ZwClose.c)
 *     ZwOpenFile @ 0x14017E5A0 (ZwOpenFile.c)
 *     PopReleasePolicyLock @ 0x1404046BC (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x1404046F8 (PopAcquirePolicyLock.c)
 *     PopPdcCsDeviceNotification @ 0x1406CB6E8 (PopPdcCsDeviceNotification.c)
 *     PopNetIsDisconnectStandbyActive @ 0x1406CFED0 (PopNetIsDisconnectStandbyActive.c)
 */

void PopPdcCsCheckSystemVolumeDevice()
{
  int v0; // [rsp+50h] [rbp-39h] BYREF
  HANDLE FileHandle; // [rsp+58h] [rbp-31h] BYREF
  wchar_t *Buffer; // [rsp+60h] [rbp-29h] BYREF
  __int64 v3; // [rsp+68h] [rbp-21h]
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+70h] [rbp-19h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+80h] [rbp-9h] BYREF
  __int64 InputBuffer; // [rsp+B0h] [rbp+27h] BYREF
  int v7; // [rsp+B8h] [rbp+2Fh]
  __int64 OutputBuffer; // [rsp+C0h] [rbp+37h] BYREF
  int v9; // [rsp+C8h] [rbp+3Fh]

  if ( PopPlatformAoAc )
  {
    FileHandle = 0LL;
    ObjectAttributes.RootDirectory = 0LL;
    v3 = 0x100000000LL;
    Buffer = IoArcBootDeviceName.Buffer;
    ObjectAttributes.ObjectName = &IoArcBootDeviceName;
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( ZwOpenFile(&FileHandle, 0x80000000, &ObjectAttributes, &IoStatusBlock, 7u, 0x20u) >= 0 )
    {
      IoStatusBlock.Pointer = 0LL;
      IoStatusBlock.Information = 0LL;
      v7 = 0;
      OutputBuffer = 0LL;
      v9 = 0;
      InputBuffer = 7LL;
      if ( ZwDeviceIoControlFile(
             FileHandle,
             0LL,
             0LL,
             0LL,
             &IoStatusBlock,
             0x2D1400u,
             &InputBuffer,
             0xCu,
             &OutputBuffer,
             0xCu) >= 0 )
      {
        if ( (_BYTE)v9 )
          PopBsdSkipLogging = 1;
        else
          BYTE5(v3) = 1;
      }
    }
    PopPdcCsDeviceNotification((__int64)&Buffer);
    if ( FileHandle )
      ZwClose(FileHandle);
    PopAcquirePolicyLock();
    PopNetIsDisconnectStandbyActive(&v0);
    byte_14034BC97 = (unsigned int)(v0 - 3) > 1;
    PopReleasePolicyLock();
  }
}
