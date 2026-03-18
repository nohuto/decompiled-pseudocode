/*
 * XREFs of MiCopyPfnEntry @ 0x14010C150
 * Callers:
 *     MiTradeActivePage @ 0x140027F94 (MiTradeActivePage.c)
 *     MiSwapStackPageNoDpc @ 0x14002C2E0 (MiSwapStackPageNoDpc.c)
 *     MiSwitchKstackPages @ 0x14003BBDC (MiSwitchKstackPages.c)
 *     MiReplaceTransitionPage @ 0x1400750E8 (MiReplaceTransitionPage.c)
 *     MiMigratePfn @ 0x1400C3D80 (MiMigratePfn.c)
 *     MiConvertPrivateToProto @ 0x140102200 (MiConvertPrivateToProto.c)
 *     MiStealPage @ 0x14010C28C (MiStealPage.c)
 *     MiSplitDirectMapPage @ 0x1402191C4 (MiSplitDirectMapPage.c)
 *     MiSwapNumaStandbyPage @ 0x14021FD48 (MiSwapNumaStandbyPage.c)
 *     MiSwapHardFaultPage @ 0x140225E74 (MiSwapHardFaultPage.c)
 *     MxSwapPages @ 0x140802304 (MxSwapPages.c)
 *     MiReloadBootLoadedDrivers @ 0x140815898 (MiReloadBootLoadedDrivers.c)
 * Callees:
 *     <none>
 */

char __fastcall MiCopyPfnEntry(__int64 a1, __int64 a2)
{
  __int128 v2; // xmm0
  __int128 v3; // xmm2
  unsigned __int64 v4; // r8
  char result; // al
  __int128 v6; // [rsp+10h] [rbp-28h]
  __int128 v7; // [rsp+20h] [rbp-18h]

  v2 = *(_OWORD *)(a2 + 32);
  v3 = *(_OWORD *)(a2 + 16);
  *(_QWORD *)&v7 = v2;
  v4 = *(_QWORD *)(a2 + 40);
  *(_QWORD *)&v6 = v3;
  BYTE3(v7) = BYTE3(v2) & 0x7F | *(_BYTE *)(a1 + 35) & 0x80;
  BYTE3(v7) ^= (BYTE3(v7) ^ *(_BYTE *)(a1 + 35) & 0xC0) & 0x40;
  if ( ((*((_QWORD *)&v2 + 1) >> 54) & 7) == 3 )
    v4 = *((_QWORD *)&v2 + 1) & 0xFE3FFFFFFFFFFFFFuLL;
  BYTE2(v7) = BYTE2(v2) & 0x3F | *(_BYTE *)(a1 + 34) & 0xC0;
  result = BYTE2(v2) & 7;
  *((_QWORD *)&v7 + 1) = v4 & 0x3FC00CFFFFFFFFFLL | (*(_QWORD *)(a1 + 40) >> 58 << 58) | (((*(_QWORD *)(a1 + 40) >> 36) & 3LL | (16 * ((*(_QWORD *)(a1 + 40) >> 40) & 0x3FFLL))) << 36);
  if ( (BYTE2(v2) & 7) != 6 )
  {
    result = BYTE8(v3);
    *((_QWORD *)&v6 + 1) = (*((_QWORD *)&v3 + 1) ^ ((unsigned __int64)*(unsigned __int8 *)(a1 + 31) << 56)) & 0xF00000000000000LL ^ *((_QWORD *)&v3 + 1);
    v3 = v6;
  }
  *(_OWORD *)a1 = *(_OWORD *)a2;
  *(_OWORD *)(a1 + 16) = v3;
  *(_OWORD *)(a1 + 32) = v7;
  return result;
}
