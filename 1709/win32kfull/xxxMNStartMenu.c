/*
 * XREFs of xxxMNStartMenu @ 0x1C01F72BC
 * Callers:
 *     xxxMNLoop @ 0x1C0203CEC (xxxMNLoop.c)
 *     xxxTrackPopupMenuEx @ 0x1C0214E34 (xxxTrackPopupMenuEx.c)
 *     xxxMNKeyFilter @ 0x1C021A71C (xxxMNKeyFilter.c)
 * Callees:
 *     xxxGetSysMenu @ 0x1C0046740 (xxxGetSysMenu.c)
 *     xxxWindowEvent @ 0x1C006D410 (xxxWindowEvent.c)
 *     ThreadLockMenuNoModify @ 0x1C007CAD4 (ThreadLockMenuNoModify.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C0097514 (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C00975A4 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     xxxSendMessage @ 0x1C00A6110 (xxxSendMessage.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     _GetKeyState @ 0x1C00FC8DC (_GetKeyState.c)
 *     MNPositionSysMenu @ 0x1C0138480 (MNPositionSysMenu.c)
 *     ?xxxGetInitMenuParam@@YAPEAUtagMENU@@PEAUtagWND@@PEAH@Z @ 0x1C01F6A24 (-xxxGetInitMenuParam@@YAPEAUtagMENU@@PEAUtagWND@@PEAH@Z.c)
 *     xxxUserModeCallback @ 0x1C0202EA4 (xxxUserModeCallback.c)
 *     LockPopupMenu @ 0x1C020580C (LockPopupMenu.c)
 *     xxxMNReleaseCapture @ 0x1C0209100 (xxxMNReleaseCapture.c)
 *     xxxMNSetCapture @ 0x1C0209840 (xxxMNSetCapture.c)
 *     xxxMNRecomputeBarIfNeeded @ 0x1C0218C14 (xxxMNRecomputeBarIfNeeded.c)
 */

_BOOL8 __fastcall xxxMNStartMenu(__int64 **a1, __int64 a2, __int64 a3)
{
  int v3; // ebx
  __int64 **v5; // rsi
  __int64 v6; // r9
  ULONG_PTR v7; // r15
  __int64 ThreadWin32Thread; // rax
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  unsigned int v12; // ecx
  __int64 v13; // r8
  __int64 v14; // r9
  struct tagMENU *InitMenuParam; // rdi
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v21; // rbx
  bool v22; // zf
  __int64 SysMenu; // rdi
  __int64 v24; // rbx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 *v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // rcx
  __int64 CurrentProcessWin32Process; // rbx
  int v33; // r9d
  unsigned int v34; // ebx
  __int64 v35; // rax
  __int64 v36; // r9
  __int64 v37; // r10
  __int64 v38; // r8
  ULONG_PTR v39; // rdx
  int v40; // eax
  __int64 v41; // rdx
  __int64 v42; // rcx
  BOOL v43; // ebx
  __int64 v44; // rdx
  __int64 v45; // r8
  __int64 v46; // r9
  _QWORD v47[2]; // [rsp+38h] [rbp-19h] BYREF
  _QWORD v48[2]; // [rsp+48h] [rbp-9h] BYREF
  _QWORD v49[2]; // [rsp+58h] [rbp+7h] BYREF
  _QWORD v50[3]; // [rsp+68h] [rbp+17h] BYREF
  __int64 v51; // [rsp+80h] [rbp+2Fh] BYREF
  __int64 v52; // [rsp+88h] [rbp+37h]
  int v53; // [rsp+B8h] [rbp+67h] BYREF

  v3 = a3;
  v5 = a1;
  v6 = **a1;
  if ( (*(_DWORD *)v6 & 0x8000) != 0 )
    goto LABEL_8;
  v6 = **a1;
  if ( !*(_QWORD *)(v6 + 8) )
    goto LABEL_8;
  v7 = *(_QWORD *)(**a1 + 8);
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, a3, v6);
  v50[0] = *(_QWORD *)(ThreadWin32Thread + 392);
  *(_QWORD *)(ThreadWin32Thread + 392) = v50;
  v50[1] = v7;
  if ( v7 )
    _InterlockedIncrement((volatile signed __int32 *)(v7 + 8));
  *(_DWORD *)(a2 + 8) |= 1u;
  *(_DWORD *)(a2 + 20) = v3;
  v12 = *(_DWORD *)(a2 + 8) & 0xFFFFFFBF | ((GetKeyState(1u, v9, v10, v11) & 0x8000u) != 0LL ? 0x40 : 0);
  *(_DWORD *)(a2 + 8) = v12 ^ ((unsigned __int8)v12 ^ (unsigned __int8)(v12 >> 3)) & 8;
  SmartObjStackRefBase<tagPOPUPMENU>::Init(v47, **v5, v13, v14);
  xxxMNSetCapture(v47, a2);
  xxxSendMessage(v7);
  if ( (*(_DWORD *)**v5 & 1) != 0 )
  {
    InitMenuParam = xxxGetInitMenuParam((struct tagWND *)v7, &v53);
    if ( !InitMenuParam )
    {
      *(_DWORD *)(a2 + 8) &= ~1u;
      xxxMNReleaseCapture(a2);
      ThreadUnlock1(v19, v18);
      a1 = v5;
LABEL_8:
      SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(a1, a2, a3, v6);
      return 0LL;
    }
    v21 = **v5;
    SmartObjStackRefBase<tagPOPUPMENU>::Init(v48, v21, v16, v17);
    LockPopupMenu(v48, v21 + 40, InitMenuParam);
    v22 = v53 == 0;
    *(_DWORD *)**v5 = (v53 != 0 ? 4 : 0) | *(_DWORD *)**v5 & 0xFFFFFFFB;
    if ( v22 )
    {
      SysMenu = xxxGetSysMenu((struct tagWND *)v7, 0);
      v24 = **v5;
      SmartObjStackRefBase<tagPOPUPMENU>::Init(v49, v24, v25, v26);
      LockPopupMenu(v49, v24 + 48, SysMenu);
    }
  }
  *(_DWORD *)(a2 + 8) ^= (*(_DWORD *)(a2 + 8) ^ (*(_DWORD *)**v5 >> 1)) & 2;
  if ( (*(_DWORD *)**v5 & 0x800) == 0 )
  {
    if ( (*(_DWORD *)**v5 & 8) != 0 && (*(_DWORD *)**v5 & 4) != 0 )
      xxxGetInitMenuParam((struct tagWND *)v7, 0LL);
    xxxSendMessage(v7);
  }
  if ( (*(_DWORD *)**v5 & 8) == 0 )
  {
    v27 = *v5;
    if ( (*(_DWORD *)**v5 & 4) != 0 )
    {
      v28 = *(_QWORD *)(*v27 + 40);
LABEL_22:
      MNPositionSysMenu(v7, v28);
      goto LABEL_23;
    }
    if ( (*(_DWORD *)*v27 & 1) != 0 && *(_QWORD *)(**v5 + 40) )
    {
      ThreadLockMenuNoModify(*(_QWORD *)(**v5 + 40), &v51);
      xxxMNRecomputeBarIfNeeded(v7, *(_QWORD *)(**v5 + 40));
      *(_DWORD *)(v52 + 56) &= ~0x200u;
      ThreadUnlock1(v30, v29);
      v28 = *(_QWORD *)(**v5 + 48);
      goto LABEL_22;
    }
  }
