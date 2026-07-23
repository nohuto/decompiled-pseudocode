/*
 * XREFs of LdrAddDllDirectory @ 0x180089810
 * Callers:
 *     sub_180080B70 @ 0x180080B70 (sub_180080B70.c)
 * Callees:
 *     RtlFreeHeap @ 0x180016DF0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x1800190C0 (RtlAllocateHeap.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800262F0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028090 (RtlAcquireSRWLockExclusive.c)
 *     sub_18003D190 @ 0x18003D190 (sub_18003D190.c)
 *     RtlDetermineDosPathNameType_U @ 0x18007A0F0 (RtlDetermineDosPathNameType_U.c)
 *     sub_18008367C @ 0x18008367C (sub_18008367C.c)
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 *     _local_unwind @ 0x18008BEA0 (_local_unwind.c)
 *     ZwQueryAttributesFile @ 0x18009B260 (ZwQueryAttributesFile.c)
 *     memmove @ 0x1800A1380 (memmove.c)
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
  unsigned __int16 v14; // [rsp+48h] [rbp-80h] BYREF
  PVOID BaseAddress; // [rsp+50h] [rbp-78h]
  _DWORD *v16; // [rsp+58h] [rbp-70h]
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp-68h] BYREF
  _FILE_BASIC_INFORMATION FileInformation; // [rsp+90h] [rbp-38h] BYREF

  v16 = v13;
  if ( (dword_1801596D4 & 4) == 0 )
    return -1073741811;
  v4 = RtlDetermineDosPathNameType_U(NewDirectory->Buffer);
  if ( (unsigned int)v4 <= RtlPathTypeRelative )
  {
    v12 = 41;
    if ( _bittest(&v12, v4) )
      return -1073741811;
  }
  v5 = sub_18003D190(0, NewDirectory, 0LL, &v14, 0LL, 0LL, 0LL);
  if ( v5 >= 0 )
  {
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 64;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)&v14;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v5 = ZwQueryAttributesFile(&ObjectAttributes, &FileInformation);
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
  }
  if ( v5 < 0 )
    return v5;
  Heap = (char *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, (unsigned int)NewDirectory->Length + 18);
  v7 = Heap;
  if ( !Heap )
    return -1073741801;
  memmove(Heap + 18, NewDirectory->Buffer, NewDirectory->Length);
  *((_WORD *)v7 + 8) = NewDirectory->Length;
  RtlAcquireSRWLockExclusive(&SRWLock);
  v8 = NewDirectory->Length + (unsigned __int16)word_1801564B8 + 2;
  v13[16] = v8;
  if ( v8 > 0xFFFE )
  {
    local_unwind(v16, &loc_1800C7B48);
LABEL_11:
    __fastfail(3u);
  }
  word_1801564B8 = v8;
  v9 = off_1801564A8;
  if ( *((_UNKNOWN ***)off_1801564A8 + 1) != &off_1801564A8 )
    goto LABEL_11;
  *(_QWORD *)v7 = off_1801564A8;
  *((_QWORD *)v7 + 1) = &off_1801564A8;
  v9[1] = v7;
  off_1801564A8 = v7;
  RtlReleaseSRWLockExclusive(&SRWLock);
  RtlAcquireSRWLockExclusive(&stru_18015D3D8);
  v10 = (void *)sub_18008367C(&qword_18015B2D0);
  RtlReleaseSRWLockExclusive(&stru_18015D3D8);
  if ( v10 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v10);
  *Cookie = v7;
  return 0;
}
