/*
 * XREFs of sub_18010BE7C @ 0x18010BE7C
 * Callers:
 *     sub_18010BF68 @ 0x18010BF68 (sub_18010BF68.c)
 * Callees:
 *     RtlFreeHeap @ 0x1800244A0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x180029F40 (RtlAllocateHeap.c)
 *     sub_18010C634 @ 0x18010C634 (sub_18010C634.c)
 *     sub_18010C7E0 @ 0x18010C7E0 (sub_18010C7E0.c)
 */

__int64 __fastcall sub_18010BE7C(HANDLE FileHandle, __int64 a2, __int64 a3, int a4, PCWSTR SourceString)
{
  PVOID Heap; // rax
  __int64 v9; // rbx
  PVOID BaseAddress; // [rsp+38h] [rbp-20h]
  SIZE_T Size; // [rsp+70h] [rbp+18h] BYREF

  LODWORD(Size) = 0;
  sub_18010C7E0(2LL, 0LL, &Size);
  if ( !(_DWORD)Size )
    return -1LL;
  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, (unsigned int)Size);
  BaseAddress = Heap;
  if ( !Heap )
    return -1LL;
  if ( !(unsigned int)sub_18010C7E0(2LL, Heap, &Size) )
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
    return -1LL;
  }
  v9 = sub_18010C634(FileHandle, a4, SourceString);
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
  return v9;
}
