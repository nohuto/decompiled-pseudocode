/*
 * XREFs of sub_1800F916C @ 0x1800F916C
 * Callers:
 *     sub_1800F93DC @ 0x1800F93DC (sub_1800F93DC.c)
 * Callees:
 *     ZwAllocateVirtualMemory @ 0x1800A5600 (ZwAllocateVirtualMemory.c)
 *     sub_1800F948C @ 0x1800F948C (sub_1800F948C.c)
 *     sub_1800F94A8 @ 0x1800F94A8 (sub_1800F94A8.c)
 */

__int64 __fastcall sub_1800F916C(__int64 a1, __int64 a2)
{
  __int64 v4; // rdi
  char v5; // dl
  void *v6; // rcx
  __int64 v7; // rsi
  PVOID BaseAddress; // [rsp+50h] [rbp+8h] BYREF
  ULONG_PTR RegionSize; // [rsp+60h] [rbp+18h] BYREF

  v4 = 0LL;
  sub_1800F948C(a1);
  v5 = *(_BYTE *)(a1 + 128);
  v6 = *(void **)(a1 + 144);
  v7 = *(_QWORD *)(a1 + 160);
  BaseAddress = v6;
  if ( !v5 )
  {
    if ( v7 + a2 > (unsigned __int64)v6 )
    {
      RegionSize = (a2 + 4095) & 0xFFFFFFFFFFFFF000uLL;
      if ( (unsigned __int64)v6 + RegionSize >= *(_QWORD *)(a1 + 152)
        || ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &RegionSize, 0x1000u, 4u) < 0 )
      {
        goto LABEL_9;
      }
      *(_QWORD *)(a1 + 144) = (char *)BaseAddress + RegionSize;
    }
LABEL_8:
    ++*(_DWORD *)(a1 + 192);
    *(_QWORD *)(a1 + 160) = v7 + a2;
    v4 = v7;
    goto LABEL_9;
  }
  if ( (unsigned __int64)(v7 + a2) <= *(_QWORD *)(a1 + 168) )
    goto LABEL_8;
LABEL_9:
  sub_1800F94A8(a1);
  return v4;
}
