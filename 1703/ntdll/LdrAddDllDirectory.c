/*
 * XREFs of LdrAddDllDirectory @ 0x18008F390
 * Callers:
 *     sub_180085EDC @ 0x180085EDC (sub_180085EDC.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180021A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x1800244A0 (RtlFreeHeap.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028EC0 (RtlAcquireSRWLockExclusive.c)
 *     RtlAllocateHeap @ 0x180029F40 (RtlAllocateHeap.c)
 *     sub_18003E060 @ 0x18003E060 (sub_18003E060.c)
 *     RtlDetermineDosPathNameType_U @ 0x18004FB50 (RtlDetermineDosPathNameType_U.c)
 *     sub_180089230 @ 0x180089230 (sub_180089230.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     _local_unwind @ 0x180096C40 (_local_unwind.c)
 *     ZwQueryAttributesFile @ 0x1800A5AA0 (ZwQueryAttributesFile.c)
 *     memmove @ 0x1800ABA80 (memmove.c)
 */

NTSTATUS __cdecl LdrAddDllDirectory(PUNICODE_STRING NewDirectory, PDLL_DIRECTORY_COOKIE Cookie)
{
  RTL_PATH_TYPE v4; // eax
  NTSTATUS v5; // ebx
  char *Heap; // rax
  char *v7; // rbx
  unsigned int v8; // edx
  _QWORD *v9; // rax
  void *v10; // rdi
  int v12; // ecx
  _DWORD v13[18]; // [rsp+0h] [rbp-C8h] BYREF
  _UNICODE_STRING v14; // [rsp+48h] [rbp-80h] BYREF
  _DWORD *v15; // [rsp+58h] [rbp-70h]
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp-68h] BYREF
  _FILE_BASIC_INFORMATION FileInformation; // [rsp+90h] [rbp-38h] BYREF

  v15 = v13;
  if ( (dword_180158674 & 4) == 0 )
    return -1073741811;
  v4 = RtlDetermineDosPathNameType_U(NewDirectory->Buffer);
  if ( (unsigned int)v4 <= RtlPathTypeRelative )
  {
    v12 = 41;
    if ( _bittest(&v12, v4) )
      return -1073741811;
  }
  v5 = sub_18003E060(0, 0, NewDirectory, 0LL, &v14, 0LL, 0LL, 0LL);
  if ( v5 >= 0 )
  {
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 64;
    ObjectAttributes.ObjectName = &v14;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v5 = ZwQueryAttributesFile(&ObjectAttributes, &FileInformation);
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v14.Buffer);
  }
  if ( v5 < 0 )
    return v5;
  Heap = (char *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, NewDirectory->Length + 18LL);
  v7 = Heap;
  if ( !Heap )
    return -1073741801;
  memmove(Heap + 18, NewDirectory->Buffer, NewDirectory->Length);
  *((_WORD *)v7 + 8) = NewDirectory->Length;
  RtlAcquireSRWLockExclusive(&SRWLock);
  v8 = NewDirectory->Length + (unsigned __int16)word_1801553E8 + 2;
  v13[16] = v8;
  if ( v8 > 0xFFFE )
  {
    local_unwind(v15, &loc_1800D2098);
LABEL_11:
    __fastfail(3u);
  }
  word_1801553E8 = v8;
  v9 = off_1801553D8;
  if ( *((_UNKNOWN ***)off_1801553D8 + 1) != &off_1801553D8 )
    goto LABEL_11;
  *(_QWORD *)v7 = off_1801553D8;
  *((_QWORD *)v7 + 1) = &off_1801553D8;
  v9[1] = v7;
  off_1801553D8 = v7;
  RtlReleaseSRWLockExclusive(&SRWLock);
  RtlAcquireSRWLockExclusive(&stru_18015C3A0);
  v10 = (void *)sub_180089230(&qword_18015A2D0);
  RtlReleaseSRWLockExclusive(&stru_18015C3A0);
  if ( v10 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v10);
  *Cookie = v7;
  return 0;
}
