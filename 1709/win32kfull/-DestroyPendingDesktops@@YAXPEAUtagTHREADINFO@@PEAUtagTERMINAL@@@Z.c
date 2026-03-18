/*
 * XREFs of ?DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z @ 0x1C011B4F0
 * Callers:
 *     ?xxxHandleDesktopMessages@@YAHPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z @ 0x1C0048D04 (-xxxHandleDesktopMessages@@YAHPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z.c)
 * Callees:
 *     DwmAsyncShellWindowChange @ 0x1C0044EC4 (DwmAsyncShellWindowChange.c)
 *     xxxSwitchDesktop @ 0x1C005089C (xxxSwitchDesktop.c)
 *     xxxDestroyWindow @ 0x1C005F7A0 (xxxDestroyWindow.c)
 *     xxxSetWindowPos @ 0x1C0066BA4 (xxxSetWindowPos.c)
 *     xxxSetThreadDesktop @ 0x1C008C4B4 (xxxSetThreadDesktop.c)
 *     _DestroyMenu @ 0x1C009C5C0 (_DestroyMenu.c)
 *     PushW32ThreadLock @ 0x1C009DD90 (PushW32ThreadLock.c)
 *     PopAndFreeW32ThreadLock @ 0x1C00CE7E0 (PopAndFreeW32ThreadLock.c)
 *     RemoteDisableScreen @ 0x1C00D68E0 (RemoteDisableScreen.c)
 *     xxxCleanupMotherDesktopWindow @ 0x1C011B920 (xxxCleanupMotherDesktopWindow.c)
 *     UnlockDesktopMenu @ 0x1C01255E0 (UnlockDesktopMenu.c)
 */

