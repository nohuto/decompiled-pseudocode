/*
 * XREFs of sub_180105B24 @ 0x180105B24
 * Callers:
 *     sub_1801046E8 @ 0x1801046E8 (sub_1801046E8.c)
 *     sub_1801058BC @ 0x1801058BC (sub_1801058BC.c)
 * Callees:
 *     sub_18005F060 @ 0x18005F060 (sub_18005F060.c)
 */

NTSTATUS __fastcall sub_180105B24(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  unsigned __int64 v5; // rdi
  ULONG_PTR v6; // rcx
  NTSTATUS result; // eax
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rdx
  bool v10; // cc
  int v11; // [rsp+28h] [rbp-20h]
  int v12; // [rsp+28h] [rbp-20h]
  int v13; // [rsp+30h] [rbp-18h]
  int v14; // [rsp+30h] [rbp-18h]
  ULONG_PTR RegionSize; // [rsp+50h] [rbp+8h] BYREF
  ULONG_PTR v16; // [rsp+58h] [rbp+10h] BYREF

  *(_QWORD *)(a1 + 24) = a2;
  *(_BYTE *)(a1 + 57) = 0;
  *(_BYTE *)(a1 + 58) = a4;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 48) = 0LL;
  *(_BYTE *)(a1 + 56) = a4 != 0;
  v5 = (((unsigned __int64)(a2 + 7) >> 3) + 4095) & 0xFFFFFFFFFFFFF000uLL;
  v6 = ((((v5 >> 12) + 7) >> 3) + 4095) & 0xFFFFFFFFFFFFF000uLL;
  v16 = v6;
  if ( (((v6 >> 12) + 7) & 0xFFFFFFFFFFFFFFF8uLL) > 0x40 )
    return -2147483643;
  RegionSize = v6 + v5;
  result = sub_18005F060((PVOID *)(a1 + 16), &RegionSize, 0LL, 1056768, 4u, v11, v13, 0LL);
  if ( result >= 0 )
  {
    _BitScanForward64(&v8, RegionSize);
    v9 = v5 + *(_QWORD *)(a1 + 16);
    *(_BYTE *)(a1 + 59) = v8;
    v10 = v16 <= 0x1000;
    *(_QWORD *)(a1 + 8) = v9;
    if ( v10 )
    {
      result = sub_18005F060((PVOID *)(a1 + 8), &v16, 0LL, 1073745920, 4u, v12, v14, 0LL);
      if ( result < 0 )
        return result;
      *(_QWORD *)a1 = 1LL;
    }
    return 0;
  }
  return result;
}
