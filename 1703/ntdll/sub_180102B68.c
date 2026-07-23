/*
 * XREFs of sub_180102B68 @ 0x180102B68
 * Callers:
 *     sub_1800080CC @ 0x1800080CC (sub_1800080CC.c)
 * Callees:
 *     sub_18000913C @ 0x18000913C (sub_18000913C.c)
 *     RtlGetCurrentServiceSessionId @ 0x180024AB0 (RtlGetCurrentServiceSessionId.c)
 *     sub_180058688 @ 0x180058688 (sub_180058688.c)
 *     ZwFreeVirtualMemory @ 0x1800A56C0 (ZwFreeVirtualMemory.c)
 *     sub_1800FDEE8 @ 0x1800FDEE8 (sub_1800FDEE8.c)
 */

__int64 __fastcall sub_180102B68(__int64 a1, __int64 a2)
{
  int v3; // ebx
  __int64 v4; // rcx
  ULONG_PTR RegionSize; // [rsp+50h] [rbp+8h] BYREF
  PVOID BaseAddress; // [rsp+58h] [rbp+10h] BYREF

  BaseAddress = (PVOID)(*(_QWORD *)(a1 + 24) & 0xFFFFFFFFFFFF0000uLL);
  v3 = a1;
  sub_180058688(&stru_180159600, (unsigned __int64)BaseAddress >> 16, 1uLL, 0LL, 0LL, 0);
  RegionSize = 0LL;
  ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 0x8000u);
  if ( RtlGetCurrentServiceSessionId() )
    v4 = (__int64)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[4];
  else
    v4 = 2147353480LL;
  if ( *(_BYTE *)v4 )
    sub_1800FDEE8(a2, (__int64)BaseAddress, RegionSize);
  return sub_18000913C(v3);
}
