/*
 * XREFs of MNFlushDestroyedPopups @ 0x1C01F6D20
 * Callers:
 *     xxxMNEndMenuState @ 0x1C01F7030 (xxxMNEndMenuState.c)
 *     xxxMNLoop @ 0x1C0203CEC (xxxMNLoop.c)
 * Callees:
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C0097514 (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C00975A4 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     ??4?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z @ 0x1C0097640 (--4-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z.c)
 *     NullifyLookasideRef @ 0x1C01F69F4 (NullifyLookasideRef.c)
 *     MNFreePopup @ 0x1C01F6E14 (MNFreePopup.c)
 */

_QWORD *__fastcall MNFlushDestroyedPopups(_DWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // r8
  __int64 v6; // r9
  _DWORD *v7; // rdx
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rbx
  __int64 v18; // rdx
  __int64 v19; // r8
  _QWORD v20[2]; // [rsp+20h] [rbp-30h] BYREF
  _QWORD v21[2]; // [rsp+30h] [rbp-20h] BYREF
  _QWORD v22[2]; // [rsp+40h] [rbp-10h] BYREF

  SmartObjStackRefBase<tagPOPUPMENU>::Init(v20, 0LL, a3, a4);
  SmartObjStackRefBase<tagPOPUPMENU>::Init(v21, 0LL, v5, v6);
  v7 = a1;
LABEL_2:
  SmartObjStackRefBase<tagPOPUPMENU>::operator=(v20, (__int64)v7);
  while ( *(_QWORD *)(*(_QWORD *)v20[0] + 72LL) )
  {
    v7 = *(_DWORD **)(*(_QWORD *)v20[0] + 72LL);
    if ( (*v7 & 0x8000) == 0 )
      goto LABEL_2;
    SmartObjStackRefBase<tagPOPUPMENU>::operator=(v21, (__int64)v7);
    *(_QWORD *)(*(_QWORD *)v20[0] + 72LL) = *(_QWORD *)(*(_QWORD *)v21[0] + 72LL);
    SmartObjStackRefBase<tagPOPUPMENU>::Init(v22, *(_QWORD *)v21[0], v15, v16);
    MNFreePopup(v22);
    if ( (**(_DWORD **)v21[0] & 0x40000000) != 0 )
    {
      **(_DWORD **)v21[0] &= ~0x20000000u;
    }
    else
    {
      v17 = *(_QWORD *)v21[0];
      NullifyLookasideRef(*(_QWORD *)(*(_QWORD *)v21[0] + 88LL));
      Win32FreePool(v17, v18, v19);
    }
  }
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v21, v8, v9, v10);
  return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v20, v11, v12, v13);
}
