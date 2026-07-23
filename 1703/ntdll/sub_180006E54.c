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

LOGICAL __fastcall sub_180006E54(PVOID BaseAddress, _BYTE *a2, ULONG a3)
{
  char v6; // cl
  __int64 v7; // r8
  ULONG v8; // eax
  ULONG_PTR RegionSize; // [rsp+48h] [rbp+10h] BYREF
  ULONG OldProtect; // [rsp+50h] [rbp+18h] BYREF
  PVOID BaseAddressa; // [rsp+58h] [rbp+20h] BYREF

  OldProtect = a3;
  if ( a2[17] )
  {
    v6 = a2[16];
    RegionSize = 4096LL;
    v7 = 1LL << v6;
    if ( (unsigned __int64)(1LL << v6) > 0xF0000 )
      v7 = 983040LL;
    BaseAddressa = &a2[v7 + *((unsigned __int16 *)a2 + 9)];
    v8 = sub_18001E548(BaseAddress);
    ZwProtectVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddressa, &RegionSize, v8, &OldProtect);
  }
  return RtlFreeHeap(BaseAddress, 0x800000u, a2);
}
