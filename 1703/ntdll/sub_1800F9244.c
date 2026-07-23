/*
 * XREFs of sub_1800F9244 @ 0x1800F9244
 * Callers:
 *     sub_1800F931C @ 0x1800F931C (sub_1800F931C.c)
 * Callees:
 *     ZwAllocateVirtualMemory @ 0x1800A5600 (ZwAllocateVirtualMemory.c)
 *     sub_1800F948C @ 0x1800F948C (sub_1800F948C.c)
 *     sub_1800F94A8 @ 0x1800F94A8 (sub_1800F94A8.c)
 */

__int64 __fastcall sub_1800F9244(__int64 a1, void *a2)
{
  __int64 v3; // rdi
  char v4; // dl
  char *v5; // rcx
  __int64 v6; // rsi
  ULONG_PTR RegionSize; // [rsp+40h] [rbp+8h] BYREF
  PVOID BaseAddress; // [rsp+48h] [rbp+10h] BYREF

  BaseAddress = a2;
  v3 = 0LL;
  sub_1800F948C(a1);
  v4 = *(_BYTE *)(a1 + 128);
  v5 = *(char **)(a1 + 152);
  v6 = *(_QWORD *)(a1 + 168);
  BaseAddress = v5;
  if ( !v4 )
  {
    if ( v6 - 8 < (unsigned __int64)v5 )
    {
      RegionSize = 4096LL;
      if ( (unsigned __int64)(v5 - 4096) <= *(_QWORD *)(a1 + 144) )
        goto LABEL_9;
      BaseAddress = v5 - 4096;
      if ( ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &RegionSize, 0x1000u, 4u) < 0 )
        goto LABEL_9;
      *(_QWORD *)(a1 + 152) = BaseAddress;
    }
LABEL_8:
    ++*(_DWORD *)(a1 + 180);
    v3 = v6 - 8;
    *(_QWORD *)(a1 + 168) = v6 - 8;
    goto LABEL_9;
  }
  if ( (unsigned __int64)(v6 - 8) >= *(_QWORD *)(a1 + 160) )
    goto LABEL_8;
LABEL_9:
  sub_1800F94A8(a1);
  return v3;
}
