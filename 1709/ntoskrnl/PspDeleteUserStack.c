/*
 * XREFs of PspDeleteUserStack @ 0x1405979E8
 * Callers:
 *     PspAllocateThread @ 0x140493710 (PspAllocateThread.c)
 *     PspInsertThread @ 0x1404D54CC (PspInsertThread.c)
 * Callees:
 *     KiStackAttachProcess @ 0x1400A0410 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400BF430 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     ZwFreeVirtualMemory @ 0x14017DC80 (ZwFreeVirtualMemory.c)
 */

__int64 __fastcall PspDeleteUserStack(_KPROCESS *a1, __int64 a2, __int64 a3, _BYTE *a4)
{
  void *v6; // rax
  ULONG_PTR v8; // rax
  ULONG_PTR RegionSize; // [rsp+20h] [rbp-58h] BYREF
  PVOID BaseAddress; // [rsp+28h] [rbp-50h] BYREF
  $709EDFC2F9E0D4565D6AA3C4377BC643 v11; // [rsp+30h] [rbp-48h] BYREF

  KiStackAttachProcess(a1, 0, (__int64)&v11);
  if ( (*a4 & 2) != 0 )
  {
    v6 = *(void **)(a3 + 32);
    RegionSize = 0LL;
    BaseAddress = v6;
    ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 0x8000u);
  }
  if ( (*a4 & 4) != 0 )
  {
    v8 = *(_QWORD *)(a3 + 56);
    BaseAddress = 0LL;
    RegionSize = v8;
    ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)&RegionSize, (PSIZE_T)&BaseAddress, 0x8000u);
  }
  return KiUnstackDetachProcess(&v11, 0LL);
}
