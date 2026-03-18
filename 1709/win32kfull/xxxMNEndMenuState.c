/*
 * XREFs of xxxMNEndMenuState @ 0x1C01F7030
 * Callers:
 *     xxxSysCommand @ 0x1C011D2FC (xxxSysCommand.c)
 *     ?xxxUnlockMenuStateInternal@@YAHPEAUtagMENUSTATE@@H@Z @ 0x1C01F6A78 (-xxxUnlockMenuStateInternal@@YAHPEAUtagMENUSTATE@@H@Z.c)
 *     xxxCallHandleMenuMessages @ 0x1C0205D10 (xxxCallHandleMenuMessages.c)
 *     xxxMenuWindowProc @ 0x1C0209E90 (xxxMenuWindowProc.c)
 *     xxxTrackPopupMenuEx @ 0x1C0214E34 (xxxTrackPopupMenuEx.c)
 * Callees:
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C0097514 (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C00975A4 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     ??4?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z @ 0x1C0097640 (--4-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z.c)
 *     NullifyLookasideRef @ 0x1C01F69F4 (NullifyLookasideRef.c)
 *     MNFlushDestroyedPopups @ 0x1C01F6D20 (MNFlushDestroyedPopups.c)
 *     MNFreePopup @ 0x1C01F6E14 (MNFreePopup.c)
 *     MNUnlinkDelayedFreePopups @ 0x1C01F6F70 (MNUnlinkDelayedFreePopups.c)
 *     xxxMNEndMenuStateInternal @ 0x1C01F7150 (xxxMNEndMenuStateInternal.c)
 */

// write access to const memory has been detected, the output may be wrong!
_QWORD *__fastcall xxxMNEndMenuState(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rbx
  __int64 v14; // rdx
  __int64 v15; // r8
  _QWORD v17[2]; // [rsp+20h] [rbp-20h] BYREF
  __int64 *v18[2]; // [rsp+30h] [rbp-10h] BYREF

  SmartObjStackRefBase<tagPOPUPMENU>::Init(v17, 0LL, a3, a4);
  *(_DWORD *)(a1 + 8) |= 0x1000000u;
  if ( !*(_DWORD *)(a1 + 40) )
  {
    if ( *(_QWORD *)a1 )
    {
      MNFlushDestroyedPopups(*(_DWORD **)a1, v5, v6, v7);
      MNUnlinkDelayedFreePopups(*(_QWORD *)a1, v8, v9, v10);
      SmartObjStackRefBase<tagPOPUPMENU>::operator=(v17, *(_QWORD *)a1);
      **(_DWORD **)v17[0] |= 0x20000000u;
      SmartObjStackRefBase<tagPOPUPMENU>::Init(v18, *(_QWORD *)a1, v11, v12);
      MNFreePopup(v18);
    }
    xxxMNEndMenuStateInternal(gptiCurrent, a1);
    if ( !*(_QWORD *)v17[0] || (**(_DWORD **)v17[0] & 0x40000000) != 0 )
    {
      if ( *(_QWORD *)v17[0] )
        **(_DWORD **)v17[0] &= ~0x20000000u;
    }
    else if ( *(void *const *)v17[0] == gpopupMenu )
    {
      gdwPUDFlags &= ~0x800000u;
      NullifyLookasideRef(*((_QWORD *)&gpopupMenu + 11));
    }
    else
    {
      v13 = *(_QWORD *)v17[0];
      NullifyLookasideRef(*(_QWORD *)(*(_QWORD *)v17[0] + 88LL));
      Win32FreePool(v13, v14, v15);
    }
  }
  return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v17, v5, v6, v7);
}
