/*
 * XREFs of GetProcessIptTrace @ 0x18010E404
 * Callers:
 *     PsspCaptureIptTrace @ 0x18005D188 (PsspCaptureIptTrace.c)
 * Callees:
 *     NtDeviceIoControlFile @ 0x1800A01A0 (NtDeviceIoControlFile.c)
 *     NtClose @ 0x1800A02A0 (NtClose.c)
 *     ZwCreateFile @ 0x1800A0B60 (ZwCreateFile.c)
 */

NTSTATUS __fastcall GetProcessIptTrace(__int64 a1, void *a2, ULONG a3)
{
  NTSTATUS result; // eax
  NTSTATUS v7; // ebx
  _IO_STATUS_BLOCK IoStatusBlock; // [rsp+60h] [rbp-29h] BYREF
  _IO_STATUS_BLOCK v9; // [rsp+70h] [rbp-19h] BYREF
  _DWORD InputBuffer[4]; // [rsp+80h] [rbp-9h] BYREF
  __int16 v11; // [rsp+90h] [rbp+7h]
  __int64 v12; // [rsp+98h] [rbp+Fh]
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+A0h] [rbp+17h] BYREF
  HANDLE FileHandle; // [rsp+108h] [rbp+7Fh] BYREF

  if ( a3 < 8 )
    return -1073741811;
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
    InputBuffer[2] = 2;
    v11 = 1;
    v12 = a1;
    v7 = NtDeviceIoControlFile(FileHandle, 0LL, 0LL, 0LL, &v9, 0x220006u, InputBuffer, 0x20u, a2, a3);
    NtClose(FileHandle);
    return v7;
  }
  return result;
}
