/*
 * XREFs of xxxMNMouseMove @ 0x1C020621C
 * Callers:
 *     xxxHandleMenuMessages @ 0x1C02018C8 (xxxHandleMenuMessages.c)
 *     xxxMenuWindowProc @ 0x1C0207D70 (xxxMenuWindowProc.c)
 * Callees:
 *     IsWindowBeingDestroyed @ 0x1C001DCFC (IsWindowBeingDestroyed.c)
 *     ??1?$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@XZ @ 0x1C004258C (--1-$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@XZ.c)
 *     ?Init@?$SmartObjStackRef@UtagPOPUPMENU@@@@QEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C00425E4 (-Init@-$SmartObjStackRef@UtagPOPUPMENU@@@@QEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     xxxSendMessage @ 0x1C00509B0 (xxxSendMessage.c)
 *     safe_cast_fnid_to_PMENUWND @ 0x1C005D060 (safe_cast_fnid_to_PMENUWND.c)
 *     TrackMouseEvent @ 0x1C00B1DC4 (TrackMouseEvent.c)
 *     ?MNSetTimerToAutoDismiss@@YAXPEAUtagMENUSTATE@@PEAUtagWND@@@Z @ 0x1C0203034 (-MNSetTimerToAutoDismiss@@YAXPEAUtagMENUSTATE@@PEAUtagWND@@@Z.c)
 *     ?xxxMNHideNextHierarchy@@YAHV?$SmartObjStackRef@UtagPOPUPMENU@@@@@Z @ 0x1C0203660 (-xxxMNHideNextHierarchy@@YAHV-$SmartObjStackRef@UtagPOPUPMENU@@@@@Z.c)
 *     IsMFMWFPWindow @ 0x1C0203CDC (IsMFMWFPWindow.c)
 *     xxxMNButtonDown @ 0x1C02043DC (xxxMNButtonDown.c)
 *     xxxMNFindWindowFromPoint @ 0x1C0205474 (xxxMNFindWindowFromPoint.c)
 *     xxxMNSelectItem @ 0x1C02071C0 (xxxMNSelectItem.c)
 *     xxxMNSwitchToAlternateMenu @ 0x1C0207B78 (xxxMNSwitchToAlternateMenu.c)
 *     xxxMNUpdateDraggingInfo @ 0x1C0213060 (xxxMNUpdateDraggingInfo.c)
 */

