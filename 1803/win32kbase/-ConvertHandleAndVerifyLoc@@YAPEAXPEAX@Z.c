/*
 * XREFs of ?ConvertHandleAndVerifyLoc@@YAPEAXPEAX@Z @ 0x1C0127ED0
 * Callers:
 *     xxxSafeLoadKeyboardLayoutEx @ 0x1C012AD00 (xxxSafeLoadKeyboardLayoutEx.c)
 * Callees:
 *     Win32AllocPool @ 0x1C001CB30 (Win32AllocPool.c)
 *     Win32FreePool @ 0x1C001CC50 (Win32FreePool.c)
 *     __security_check_cookie @ 0x1C0073C90 (__security_check_cookie.c)
 *     _wcsnicmp @ 0x1C0074174 (_wcsnicmp.c)
 *     GetWindowsDirectoryDevicePath @ 0x1C012A6B4 (GetWindowsDirectoryDevicePath.c)
 */

void *__fastcall ConvertHandleAndVerifyLoc(HANDLE Handle)
{
  PVOID v2; // rbx
  WCHAR *v3; // rdi
  NTSTATUS v4; // eax
  __int16 ProcessMachine; // ax
  const WCHAR *v6; // rdx
  WCHAR *v7; // rdx
  WCHAR *v8; // rcx
  NTSTATUS v9; // eax
  void *v10; // rdx
  struct _UNICODE_STRING Destination; // [rsp+68h] [rbp-A0h] BYREF
  void *FileHandle; // [rsp+78h] [rbp-90h] BYREF
  ULONG ReturnLength; // [rsp+80h] [rbp-88h] BYREF
  PVOID Object; // [rsp+88h] [rbp-80h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+90h] [rbp-78h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+A0h] [rbp-68h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+D0h] [rbp-38h] BYREF
  _OBJECT_NAME_INFORMATION ObjectNameInfo; // [rsp+E8h] [rbp-20h] BYREF

  FileHandle = 0LL;
  v2 = 0LL;
  v3 = (WCHAR *)Win32AllocPool(520LL, 0x626B7355u);
  if ( !v3 )
    return FileHandle;
  if ( Handle )
  {
    v4 = ObReferenceObjectByHandle(Handle, 1u, (POBJECT_TYPE)IoFileObjectType, 1, &Object, 0LL);
    v2 = Object;
    if ( v4 >= 0 && ObQueryNameString(Object, &ObjectNameInfo, 0x218u, &ReturnLength) >= 0 )
    {
      Destination.Buffer = v3;
      *(_DWORD *)&Destination.Length = 34078720;
      if ( (int)GetWindowsDirectoryDevicePath(&Destination) >= 0 )
      {
        if ( (*((_DWORD *)gptiCurrent + 120) & 0x100) != 0 )
        {
          ProcessMachine = PsWow64GetProcessMachine(**((_QWORD **)gptiCurrent + 52));
          if ( ProcessMachine == 332 )
          {
            v6 = L"\\SysWoW64\\";
            goto LABEL_12;
          }
          if ( ProcessMachine == 452 )
          {
            v6 = L"\\SysArm32\\";
            goto LABEL_12;
          }
        }
        v6 = L"\\system32\\";
LABEL_12:
        RtlAppendUnicodeToString(&Destination, v6);
        if ( !wcsnicmp(ObjectNameInfo.Name.Buffer, Destination.Buffer, (unsigned __int64)Destination.Length >> 1) )
        {
          v7 = &ObjectNameInfo.Name.Buffer[(unsigned __int64)Destination.Length >> 1];
          v8 = &v7[(unsigned int)((unsigned __int64)(ObjectNameInfo.Name.Length - Destination.Length) >> 1)];
          while ( v7 < v8 )
          {
            if ( *v7 == 92 )
              goto LABEL_20;
            ++v7;
          }
          RtlInitUnicodeString(&DestinationString, ObjectNameInfo.Name.Buffer);
          ObjectAttributes.Length = 48;
          ObjectAttributes.RootDirectory = 0LL;
          ObjectAttributes.Attributes = 512;
          ObjectAttributes.ObjectName = &DestinationString;
          *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
          v9 = ZwCreateFile(&FileHandle, 1u, &ObjectAttributes, &IoStatusBlock, 0LL, 0, 1u, 1u, 0x24u, 0LL, 0);
          v10 = FileHandle;
          if ( v9 < 0 )
            v10 = 0LL;
          FileHandle = v10;
        }
      }
    }
  }
LABEL_20:
  Win32FreePool((__int64)v3);
  if ( v2 )
    ObfDereferenceObject(v2);
  return FileHandle;
}
