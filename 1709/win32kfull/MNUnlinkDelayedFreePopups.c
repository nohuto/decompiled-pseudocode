/*
 * XREFs of MNUnlinkDelayedFreePopups @ 0x1C01F6F70
 * Callers:
 *     xxxMNEndMenuState @ 0x1C01F7030 (xxxMNEndMenuState.c)
 * Callees:
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C0097514 (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C00975A4 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     ??4?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z @ 0x1C0097640 (--4-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z.c)
 */

_QWORD *__fastcall MNUnlinkDelayedFreePopups(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  _QWORD v14[2]; // [rsp+20h] [rbp-20h] BYREF
  _QWORD v15[2]; // [rsp+30h] [rbp-10h] BYREF

  SmartObjStackRefBase<tagPOPUPMENU>::Init(v15, 0LL, a3, a4);
  SmartObjStackRefBase<tagPOPUPMENU>::Init(v14, a1, v5, v6);
  while ( *(_QWORD *)v14[0] )
  {
    SmartObjStackRefBase<tagPOPUPMENU>::operator=(v15, *(_QWORD *)(*(_QWORD *)v14[0] + 72LL));
    **(_DWORD **)v14[0] &= ~0x10000u;
    if ( *(_QWORD *)v14[0] != a1 )
      **(_DWORD **)v14[0] &= ~0x20000000u;
    *(_QWORD *)(*(_QWORD *)v14[0] + 72LL) = 0LL;
    *(_QWORD *)(*(_QWORD *)v14[0] + 64LL) = 0LL;
    SmartObjStackRefBase<tagPOPUPMENU>::operator=(v14, *(_QWORD *)v15[0]);
  }
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v14, v7, v8, v9);
  return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v15, v10, v11, v12);
}
