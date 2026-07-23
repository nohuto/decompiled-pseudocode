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

LOGICAL __fastcall sub_180061A7C(_DWORD *HeapHandle, _BYTE *BaseAddress, ULONG a3)
{
  char v6; // cl
  __int64 v7; // r8
  ULONG v8; // eax
  ULONG_PTR RegionSize; // [rsp+48h] [rbp+10h] BYREF
  ULONG OldProtect; // [rsp+50h] [rbp+18h] BYREF
  PVOID BaseAddressa; // [rsp+58h] [rbp+20h] BYREF

  OldProtect = a3;
  if ( BaseAddress[17] )
  {
    v6 = BaseAddress[16];
    RegionSize = 4096LL;
    v7 = 1LL << v6;
    if ( (unsigned __int64)(1LL << v6) > 0xF0000 )
      v7 = 983040LL;
    BaseAddressa = &BaseAddress[v7 + *((unsigned __int16 *)BaseAddress + 9)];
    v8 = sub_18002AE30(HeapHandle, 1);
    ZwProtectVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddressa, &RegionSize, v8, &OldProtect);
  }
  return RtlFreeHeap(HeapHandle, 0x800000u, BaseAddress);
}
