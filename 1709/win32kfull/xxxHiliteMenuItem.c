/*
 * XREFs of xxxHiliteMenuItem @ 0x1C0213B48
 * Callers:
 *     NtUserHiliteMenuItem @ 0x1C01E7820 (NtUserHiliteMenuItem.c)
 * Callees:
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C0097514 (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     ?UT_FindTopLevelMenuIndex@@YAHPEAUtagMENU@@I@Z @ 0x1C013E2AC (-UT_FindTopLevelMenuIndex@@YAHPEAUtagMENU@@I@Z.c)
 *     xxxMNInvertItem @ 0x1C0216F74 (xxxMNInvertItem.c)
 *     xxxMNRecomputeBarIfNeeded @ 0x1C0218C14 (xxxMNRecomputeBarIfNeeded.c)
 */

__int64 __fastcall xxxHiliteMenuItem(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v4; // si
  unsigned int TopLevelMenuIndex; // edi
  _QWORD v9[3]; // [rsp+30h] [rbp-18h] BYREF

  v4 = a4;
  TopLevelMenuIndex = a3;
  if ( (a4 & 0x400) == 0 )
    TopLevelMenuIndex = UT_FindTopLevelMenuIndex((struct tagMENU *)a2, a3);
  if ( (*(_DWORD *)(a2 + 56) & 1) == 0 )
    xxxMNRecomputeBarIfNeeded(a1, a2);
  SmartObjStackRefBase<tagPOPUPMENU>::Init(v9, 0LL, a3, a4);
  xxxMNInvertItem(v9, a2, TopLevelMenuIndex, a1, v4 & 0x80);
  return 1LL;
}
