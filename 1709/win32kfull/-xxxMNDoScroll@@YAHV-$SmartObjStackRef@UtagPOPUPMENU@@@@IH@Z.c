/*
 * XREFs of ?xxxMNDoScroll@@YAHV?$SmartObjStackRef@UtagPOPUPMENU@@@@IH@Z @ 0x1C0204FD4
 * Callers:
 *     xxxMNButtonDown @ 0x1C0205E2C (xxxMNButtonDown.c)
 *     xxxMNDoubleClick @ 0x1C0206E14 (xxxMNDoubleClick.c)
 *     xxxMNSelectItem @ 0x1C0209144 (xxxMNSelectItem.c)
 *     xxxMenuWindowProc @ 0x1C0209E90 (xxxMenuWindowProc.c)
 * Callees:
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C0097514 (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C00975A4 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     FindTimer @ 0x1C00D7980 (FindTimer.c)
 *     _SetTimer @ 0x1C01C7294 (_SetTimer.c)
 *     xxxMNSetTop @ 0x1C02098F8 (xxxMNSetTop.c)
 */

__int64 __fastcall xxxMNDoScroll(__int64 **a1, __int64 a2, __int64 a3)
{
  int v3; // esi
  __int64 v4; // rdi
  __int64 v6; // r9
  int v7; // ebp
  int v8; // r14d
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  unsigned int v12; // r8d
  _QWORD v14[3]; // [rsp+30h] [rbp-18h] BYREF

  v3 = a3;
  v4 = (unsigned int)a2;
  v6 = **a1;
  v7 = *(_DWORD *)(*(_QWORD *)(v6 + 40) + 136LL);
  if ( (_DWORD)a2 == -3 )
  {
    v8 = -1;
  }
  else
  {
    if ( (_DWORD)a2 != -4 )
    {
      SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(a1, a2, a3, v6);
      return 0LL;
    }
    v8 = 1;
  }
  SmartObjStackRefBase<tagPOPUPMENU>::Init(v14, **a1, a3, v6);
  if ( (unsigned int)xxxMNSetTop(v14, (unsigned int)(v8 + v7)) )
  {
    v12 = *(_DWORD *)(gpsi + 4972LL);
    if ( !v3 )
      v12 >>= 2;
    SetTimer(*(_QWORD *)(**a1 + 16), v4, v12, 0LL, 0);
  }
  else if ( !v3 )
  {
    FindTimer(*(_QWORD *)(**a1 + 16), v4, 0, 1, 0LL);
  }
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(a1, v9, v10, v11);
  return 1LL;
}
