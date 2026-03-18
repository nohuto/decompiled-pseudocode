/*
 * XREFs of PspDeleteUserStack @ 0x140580B4C
 * Callers:
 *     PspInsertThread @ 0x1404B7C74 (PspInsertThread.c)
 *     PspAllocateThread @ 0x1405B8EE8 (PspAllocateThread.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x1400083C0 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x140009050 (KiStackAttachProcess.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     ZwFreeVirtualMemory @ 0x1401A7880 (ZwFreeVirtualMemory.c)
 */

__int64 __fastcall PspDeleteUserStack(_KPROCESS *a1, __int64 a2, __int64 a3, char *a4)
{
  char v6; // al
  void *v7; // rax
  ULONG_PTR v9; // rax
  ULONG_PTR RegionSize; // [rsp+20h] [rbp-58h] BYREF
  PVOID BaseAddress; // [rsp+28h] [rbp-50h] BYREF
  _BYTE v12[48]; // [rsp+30h] [rbp-48h] BYREF

  KiStackAttachProcess(a1, 0, (__int64)v12);
  v6 = *a4;
  if ( (*a4 & 2) != 0 )
  {
    v7 = *(void **)(a3 + 32);
    RegionSize = 0LL;
    BaseAddress = v7;
    ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 0x8000u);
    v6 = *a4;
  }
  if ( (v6 & 4) != 0 )
  {
    v9 = *(_QWORD *)(a3 + 56);
    BaseAddress = 0LL;
    RegionSize = v9;
    ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)&RegionSize, (PSIZE_T)&BaseAddress, 0x8000u);
  }
  return KiUnstackDetachProcess((__int64)v12, 0LL);
}
