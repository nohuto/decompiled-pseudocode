/*
 * XREFs of xxxMNStartMenu @ 0x1C01EB49C
 * Callers:
 *     xxxMNLoop @ 0x1C02022C0 (xxxMNLoop.c)
 *     xxxTrackPopupMenuEx @ 0x1C0213DB0 (xxxTrackPopupMenuEx.c)
 *     xxxMNKeyFilter @ 0x1C0219524 (xxxMNKeyFilter.c)
 * Callees:
 *     ??1?$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@XZ @ 0x1C004258C (--1-$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@XZ.c)
 *     ?Init@?$SmartObjStackRef@UtagPOPUPMENU@@@@QEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C00425E4 (-Init@-$SmartObjStackRef@UtagPOPUPMENU@@@@QEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     xxxSendMessage @ 0x1C00509B0 (xxxSendMessage.c)
 *     xxxWindowEvent @ 0x1C005A820 (xxxWindowEvent.c)
 *     _GetKeyState @ 0x1C00B89D4 (_GetKeyState.c)
 *     xxxGetSysMenu @ 0x1C00C1A64 (xxxGetSysMenu.c)
 *     MNPositionSysMenu @ 0x1C01336B0 (MNPositionSysMenu.c)
 *     ?xxxGetInitMenuParam@@YAPEAUtagMENU@@PEAUtagWND@@PEAH@Z @ 0x1C01EAA60 (-xxxGetInitMenuParam@@YAPEAUtagMENU@@PEAUtagWND@@PEAH@Z.c)
 *     xxxUserModeCallback @ 0x1C020158C (xxxUserModeCallback.c)
 *     LockPopupMenu @ 0x1C0203D60 (LockPopupMenu.c)
 *     xxxMNReleaseCapture @ 0x1C020717C (xxxMNReleaseCapture.c)
 *     xxxMNSetCapture @ 0x1C0207828 (xxxMNSetCapture.c)
 *     xxxMNRecomputeBarIfNeeded @ 0x1C0217A88 (xxxMNRecomputeBarIfNeeded.c)
 */

