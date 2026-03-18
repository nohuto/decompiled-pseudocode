/*
 * XREFs of UserBeep @ 0x1C01A1E74
 * Callers:
 *     EditionInitiateMouseEventProcessing @ 0x1C00FD9E0 (EditionInitiateMouseEventProcessing.c)
 *     xxxOldMessageBeep @ 0x1C01A1DD4 (xxxOldMessageBeep.c)
 *     ?EditionUserBeep@@YAHKK@Z @ 0x1C01A1E60 (-EditionUserBeep@@YAHKK@Z.c)
 *     ?DisplayDiagHotkeyCallback@@YAX_K_J@Z @ 0x1C01B97C0 (-DisplayDiagHotkeyCallback@@YAX_K_J@Z.c)
 *     ?xxxHandleVolumeUpDownCombo@@YAXXZ @ 0x1C01C6E80 (-xxxHandleVolumeUpDownCombo@@YAXXZ.c)
 * Callees:
 *     ??0ReEnterLeaveCrit@@QEAA@XZ @ 0x1C008E6C4 (--0ReEnterLeaveCrit@@QEAA@XZ.c)
 *     xxxSoundSentry @ 0x1C012362C (xxxSoundSentry.c)
 */

__int64 __fastcall UserBeep(int a1, int a2)
{
  unsigned int v2; // ebx
  __int64 v4; // rdi
  NTSTATUS v5; // eax
  NTSTATUS v7; // r14d
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rdx
  __int64 v13; // rcx
  _DWORD InputBuffer[2]; // [rsp+60h] [rbp-19h] BYREF
  union _LARGE_INTEGER Interval; // [rsp+68h] [rbp-11h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+70h] [rbp-9h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+80h] [rbp+7h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+90h] [rbp+17h] BYREF
  int v19; // [rsp+F0h] [rbp+77h] BYREF
  void *FileHandle; // [rsp+F8h] [rbp+7Fh] BYREF

  v2 = 0;
  FileHandle = 0LL;
  v4 = a2;
  if ( gProtocolType )
  {
    if ( !gpRemoteBeepDevice )
      return 0LL;
    v5 = ObOpenObjectByPointer(gpRemoteBeepDevice, 0, 0LL, 0x1F0003u, 0LL, 0, &FileHandle);
  }
  else
  {
    RtlInitUnicodeString(&DestinationString, L"\\Device\\Beep");
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 512;
    ObjectAttributes.ObjectName = &DestinationString;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v5 = ZwCreateFile(&FileHandle, 3u, &ObjectAttributes, &IoStatusBlock, 0LL, 0, 3u, 3u, 0, 0LL, 0);
  }
  if ( v5 < 0 )
    return 0LL;
  if ( (a1 || (_DWORD)v4) && (unsigned int)(a1 - 37) > 0x7FDA )
  {
    v7 = -1073741811;
  }
  else
  {
    InputBuffer[0] = a1;
    InputBuffer[1] = v4;
    v7 = ZwDeviceIoControlFile(FileHandle, 0LL, 0LL, 0LL, &IoStatusBlock, 0x10000u, InputBuffer, 8u, 0LL, 0);
  }
  ReEnterLeaveCrit::ReEnterLeaveCrit((ReEnterLeaveCrit *)&v19);
  xxxSoundSentry(v9, v8, v10, v11);
  if ( !v19 )
    UserSessionSwitchLeaveCrit(v13, v12);
  if ( v7 >= 0 )
  {
    if ( (_DWORD)v4 != -1 && (a1 || (_DWORD)v4) )
    {
      Interval.QuadPart = -10000 * v4;
      KeDelayExecutionThread(1, 0, &Interval);
    }
    v2 = 1;
  }
  ZwClose(FileHandle);
  return v2;
}
