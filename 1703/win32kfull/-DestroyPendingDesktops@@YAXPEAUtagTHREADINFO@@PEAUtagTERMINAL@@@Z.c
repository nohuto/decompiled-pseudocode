/*
 * XREFs of ?DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z @ 0x1C0111624
 * Callers:
 *     ?xxxHandleDesktopMessages@@YAHPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z @ 0x1C00C86F4 (-xxxHandleDesktopMessages@@YAHPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z.c)
 * Callees:
 *     DwmAsyncShellWindowChange @ 0x1C0016728 (DwmAsyncShellWindowChange.c)
 *     xxxSetThreadDesktop @ 0x1C001A398 (xxxSetThreadDesktop.c)
 *     PushW32ThreadLock @ 0x1C0037EB0 (PushW32ThreadLock.c)
 *     _DestroyMenu @ 0x1C0042DC0 (_DestroyMenu.c)
 *     xxxDestroyWindow @ 0x1C005C5A0 (xxxDestroyWindow.c)
 *     xxxSetWindowPos @ 0x1C0063478 (xxxSetWindowPos.c)
 *     xxxSwitchDesktop @ 0x1C00B8B10 (xxxSwitchDesktop.c)
 *     PopAndFreeW32ThreadLock @ 0x1C00CD890 (PopAndFreeW32ThreadLock.c)
 *     RemoteDisableScreen @ 0x1C00FE5BC (RemoteDisableScreen.c)
 *     xxxCleanupMotherDesktopWindow @ 0x1C0111B98 (xxxCleanupMotherDesktopWindow.c)
 *     UnlockDesktopMenu @ 0x1C011B8B4 (UnlockDesktopMenu.c)
 */

