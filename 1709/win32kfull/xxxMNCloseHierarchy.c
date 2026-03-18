/*
 * XREFs of xxxMNCloseHierarchy @ 0x1C0206910
 * Callers:
 *     xxxMNCancel @ 0x1C0206110 (xxxMNCancel.c)
 *     xxxMNKeyDown @ 0x1C0207450 (xxxMNKeyDown.c)
 *     xxxMNOpenHierarchy @ 0x1C02082B0 (xxxMNOpenHierarchy.c)
 *     xxxMNSelectItem @ 0x1C0209144 (xxxMNSelectItem.c)
 *     xxxMenuWindowProc @ 0x1C0209E90 (xxxMenuWindowProc.c)
 *     xxxEndMenu @ 0x1C0214754 (xxxEndMenu.c)
 *     xxxMNKeyFilter @ 0x1C021A71C (xxxMNKeyFilter.c)
 * Callees:
 *     xxxActivateThisWindow @ 0x1C0054748 (xxxActivateThisWindow.c)
 *     xxxDestroyWindow @ 0x1C005F7A0 (xxxDestroyWindow.c)
 *     safe_cast_fnid_to_PMENUWND @ 0x1C00601F8 (safe_cast_fnid_to_PMENUWND.c)
 *     xxxWindowEvent @ 0x1C006D410 (xxxWindowEvent.c)
 *     ??1?$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@XZ @ 0x1C0097364 (--1-$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@XZ.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C0097514 (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     xxxSendMessage @ 0x1C00A6110 (xxxSendMessage.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     FindTimer @ 0x1C00D7980 (FindTimer.c)
 *     ?xxxMNDestroyHandler@@YAXPEAUtagMENUWND@@@Z @ 0x1C0204C3C (-xxxMNDestroyHandler@@YAXPEAUtagMENUWND@@@Z.c)
 *     MNAnimate @ 0x1C0216480 (MNAnimate.c)
 *     xxxSendMenuSelect @ 0x1C021B16C (xxxSendMenuSelect.c)
 */

