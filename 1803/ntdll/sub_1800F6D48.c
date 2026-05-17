/*
 * XREFs of sub_1800F6D48 @ 0x1800F6D48
 * Callers:
 *     sub_1800F6E20 @ 0x1800F6E20 (sub_1800F6E20.c)
 * Callees:
 *     ZwAllocateVirtualMemory @ 0x18009ADC0 (ZwAllocateVirtualMemory.c)
 *     sub_1800F6F90 @ 0x1800F6F90 (sub_1800F6F90.c)
 *     sub_1800F6FAC @ 0x1800F6FAC (sub_1800F6FAC.c)
 */

__int64 __fastcall sub_1800F6D48(__int64 a1)
{
  __int64 v2; // rdi
  __int64 v3; // rsi
  unsigned __int64 v4; // rcx
  unsigned __int64 v5; // rax
  unsigned __int64 v7; // [rsp+48h] [rbp+10h]

  v2 = 0LL;
  sub_1800F6F90(a1);
  v3 = *(_QWORD *)(a1 + 168);
  v4 = *(_QWORD *)(a1 + 152);
  v5 = v3 - 8;
  if ( !*(_BYTE *)(a1 + 128) )
  {
    if ( v5 < v4 )
    {
      if ( v4 - 4096 <= *(_QWORD *)(a1 + 144) )
        goto LABEL_9;
      v7 = v4 - 4096;
      if ( (int)ZwAllocateVirtualMemory() < 0 )
        goto LABEL_9;
      *(_QWORD *)(a1 + 152) = v7;
    }
LABEL_8:
    ++*(_DWORD *)(a1 + 180);
    v2 = v3 - 8;
    *(_QWORD *)(a1 + 168) = v3 - 8;
    goto LABEL_9;
  }
  if ( v5 >= *(_QWORD *)(a1 + 160) )
    goto LABEL_8;
LABEL_9:
  sub_1800F6FAC(a1);
  return v2;
}
