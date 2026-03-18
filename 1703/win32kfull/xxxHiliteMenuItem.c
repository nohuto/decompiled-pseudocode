/*
 * XREFs of xxxHiliteMenuItem @ 0x1C021261C
 * Callers:
 *     NtUserHiliteMenuItem @ 0x1C01DB5D0 (NtUserHiliteMenuItem.c)
 * Callees:
 *     ?Init@?$SmartObjStackRef@UtagPOPUPMENU@@@@QEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C00425E4 (-Init@-$SmartObjStackRef@UtagPOPUPMENU@@@@QEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     ?UT_FindTopLevelMenuIndex@@YAHPEAUtagMENU@@I@Z @ 0x1C0137558 (-UT_FindTopLevelMenuIndex@@YAHPEAUtagMENU@@I@Z.c)
 *     xxxMNInvertItem @ 0x1C0215C94 (xxxMNInvertItem.c)
 *     xxxMNRecomputeBarIfNeeded @ 0x1C0217A88 (xxxMNRecomputeBarIfNeeded.c)
 */

__int64 __fastcall xxxHiliteMenuItem(__int64 a1, __int64 a2, unsigned int a3, __int16 a4)
{
  char v4; // si
  unsigned int TopLevelMenuIndex; // edi
  _QWORD v9[5]; // [rsp+30h] [rbp-28h] BYREF

  v4 = a4;
  TopLevelMenuIndex = a3;
  if ( (a4 & 0x400) == 0 )
    TopLevelMenuIndex = UT_FindTopLevelMenuIndex((struct tagMENU *)a2, a3);
  if ( (*(_DWORD *)(a2 + 56) & 1) == 0 )
    xxxMNRecomputeBarIfNeeded(a1, a2);
  SmartObjStackRef<tagPOPUPMENU>::Init(v9, 0LL);
  xxxMNInvertItem(v9, a2, TopLevelMenuIndex, a1, v4 & 0x80);
  return 1LL;
}
