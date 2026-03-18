/*
 * XREFs of xxxMNCloseHierarchy @ 0x1C0204D10
 * Callers:
 *     xxxMNCancel @ 0x1C0204628 (xxxMNCancel.c)
 *     xxxMNKeyDown @ 0x1C020589C (xxxMNKeyDown.c)
 *     xxxMNOpenHierarchy @ 0x1C0206528 (xxxMNOpenHierarchy.c)
 *     xxxMNSelectItem @ 0x1C02071C0 (xxxMNSelectItem.c)
 *     xxxMenuWindowProc @ 0x1C0207D70 (xxxMenuWindowProc.c)
 *     xxxEndMenu @ 0x1C02132D4 (xxxEndMenu.c)
 *     xxxMNKeyFilter @ 0x1C0219524 (xxxMNKeyFilter.c)
 * Callees:
 *     xxxActivateThisWindow @ 0x1C001930C (xxxActivateThisWindow.c)
 *     ??1?$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@XZ @ 0x1C004258C (--1-$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@XZ.c)
 *     ?Init@?$SmartObjStackRef@UtagPOPUPMENU@@@@QEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C00425E4 (-Init@-$SmartObjStackRef@UtagPOPUPMENU@@@@QEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     xxxSendMessage @ 0x1C00509B0 (xxxSendMessage.c)
 *     xxxWindowEvent @ 0x1C005A820 (xxxWindowEvent.c)
 *     xxxDestroyWindow @ 0x1C005C5A0 (xxxDestroyWindow.c)
 *     safe_cast_fnid_to_PMENUWND @ 0x1C005D060 (safe_cast_fnid_to_PMENUWND.c)
 *     FindTimer @ 0x1C00B1F50 (FindTimer.c)
 *     ?xxxMNDestroyHandler@@YAXPEAUtagMENUWND@@@Z @ 0x1C0203244 (-xxxMNDestroyHandler@@YAXPEAUtagMENUWND@@@Z.c)
 *     MNAnimate @ 0x1C0215560 (MNAnimate.c)
 *     xxxSendMenuSelect @ 0x1C0219F28 (xxxSendMenuSelect.c)
 */

_QWORD *__fastcall xxxMNCloseHierarchy(__int64 a1, __int64 a2)
{
  __int64 v3; // rcx
  __int64 v4; // rbx
  int v5; // eax
  __int64 v6; // rdx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 *v9; // rdx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // r8
  struct tagMENUWND *v14; // rax
  __int64 v15; // r10
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rcx
  _QWORD v25[4]; // [rsp+38h] [rbp-29h] BYREF
  _QWORD v26[2]; // [rsp+58h] [rbp-9h] BYREF
  __int64 v27; // [rsp+68h] [rbp+7h] BYREF
  __int64 v28; // [rsp+70h] [rbp+Fh]
  __int64 v29; // [rsp+80h] [rbp+1Fh] BYREF
  __int64 v30; // [rsp+88h] [rbp+27h]
  _QWORD v31[4]; // [rsp+98h] [rbp+37h] BYREF

  SmartObjStackRef<tagPOPUPMENU>::Init(v25, a1);
  MNAnimate(a2, 0LL);
  v3 = v25[0];
  if ( (*(_DWORD *)v25[0] & 0x20) != 0 )
  {
    if ( (*(_DWORD *)v25[0] & 0x4000) != 0 )
    {
      FindTimer(*(_QWORD *)(v25[0] + 16LL), 0xFFFFLL, 0, 1, 0LL);
      *(_DWORD *)v25[0] &= ~0x4000u;
      v3 = v25[0];
    }
    v4 = *(_QWORD *)(v3 + 24);
    if ( v4 )
    {
      v29 = *(_QWORD *)(gptiCurrent + 368LL);
      *(_QWORD *)(gptiCurrent + 368LL) = &v29;
      v30 = v4;
      ++*(_DWORD *)(v4 + 8);
      xxxSendMessage(v4, 484, 0, 0);
      v5 = *(_DWORD *)(a2 + 8);
      if ( (v5 & 0x100) != 0 && (v5 & 4) != 0 && (*(_DWORD *)v25[0] & 1) == 0 )
      {
        v6 = *(_QWORD *)(v25[0] + 16LL);
        v27 = *(_QWORD *)(gptiCurrent + 368LL);
        *(_QWORD *)(gptiCurrent + 368LL) = &v27;
        v28 = v6;
        ++*(_DWORD *)(v6 + 8);
        xxxActivateThisWindow(*(struct tagWND **)(v25[0] + 16LL), 0LL, 0, 0);
        ThreadUnlock1(v8, v7);
      }
      if ( (*(_DWORD *)(a2 + 8) & 0x100) == 0 )
      {
        if ( gpqForeground )
        {
          v9 = *(__int64 **)(gpqForeground + 80LL);
          if ( v9 )
          {
            if ( gpqForeground == *(_QWORD *)(gptiCurrent + 384LL) )
              xxxWindowEvent(0x80000005, v9, 0, 1, 33);
          }
        }
      }
      xxxWindowEvent(7u, (__int64 *)v4, -4, 0, 0);
      if ( ThreadUnlock1(v11, v10) )
      {
        if ( !(unsigned int)xxxDestroyWindow(v4, v12, v13) )
        {
          v14 = (struct tagMENUWND *)safe_cast_fnid_to_PMENUWND(v4);
          if ( v14 )
            xxxMNDestroyHandler(v14);
        }
      }
      HMAssignmentUnlock(v25[0] + 24LL);
      *(_DWORD *)v25[0] &= ~0x20u;
      v3 = v25[0];
    }
    if ( (*(_DWORD *)v3 & 1) != 0 )
    {
      HMAssignmentUnlock(v3 + 56);
    }
    else
    {
      v26[0] = *(_QWORD *)(v3 + 64) + 56LL;
      v26[1] = *(_QWORD *)(v3 + 16);
      HMAssignmentLock(v26);
    }
    if ( (*(_DWORD *)(a2 + 8) & 4) != 0 && *(_DWORD *)(v25[0] + 80LL) != -1 )
    {
      v15 = *(_QWORD *)(*(_QWORD *)(v25[0] + 64LL) + 8LL);
      if ( v15 )
      {
        v27 = *(_QWORD *)(gptiCurrent + 368LL);
        *(_QWORD *)(gptiCurrent + 368LL) = &v27;
        v28 = v15;
        ++*(_DWORD *)(v15 + 8);
        v16 = *(_QWORD *)(v25[0] + 16LL);
        v29 = *(_QWORD *)(gptiCurrent + 368LL);
        *(_QWORD *)(gptiCurrent + 368LL) = &v29;
        v30 = v16;
        ++*(_DWORD *)(v16 + 8);
        v17 = *(_QWORD *)(v25[0] + 40LL);
        v31[0] = *(_QWORD *)(gptiCurrent + 368LL);
        *(_QWORD *)(gptiCurrent + 368LL) = v31;
        v31[1] = v17;
        if ( v17 )
          ++*(_DWORD *)(v17 + 8);
        xxxSendMenuSelect(v15, *(_QWORD *)(v25[0] + 16LL), *(_QWORD *)(v25[0] + 40LL), *(_DWORD *)(v25[0] + 80LL), a2);
        ThreadUnlock1(v19, v18);
        ThreadUnlock1(v21, v20);
        ThreadUnlock1(v23, v22);
      }
    }
  }
  return SmartObjStackRef<tagPOPUPMENU>::~SmartObjStackRef<tagPOPUPMENU>(v25);
}
