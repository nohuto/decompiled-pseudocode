/*
 * XREFs of RtlCheckBootStatusIntegrity @ 0x18008DE40
 * Callers:
 *     <none>
 * Callees:
 *     RtlFreeHeap @ 0x1800244A0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x180029F40 (RtlAllocateHeap.c)
 *     ZwReadFile @ 0x1800A53C0 (ZwReadFile.c)
 */

NTSTATUS __cdecl RtlCheckBootStatusIntegrity(HANDLE FileHandle, PBOOLEAN Verified)
{
  BOOLEAN v2; // bl
  char v5; // r14
  int v6; // esi
  PVOID Buffer; // rbp
  __int64 v8; // rax
  _BYTE *v9; // rcx
  _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-38h] BYREF
  SIZE_T Size; // [rsp+A0h] [rbp+18h] BYREF
  LARGE_INTEGER ByteOffset; // [rsp+A8h] [rbp+20h] BYREF

  v2 = 0;
  ByteOffset.QuadPart = 0LL;
  v5 = 0;
  v6 = ZwReadFile(FileHandle, 0LL, 0LL, 0LL, &IoStatusBlock, &Size, 4u, &ByteOffset, 0LL);
  if ( v6 >= 0 )
  {
    if ( (_DWORD)Size && (unsigned int)Size <= 0x800 )
    {
      Buffer = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, (unsigned int)Size);
      if ( Buffer )
      {
        v6 = ZwReadFile(FileHandle, 0LL, 0LL, 0LL, &IoStatusBlock, Buffer, Size, &ByteOffset, 0LL);
        if ( v6 >= 0 )
        {
          v8 = (unsigned int)Size;
          if ( IoStatusBlock.Information == (unsigned int)Size )
          {
            if ( !(_DWORD)Size )
              goto LABEL_11;
            v9 = Buffer;
            do
            {
              v5 += *v9++;
              --v8;
            }
            while ( v8 );
            if ( !v5 )
LABEL_11:
              v2 = 1;
          }
          *Verified = v2;
        }
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Buffer);
      }
      else
      {
        return -1073741801;
      }
    }
    else
    {
      *Verified = 0;
    }
  }
  return v6;
}