void __fastcall DestroyPendingDesktops(struct tagTHREADINFO *a1, struct tagTERMINAL *a2)
{
  __int64 *i; // rbx
  __int64 v5; // r14
  void *v6; // rcx
  PVOID v7; // rbx
  __int64 k; // rdx
  __int64 j; // rcx
  _QWORD *m; // rdx
  _DWORD *v11; // rsi
  __int64 v12; // r12
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // rbx
  __int64 v16; // rbx
  struct tagMENU *v17; // rbx
  struct tagMENU *v18; // rbx
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 **v24; // rax
  __int64 v25; // rbx
  void *v26; // rax
  __int64 v27; // rcx
  _QWORD *v28; // rcx
  _QWORD *v29; // rcx
  _QWORD *v30; // rcx
  __int64 v31; // rbx
  __int64 v32; // rbx
  __int64 v33; // rcx
  __int64 v34; // rax
  __int64 v35; // rcx
  __int64 v36; // rax
  __int64 v37; // rcx
  __int64 v38; // rcx
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 *v41; // rcx
  __int64 v42; // rdi
  _QWORD v43[3]; // [rsp+48h] [rbp-49h] BYREF
  _QWORD v44[3]; // [rsp+60h] [rbp-31h] BYREF
  _QWORD v45[3]; // [rsp+78h] [rbp-19h] BYREF
  _QWORD v46[3]; // [rsp+90h] [rbp-1h] BYREF
  _QWORD v47[4]; // [rsp+A8h] [rbp+17h] BYREF

  for ( i = (__int64 *)((char *)a2 + 48); ; i = (__int64 *)((char *)a2 + 48) )
  {
    v42 = *i;
    if ( !*i )
      break;
    PushW32ThreadLock(*i, v47, UserDereferenceObject);
    ObfReferenceObject((PVOID)v42);
    v5 = *(_QWORD *)(v42 + 40);
    PushW32ThreadLock(v5, v46, UserDereferenceObject);
    v6 = *(void **)(v42 + 40);
    if ( v6 )
      ObfReferenceObject(v6);
    LockObjectAssignment(i, *(_QWORD *)(v42 + 32));
    UnlockObjectAssignment(v42 + 32);
    if ( v42 == grpdeskRitInput )
    {
      if ( (*(_DWORD *)(v5 + 32) & 1) != 0 )
      {
        v7 = grpdeskLogon;
        if ( gspdeskDisconnect
          && ((PVOID)v42 == grpdeskLogon || !grpdeskLogon || (*((_DWORD *)grpdeskLogon + 12) & 2) != 0) )
        {
          RemoteDisableScreen(grpdeskRitInput);
          goto LABEL_32;
        }
      }
      else
      {
        v7 = *(PVOID *)(v5 + 16);
        if ( v7 == (PVOID)v42 )
          v7 = *(PVOID *)(v42 + 32);
        if ( !v7 )
          *(_WORD *)(*((_QWORD *)a1 + 50) + 6LL) &= 0xC3F8u;
      }
      PushW32ThreadLock((__int64)v7, v44, UserDereferenceObject);
      if ( v7 )
        ObfReferenceObject(v7);
      xxxSwitchDesktop(v5, (__int64)v7, 0, 0);
      PopAndFreeW32ThreadLock((__int64)v44);
    }
    else if ( v42 == *((_QWORD *)a1 + 51) )
    {
      k = 0LL;
      for ( j = grpWinStaList; j; j = *(_QWORD *)(j + 8) )
      {
        if ( (*(_DWORD *)(j + 32) & 0x10) == 0 && *(struct tagTERMINAL **)(j + 24) == a2 && *(_QWORD *)(j + 16) )
        {
          for ( k = *(_QWORD *)(j + 16); k; k = *(_QWORD *)(k + 32) )
          {
            if ( k != v42 )
              goto LABEL_31;
          }
          if ( !v42 )
            k = 0LL;
          break;
        }
      }
LABEL_31:
      xxxSetThreadDesktop(0LL, k);
    }
LABEL_32:
    if ( (PVOID)v42 == gspdeskShouldBeForeground )
    {
      for ( m = *(_QWORD **)(v5 + 16); m; m = (_QWORD *)m[4] )
      {
        if ( m != grpdeskLogon && m != gspdeskDisconnect )
          break;
      }
      LockObjectAssignment(&gspdeskShouldBeForeground, m);
    }
    v11 = (_DWORD *)*((_QWORD *)a1 + 51);
    v12 = *((_QWORD *)a1 + 64);
    PushW32ThreadLock((__int64)v11, v45, UserDereferenceObject);
    if ( v11 )
      ObfReferenceObject(v11);
    xxxSetThreadDesktop(0LL, v42);
    HMAssignmentUnlock(v42 + 88);
    HMAssignmentUnlock(v42 + 96);
    HMAssignmentUnlock(v42 + 184);
    *(_DWORD *)(v42 + 48) &= 0xFFFFFA3F;
    v15 = *(_QWORD *)(v42 + 56);
    if ( v15 )
    {
      *(_DWORD *)(v15 + 56) &= ~0x80u;
      if ( UnlockDesktopMenu() )
        DestroyMenu((struct tagMENU *)v15);
    }
    v16 = *(_QWORD *)(v42 + 64);
    if ( v16 )
    {
      *(_DWORD *)(v16 + 56) &= ~0x80u;
      if ( UnlockDesktopMenu() )
        DestroyMenu((struct tagMENU *)v16);
    }
    v17 = *(struct tagMENU **)(v42 + 72);
    if ( v17 && UnlockDesktopMenu() )
      DestroyMenu(v17);
    v18 = *(struct tagMENU **)(v42 + 80);
    if ( v18 && UnlockDesktopMenu() )
      DestroyMenu(v18);
    v19 = *(_QWORD *)(v42 + 8);
    if ( v19 )
    {
      if ( *(struct tagWND **)(v19 + 16) == gspwndFullScreen )
        HMAssignmentUnlock(&gspwndFullScreen);
      v20 = *(_QWORD *)(*(_QWORD *)(v42 + 8) + 160LL);
      if ( v20 )
      {
        if ( (unsigned int)IsWindowDesktopComposed(v20) )
        {
          v24 = *(__int64 ***)(v42 + 8);
          v25 = **v24;
          v26 = (void *)ReferenceDwmApiPort(*v24, v21, v22, v23);
          DwmAsyncShellWindowChange(v26, 0LL, v25);
        }
        v27 = *(_QWORD *)(v42 + 8) + 160LL;
        *(_QWORD *)(**(_QWORD **)(v42 + 8) + 24LL) = 0LL;
        HMAssignmentUnlock(v27);
      }
      v28 = (_QWORD *)(*(_QWORD *)(v42 + 8) + 176LL);
      if ( *v28 )
        HMAssignmentUnlock(v28);
      v29 = (_QWORD *)(*(_QWORD *)(v42 + 8) + 184LL);
      if ( *v29 )
      {
        *(_QWORD *)(**(_QWORD **)(v42 + 8) + 32LL) = 0LL;
        HMAssignmentUnlock(v29);
      }
      v30 = (_QWORD *)(*(_QWORD *)(v42 + 8) + 192LL);
      if ( *v30 )
      {
        *(_QWORD *)(**(_QWORD **)(v42 + 8) + 40LL) = 0LL;
        HMAssignmentUnlock(v30);
      }
    }
    v31 = *(_QWORD *)(v42 + 104);
    if ( v31 && HMAssignmentUnlock(v42 + 104) )
      xxxDestroyWindow(v31, v13, v14);
    v32 = *(_QWORD *)(v42 + 112);
    if ( v32 && HMAssignmentUnlock(v42 + 112) )
      xxxDestroyWindow(v32, v13, v14);
    v33 = *(_QWORD *)(v42 + 264);
    if ( v33 )
    {
      Win32FreePool(v33);
      *(_QWORD *)(v42 + 264) = 0LL;
    }
    v34 = *((_QWORD *)a2 + 1);
    if ( v34 )
    {
      v35 = v34 + 24;
      if ( *(_QWORD *)(v34 + 24) == v42 )
      {
        if ( (*(_DWORD *)a2 & 2) != 0 )
        {
          v36 = grpWinStaList;
          if ( grpWinStaList )
          {
            while ( 1 )
            {
              v36 = *(_QWORD *)(v36 + 8);
              if ( !v36 )
                break;
              if ( *(_QWORD *)(v36 + 16) )
              {
                v13 = *(_QWORD *)(v36 + 16);
                goto LABEL_83;
              }
            }
          }
        }
        else
        {
          v13 = *(_QWORD *)(v5 + 16);
LABEL_83:
          if ( v13 )
          {
            LockObjectAssignment(v35, v13);
            goto LABEL_87;
          }
        }
        if ( a2 == (struct tagTERMINAL *)gTermIO[0] )
          xxxCleanupMotherDesktopWindow(a2);
      }
    }
LABEL_87:
    v37 = *(_QWORD *)(v42 + 8);
    if ( v37 )
    {
      v38 = *(_QWORD *)(v37 + 16);
      if ( v38 )
      {
        if ( (*(_BYTE *)(v38 + 71) & 0x10) != 0 )
        {
          v43[0] = *((_QWORD *)a1 + 46);
          *((_QWORD *)a1 + 46) = v43;
          v43[1] = v38;
          ++*(_DWORD *)(v38 + 8);
          xxxSetWindowPos((struct tagWND *)v38, 0LL, 0LL, 0LL, 0, 0, 1183);
          ThreadUnlock1(v40, v39);
        }
        xxxDestroyWindow(*(_QWORD *)(*(_QWORD *)(v42 + 8) + 16LL), v13, v14);
        if ( v42 != grpdeskRitInput )
        {
          v41 = (__int64 *)(*(_QWORD *)(v42 + 8) + 16LL);
          *(_QWORD *)(**(_QWORD **)(v42 + 8) + 8LL) = 0LL;
          goto LABEL_95;
        }
        *(_DWORD *)(v42 + 48) |= 1u;
        if ( gspwndShouldBeForeground )
        {
          v41 = &gspwndShouldBeForeground;
LABEL_95:
          HMAssignmentUnlock(v41);
        }
        *(_DWORD *)(v42 + 48) |= 2u;
      }
    }
    if ( (*(_DWORD *)a2 & 2) == 0 || !v11 || (v11[12] & 6) == 0 )
      xxxSetThreadDesktop(v12, (__int64)v11);
    PopAndFreeW32ThreadLock((__int64)v45);
    PopAndFreeW32ThreadLock((__int64)v46);
    PopAndFreeW32ThreadLock((__int64)v47);
  }
  KeSetEvent(gpevtDesktopDestroyed, 1, 0);
}
