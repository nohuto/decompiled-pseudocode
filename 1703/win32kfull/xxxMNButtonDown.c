/*
 * XREFs of xxxMNButtonDown @ 0x1C02043DC
 * Callers:
 *     xxxHandleMenuMessages @ 0x1C02018C8 (xxxHandleMenuMessages.c)
 *     xxxMNMouseMove @ 0x1C020621C (xxxMNMouseMove.c)
 *     xxxMenuWindowProc @ 0x1C0207D70 (xxxMenuWindowProc.c)
 * Callees:
 *     ?Init@?$SmartObjStackRef@UtagPOPUPMENU@@@@QEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C00425E4 (-Init@-$SmartObjStackRef@UtagPOPUPMENU@@@@QEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     ?xxxMNDoScroll@@YAHV?$SmartObjStackRef@UtagPOPUPMENU@@@@IH@Z @ 0x1C0203588 (-xxxMNDoScroll@@YAHV-$SmartObjStackRef@UtagPOPUPMENU@@@@IH@Z.c)
 *     ?xxxMNHideNextHierarchy@@YAHV?$SmartObjStackRef@UtagPOPUPMENU@@@@@Z @ 0x1C0203660 (-xxxMNHideNextHierarchy@@YAHV-$SmartObjStackRef@UtagPOPUPMENU@@@@@Z.c)
 *     xxxMNOpenHierarchy @ 0x1C0206528 (xxxMNOpenHierarchy.c)
 *     xxxMNSelectItem @ 0x1C02071C0 (xxxMNSelectItem.c)
 */

_QWORD *__fastcall xxxMNButtonDown(__int64 *a1, __int64 a2, unsigned int a3, int a4)
{
  _DWORD *v4; // rax
  int v9; // edi
  __int64 v10; // rax
  __int64 v12[5]; // [rsp+20h] [rbp-28h] BYREF

  v4 = (_DWORD *)*a1;
  if ( *(_DWORD *)(*a1 + 80) == a3 )
  {
    if ( a4 )
      *v4 |= 0x80u;
    SmartObjStackRef<tagPOPUPMENU>::Init(v12, *a1);
    if ( !(unsigned int)xxxMNHideNextHierarchy(v12) )
    {
      if ( !a4 )
        return SmartObjStackRef<tagPOPUPMENU>::~SmartObjStackRef<tagPOPUPMENU>(a1);
      SmartObjStackRef<tagPOPUPMENU>::Init(v12, *a1);
      if ( xxxMNOpenHierarchy(v12, a2) )
        *(_DWORD *)*a1 &= ~0x80u;
    }
    goto LABEL_17;
  }
  if ( a4 )
  {
    *v4 &= ~0x80u;
    v9 = 1;
  }
  else
  {
    v9 = (*v4 >> 10) & 1;
  }
  SmartObjStackRef<tagPOPUPMENU>::Init(v12, *a1);
  v10 = xxxMNSelectItem(v12, a2, a3);
  if ( !v10
    || !*(_QWORD *)(v10 + 16)
    || (*(_DWORD *)(v10 + 4) & 3) != 0
    || !v9
    || (SmartObjStackRef<tagPOPUPMENU>::Init(v12, *a1), xxxMNOpenHierarchy(v12, a2) != -1) )
  {
LABEL_17:
    if ( a4 )
    {
      *(_DWORD *)(a2 + 8) |= 8u;
      SmartObjStackRef<tagPOPUPMENU>::Init(v12, *a1);
      xxxMNDoScroll(v12, a3, 1);
    }
  }
  return SmartObjStackRef<tagPOPUPMENU>::~SmartObjStackRef<tagPOPUPMENU>(a1);
}
