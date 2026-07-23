/*
 * XREFs of RtlpGetSetBootStatusData @ 0x1800EAD84
 * Callers:
 *     RtlGetSetBootStatusData @ 0x1800EAA10 (RtlGetSetBootStatusData.c)
 * Callees:
 *     NtReadFile @ 0x1800A0180 (NtReadFile.c)
 *     NtWriteFile @ 0x1800A01C0 (NtWriteFile.c)
 *     RtlpRecordBootStatusData @ 0x1800EAEBC (RtlpRecordBootStatusData.c)
 */

NTSTATUS __fastcall RtlpGetSetBootStatusData(HANDLE FileHandle, char a2, int a3, void *a4, unsigned int a5, _DWORD *a6)
{
  __int64 v8; // rbx
  NTSTATUS result; // eax
  __int64 Length; // rdx
  __int64 v12; // r15
  NTSTATUS v13; // ebx
  NTSTATUS v14; // eax
  __int64 v15; // rcx
  unsigned int Buffer; // [rsp+50h] [rbp-20h] BYREF
  LARGE_INTEGER ByteOffset; // [rsp+58h] [rbp-18h] BYREF
  _IO_STATUS_BLOCK IoStatusBlock; // [rsp+60h] [rbp-10h] BYREF

  ByteOffset.QuadPart = 0LL;
  v8 = a3;
  result = NtReadFile(FileHandle, 0LL, 0LL, 0LL, &IoStatusBlock, &Buffer, 4u, &ByteOffset, 0LL);
  if ( result >= 0 )
  {
    if ( (unsigned int)v8 >= 0x10 )
    {
      return -1073741811;
    }
    else
    {
      ByteOffset.HighPart = 0;
      Length = RtlpBootStatusFields[2 * v8 + 1];
      ByteOffset.QuadPart = RtlpBootStatusFields[2 * v8];
      v12 = (unsigned int)Length;
      if ( Length + ByteOffset.QuadPart <= (unsigned __int64)Buffer )
      {
        if ( a5 >= (unsigned int)Length )
        {
          if ( a2 )
          {
            v13 = NtReadFile(FileHandle, 0LL, 0LL, 0LL, &IoStatusBlock, a4, Length, &ByteOffset, 0LL);
          }
          else
          {
            v14 = NtWriteFile(FileHandle, 0LL, 0LL, 0LL, &IoStatusBlock, a4, Length, &ByteOffset, 0LL);
            LOBYTE(v15) = 1;
            v13 = v14;
            ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))RtlpRecordBootStatusData)(
              v15,
              a4,
              (LARGE_INTEGER)ByteOffset.QuadPart,
              v12);
          }
          if ( v13 >= 0 )
          {
            if ( a6 )
              *a6 = IoStatusBlock.Information;
          }
          return v13;
        }
        else
        {
          return -1073741789;
        }
      }
      else
      {
        return -1073741735;
      }
    }
  }
  return result;
}
