/*
 * XREFs of StorAllocateContiguousMemory @ 0x1C005E9A0
 * Callers:
 *     StorPortGetAdditionalCrashDumpArea @ 0x1C0011758 (StorPortGetAdditionalCrashDumpArea.c)
 *     RaidDmaAllocateUncachedExtension @ 0x1C002CA20 (RaidDmaAllocateUncachedExtension.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0017DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall StorAllocateContiguousMemory(
        __int64 *a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        int a6,
        int a7,
        PHYSICAL_ADDRESS *a8)
{
  __int64 v8; // rsi
  __int64 v11; // r9
  unsigned int v12; // r10d
  void *ContiguousNodeMemory; // rax
  __int64 v14; // rbx
  PHYSICAL_ADDRESS PhysicalAddress; // rax
  __int64 v16; // rcx
  __int64 result; // rax
  PHYSICAL_ADDRESS v18[5]; // [rsp+50h] [rbp-28h] BYREF
  int v19; // [rsp+80h] [rbp+8h] BYREF
  __int64 v20; // [rsp+90h] [rbp+18h] BYREF
  __int64 v21; // [rsp+98h] [rbp+20h] BYREF

  v19 = 0;
  v8 = *a1;
  v21 = a3;
  v20 = a4;
  if ( a6 )
  {
    v12 = ~(a6 - 1) & (a2 + a6 - 1);
    v11 = v12;
  }
  else
  {
    v11 = a5;
    v12 = a2;
  }
  if ( *((_BYTE *)a1 + 8) && *((_DWORD *)a1 + 7) == 3 )
  {
    v14 = (*(__int64 (__fastcall **)(__int64, __int64 *, __int64 *, _QWORD, _DWORD, int *, int, PHYSICAL_ADDRESS *))(*(_QWORD *)(v8 + 8) + 272LL))(
            v8,
            &v21,
            &v20,
            v12,
            0,
            &v19,
            a7,
            v18);
    if ( v14 )
    {
      PhysicalAddress = v18[0];
      goto LABEL_6;
    }
  }
  else
  {
    ContiguousNodeMemory = (void *)MmAllocateContiguousNodeMemory(v12, a3, a4, v11, 4, a7);
    v14 = (__int64)ContiguousNodeMemory;
    if ( ContiguousNodeMemory )
    {
      PhysicalAddress = MmGetPhysicalAddress(ContiguousNodeMemory);
LABEL_6:
      v16 = (__int64)a8;
      a8[1] = PhysicalAddress;
      result = 0LL;
      *(_QWORD *)v16 = v14;
      *(_DWORD *)(v16 + 16) = a2;
      return result;
    }
  }
  return 3221225495LL;
}
