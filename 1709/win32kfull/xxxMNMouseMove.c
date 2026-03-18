/*
 * XREFs of xxxMNMouseMove @ 0x1C0207FA4
 * Callers:
 *     xxxHandleMenuMessages @ 0x1C0203214 (xxxHandleMenuMessages.c)
 *     xxxMenuWindowProc @ 0x1C0209E90 (xxxMenuWindowProc.c)
 * Callees:
 *     safe_cast_fnid_to_PMENUWND @ 0x1C00601F8 (safe_cast_fnid_to_PMENUWND.c)
 *     TrackMouseEvent @ 0x1C0084C04 (TrackMouseEvent.c)
 *     IsWindowBeingDestroyed @ 0x1C008BBE4 (IsWindowBeingDestroyed.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C0097514 (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C00975A4 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     ??4?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z @ 0x1C0097640 (--4-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z.c)
 *     xxxSendMessage @ 0x1C00A6110 (xxxSendMessage.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     ?MNSetTimerToAutoDismiss@@YAXPEAUtagMENUSTATE@@PEAUtagWND@@@Z @ 0x1C02049D4 (-MNSetTimerToAutoDismiss@@YAXPEAUtagMENUSTATE@@PEAUtagWND@@@Z.c)
 *     ?xxxMNHideNextHierarchy@@YAHV?$SmartObjStackRef@UtagPOPUPMENU@@@@@Z @ 0x1C02050D0 (-xxxMNHideNextHierarchy@@YAHV-$SmartObjStackRef@UtagPOPUPMENU@@@@@Z.c)
 *     IsMFMWFPWindow @ 0x1C0205788 (IsMFMWFPWindow.c)
 *     xxxMNButtonDown @ 0x1C0205E2C (xxxMNButtonDown.c)
 *     xxxMNFindWindowFromPoint @ 0x1C02070B4 (xxxMNFindWindowFromPoint.c)
 *     xxxMNSelectItem @ 0x1C0209144 (xxxMNSelectItem.c)
 *     xxxMNSwitchToAlternateMenu @ 0x1C0209BF8 (xxxMNSwitchToAlternateMenu.c)
 *     xxxMNUpdateDraggingInfo @ 0x1C0214540 (xxxMNUpdateDraggingInfo.c)
 */

