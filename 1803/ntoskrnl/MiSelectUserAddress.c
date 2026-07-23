/*
 * XREFs of MiSelectUserAddress @ 0x1405935C0
 * Callers:
 *     MiMapViewOfImageSection @ 0x1404B4E30 (MiMapViewOfImageSection.c)
 *     MiAllocateVirtualMemory @ 0x1405B49A0 (MiAllocateVirtualMemory.c)
 *     MiMapLockedPagesInUserSpace @ 0x1405BA250 (MiMapLockedPagesInUserSpace.c)
 *     MiAllocateNewSubAllocatedRegion @ 0x1405BA858 (MiAllocateNewSubAllocatedRegion.c)
 *     MiMapViewOfPhysicalSection @ 0x140646C40 (MiMapViewOfPhysicalSection.c)
 *     MiAllocateEnclaveVad @ 0x1407511B4 (MiAllocateEnclaveVad.c)
 * Callees:
 *     MiFindEmptyAddressRangeDown @ 0x140555570 (MiFindEmptyAddressRangeDown.c)
 *     MiFindEmptyAddressRange @ 0x140594FE0 (MiFindEmptyAddressRange.c)
 */

__int64 __fastcall MiSelectUserAddress(
        int a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        __int64 a5,
        __int64 a6,
        char a7,
        unsigned int a8,
        _RTL_BITMAP **a9,
        __int64 a10)
{
  _RTL_BITMAP **v11; // r14
  unsigned __int64 v13; // r8
  unsigned __int64 v14; // r10
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v16; // ecx
  _KPROCESS *Process; // rsi
  unsigned __int64 v18; // rdx
  _RTL_BITMAP *v19; // rdi
  __int64 v20; // rbp
  char v21; // r15
  int v22; // ebx
  int v23; // r12d
  __int64 v24; // r14
  __int64 result; // rax
  int v26; // [rsp+A0h] [rbp+8h]
  __int64 v28; // [rsp+B0h] [rbp+18h] BYREF
  unsigned __int64 v29; // [rsp+B8h] [rbp+20h]

  v29 = a4;
  v11 = a9;
  v26 = 0;
  LODWORD(v28) = 0;
  v13 = a2;
  *(_QWORD *)a10 = 0LL;
  v14 = a4;
  CurrentThread = KeGetCurrentThread();
  *v11 = 0LL;
  v16 = a8 >> 31;
  Process = CurrentThread->ApcState.Process;
  v18 = Process[1].ActiveProcessors.Bitmap[18];
  if ( a3 > v18 - 1 && v18 <= 0x100000000LL )
    v16 = 2;
  v19 = (_RTL_BITMAP *)(56LL * v16 + *(_QWORD *)&Process[1].IdealGlobalNode + 48LL);
  if ( (a1 & 0x20400000) != 541065216 && (a1 & 0x20000000) != 0 && a4 >= 0x40000000 )
  {
    v20 = a5;
    if ( a5 == 0x200000 )
    {
      v20 = 0x40000000LL;
      v26 = 1;
    }
  }
  else
  {
    v20 = a5;
  }
  v21 = a7;
  v22 = a1 & 0x100000;
  v23 = a6;
  v24 = a10;
  while ( 1 )
  {
    result = v22 || (Process[1].DirectoryTableBase & 0x20000000000000LL) != 0
           ? MiFindEmptyAddressRangeDown((__int64)v19, v14, v20, v23, v13, a3, v21, v24)
           : MiFindEmptyAddressRange(v19, v13, a3, v21, v24, (__int64)&v28);
    if ( (int)result >= 0 || v26 != 1 )
      break;
    v14 = v29;
    v20 = 0x200000LL;
    v13 = a2;
    v26 = 0;
  }
  if ( v20 == 0x10000 && (_DWORD)v28 == 1 )
    *a9 = v19;
  return result;
}
