/*
 * XREFs of sub_180061A7C @ 0x180061A7C
 * Callers:
 *     sub_180013AC8 @ 0x180013AC8 (sub_180013AC8.c)
 *     sub_180061148 @ 0x180061148 (sub_180061148.c)
 * Callees:
 *     RtlFreeHeap @ 0x180016DF0 (RtlFreeHeap.c)
 *     sub_18002AE30 @ 0x18002AE30 (sub_18002AE30.c)
 *     ZwProtectVirtualMemory @ 0x18009B4C0 (ZwProtectVirtualMemory.c)
 */

__int64 __fastcall sub_180061A7C(__int64 a1, unsigned __int64 a2, int a3)
{
  char v6; // cl
  __int64 v7; // r8
  unsigned int v8; // eax
  __int64 v9; // [rsp+48h] [rbp+10h] BYREF
  int v10; // [rsp+50h] [rbp+18h] BYREF
  unsigned __int64 v11; // [rsp+58h] [rbp+20h] BYREF

  v10 = a3;
  if ( *(_BYTE *)(a2 + 17) )
  {
    v6 = *(_BYTE *)(a2 + 16);
    v9 = 4096LL;
    v7 = 1LL << v6;
    if ( (unsigned __int64)(1LL << v6) > 0xF0000 )
      v7 = 983040LL;
    v11 = a2 + v7 + *(unsigned __int16 *)(a2 + 18);
    v8 = sub_18002AE30(a1, 1);
    ZwProtectVirtualMemory(-1LL, &v11, &v9, v8, &v10);
  }
  return RtlFreeHeap(a1, 0x800000u, a2);
}