LABEL_23:
  if ( (*(_DWORD *)**v5 & 0x8000) == 0 )
  {
    if ( (*(_DWORD *)(*(_QWORD *)(**v5 + 40) + 56LL) & 0x40000000) != 0 )
      *(_DWORD *)(a2 + 8) |= 0x100u;
    v31 = **v5;
    if ( (*(_DWORD *)(*(_QWORD *)(v31 + 40) + 56LL) & 0x20000000) == 0 )
      goto LABEL_31;
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v31);
    if ( (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x100000) == 0 )
    {
      if ( (int)xxxUserModeCallback(99, 0, 0, v33) < 0 )
      {
LABEL_31:
        if ( (*(_DWORD *)(*(_QWORD *)(**v5 + 40) + 56LL) & 0x10000000) != 0 )
          *(_DWORD *)(a2 + 8) |= 0x800u;
        if ( (*(_DWORD *)(*(_QWORD *)(**v5 + 40) + 56LL) & 0x8000000) != 0 )
          *(_DWORD *)(a2 + 8) |= 0x20000u;
        goto LABEL_35;
      }
      *(_DWORD *)(CurrentProcessWin32Process + 12) |= 0x100000u;
    }
    *(_DWORD *)(a2 + 8) |= 0x400u;
    goto LABEL_31;
  }
LABEL_35:
  v34 = -1;
  if ( (*(_DWORD *)(a2 + 8) & 0x100) == 0 )
  {
    if ( gpqForeground )
    {
      v35 = *(_QWORD *)(gpqForeground + 112LL);
      if ( v35 )
      {
        v36 = *(_QWORD *)(v7 + 16);
        if ( gpqForeground == *(_QWORD *)(v36 + 408) )
        {
          v37 = *(_QWORD *)(v35 + 16);
          if ( (*(_DWORD *)**v5 & 4) != 0 )
            v38 = 0xFFFFFFFFLL;
          else
            v38 = (*(_DWORD *)**v5 & 1) != 0 ? 0xFFFFFFFD : 0;
          v39 = *(_QWORD *)(gpqForeground + 112LL);
          v40 = 33;
          if ( *(_QWORD *)(v7 + 16) == *(_QWORD *)(v39 + 16) )
            v39 = v7;
          if ( v36 != v37 )
            v40 = 49;
          xxxWindowEvent(0x80000004, (volatile signed __int32 *)v39, v38, 1LL, v40);
        }
      }
    }
  }
  if ( (*(_DWORD *)**v5 & 4) == 0 )
    v34 = (*(_DWORD *)**v5 & 1) != 0 ? 0xFFFFFFFD : 0;
  xxxWindowEvent(4u, (volatile signed __int32 *)v7, v34, 0LL, 0);
  ThreadUnlock1(v42, v41);
  v43 = (*(_DWORD *)**v5 & 0x8000) == 0;
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v5, v44, v45, v46);
  return v43;
}
