/*
 * XREFs of MiSelectUserAddress @ 0x1405126A0
 * Callers:
 *     MiAllocateNewSubAllocatedRegion @ 0x1404C85E0 (MiAllocateNewSubAllocatedRegion.c)
 *     MiMapViewOfImageSection @ 0x140511460 (MiMapViewOfImageSection.c)
 *     MiAllocateVirtualMemory @ 0x14051BE20 (MiAllocateVirtualMemory.c)
 *     MiMapViewOfPhysicalSection @ 0x1405C6964 (MiMapViewOfPhysicalSection.c)
 *     MiAllocateEnclaveVad @ 0x1406BA9FC (MiAllocateEnclaveVad.c)
 * Callees:
 *     MiFindEmptyAddressRangeDown @ 0x140435DF0 (MiFindEmptyAddressRangeDown.c)
 *     MiFindEmptyAddressRange @ 0x140513B70 (MiFindEmptyAddressRange.c)
 */

__int64 __fastcall MiSelectUserAddress(
        int a1,
        __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        int a5,
        int a6,
        _DWORD *a7,
        _QWORD *a8)
{
  int v9; // r10d
  unsigned __int64 v10; // r13
  _KPROCESS *Process; // rdi
  int v12; // ebx
  __int64 result; // rax
  int v14; // [rsp+80h] [rbp+8h]
  int v15; // [rsp+90h] [rbp+18h]

  v15 = a3;
  v14 = 0;
  v9 = a3;
  *a7 = 0;
  *a8 = 0LL;
  v10 = 0x7FFFFFFDFFFFLL;
  if ( a2 )
  {
    v10 = 0xFFFFFFFFFFFFFFFFuLL >> a2;
    if ( 0xFFFFFFFFFFFFFFFFuLL >> a2 > 0x7FFFFFFDFFFFLL )
      v10 = 0x7FFFFFFDFFFFLL;
  }
  Process = KeGetCurrentThread()->ApcState.Process;
  if ( (a1 & 0x20400000) != 541065216 && (a1 & 0x20000000) != 0 && a3 >= 0x40000000 )
  {
    a4 = 0x40000000LL;
    v14 = 1;
  }
  v12 = a1 & 0x100000;
  while ( 1 )
  {
    result = v12 || (Process[1].DirectoryTableBase & 0x20000000000000LL) != 0
           ? MiFindEmptyAddressRangeDown((int)Process + 1576, v9, a4, v10, a5, (__int64)a8)
           : MiFindEmptyAddressRange(v9, a4, v10, a5, a6, (__int64)a8, (__int64)a7);
    if ( (int)result >= 0 || v14 != 1 )
      break;
    v9 = v15;
    a4 = 0x200000LL;
    v14 = 0;
  }
  if ( a4 != 0x10000 )
    *a7 = 0;
  return result;
}
