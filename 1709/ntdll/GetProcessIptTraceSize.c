/*
 * XREFs of GetProcessIptTraceSize @ 0x18005D1E4
 * Callers:
 *     PsspCaptureIptTrace @ 0x18005D188 (PsspCaptureIptTrace.c)
 * Callees:
 *     __security_check_cookie @ 0x180090C90 (__security_check_cookie.c)
 *     NtDeviceIoControlFile @ 0x1800A01A0 (NtDeviceIoControlFile.c)
 *     NtClose @ 0x1800A02A0 (NtClose.c)
 *     ZwCreateFile @ 0x1800A0B60 (ZwCreateFile.c)
 */

NTSTATUS __fastcall GetProcessIptTraceSize(__int64 a1, _DWORD *a2)
{
  NTSTATUS result; // eax
  NTSTATUS v5; // ebx
  HANDLE FileHandle; // [rsp+60h] [rbp-49h] BYREF
  _DWORD InputBuffer[4]; // [rsp+68h] [rbp-41h] BYREF
  __int16 v8; // [rsp+78h] [rbp-31h]
  __int64 v9; // [rsp+80h] [rbp-29h]
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+88h] [rbp-21h] BYREF
  _IO_STATUS_BLOCK IoStatusBlock; // [rsp+B8h] [rbp+Fh] BYREF
  _IO_STATUS_BLOCK v12; // [rsp+C8h] [rbp+1Fh] BYREF
  _BYTE OutputBuffer[8]; // [rsp+D8h] [rbp+2Fh] BYREF
  unsigned __int64 v14; // [rsp+E0h] [rbp+37h]

  *a2 = 0;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 0;
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&unk_1801596A0;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  result = NtCreateFile(&FileHandle, 0x120089u, &ObjectAttributes, &IoStatusBlock, 0LL, 0x80u, 1u, 1u, 0x4Cu, 0LL, 0);
  if ( result >= 0 )
  {
    InputBuffer[1] = 0;
    InputBuffer[0] = 1;
    InputBuffer[2] = 1;
    v8 = 1;
    v9 = a1;
    v5 = NtDeviceIoControlFile(FileHandle, 0LL, 0LL, 0LL, &v12, 0x220004u, InputBuffer, 0x20u, OutputBuffer, 0x10u);
    NtClose(FileHandle);
    if ( v5 >= 0 )
    {
      if ( v14 <= 0xFFFFFFFF )
      {
        *a2 = v14;
        return 0;
      }
      else
      {
        return -1073740757;
      }
    }
    else
    {
      return v5;
    }
  }
  return result;
}
