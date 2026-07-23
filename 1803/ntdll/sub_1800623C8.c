/*
 * XREFs of sub_1800623C8 @ 0x1800623C8
 * Callers:
 *     sub_180011560 @ 0x180011560 (sub_180011560.c)
 *     sub_180022F0C @ 0x180022F0C (sub_180022F0C.c)
 *     sub_180023C10 @ 0x180023C10 (sub_180023C10.c)
 * Callees:
 *     sub_180011630 @ 0x180011630 (sub_180011630.c)
 *     RtlGetCurrentServiceSessionId @ 0x180017410 (RtlGetCurrentServiceSessionId.c)
 *     sub_18006248C @ 0x18006248C (sub_18006248C.c)
 *     sub_1800624DC @ 0x1800624DC (sub_1800624DC.c)
 *     sub_1800FE270 @ 0x1800FE270 (sub_1800FE270.c)
 */

__int64 __fastcall sub_1800623C8(__int64 a1, __int64 a2, int a3, int a4)
{
  unsigned int v6; // ebx
  __int128 v7; // xmm0
  __int64 v8; // r8
  __int64 UserModeGlobalLogger; // rcx
  ULONG_PTR RegionSize; // [rsp+30h] [rbp-20h] BYREF
  PVOID BaseAddress; // [rsp+38h] [rbp-18h] BYREF
  __int128 v13; // [rsp+40h] [rbp-10h]
  int v14; // [rsp+80h] [rbp+30h] BYREF
  int v15; // [rsp+88h] [rbp+38h] BYREF

  v15 = a4;
  v14 = a3;
  v6 = sub_180011630(a1, a2, &v14, &v15, 2);
  if ( v6 )
  {
    v7 = *(_OWORD *)(a1 + 96);
    v8 = a2 & *(_QWORD *)a1;
    RegionSize = (unsigned int)(v15 << 12);
    BaseAddress = (PVOID)(v8 + ((a2 - v8) >> 5 << *(_BYTE *)(a1 + 8)) + (unsigned int)(v14 << 12));
    v13 = v7;
    sub_1800624DC(&BaseAddress, &RegionSize);
    sub_18006248C(a1, a2, v6);
    if ( RtlGetCurrentServiceSessionId() )
      UserModeGlobalLogger = (__int64)NtCurrentPeb()->SharedData->UserModeGlobalLogger;
    else
      UserModeGlobalLogger = 2147353472LL;
    if ( *(_BYTE *)UserModeGlobalLogger && (NtCurrentPeb()->TracingFlags & 1) != 0 )
      sub_1800FE270(*(_QWORD *)(a1 + 112), BaseAddress, RegionSize, 13LL);
  }
  return -v6;
}
