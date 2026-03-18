/*
 * XREFs of RtlpGetSetBootStatusData @ 0x140582208
 * Callers:
 *     RtlGetSetBootStatusData @ 0x1405820B0 (RtlGetSetBootStatusData.c)
 * Callees:
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     ZwReadFile @ 0x14017E000 (ZwReadFile.c)
 *     ZwWriteFile @ 0x14017E040 (ZwWriteFile.c)
 *     RtlpRecordBootStatusData @ 0x1405823F0 (RtlpRecordBootStatusData.c)
 */

NTSTATUS __fastcall RtlpGetSetBootStatusData(HANDLE FileHandle, char a2, int a3, void *a4, unsigned int a5, _DWORD *a6)
{
  __int64 v9; // rbx
  NTSTATUS result; // eax
  __int64 Length; // rdx
  __int64 v12; // rsi
  NTSTATUS v13; // ebx
  NTSTATUS v14; // eax
  __int64 v15; // rcx
  LARGE_INTEGER ByteOffset; // [rsp+50h] [rbp-99h] BYREF
  unsigned int Buffer; // [rsp+58h] [rbp-91h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+60h] [rbp-89h] BYREF
  int v19; // [rsp+70h] [rbp-79h]
  ULONG v20[31]; // [rsp+74h] [rbp-75h]

  v19 = 0;
  ByteOffset.QuadPart = 0LL;
  v9 = a3;
  v20[0] = 4;
  v20[1] = 4;
  v20[15] = 48;
  v20[28] = 48;
  v20[2] = 4;
  v20[4] = 1;
  v20[6] = 1;
  v20[8] = 1;
  v20[10] = 1;
  v20[12] = 1;
  v20[16] = 1;
  v20[18] = 1;
  v20[20] = 4;
  v20[22] = 4;
  v20[24] = 4;
  v20[30] = 1;
  v20[3] = 8;
  v20[5] = 9;
  v20[7] = 10;
  v20[9] = 11;
  v20[11] = 12;
  v20[13] = 16;
  v20[14] = 32;
  v20[17] = 49;
  v20[19] = 52;
  v20[21] = 56;
  v20[23] = 60;
  v20[25] = 64;
  v20[26] = 20;
  v20[27] = 88;
  v20[29] = 50;
  result = ZwReadFile(FileHandle, 0LL, 0LL, 0LL, &IoStatusBlock, &Buffer, 4u, &ByteOffset, 0LL);
  if ( result >= 0 )
  {
    if ( (unsigned int)v9 >= 0x10 )
    {
      return -1073741811;
    }
    else
    {
      Length = v20[2 * v9];
      ByteOffset.QuadPart = v20[2 * v9 - 1];
      v12 = (unsigned int)Length;
      if ( Length + ByteOffset.QuadPart > (unsigned __int64)Buffer )
      {
        return -1073741735;
      }
      else if ( a5 < (unsigned int)Length )
      {
        return -1073741789;
      }
      else
      {
        if ( a2 )
        {
          v13 = ZwReadFile(FileHandle, 0LL, 0LL, 0LL, &IoStatusBlock, a4, Length, &ByteOffset, 0LL);
        }
        else
        {
          v14 = ZwWriteFile(FileHandle, 0LL, 0LL, 0LL, &IoStatusBlock, a4, Length, &ByteOffset, 0LL);
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
    }
  }
  return result;
}
