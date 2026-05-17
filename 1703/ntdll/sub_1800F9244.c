/*
 * XREFs of sub_1800F9244 @ 0x1800F9244
 * Callers:
 *     sub_1800F931C @ 0x1800F931C (sub_1800F931C.c)
 * Callees:
 *     ZwAllocateVirtualMemory @ 0x1800A5600 (ZwAllocateVirtualMemory.c)
 *     sub_1800F948C @ 0x1800F948C (sub_1800F948C.c)
 *     sub_1800F94A8 @ 0x1800F94A8 (sub_1800F94A8.c)
 */

__int64 __fastcall sub_1800F9244(__int64 a1)
{
  __int64 v2; // rdi
  unsigned __int64 v3; // rcx
  __int64 v4; // rsi
  unsigned __int64 v6; // [rsp+48h] [rbp+10h]

  v2 = 0LL;
  sub_1800F948C(a1);
  v3 = *(_QWORD *)(a1 + 152);
  v4 = *(_QWORD *)(a1 + 168);
  if ( !*(_BYTE *)(a1 + 128) )
  {
    if ( v4 - 8 < v3 )
    {
      if ( v3 - 4096 <= *(_QWORD *)(a1 + 144) )
        goto LABEL_9;
      v6 = v3 - 4096;
      if ( (int)ZwAllocateVirtualMemory() < 0 )
        goto LABEL_9;
      *(_QWORD *)(a1 + 152) = v6;
    }
LABEL_8:
    ++*(_DWORD *)(a1 + 180);
    v2 = v4 - 8;
    *(_QWORD *)(a1 + 168) = v4 - 8;
    goto LABEL_9;
  }
  if ( (unsigned __int64)(v4 - 8) >= *(_QWORD *)(a1 + 160) )
    goto LABEL_8;
LABEL_9:
  sub_1800F94A8(a1);
  return v2;
}
