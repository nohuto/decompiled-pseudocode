/*
 * XREFs of ?xxxMNDoScroll@@YAHV?$SmartObjStackRef@UtagPOPUPMENU@@@@IH@Z @ 0x1C0203588
 * Callers:
 *     xxxMNButtonDown @ 0x1C02043DC (xxxMNButtonDown.c)
 *     xxxMNDoubleClick @ 0x1C0205230 (xxxMNDoubleClick.c)
 *     xxxMNSelectItem @ 0x1C02071C0 (xxxMNSelectItem.c)
 *     xxxMenuWindowProc @ 0x1C0207D70 (xxxMenuWindowProc.c)
 * Callees:
 *     ??1?$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@XZ @ 0x1C004258C (--1-$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@XZ.c)
 *     ?Init@?$SmartObjStackRef@UtagPOPUPMENU@@@@QEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C00425E4 (-Init@-$SmartObjStackRef@UtagPOPUPMENU@@@@QEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     FindTimer @ 0x1C00B1F50 (FindTimer.c)
 *     _SetTimer @ 0x1C01C4F94 (_SetTimer.c)
 *     xxxMNSetTop @ 0x1C02078C0 (xxxMNSetTop.c)
 */

__int64 __fastcall xxxMNDoScroll(__int64 *a1, unsigned int a2, int a3)
{
  __int64 v3; // rsi
  int v6; // ebx
  unsigned int v7; // ebx
  unsigned int v8; // r8d
  _QWORD v10[5]; // [rsp+30h] [rbp-28h] BYREF

  v3 = a2;
  v6 = *(_DWORD *)(*(_QWORD *)(*a1 + 40) + 136LL);
  if ( a2 == -3 )
  {
    v7 = v6 - 1;
  }
  else
  {
    if ( a2 != -4 )
    {
      SmartObjStackRef<tagPOPUPMENU>::~SmartObjStackRef<tagPOPUPMENU>(a1);
      return 0LL;
    }
    v7 = v6 + 1;
  }
  SmartObjStackRef<tagPOPUPMENU>::Init(v10, *a1);
  if ( (unsigned int)xxxMNSetTop(v10, v7) )
  {
    v8 = *(_DWORD *)(gpsi + 5384LL);
    if ( !a3 )
      v8 >>= 2;
    SetTimer(*(_QWORD *)(*a1 + 16), v3, v8, 0LL, 0);
  }
  else if ( !a3 )
  {
    FindTimer(*(_QWORD *)(*a1 + 16), v3, 0, 1, 0LL);
  }
  SmartObjStackRef<tagPOPUPMENU>::~SmartObjStackRef<tagPOPUPMENU>(a1);
  return 1LL;
}