void __fastcall DestroyPendingDesktops(struct tagTHREADINFO *a1, struct tagTERMINAL *a2, __int64 a3, __int64 a4)
{
  __int64 *i; // rbx
  __int64 v7; // rdi
  __int64 v8; // r14
  __int64 v9; // r9
  void *v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  _QWORD *m; // rdx
  _DWORD *v15; // rsi
  __int64 v16; // r12
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // rbx
  __int64 v20; // rbx
  __int64 v21; // rbx
  __int64 v22; // rbx
  __int64 v23; // rcx
  __int64 v24; // rcx
  _QWORD *v25; // rcx
  _QWORD *v26; // rcx
  _QWORD *v27; // rcx
  volatile signed __int32 *v28; // rbx
  volatile signed __int32 *v29; // rbx
  __int64 v30; // rcx
  __int64 v31; // rax
  __int64 v32; // rcx
  __int64 v33; // rcx
  __int64 v34; // rcx
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 *v37; // rcx
  int v38; // edx
  int v39; // edx
  PVOID v40; // rbx
  int v41; // edx
  __int64 k; // rdx
  __int64 j; // rcx
  __int64 **v44; // rax
  __int64 v45; // rbx
  void *v46; // rax
  __int64 v47; // rcx
  __int64 v48; // rax
  _QWORD v49[3]; // [rsp+48h] [rbp-49h] BYREF
  _QWORD v50[3]; // [rsp+60h] [rbp-31h] BYREF
  _QWORD v51[3]; // [rsp+78h] [rbp-19h] BYREF
  _QWORD v52[3]; // [rsp+90h] [rbp-1h] BYREF
  _QWORD v53[4]; // [rsp+A8h] [rbp+17h] BYREF

  for ( i = (__int64 *)((char *)a2 + 48); ; i = (__int64 *)((char *)a2 + 48) )
  {
    v7 = *i;
    if ( !*i )
      break;
    PushW32ThreadLock(*i, v53, UserDereferenceObject, a4);
    ObfReferenceObject((PVOID)v7);
    v8 = *(_QWORD *)(v7 + 40);
    PushW32ThreadLock(v8, v52, UserDereferenceObject, v9);
    v10 = *(void **)(v7 + 40);
    if ( v10 )
      ObfReferenceObject(v10);
    LockObjectAssignment(i, *(_QWORD *)(v7 + 32));
    UnlockObjectAssignment(v7 + 32);
    if ( v7 == grpdeskRitInput )
    {
      if ( (*(_DWORD *)(v8 + 32) & 1) != 0 )
      {
        if ( gspdeskDisconnect
          && ((PVOID)v7 == grpdeskLogon || !grpdeskLogon || (*((_DWORD *)grpdeskLogon + 12) & 2) != 0) )
        {
          RemoteDisableScreen(grpdeskRitInput, v11, v12, v13);
          goto LABEL_7;
        }
        v40 = grpdeskLogon;
      }
      else
      {
        v40 = *(PVOID *)(v8 + 16);
        if ( v40 == (PVOID)v7 )
          v40 = *(PVOID *)(v7 + 32);
        if ( !v40 )
          *(_WORD *)(*((_QWORD *)a1 + 53) + 6LL) &= 0xC3F8u;
      }
      PushW32ThreadLock((__int64)v40, v50, UserDereferenceObject, v13);
      if ( v40 )
        ObfReferenceObject(v40);
      xxxSwitchDesktop(v8, (__int64)v40, 0, 0);
      PopAndFreeW32ThreadLock((__int64)v50, v41);
    }
    else if ( v7 == *((_QWORD *)a1 + 54) )
    {
      k = 0LL;
      for ( j = grpWinStaList; j; j = *(_QWORD *)(j + 8) )
      {
        if ( (*(_DWORD *)(j + 32) & 0x10) == 0 && *(struct tagTERMINAL **)(j + 24) == a2 && *(_QWORD *)(j + 16) )
        {
          for ( k = *(_QWORD *)(j + 16); k; k = *(_QWORD *)(k + 32) )
          {
            if ( k != v7 )
              goto LABEL_87;
          }
          if ( !v7 )
            k = 0LL;
          break;
        }
      }
LABEL_87:
      xxxSetThreadDesktop(0LL, k);
    }
LABEL_7:
    if ( (PVOID)v7 == gspdeskShouldBeForeground )
    {
      for ( m = *(_QWORD **)(v8 + 16); m && (m == gspdeskDisconnect || m == grpdeskLogon); m = (_QWORD *)m[4] )
        ;
      LockObjectAssignment(&gspdeskShouldBeForeground, m);
    }
    v15 = (_DWORD *)*((_QWORD *)a1 + 54);
    v16 = *((_QWORD *)a1 + 71);
    PushW32ThreadLock((__int64)v15, v51, UserDereferenceObject, v13);
    if ( v15 )
      ObfReferenceObject(v15);
    xxxSetThreadDesktop(0LL, v7);
    HMAssignmentUnlock(v7 + 88);
    HMAssignmentUnlock(v7 + 96);
    HMAssignmentUnlock(v7 + 184);
    *(_DWORD *)(v7 + 48) &= 0xFFFFFA3F;
    v19 = *(_QWORD *)(v7 + 56);
    if ( v19 )
    {
      *(_DWORD *)(v19 + 56) &= ~0x80u;
      if ( UnlockDesktopMenu() )
        DestroyMenu(v19);
    }
    v20 = *(_QWORD *)(v7 + 64);
    if ( v20 )
    {
      *(_DWORD *)(v20 + 56) &= ~0x80u;
      if ( UnlockDesktopMenu() )
        DestroyMenu(v20);
    }
    v21 = *(_QWORD *)(v7 + 72);
    if ( v21 && UnlockDesktopMenu() )
      DestroyMenu(v21);
    v22 = *(_QWORD *)(v7 + 80);
    if ( v22 && UnlockDesktopMenu() )
      DestroyMenu(v22);
    v23 = *(_QWORD *)(v7 + 8);
    if ( v23 )
    {
      if ( *(_QWORD *)(v23 + 16) == gspwndFullScreen )
        HMAssignmentUnlock(&gspwndFullScreen);
      v24 = *(_QWORD *)(*(_QWORD *)(v7 + 8) + 160LL);
      if ( v24 )
      {
        if ( (unsigned int)IsWindowDesktopComposed(v24) )
        {
          v44 = *(__int64 ***)(v7 + 8);
          v45 = **v44;
          v46 = (void *)ReferenceDwmApiPort(*v44);
          DwmAsyncShellWindowChange(v46, 0LL, v45);
        }
        v47 = *(_QWORD *)(v7 + 8) + 160LL;
        *(_QWORD *)(**(_QWORD **)(v7 + 8) + 24LL) = 0LL;
        HMAssignmentUnlock(v47);
      }
      v25 = (_QWORD *)(*(_QWORD *)(v7 + 8) + 176LL);
      if ( *v25 )
        HMAssignmentUnlock(v25);
      v26 = (_QWORD *)(*(_QWORD *)(v7 + 8) + 184LL);
      if ( *v26 )
      {
        *(_QWORD *)(**(_QWORD **)(v7 + 8) + 32LL) = 0LL;
        HMAssignmentUnlock(v26);
      }
      v27 = (_QWORD *)(*(_QWORD *)(v7 + 8) + 192LL);
      if ( *v27 )
      {
        *(_QWORD *)(**(_QWORD **)(v7 + 8) + 40LL) = 0LL;
        HMAssignmentUnlock(v27);
      }
    }
    v28 = *(volatile signed __int32 **)(v7 + 104);
    if ( v28 && HMAssignmentUnlock(v7 + 104) )
      xxxDestroyWindow(v28, v17, v18);
    v29 = *(volatile signed __int32 **)(v7 + 112);
    if ( v29 && HMAssignmentUnlock(v7 + 112) )
      xxxDestroyWindow(v29, v17, v18);
    v30 = *(_QWORD *)(v7 + 264);
    if ( v30 )
    {
      Win32FreePool(v30, v17, v18);
      *(_QWORD *)(v7 + 264) = 0LL;
    }
    v31 = *((_QWORD *)a2 + 1);
    if ( v31 )
    {
      v32 = v31 + 24;
      if ( *(_QWORD *)(v31 + 24) == v7 )
      {
        if ( (*(_DWORD *)a2 & 2) != 0 )
        {
          v48 = grpWinStaList;
          if ( grpWinStaList )
          {
            while ( 1 )
            {
              v48 = *(_QWORD *)(v48 + 8);
              if ( !v48 )
                break;
              if ( *(_QWORD *)(v48 + 16) )
              {
                v17 = *(_QWORD *)(v48 + 16);
                goto LABEL_41;
              }
            }
          }
        }
        else
        {
          v17 = *(_QWORD *)(v8 + 16);
LABEL_41:
          if ( v17 )
          {
            LockObjectAssignment(v32, v17);
            goto LABEL_43;
          }
        }
        if ( a2 == (struct tagTERMINAL *)gTermIO[0] )
          xxxCleanupMotherDesktopWindow(a2);
      }
    }
LABEL_43:
    v33 = *(_QWORD *)(v7 + 8);
    if ( v33 )
    {
      v34 = *(_QWORD *)(v33 + 16);
      if ( v34 )
      {
        if ( (*(_BYTE *)(v34 + 71) & 0x10) != 0 )
        {
          v49[0] = *((_QWORD *)a1 + 49);
          *((_QWORD *)a1 + 49) = v49;
          v49[1] = v34;
          _InterlockedIncrement((volatile signed __int32 *)(v34 + 8));
          xxxSetWindowPos((struct tagWND *)v34, 0LL, 0LL, 0LL, 0, 0, 1183);
          ThreadUnlock1(v36, v35);
        }
        xxxDestroyWindow(*(volatile signed __int32 **)(*(_QWORD *)(v7 + 8) + 16LL), v17, v18);
        if ( v7 != grpdeskRitInput )
        {
          v37 = (__int64 *)(*(_QWORD *)(v7 + 8) + 16LL);
          *(_QWORD *)(**(_QWORD **)(v7 + 8) + 8LL) = 0LL;
          goto LABEL_49;
        }
        *(_DWORD *)(v7 + 48) |= 1u;
        if ( gspwndShouldBeForeground )
        {
          v37 = &gspwndShouldBeForeground;
LABEL_49:
          HMAssignmentUnlock(v37);
        }
        *(_DWORD *)(v7 + 48) |= 2u;
      }
    }
    if ( (*(_DWORD *)a2 & 2) == 0 || !v15 || (v15[12] & 6) == 0 )
      xxxSetThreadDesktop(v16, (__int64)v15);
    PopAndFreeW32ThreadLock((__int64)v51, v17);
    PopAndFreeW32ThreadLock((__int64)v52, v38);
    PopAndFreeW32ThreadLock((__int64)v53, v39);
  }
  KeSetEvent(gpevtDesktopDestroyed, 1, 0);
}
