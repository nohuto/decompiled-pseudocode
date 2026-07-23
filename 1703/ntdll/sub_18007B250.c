/*
 * XREFs of sub_18007B250 @ 0x18007B250
 * Callers:
 *     RtlSetCurrentDirectory_U @ 0x18007ADF0 (RtlSetCurrentDirectory_U.c)
 *     sub_18007B108 @ 0x18007B108 (sub_18007B108.c)
 *     sub_18007B1E4 @ 0x18007B1E4 (sub_18007B1E4.c)
 * Callees:
 *     RtlFreeHeap @ 0x1800244A0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x180029F40 (RtlAllocateHeap.c)
 *     sub_18003E060 @ 0x18003E060 (sub_18003E060.c)
 *     ZwClose @ 0x1800A54E0 (ZwClose.c)
 *     ZwOpenFile @ 0x1800A5960 (ZwOpenFile.c)
 *     ZwQueryVolumeInformationFile @ 0x1800A5C20 (ZwQueryVolumeInformationFile.c)
 *     memmove @ 0x1800ABA80 (memmove.c)
 */

__int64 __fastcall sub_18007B250(_UNICODE_STRING *a1, unsigned int a2, _QWORD *a3)
{
  __int64 v3; // rsi
  __int64 result; // rax
  int v7; // r15d
  NTSTATUS v8; // ebx
  _QWORD *Heap; // rax
  _QWORD *v10; // rbx
  int v11; // edx
  unsigned __int64 v12; // rdx
  char FsInformation[4]; // [rsp+40h] [rbp-29h] BYREF
  int v14; // [rsp+44h] [rbp-25h]
  _UNICODE_STRING v15; // [rsp+48h] [rbp-21h] BYREF
  _IO_STATUS_BLOCK IoStatusBlock; // [rsp+58h] [rbp-11h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+68h] [rbp-1h] BYREF
  HANDLE FileHandle; // [rsp+E8h] [rbp+7Fh] BYREF

  v3 = a2;
  result = sub_18003E060(0, 0, a1, 0LL, &v15, 0LL, 0LL, 0LL);
  if ( (int)result < 0 )
    return result;
  v7 = MEMORY[0x7FFE02DC];
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &v15;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 64;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v8 = ZwOpenFile(&FileHandle, 0x100020u, &ObjectAttributes, &IoStatusBlock, 3u, 0x21u);
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v15.Buffer);
  if ( v8 < 0 )
    return (unsigned int)v8;
  v8 = ZwQueryVolumeInformationFile(FileHandle, &IoStatusBlock, FsInformation, 8u, FileFsDeviceInformation);
  if ( v8 < 0 )
  {
LABEL_12:
    ZwClose(FileHandle);
    return (unsigned int)v8;
  }
  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, v3 + 48);
  v10 = Heap;
  if ( !Heap )
  {
    v8 = -1073741801;
    goto LABEL_12;
  }
  v11 = v14;
  Heap[1] = FileHandle;
  Heap[4] = Heap + 6;
  *(_DWORD *)Heap = 1;
  *((_WORD *)Heap + 13) = v3;
  *((_DWORD *)Heap + 4) = v7;
  *((_DWORD *)Heap + 10) = v11;
  memmove(Heap + 6, a1->Buffer, a1->Length);
  *(_WORD *)(v10[4] + 2 * ((unsigned __int64)a1->Length >> 1)) = 0;
  *((_WORD *)v10 + 12) = a1->Length;
  v12 = (unsigned __int64)a1->Length >> 1;
  if ( a1->Buffer[v12 - 1] != 92 )
  {
    if ( (unsigned __int64)a1->Length + 4 > *((unsigned __int16 *)v10 + 13) )
    {
      ZwClose(FileHandle);
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v10);
      return 3221225734LL;
    }
    *(_WORD *)(v10[4] + 2 * v12) = 92;
    *(_WORD *)(v10[4] + 2 * ((unsigned __int64)a1->Length >> 1) + 2) = 0;
    *((_WORD *)v10 + 12) += 2;
  }
  *a3 = v10;
  return 0LL;
}