_QWORD *__fastcall xxxMNMouseMove(__int64 **a1, __int64 a2, int a3, __int64 a4)
{
  __int64 **v6; // rdi
  __int64 v7; // r8
  int v8; // eax
  __int64 v9; // r9
  __int64 v10; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 v12; // r14
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rcx
  int v16; // eax
  char v17; // al
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  ULONG_PTR v23; // rbx
  __int64 v24; // rax
  __int64 v26; // [rsp+28h] [rbp-39h] BYREF
  ULONG_PTR v27; // [rsp+30h] [rbp-31h]
  __int64 *v28[2]; // [rsp+40h] [rbp-21h] BYREF
  _QWORD v29[2]; // [rsp+50h] [rbp-11h] BYREF
  __int64 *v30[2]; // [rsp+60h] [rbp-1h] BYREF
  __int64 *v31[2]; // [rsp+70h] [rbp+Fh] BYREF
  _QWORD v32[2]; // [rsp+80h] [rbp+1Fh] BYREF
  _BYTE v33[4]; // [rsp+90h] [rbp+2Fh] BYREF
  int v34; // [rsp+94h] [rbp+33h]
  __int64 v35; // [rsp+98h] [rbp+37h]
  unsigned int v36; // [rsp+C8h] [rbp+67h] BYREF
  int v37; // [rsp+D8h] [rbp+77h]

  v37 = a3;
  v6 = a1;
  v7 = **a1;
  if ( v7 == *(_QWORD *)(v7 + 64) )
  {
    if ( (__int16)a3 == *(_DWORD *)(a2 + 12) && SHIWORD(v37) == *(_DWORD *)(a2 + 16) )
      goto LABEL_38;
    v8 = SHIWORD(v37);
    *(_DWORD *)(a2 + 12) = (__int16)a3;
    *(_DWORD *)(a2 + 16) = v8;
    SmartObjStackRefBase<tagPOPUPMENU>::Init(v28, **a1, v7, a4);
    v10 = xxxMNFindWindowFromPoint(v28, &v36, a3, v9);
    if ( IsMFMWFPWindow(v10) )
    {
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, v7, a4);
      v26 = *(_QWORD *)(ThreadWin32Thread + 392);
      *(_QWORD *)(ThreadWin32Thread + 392) = &v26;
      v27 = v10;
      if ( v10 )
        _InterlockedIncrement((volatile signed __int32 *)(v10 + 8));
    }
    if ( (*(_DWORD *)(a2 + 8) & 0x8000) != 0 )
      xxxMNUpdateDraggingInfo(a2, v10, v36);
    if ( *(_DWORD *)(a2 + 20) == 1 )
    {
      if ( !v10
        || v10 == 0xFFFFFFFFLL && *(_QWORD *)(**v6 + 8) && (*(_BYTE *)(*(_QWORD *)(**v6 + 8) + 71LL) & 0x20) != 0 )
      {
        goto LABEL_38;
      }
      *(_DWORD *)(a2 + 20) = -1;
    }
    if ( v10 == 4294967291LL )
    {
      if ( (*(_DWORD *)(a2 + 8) & 8) != 0 )
      {
        SmartObjStackRefBase<tagPOPUPMENU>::Init(v29, **v6, v7, a4);
        xxxMNSwitchToAlternateMenu(v29, a2);
LABEL_19:
        SmartObjStackRefBase<tagPOPUPMENU>::Init(v30, **v6, v7, a4);
        xxxMNButtonDown(v30, a2, v36, 0LL);
LABEL_38:
        a1 = v6;
        return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(a1, a2, v7, a4);
      }
    }
    else
    {
      if ( v10 == 0xFFFFFFFFLL )
        goto LABEL_19;
      if ( v10 )
      {
        v12 = safe_cast_fnid_to_PMENUWND(v10);
        if ( !(unsigned int)IsWindowBeingDestroyed(v13) && v12 )
        {
          SmartObjStackRefBase<tagPOPUPMENU>::operator=(v6, *(_QWORD *)(v12 + 8));
          v16 = *(_DWORD *)(a2 + 8);
          if ( (v16 & 0x100) != 0 && (v16 & 0x8000) == 0 && (*(_DWORD *)**v6 & 0x100000) == 0 )
          {
            v35 = *(_QWORD *)v10;
            v34 = 2;
            TrackMouseEvent((__int64)v33);
            *(_DWORD *)**v6 |= 0x100000u;
            xxxSendMessage(v10);
          }
          v17 = xxxSendMessage(v10);
          if ( (v17 & 0x10) != 0 && (v17 & 3) == 0 && !xxxSendMessage(v10) )
          {
            v15 = **v6;
            if ( *(_QWORD *)(v12 + 8) == v15 )
            {
              SmartObjStackRefBase<tagPOPUPMENU>::Init(v31, **v6, v18, v19);
              xxxMNHideNextHierarchy(v31, v20, v21, v22);
            }
          }
        }
LABEL_36:
        ThreadUnlock1(v15, v14);
        goto LABEL_38;
      }
    }
    if ( !*(_QWORD *)(**v6 + 56) )
    {
      SmartObjStackRefBase<tagPOPUPMENU>::Init(v32, **v6, v7, a4);
      xxxMNSelectItem(v32, a2, 0xFFFFFFFFLL);
      goto LABEL_38;
    }
    v23 = *(_QWORD *)(**v6 + 56);
    v24 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, v7, a4);
    v26 = *(_QWORD *)(v24 + 392);
    *(_QWORD *)(v24 + 392) = &v26;
    v27 = v23;
    if ( v23 )
      _InterlockedIncrement((volatile signed __int32 *)(v23 + 8));
    xxxSendMessage(v23);
    MNSetTimerToAutoDismiss((struct tagMENUSTATE *)a2, (struct tagWND *)v23);
    goto LABEL_36;
  }
  return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(a1, a2, v7, a4);
}
