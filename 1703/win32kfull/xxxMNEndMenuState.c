/*
 * XREFs of xxxMNEndMenuState @ 0x1C01EB210
 * Callers:
 *     xxxSysCommand @ 0x1C0112C2C (xxxSysCommand.c)
 *     ?xxxUnlockMenuStateInternal@@YAHPEAUtagMENUSTATE@@H@Z @ 0x1C01EAAA8 (-xxxUnlockMenuStateInternal@@YAHPEAUtagMENUSTATE@@H@Z.c)
 *     xxxCallHandleMenuMessages @ 0x1C02042C0 (xxxCallHandleMenuMessages.c)
 *     xxxMenuWindowProc @ 0x1C0207D70 (xxxMenuWindowProc.c)
 *     xxxTrackPopupMenuEx @ 0x1C0213DB0 (xxxTrackPopupMenuEx.c)
 * Callees:
 *     ??1?$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@XZ @ 0x1C004258C (--1-$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@XZ.c)
 *     ?Init@?$SmartObjStackRef@UtagPOPUPMENU@@@@QEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C00425E4 (-Init@-$SmartObjStackRef@UtagPOPUPMENU@@@@QEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     ??4?$SmartObjStackRef@UtagPOPUPMENU@@@@QEAAAEAV0@PEAUtagPOPUPMENU@@@Z @ 0x1C0042658 (--4-$SmartObjStackRef@UtagPOPUPMENU@@@@QEAAAEAV0@PEAUtagPOPUPMENU@@@Z.c)
 *     MNFlushDestroyedPopups @ 0x1C01EAD30 (MNFlushDestroyedPopups.c)
 *     MNFreePopup @ 0x1C01EAF7C (MNFreePopup.c)
 *     MNUnlinkDelayedFreePopups @ 0x1C01EB090 (MNUnlinkDelayedFreePopups.c)
 *     xxxMNEndMenuStateInternal @ 0x1C01EB320 (xxxMNEndMenuStateInternal.c)
 */

// write access to const memory has been detected, the output may be wrong!
_QWORD *__fastcall xxxMNEndMenuState(__int64 a1)
{
  __int64 v2; // rax
  _QWORD *v3; // rcx
  _QWORD *v4; // rdx
  _QWORD *v5; // r8
  _QWORD v7[4]; // [rsp+20h] [rbp-48h] BYREF
  __int64 v8[5]; // [rsp+40h] [rbp-28h] BYREF

  SmartObjStackRef<tagPOPUPMENU>::Init(v7, 0LL);
  *(_DWORD *)(a1 + 8) |= 0x1000000u;
  if ( !*(_DWORD *)(a1 + 40) )
  {
    if ( *(_QWORD *)a1 )
    {
      MNFlushDestroyedPopups(*(_QWORD *)a1);
      MNUnlinkDelayedFreePopups(*(_QWORD *)a1);
      SmartObjStackRef<tagPOPUPMENU>::operator=(v7, *(_QWORD *)a1);
      *(_DWORD *)v7[0] |= 0x20000000u;
      SmartObjStackRef<tagPOPUPMENU>::Init(v8, *(_QWORD *)a1);
      MNFreePopup(v8);
    }
    xxxMNEndMenuStateInternal(gptiCurrent, a1);
    v2 = v7[0];
    if ( v7[0] )
    {
      if ( (*(_DWORD *)v7[0] & 0x40000000) != 0 )
      {
        *(_DWORD *)v7[0] &= ~0x20000000u;
      }
      else if ( (void *const)v7[0] == gpopupMenu )
      {
        gdwPUDFlags &= ~0x800000u;
      }
      else
      {
        v3 = (_QWORD *)(v7[0] + 88LL);
        while ( (_QWORD *)*v3 != v3 )
        {
          v4 = *(_QWORD **)(v2 + 96);
          v5 = (_QWORD *)v4[1];
          if ( (_QWORD *)*v4 != v3 || (_QWORD *)*v5 != v4 )
            __fastfail(3u);
          *(_QWORD *)(v2 + 96) = v5;
          *v5 = v3;
          *(v4 - 1) = 0LL;
        }
        Win32FreePool(v2);
      }
    }
  }
  return SmartObjStackRef<tagPOPUPMENU>::~SmartObjStackRef<tagPOPUPMENU>(v7);
}