__int64 __fastcall xxxMNCloseHierarchy(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  volatile signed __int32 *v8; // rdi
  __int64 ThreadWin32Thread; // rax
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  int v13; // eax
  __int64 v14; // rbx
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  volatile signed __int32 *v18; // rdx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // r8
  struct tagMENUWND *v23; // rax
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rdx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rdx
  __int64 v31; // rdi
  __int64 v32; // rax
  volatile signed __int32 *v33; // rbx
  __int64 v34; // rdx
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // rax
  __int64 v38; // rbx
  __int64 v39; // rdx
  __int64 v40; // r8
  __int64 v41; // r9
  __int64 v42; // rax
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // rdx
  __int64 v48; // rcx
  _QWORD v50[2]; // [rsp+38h] [rbp-29h] BYREF
  __int64 v51; // [rsp+48h] [rbp-19h] BYREF
  __int64 v52; // [rsp+50h] [rbp-11h]
  __int64 v53; // [rsp+60h] [rbp-1h] BYREF
  volatile signed __int32 *v54; // [rsp+68h] [rbp+7h]
  __int128 v55; // [rsp+78h] [rbp+17h]
  __int128 v56; // [rsp+88h] [rbp+27h] BYREF
  _QWORD v57[4]; // [rsp+98h] [rbp+37h] BYREF

  SmartObjStackRefBase<tagPOPUPMENU>::Init(v50, a1, a3, a4);
  MNAnimate(a2, 0LL);
  if ( (**(_DWORD **)v50[0] & 0x20) != 0 )
  {
    if ( (**(_DWORD **)v50[0] & 0x4000) != 0 )
    {
      FindTimer(*(_QWORD *)(*(_QWORD *)v50[0] + 16LL), 0xFFFFLL, 0, 1, 0LL);
      **(_DWORD **)v50[0] &= ~0x4000u;
    }
    v8 = *(volatile signed __int32 **)(*(_QWORD *)v50[0] + 24LL);
    if ( v8 )
    {
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v5, v6, v7);
      v53 = *(_QWORD *)(ThreadWin32Thread + 392);
      *(_QWORD *)(ThreadWin32Thread + 392) = &v53;
      v54 = v8;
      _InterlockedIncrement(v8 + 2);
      xxxSendMessage((ULONG_PTR)v8);
      v13 = *(_DWORD *)(a2 + 8);
      if ( (v13 & 0x100) != 0 && (v13 & 4) != 0 && (**(_DWORD **)v50[0] & 1) == 0 )
      {
        v14 = *(_QWORD *)(*(_QWORD *)v50[0] + 16LL);
        v15 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v10, v11, v12);
        v51 = *(_QWORD *)(v15 + 392);
        *(_QWORD *)(v15 + 392) = &v51;
        v52 = v14;
        _InterlockedIncrement((volatile signed __int32 *)(v14 + 8));
        xxxActivateThisWindow(*(struct tagWND **)(*(_QWORD *)v50[0] + 16LL), 0, 0, 0);
        ThreadUnlock1(v17, v16);
      }
      if ( (*(_DWORD *)(a2 + 8) & 0x100) == 0 )
      {
        if ( gpqForeground )
        {
          v18 = *(volatile signed __int32 **)(gpqForeground + 112LL);
          if ( v18 )
          {
            if ( gpqForeground == *(_QWORD *)(gptiCurrent + 408LL) )
              xxxWindowEvent(0x80000005, v18, 0LL, 1LL, 33);
          }
        }
      }
      xxxWindowEvent(7u, v8, 4294967292LL, 0LL, 0);
      if ( ThreadUnlock1(v20, v19) )
      {
        if ( !(unsigned int)xxxDestroyWindow(v8, v21, v22) )
        {
          v23 = (struct tagMENUWND *)safe_cast_fnid_to_PMENUWND((__int64)v8);
          if ( v23 )
            xxxMNDestroyHandler(v23, v24, v25, v26);
        }
      }
      HMAssignmentUnlock(*(_QWORD *)v50[0] + 24LL);
      **(_DWORD **)v50[0] &= ~0x20u;
    }
    if ( (**(_DWORD **)v50[0] & 1) != 0 )
    {
      HMAssignmentUnlock(*(_QWORD *)v50[0] + 56LL);
    }
    else
    {
      v30 = *(_QWORD *)v50[0];
      *(_QWORD *)&v55 = *(_QWORD *)(*(_QWORD *)v50[0] + 64LL) + 56LL;
      *((_QWORD *)&v55 + 1) = *(_QWORD *)(v30 + 16);
      v56 = v55;
      HMAssignmentLock(&v56);
    }
    if ( (*(_DWORD *)(a2 + 8) & 4) != 0 && *(_DWORD *)(*(_QWORD *)v50[0] + 80LL) != -1 )
    {
      v31 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v50[0] + 64LL) + 8LL);
      if ( v31 )
      {
        v32 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v27, v28, v29);
        v51 = *(_QWORD *)(v32 + 392);
        *(_QWORD *)(v32 + 392) = &v51;
        v52 = v31;
        _InterlockedIncrement((volatile signed __int32 *)(v31 + 8));
        v33 = *(volatile signed __int32 **)(*(_QWORD *)v50[0] + 16LL);
        v37 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v34, v35, v36);
        v53 = *(_QWORD *)(v37 + 392);
        *(_QWORD *)(v37 + 392) = &v53;
        v54 = v33;
        _InterlockedIncrement(v33 + 2);
        v38 = *(_QWORD *)(*(_QWORD *)v50[0] + 40LL);
        v42 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v39, v40, v41);
        v57[0] = *(_QWORD *)(v42 + 392);
        *(_QWORD *)(v42 + 392) = v57;
        v57[1] = v38;
        if ( v38 )
          _InterlockedIncrement((volatile signed __int32 *)(v38 + 8));
        xxxSendMenuSelect(
          v31,
          *(_QWORD *)(*(_QWORD *)v50[0] + 16LL),
          *(_QWORD *)(*(_QWORD *)v50[0] + 40LL),
          *(_DWORD *)(*(_QWORD *)v50[0] + 80LL),
          a2);
        ThreadUnlock1(v44, v43);
        ThreadUnlock1(v46, v45);
        ThreadUnlock1(v48, v47);
      }
    }
  }
  return SmartObjStackRef<tagPOPUPMENU>::~SmartObjStackRef<tagPOPUPMENU>((__int64)v50);
}
