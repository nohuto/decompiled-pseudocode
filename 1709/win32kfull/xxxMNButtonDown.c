/*
 * XREFs of xxxMNButtonDown @ 0x1C0205E2C
 * Callers:
 *     xxxHandleMenuMessages @ 0x1C0203214 (xxxHandleMenuMessages.c)
 *     xxxMNMouseMove @ 0x1C0207FA4 (xxxMNMouseMove.c)
 *     xxxMenuWindowProc @ 0x1C0209E90 (xxxMenuWindowProc.c)
 * Callees:
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C0097514 (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C00975A4 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     ?xxxMNDoScroll@@YAHV?$SmartObjStackRef@UtagPOPUPMENU@@@@IH@Z @ 0x1C0204FD4 (-xxxMNDoScroll@@YAHV-$SmartObjStackRef@UtagPOPUPMENU@@@@IH@Z.c)
 *     ?xxxMNHideNextHierarchy@@YAHV?$SmartObjStackRef@UtagPOPUPMENU@@@@@Z @ 0x1C02050D0 (-xxxMNHideNextHierarchy@@YAHV-$SmartObjStackRef@UtagPOPUPMENU@@@@@Z.c)
 *     xxxMNOpenHierarchy @ 0x1C02082B0 (xxxMNOpenHierarchy.c)
 *     xxxMNSelectItem @ 0x1C0209144 (xxxMNSelectItem.c)
 */

_QWORD *__fastcall xxxMNButtonDown(__int64 **a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // esi
  unsigned int v5; // r14d
  __int64 *v8; // rax
  int v9; // edi
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  _QWORD v18[2]; // [rsp+20h] [rbp-58h] BYREF
  _QWORD v19[2]; // [rsp+30h] [rbp-48h] BYREF
  __int64 *v20[2]; // [rsp+40h] [rbp-38h] BYREF
  _QWORD v21[2]; // [rsp+50h] [rbp-28h] BYREF
  __int64 *v22[2]; // [rsp+60h] [rbp-18h] BYREF

  v4 = a4;
  v5 = a3;
  if ( *(_DWORD *)(**a1 + 80) == (_DWORD)a3 )
  {
    if ( (_DWORD)a4 )
      *(_DWORD *)**a1 |= 0x80u;
    SmartObjStackRefBase<tagPOPUPMENU>::Init(v20, **a1, a3, a4);
    if ( !(unsigned int)xxxMNHideNextHierarchy(v20, v14, v15, v16) )
    {
      if ( !v4 )
        return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(a1, v11, v12, v13);
      SmartObjStackRefBase<tagPOPUPMENU>::Init(v21, **a1, v12, v13);
      if ( xxxMNOpenHierarchy(v21, a2) )
        *(_DWORD *)**a1 &= ~0x80u;
    }
    goto LABEL_17;
  }
  v8 = *a1;
  if ( (_DWORD)a4 )
  {
    v9 = 1;
    *(_DWORD *)*v8 &= ~0x80u;
  }
  else
  {
    v9 = (*(_DWORD *)*v8 >> 10) & 1;
  }
  SmartObjStackRefBase<tagPOPUPMENU>::Init(v18, **a1, a3, a4);
  v10 = xxxMNSelectItem(v18, a2, v5);
  if ( !v10
    || !*(_QWORD *)(v10 + 16)
    || (*(_DWORD *)(v10 + 4) & 3) != 0
    || !v9
    || (SmartObjStackRefBase<tagPOPUPMENU>::Init(v19, **a1, v12, v13), xxxMNOpenHierarchy(v19, a2) != -1) )
  {
LABEL_17:
    if ( v4 )
    {
      *(_DWORD *)(a2 + 8) |= 8u;
      SmartObjStackRefBase<tagPOPUPMENU>::Init(v22, **a1, v12, v13);
      xxxMNDoScroll(v22, v5, 1LL);
    }
  }
  return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(a1, v11, v12, v13);
}
