/*
 * XREFs of xxxEndMenuLoop @ 0x1C0201780
 * Callers:
 *     xxxMNLoop @ 0x1C02022C0 (xxxMNLoop.c)
 *     xxxCallHandleMenuMessages @ 0x1C02042C0 (xxxCallHandleMenuMessages.c)
 *     xxxMenuWindowProc @ 0x1C0207D70 (xxxMenuWindowProc.c)
 * Callees:
 *     xxxDWP_DoNCActivate @ 0x1C003BC28 (xxxDWP_DoNCActivate.c)
 *     ??1?$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@XZ @ 0x1C004258C (--1-$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@XZ.c)
 *     ?Init@?$SmartObjStackRef@UtagPOPUPMENU@@@@QEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C00425E4 (-Init@-$SmartObjStackRef@UtagPOPUPMENU@@@@QEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     xxxDrawMenuBarUnderlines @ 0x1C0118F78 (xxxDrawMenuBarUnderlines.c)
 *     xxxMNCancel @ 0x1C0204628 (xxxMNCancel.c)
 *     xxxEndMenu @ 0x1C02132D4 (xxxEndMenu.c)
 */

_QWORD *__fastcall xxxEndMenuLoop(__int64 a1, __int64 a2)
{
  int v3; // edi
  __int64 v4; // rdx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v12; // [rsp+20h] [rbp-40h] BYREF
  __int64 v13; // [rsp+28h] [rbp-38h]
  _QWORD v14[5]; // [rsp+38h] [rbp-28h] BYREF

  SmartObjStackRef<tagPOPUPMENU>::Init(v14, a2);
  v3 = 0;
  if ( (*(_DWORD *)v14[0] & 8) != 0 )
  {
    if ( (*(_DWORD *)v14[0] & 0x80000) == 0 )
      xxxMNCancel(a1, 0LL, 0LL, 0LL);
  }
  else
  {
    if ( (*(_DWORD *)(a1 + 8) & 0x20) != 0 )
    {
      v4 = *(_QWORD *)(v14[0] + 8LL);
      v12 = *(_QWORD *)(gptiCurrent + 368LL);
      *(_QWORD *)(gptiCurrent + 368LL) = &v12;
      v13 = v4;
      if ( v4 )
        ++*(_DWORD *)(v4 + 8);
      xxxDrawMenuBarUnderlines(*(_QWORD *)(v14[0] + 8LL), 0);
      ThreadUnlock1(v6, v5);
    }
    if ( (*(_DWORD *)(a1 + 8) & 0x10) == 0 )
      xxxEndMenu(a1);
  }
  if ( (*(_DWORD *)(a1 + 8) & 0x100) != 0 )
  {
    v7 = *(_QWORD *)(v14[0] + 8LL);
    if ( v7 )
    {
      v8 = *(_QWORD *)(*(_QWORD *)(v7 + 16) + 384LL);
      if ( v8 == gpqForeground && *(_QWORD *)(v8 + 88) == v7 )
        v3 = 1;
      if ( ((*(unsigned __int8 *)(v7 + 56) >> 6) & 1) != v3 )
      {
        v12 = *(_QWORD *)(gptiCurrent + 368LL);
        *(_QWORD *)(gptiCurrent + 368LL) = &v12;
        v13 = v7;
        ++*(_DWORD *)(v7 + 8);
        xxxDWP_DoNCActivate(v7, 2 - (v3 != 0), 1LL);
        ThreadUnlock1(v10, v9);
      }
    }
  }
  return SmartObjStackRef<tagPOPUPMENU>::~SmartObjStackRef<tagPOPUPMENU>(v14);
}
