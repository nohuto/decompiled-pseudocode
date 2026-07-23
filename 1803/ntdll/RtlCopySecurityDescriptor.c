/*
 * XREFs of RtlCopySecurityDescriptor @ 0x180070110
 * Callers:
 *     <none>
 * Callees:
 *     RtlAllocateHeap @ 0x1800190C0 (RtlAllocateHeap.c)
 *     sub_180070500 @ 0x180070500 (sub_180070500.c)
 *     memmove @ 0x1800A1380 (memmove.c)
 */

NTSTATUS __cdecl RtlCopySecurityDescriptor(
        PSECURITY_DESCRIPTOR InputSecurityDescriptor,
        PSECURITY_DESCRIPTOR *OutputSecurityDescriptor)
{
  unsigned int v4; // esi
  PVOID Heap; // rax
  _BYTE v7[8]; // [rsp+50h] [rbp-28h] BYREF
  _BYTE v8[8]; // [rsp+58h] [rbp-20h] BYREF
  char v9; // [rsp+60h] [rbp-18h] BYREF
  char v10; // [rsp+68h] [rbp-10h] BYREF
  int v11; // [rsp+A0h] [rbp+28h] BYREF
  int v12; // [rsp+A8h] [rbp+30h] BYREF
  int v13; // [rsp+B0h] [rbp+38h] BYREF
  int v14; // [rsp+B8h] [rbp+40h] BYREF

  sub_180070500(
    (_DWORD)InputSecurityDescriptor,
    (unsigned int)&v10,
    (unsigned int)&v12,
    (unsigned int)&v9,
    (__int64)&v11,
    (__int64)v8,
    (__int64)&v13,
    (__int64)v7,
    (__int64)&v14);
  v4 = v13 + v11 + v12 + v14 + 20;
  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, Flags + 1310720, v4);
  *OutputSecurityDescriptor = Heap;
  if ( !Heap )
    return -1073741801;
  memmove(Heap, InputSecurityDescriptor, v4);
  return 0;
}
