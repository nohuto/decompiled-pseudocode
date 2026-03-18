/*
 * XREFs of MiSelectUserAddress @ 0x1404D0540
 * Callers:
 *     MiAllocateVirtualMemory @ 0x1404965C0 (MiAllocateVirtualMemory.c)
 *     MiMapViewOfDataSection @ 0x1404CEDF0 (MiMapViewOfDataSection.c)
 *     MiMapViewOfImageSection @ 0x1404D1270 (MiMapViewOfImageSection.c)
 *     MiAllocateNewSubAllocatedRegion @ 0x14056A41C (MiAllocateNewSubAllocatedRegion.c)
 *     MiMapViewOfPhysicalSection @ 0x1405D96D4 (MiMapViewOfPhysicalSection.c)
 *     MiAllocateEnclaveVad @ 0x1406E77E0 (MiAllocateEnclaveVad.c)
 * Callees:
 *     MiFindEmptyAddressRange @ 0x1404D06B0 (MiFindEmptyAddressRange.c)
 *     MiFindEmptyAddressRangeDown @ 0x14056E304 (MiFindEmptyAddressRangeDown.c)
 */

__int64 __fastcall MiSelectUserAddress(
        int a1,
        __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        __int64 a5,
        char a6,
        int a7,
        _DWORD *a8,
        _QWORD *a9)
{
  unsigned __int64 v10; // r10
  unsigned __int64 v12; // r8
  _KPROCESS *Process; // rdi
  int v14; // ebx
  __int64 result; // rax
  int v16; // [rsp+80h] [rbp+8h]
  int v17; // [rsp+90h] [rbp+18h]
  unsigned __int64 v18; // [rsp+B8h] [rbp+40h]

  v17 = a3;
  v10 = a3;
  v16 = 0;
  *a8 = 0;
  *a9 = 0LL;
  v18 = 0x7FFFFFFDFFFFLL;
  v12 = 0x7FFFFFFDFFFFLL;
  if ( a2 )
  {
    v12 = 0xFFFFFFFFFFFFFFFFuLL >> a2;
    v18 = 0xFFFFFFFFFFFFFFFFuLL >> a2;
    if ( 0xFFFFFFFFFFFFFFFFuLL >> a2 > 0x7FFFFFFDFFFFLL )
    {
      v12 = 0x7FFFFFFDFFFFLL;
      v18 = 0x7FFFFFFDFFFFLL;
    }
  }
  Process = KeGetCurrentThread()->ApcState.Process;
  if ( (a1 & 0x20400000) != 541065216 && (a1 & 0x20000000) != 0 && v10 >= 0x40000000 )
  {
    a4 = 0x40000000LL;
    v16 = 1;
  }
  v14 = a1 & 0x100000;
  while ( 1 )
  {
    result = v14 || (Process[1].DirectoryTableBase & 0x20000000000000LL) != 0
           ? MiFindEmptyAddressRangeDown((int)Process + 1576, v10, a4, a5, v12, a6, (__int64)a9)
           : MiFindEmptyAddressRange(v10, a4, a5, v12, a6, a7, (__int64)a9, (__int64)a8);
    if ( (int)result >= 0 || v16 != 1 )
      break;
    v12 = v18;
    a4 = 0x200000LL;
    LODWORD(v10) = v17;
    v16 = 0;
  }
  if ( a4 != 0x10000 )
    *a8 = 0;
  return result;
}
