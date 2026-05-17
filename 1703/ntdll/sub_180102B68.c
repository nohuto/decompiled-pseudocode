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
  unsigned __int64 v6; // [rsp+58h] [rbp+10h]

  v6 = *(_QWORD *)(a1 + 24) & 0xFFFFFFFFFFFF0000uLL;
  v3 = a1;
  sub_180058688((__int64)&qword_180159600, v6 >> 16, 1uLL, 0LL, 0LL, 0);
  ZwFreeVirtualMemory();
  if ( (unsigned int)RtlGetCurrentServiceSessionId() )
    v4 = (__int64)NtCurrentPeb()->HotpatchInformation + 558;
  else
    v4 = 2147353480LL;
  if ( *(_BYTE *)v4 )
    sub_1800FDEE8(a2, v6, 0LL);
  return sub_18000913C(v3);
}