_QWORD *__fastcall xxxMNMouseMove(__int64 *a1, __int64 a2, int a3)
{
  __int64 *v5; // rdi
  int v6; // eax
  __int64 v7; // rbx
  BOOL v8; // eax
  __int64 *v9; // r8
  __int64 v10; // rcx
  __int64 v11; // r14
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 **v17; // rdx
  __int64 v18; // rcx
  _QWORD *v19; // rax
  __int64 v20; // rdx
  char v21; // al
  __int64 v22; // rbx
  __int64 v23; // rcx
  __int64 v25; // [rsp+20h] [rbp-50h] BYREF
  __int64 v26; // [rsp+28h] [rbp-48h]
  char v27[4]; // [rsp+38h] [rbp-38h] BYREF
  int v28; // [rsp+3Ch] [rbp-34h]
  __int64 v29; // [rsp+40h] [rbp-30h]
  int *v30[4]; // [rsp+50h] [rbp-20h] BYREF
  unsigned int v31; // [rsp+90h] [rbp+20h] BYREF
  int v32; // [rsp+A0h] [rbp+30h]

  v32 = a3;
  v5 = a1;
  if ( *a1 == *(_QWORD *)(*a1 + 64) )
  {
    if ( __PAIR64__(SHIWORD(v32), (__int16)a3) == *(_QWORD *)(a2 + 12) )
    {
LABEL_44:
      a1 = v5;
      return SmartObjStackRef<tagPOPUPMENU>::~SmartObjStackRef<tagPOPUPMENU>(a1);
    }
    v6 = SHIWORD(v32);
    *(_DWORD *)(a2 + 12) = (__int16)a3;
    *(_DWORD *)(a2 + 16) = v6;
    SmartObjStackRef<tagPOPUPMENU>::Init(v30, *a1);
    v7 = xxxMNFindWindowFromPoint(v30, &v31, a3);
    v8 = IsMFMWFPWindow(v7);
    v9 = (__int64 *)gptiCurrent;
    if ( v8 )
    {
      v25 = *(_QWORD *)(gptiCurrent + 368LL);
      *(_QWORD *)(gptiCurrent + 368LL) = &v25;
      v26 = v7;
      if ( v7 )
        ++*(_DWORD *)(v7 + 8);
    }
    if ( (*(_DWORD *)(a2 + 8) & 0x8000) != 0 )
    {
      xxxMNUpdateDraggingInfo(a2, v7, v31);
      v9 = (__int64 *)gptiCurrent;
    }
    if ( *(_DWORD *)(a2 + 20) == 1 )
    {
      if ( !v7 )
        goto LABEL_44;
      if ( v7 == 0xFFFFFFFFLL )
      {
        v10 = *(_QWORD *)(*v5 + 8);
        if ( v10 )
        {
          if ( (*(_BYTE *)(v10 + 71) & 0x20) != 0 )
            goto LABEL_44;
        }
      }
      *(_DWORD *)(a2 + 20) = -1;
    }
    if ( v7 == 4294967291LL )
    {
      if ( (*(_DWORD *)(a2 + 8) & 8) != 0 )
      {
        SmartObjStackRef<tagPOPUPMENU>::Init(v30, *v5);
        xxxMNSwitchToAlternateMenu(v30, a2);
LABEL_18:
        SmartObjStackRef<tagPOPUPMENU>::Init(v30, *v5);
        xxxMNButtonDown((__int64 *)v30, a2, v31, 0);
        goto LABEL_44;
      }
    }
    else
    {
      if ( v7 == 0xFFFFFFFFLL )
        goto LABEL_18;
      if ( v7 )
      {
        v11 = safe_cast_fnid_to_PMENUWND(v7);
        if ( !(unsigned int)IsWindowBeingDestroyed(v12) && v11 )
        {
          v15 = *(_QWORD *)(v11 + 8);
          if ( *v5 != v15 )
          {
            if ( *v5 )
            {
              v16 = v5[1];
              v17 = (__int64 **)v5[2];
              if ( *(__int64 **)(v16 + 8) != v5 + 1 || *v17 != v5 + 1 )
                __fastfail(3u);
              *v17 = (__int64 *)v16;
              *(_QWORD *)(v16 + 8) = v17;
            }
            *v5 = v15;
            if ( v15 )
            {
              v18 = v15 + 88;
              v19 = v5 + 1;
              v20 = *(_QWORD *)v18;
              if ( *(_QWORD *)(*(_QWORD *)v18 + 8LL) != v18 )
                __fastfail(3u);
              *v19 = v20;
              v5[2] = v18;
              *(_QWORD *)(v20 + 8) = v19;
              *(_QWORD *)v18 = v19;
            }
          }
          if ( (*(_DWORD *)(a2 + 8) & 0x8100) == 0x100 && (*(_DWORD *)*v5 & 0x100000) == 0 )
          {
            v29 = *(_QWORD *)v7;
            v28 = 2;
            TrackMouseEvent((__int64)v27);
            *(_DWORD *)*v5 |= 0x100000u;
            xxxSendMessage(v7, 32, *(_QWORD *)v7, 2);
          }
          v21 = xxxSendMessage(v7, 485, v31, 0);
          if ( (v21 & 0x10) != 0 && (v21 & 3) == 0 && !xxxSendMessage(v7, 496, 0, 0) )
          {
            v13 = *v5;
            if ( *(_QWORD *)(v11 + 8) == *v5 )
            {
              SmartObjStackRef<tagPOPUPMENU>::Init(v30, v13);
              xxxMNHideNextHierarchy(v30);
            }
          }
        }
LABEL_42:
        ThreadUnlock1(v14, v13);
        goto LABEL_44;
      }
    }
    v22 = *(_QWORD *)(*v5 + 56);
    if ( !v22 )
    {
      SmartObjStackRef<tagPOPUPMENU>::Init(v30, *v5);
      xxxMNSelectItem(v30, a2, 0xFFFFFFFFLL);
      goto LABEL_44;
    }
    v23 = *v9;
    v25 = *(_QWORD *)(*v9 + 368);
    *(_QWORD *)(v23 + 368) = &v25;
    v26 = v22;
    ++*(_DWORD *)(v22 + 8);
    xxxSendMessage(v22, 485, -1, 0);
    MNSetTimerToAutoDismiss((struct tagMENUSTATE *)a2, (struct tagWND *)v22);
    goto LABEL_42;
  }
  return SmartObjStackRef<tagPOPUPMENU>::~SmartObjStackRef<tagPOPUPMENU>(a1);
}
