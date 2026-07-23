/*
 * XREFs of _ResCLoadFixedSize @ 0x18010F1DC
 * Callers:
 *     ResCLoadCultureMap @ 0x1801116E4 (ResCLoadCultureMap.c)
 * Callees:
 *     RtlSetLastWin32Error @ 0x18001ACF0 (RtlSetLastWin32Error.c)
 *     RtlFreeHeap @ 0x18003ECC0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x180040DF0 (RtlAllocateHeap.c)
 *     _ResCloseHandle @ 0x18010F38C (_ResCloseHandle.c)
 *     _ResCreateFile @ 0x18010F424 (_ResCreateFile.c)
 *     _ResGetFileSizeEx @ 0x18011039C (_ResGetFileSizeEx.c)
 *     _ResReadFile @ 0x18011056C (_ResReadFile.c)
 *     ResCCultureMapCreateAndPopulate @ 0x180111438 (ResCCultureMapCreateAndPopulate.c)
 */

__int64 __fastcall ResCLoadFixedSize(const WCHAR *a1)
{
  char *v1; // rbx
  void *v2; // rdi
  __int64 File; // rax
  LONG v4; // ecx
  PVOID Heap; // rax
  int v6; // esi
  __int64 v7; // rsi
  SIZE_T Size; // [rsp+60h] [rbp+18h] BYREF

  v1 = 0LL;
  v2 = 0LL;
  Size = 0LL;
  if ( !a1 )
  {
    v4 = 87;
    goto LABEL_12;
  }
  File = ResCreateFile(a1);
  v1 = (char *)File;
  if ( File == -1 || !(unsigned int)ResGetFileSizeEx(File, &Size) )
    goto LABEL_13;
  if ( HIDWORD(Size) )
    goto LABEL_5;
  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, (unsigned int)Size);
  v2 = Heap;
  if ( !Heap )
    goto LABEL_13;
  v6 = Size;
  if ( !(unsigned int)ResReadFile(v1, Heap, Size) )
    goto LABEL_13;
  if ( v6 )
  {
LABEL_5:
    v4 = 536937216;
LABEL_12:
    RtlSetLastWin32Error(v4);
    goto LABEL_13;
  }
  v7 = ResCCultureMapCreateAndPopulate(v2, 0LL, 0LL);
  if ( v7 )
  {
    ResCloseHandle(v1);
    return v7;
  }
LABEL_13:
  if ( (unsigned __int64)(v1 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    ResCloseHandle(v1);
  if ( v2 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v2);
  return 0LL;
}
