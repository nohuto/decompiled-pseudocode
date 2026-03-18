/*
 * XREFs of sub_1405484E0 @ 0x1405484E0
 * Callers:
 *     WbInitializeEncryptionSegment @ 0x14045CE10 (WbInitializeEncryptionSegment.c)
 *     sub_140547A4C @ 0x140547A4C (sub_140547A4C.c)
 *     sub_140547C50 @ 0x140547C50 (sub_140547C50.c)
 *     WbCreateHeapExecutedBlock @ 0x1405481A0 (WbCreateHeapExecutedBlock.c)
 * Callees:
 *     ZwQueryVirtualMemory @ 0x14017E3A0 (ZwQueryVirtualMemory.c)
 */

NTSTATUS __fastcall sub_1405484E0(PVOID BaseAddress, unsigned int a2, int a3)
{
  NTSTATUS result; // eax
  __int64 v4; // rdi
  _QWORD v6[4]; // [rsp+30h] [rbp-38h] BYREF
  int v7; // [rsp+54h] [rbp-14h]
  ULONG_PTR v8; // [rsp+88h] [rbp+20h] BYREF

  result = 0;
  v4 = a2;
  if ( a3 )
  {
    result = ZwQueryVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, BaseAddress, MemoryBasicInformation, v6, 0x30uLL, &v8);
    if ( result >= 0
      && ((unsigned __int64)BaseAddress < v6[0]
       || (unsigned __int64)BaseAddress + v4 > v6[3] + v6[0]
       || v7 != 32 && v7 != 2) )
    {
      return -1073741811;
    }
  }
  return result;
}