_BOOL8 __fastcall xxxMNStartMenu(__int64 *a1, __int64 a2, int a3)
{
  __int64 *v4; // r14
  __int64 v5; // r15
  unsigned int v6; // ecx
  __int64 v7; // r8
  __int64 v8; // r9
  struct tagMENU *InitMenuParam; // rdi
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v13; // rbx
  __int64 SysMenu; // rax
  __int64 v15; // rbx
  __int64 v16; // rdi
  int v17; // eax
  struct tagMENU *v18; // rax
  __int64 v19; // r8
  __int64 v20; // rdx
  int v21; // eax
  __int64 v22; // rdx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rcx
  __int64 CurrentProcessWin32Process; // rbx
  int v27; // r9d
  int v28; // ebx
  __int64 *v29; // rdx
  __int64 v30; // r9
  int v31; // ecx
  int v32; // r8d
  int v33; // eax
  int v34; // ecx
  __int64 v35; // rdx
  __int64 v36; // rcx
  BOOL v37; // ebx
  __int64 v38; // [rsp+38h] [rbp-29h] BYREF
  __int64 v39; // [rsp+40h] [rbp-21h]
  _QWORD v40[3]; // [rsp+50h] [rbp-11h] BYREF
  _QWORD v41[4]; // [rsp+68h] [rbp+7h] BYREF
  _QWORD v42[4]; // [rsp+88h] [rbp+27h] BYREF
  int v43; // [rsp+C8h] [rbp+67h] BYREF

  v4 = a1;
  if ( (*(_DWORD *)*a1 & 0x8000) != 0 )
    goto LABEL_6;
  v5 = *(_QWORD *)(*a1 + 8);
  if ( !v5 )
    goto LABEL_6;
  v40[0] = *(_QWORD *)(gptiCurrent + 368LL);
  *(_QWORD *)(gptiCurrent + 368LL) = v40;
  v40[1] = v5;
  ++*(_DWORD *)(v5 + 8);
  *(_DWORD *)(a2 + 8) |= 1u;
  *(_DWORD *)(a2 + 20) = a3;
  v6 = ((unsigned int)GetKeyState(1u) >> 9) & 0x40 | *(_DWORD *)(a2 + 8) & 0xFFFFFFBF;
  *(_DWORD *)(a2 + 8) = v6 ^ ((unsigned __int8)v6 ^ (unsigned __int8)(v6 >> 3)) & 8;
  SmartObjStackRef<tagPOPUPMENU>::Init(v41, *v4);
  xxxMNSetCapture(v41, a2);
  xxxSendMessage(v5, 32, *(_QWORD *)v5, 2);
  if ( (*(_DWORD *)*v4 & 1) != 0 )
  {
    InitMenuParam = xxxGetInitMenuParam((struct tagWND *)v5, &v43, v7, v8);
    if ( !InitMenuParam )
    {
      *(_DWORD *)(a2 + 8) &= ~1u;
      xxxMNReleaseCapture(a2);
      ThreadUnlock1(v11, v10);
      a1 = v4;
LABEL_6:
      SmartObjStackRef<tagPOPUPMENU>::~SmartObjStackRef<tagPOPUPMENU>(a1);
      return 0LL;
    }
    v13 = *v4;
    SmartObjStackRef<tagPOPUPMENU>::Init(v41, *v4);
    LockPopupMenu(v41, v13 + 40, InitMenuParam);
    v7 = (unsigned int)v43;
    *(_DWORD *)*v4 = (v43 != 0 ? 4 : 0) | *(_DWORD *)*v4 & 0xFFFFFFFB;
    if ( !(_DWORD)v7 )
    {
      SysMenu = xxxGetSysMenu(v5, 0LL, v7, v8);
      v15 = *v4;
      v16 = SysMenu;
      SmartObjStackRef<tagPOPUPMENU>::Init(v42, *v4);
      LockPopupMenu(v42, v15 + 48, v16);
    }
  }
  *(_DWORD *)(a2 + 8) ^= (*(_DWORD *)(a2 + 8) ^ (*(_DWORD *)*v4 >> 1)) & 2;
  v17 = *(_DWORD *)*v4;
  if ( (v17 & 0x800) == 0 )
  {
    if ( (v17 & 0xC) == 0xC )
      v18 = xxxGetInitMenuParam((struct tagWND *)v5, 0LL, v7, v8);
    else
      v18 = *(struct tagMENU **)(*v4 + 40);
    if ( v18 )
      v19 = *(_QWORD *)v18;
    else
      LODWORD(v19) = 0;
    xxxSendMessage(v5, 278, v19, 0);
  }
  v20 = *v4;
  v21 = *(_DWORD *)*v4;
  if ( (v21 & 8) == 0 )
  {
    if ( (v21 & 4) != 0 )
    {
      v22 = *(_QWORD *)(v20 + 40);
LABEL_23:
      MNPositionSysMenu(v5, v22, v7, v8);
      goto LABEL_24;
    }
    if ( (v21 & 1) != 0 )
    {
      v20 = *(_QWORD *)(v20 + 40);
      if ( v20 )
      {
        *(_DWORD *)(v20 + 56) |= 0x200u;
        v38 = *(_QWORD *)(gptiCurrent + 368LL);
        *(_QWORD *)(gptiCurrent + 368LL) = &v38;
        v39 = v20;
        ++*(_DWORD *)(v20 + 8);
        xxxMNRecomputeBarIfNeeded(v5, *(_QWORD *)(*v4 + 40));
        *(_DWORD *)(v39 + 56) &= ~0x200u;
        ThreadUnlock1(v24, v23);
        v22 = *(_QWORD *)(*v4 + 48);
        goto LABEL_23;
      }
    }
  }
LABEL_24:
  if ( (*(_DWORD *)*v4 & 0x8000) == 0 )
  {
    if ( (*(_DWORD *)(*(_QWORD *)(*v4 + 40) + 56LL) & 0x40000000) != 0 )
      *(_DWORD *)(a2 + 8) |= 0x100u;
    v25 = *(_QWORD *)(*v4 + 40);
    if ( (*(_DWORD *)(v25 + 56) & 0x20000000) == 0 )
      goto LABEL_32;
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v25, v20);
    if ( (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x100000) == 0 )
    {
      if ( (int)xxxUserModeCallback(99, 0, 0, v27) < 0 )
      {
LABEL_32:
        if ( (*(_DWORD *)(*(_QWORD *)(*v4 + 40) + 56LL) & 0x10000000) != 0 )
          *(_DWORD *)(a2 + 8) |= 0x800u;
        if ( (*(_DWORD *)(*(_QWORD *)(*v4 + 40) + 56LL) & 0x8000000) != 0 )
          *(_DWORD *)(a2 + 8) |= 0x20000u;
        goto LABEL_36;
      }
      *(_DWORD *)(CurrentProcessWin32Process + 12) |= 0x100000u;
    }
    *(_DWORD *)(a2 + 8) |= 0x400u;
    goto LABEL_32;
  }
LABEL_36:
  v28 = -1;
  if ( (*(_DWORD *)(a2 + 8) & 0x100) == 0 )
  {
    if ( gpqForeground )
    {
      v29 = *(__int64 **)(gpqForeground + 80LL);
      if ( v29 )
      {
        v30 = *(_QWORD *)(v5 + 16);
        if ( gpqForeground == *(_QWORD *)(v30 + 384) )
        {
          v31 = *(_DWORD *)*v4;
          if ( (v31 & 4) != 0 )
            v32 = -1;
          else
            v32 = (v31 & 1) != 0 ? 0xFFFFFFFD : 0;
          v33 = 33;
          if ( v30 == v29[2] )
            v29 = (__int64 *)v5;
          else
            v33 = 49;
          xxxWindowEvent(0x80000004, v29, v32, 1, v33);
        }
      }
    }
  }
  v34 = *(_DWORD *)*v4;
  if ( (v34 & 4) == 0 )
    v28 = (v34 & 1) != 0 ? 0xFFFFFFFD : 0;
  xxxWindowEvent(4u, (__int64 *)v5, v28, 0, 0);
  ThreadUnlock1(v36, v35);
  v37 = (*(_DWORD *)*v4 & 0x8000) == 0;
  SmartObjStackRef<tagPOPUPMENU>::~SmartObjStackRef<tagPOPUPMENU>(v4);
  return v37;
}
