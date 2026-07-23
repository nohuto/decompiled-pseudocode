/*
 * XREFs of sub_18001E548 @ 0x18001E548
 * Callers:
 *     sub_180005B00 @ 0x180005B00 (sub_180005B00.c)
 *     sub_180006554 @ 0x180006554 (sub_180006554.c)
 *     sub_180006E54 @ 0x180006E54 (sub_180006E54.c)
 *     sub_180007170 @ 0x180007170 (sub_180007170.c)
 *     sub_180009164 @ 0x180009164 (sub_180009164.c)
 *     sub_18000A020 @ 0x18000A020 (sub_18000A020.c)
 *     sub_18000C540 @ 0x18000C540 (sub_18000C540.c)
 *     sub_18000C8C0 @ 0x18000C8C0 (sub_18000C8C0.c)
 *     RtlProtectHeap @ 0x18000D6A0 (RtlProtectHeap.c)
 *     sub_18000EA74 @ 0x18000EA74 (sub_18000EA74.c)
 *     sub_18001BE98 @ 0x18001BE98 (sub_18001BE98.c)
 *     sub_18001C138 @ 0x18001C138 (sub_18001C138.c)
 *     sub_180021DA4 @ 0x180021DA4 (sub_180021DA4.c)
 *     sub_180023C90 @ 0x180023C90 (sub_180023C90.c)
 *     RtlFreeHeap @ 0x1800244A0 (RtlFreeHeap.c)
 *     sub_180024AD0 @ 0x180024AD0 (sub_180024AD0.c)
 *     sub_18002CC00 @ 0x18002CC00 (sub_18002CC00.c)
 *     sub_180072F9C @ 0x180072F9C (sub_180072F9C.c)
 *     sub_180078E44 @ 0x180078E44 (sub_180078E44.c)
 * Callees:
 *     sub_1800A4DFC @ 0x1800A4DFC (sub_1800A4DFC.c)
 *     ZwQueryVirtualMemory @ 0x1800A5760 (ZwQueryVirtualMemory.c)
 */

__int64 __fastcall sub_18001E548(_DWORD *BaseAddress, int a2)
{
  int v4; // eax
  int v5; // eax
  unsigned int v6; // ebx
  _DWORD *MemoryInformation; // [rsp+30h] [rbp-38h] BYREF
  int v9; // [rsp+54h] [rbp-14h]

  if ( BaseAddress[4] == -571548178 )
    v4 = BaseAddress[5] & 0x40000000;
  else
    v4 = BaseAddress[28] & 0x40000;
  v5 = -v4;
  v6 = v5 != 0 ? 64 : 4;
  if ( (v5 != 0 ? 0x3C : 0) == 0x3C
    && a2
    && (ZwQueryVirtualMemory(
          (HANDLE)0xFFFFFFFFFFFFFFFFLL,
          BaseAddress,
          MemoryBasicInformation,
          &MemoryInformation,
          0x30uLL,
          0LL) < 0
     || (v9 & 0x60) == 0
     || MemoryInformation != BaseAddress) )
  {
    sub_1800A4DFC(0, (_DWORD)BaseAddress, a2, v9, 0LL, 0LL);
    return 4;
  }
  return v6;
}
