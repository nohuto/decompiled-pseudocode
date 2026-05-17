/*
 * XREFs of sub_180006E54 @ 0x180006E54
 * Callers:
 *     sub_180006554 @ 0x180006554 (sub_180006554.c)
 *     sub_180022088 @ 0x180022088 (sub_180022088.c)
 * Callees:
 *     sub_18001E548 @ 0x18001E548 (sub_18001E548.c)
 *     RtlFreeHeap @ 0x1800244A0 (RtlFreeHeap.c)
 *     ZwProtectVirtualMemory @ 0x1800A5D00 (ZwProtectVirtualMemory.c)
 */

__int64 __fastcall sub_180006E54(__int64 a1, __int64 a2, int a3)
{
  char v5; // cl
  __int64 v6; // r8
  unsigned int v7; // eax
  __int64 v8; // [rsp+48h] [rbp+10h] BYREF
  int v9; // [rsp+50h] [rbp+18h] BYREF
  __int64 v10; // [rsp+58h] [rbp+20h] BYREF

  v9 = a3;
  if ( *(_BYTE *)(a2 + 17) )
  {
    v5 = *(_BYTE *)(a2 + 16);
    v8 = 4096LL;
    v6 = 1LL << v5;
    if ( (unsigned __int64)(1LL << v5) > 0xF0000 )
      v6 = 983040LL;
    v10 = a2 + v6 + *(unsigned __int16 *)(a2 + 18);
    v7 = sub_18001E548(a1, 1LL);
    ZwProtectVirtualMemory(-1LL, &v10, &v8, v7, &v9);
  }
  return RtlFreeHeap(a1, 0x800000LL);
}
