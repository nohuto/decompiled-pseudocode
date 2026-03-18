/*
 * XREFs of xxxSetWindowData @ 0x1C004EA08
 * Callers:
 *     xxxSetWindowLongPtr @ 0x1C004E638 (xxxSetWindowLongPtr.c)
 *     xxxSetWindowLong @ 0x1C00DD088 (xxxSetWindowLong.c)
 * Callees:
 *     IsWindowShellCloaked @ 0x1C0017F98 (IsWindowShellCloaked.c)
 *     xxxSetParentWorker @ 0x1C0018034 (xxxSetParentWorker.c)
 *     SetOrClrWF @ 0x1C001C5B4 (SetOrClrWF.c)
 *     zzzSetWindowCompositionCloak @ 0x1C001FA00 (zzzSetWindowCompositionCloak.c)
 *     MapClientToServerPfn @ 0x1C003701C (MapClientToServerPfn.c)
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     MapClientNeuterToClientPfn @ 0x1C003AEB8 (MapClientNeuterToClientPfn.c)
 *     xxxSetWindowStyle @ 0x1C0050000 (xxxSetWindowStyle.c)
 *     xxxInheritWindowMonitor @ 0x1C005F0F0 (xxxInheritWindowMonitor.c)
 *     GetWindowCloakState @ 0x1C0061BB0 (GetWindowCloakState.c)
 *     _GetProp @ 0x1C00624E0 (_GetProp.c)
 *     _GetDesktopWindow @ 0x1C0062730 (_GetDesktopWindow.c)
 *     ?xxxHandleOwnerSwitch@@YAXPEAUtagWND@@00@Z @ 0x1C00B043C (-xxxHandleOwnerSwitch@@YAXPEAUtagWND@@00@Z.c)
 *     LockWndMenu @ 0x1C00C315C (LockWndMenu.c)
 *     HMValidateHandleNoRip @ 0x1C00C3ABC (HMValidateHandleNoRip.c)
 *     GetCPD @ 0x1C00E2DF8 (GetCPD.c)
 *     xxxClientWOWGetProcModule @ 0x1C00ECD18 (xxxClientWOWGetProcModule.c)
 *     ValidateOwnerDepth @ 0x1C01022E8 (ValidateOwnerDepth.c)
 *     UnlockWndMenu @ 0x1C010B5A8 (UnlockWndMenu.c)
 *     IsParentBandValid @ 0x1C010C250 (IsParentBandValid.c)
 *     MapServerToClientPfn @ 0x1C0115F9C (MapServerToClientPfn.c)
 */

__int64 __fastcall xxxSetWindowData(struct tagWND *a1, __int64 a2, __int64 a3, unsigned int a4)
{
  __int64 v5; // r15
  __int64 v7; // rcx
  __int64 v8; // rsi
  __int64 v9; // rdx
  __int16 v11; // ax
  unsigned __int8 v12; // r11
  __int64 v13; // r10
  __int64 CPD; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // r13
  __int64 **v18; // rsi
  __int64 v19; // rcx
  __int64 *v20; // r13
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r14
  __int64 CurrentProcessWin32Process; // rax
  int v25; // r10d
  unsigned __int16 v26; // r11
  __int64 *v27; // rsi
  int v28; // eax
  struct tagWND *v29; // rcx
  __int64 v30; // rdx
  __int64 v31; // r8
  __int64 v32; // rcx
  unsigned int WindowCloakState; // eax
  struct tagWND *v34; // rcx
  unsigned int v35; // r8d
  int *v36; // rdx
  __int64 v37; // rdx
  __int64 v38; // rcx
  char *v39; // r14
  __int64 *v40; // rax
  __int64 v41; // rax
  unsigned __int8 v42; // al
  char v43; // al
  signed __int32 v44[8]; // [rsp+8h] [rbp-59h] BYREF
  __int128 v45; // [rsp+28h] [rbp-39h]
  __int128 v46; // [rsp+38h] [rbp-29h] BYREF
  _QWORD v47[3]; // [rsp+48h] [rbp-19h] BYREF
  _QWORD v48[3]; // [rsp+60h] [rbp-1h] BYREF
  int v49; // [rsp+78h] [rbp+17h] BYREF
  int v50; // [rsp+D0h] [rbp+6Fh]

  v5 = a3;
  if ( (_DWORD)a2 == -40 )
  {
    if ( PsGetCurrentProcessWin32Process(a1, a2) == *(_QWORD *)(*((_QWORD *)a1 + 2) + 376LL) )
    {
      v42 = *((_BYTE *)a1 + 306);
      v8 = ((unsigned __int64)v42 >> 2) & 1;
      if ( v5 )
        v43 = v42 | 4;
      else
        v43 = v42 & 0xFB;
      *((_BYTE *)a1 + 306) = v43;
      return v8;
    }
    goto LABEL_12;
  }
  if ( (_DWORD)a2 == -21 )
  {
    v8 = *((_QWORD *)a1 + 34);
    *((_QWORD *)a1 + 34) = a3;
    return v8;
  }
  if ( (((_DWORD)a2 + 20) & 0xFFFFFFFB) == 0 )
    return (int)xxxSetWindowStyle(a1);
  switch ( (_DWORD)a2 )
  {
    case 0xFFFFFFF4:
      if ( (*((_BYTE *)a1 + 71) & 0xC0) == 0x40 )
      {
        v8 = *((_QWORD *)a1 + 26);
        *((_QWORD *)a1 + 26) = a3;
      }
      else
      {
        v39 = (char *)a1 + 208;
        v40 = (__int64 *)*((_QWORD *)a1 + 26);
        v8 = 0LL;
        if ( v40 )
          v8 = *v40;
        if ( a3 )
        {
          v41 = ValidateHmenu(a3);
          if ( v41 )
            LockWndMenu(a1, v39, v41);
          else
            return 0LL;
        }
        else
        {
          UnlockWndMenu(a1, (char *)a1 + 208);
        }
      }
      return v8;
    case 0xFFFFFFF8:
      v18 = (__int64 **)((char *)a1 + 104);
      *(_QWORD *)&v45 = (char *)a1 + 104;
      if ( *((_QWORD *)a1 + 13) == GetDesktopWindow(a1, a2) )
      {
        v18 = (__int64 **)(v19 + 120);
        v50 = 1;
        *(_QWORD *)&v45 = v19 + 120;
      }
      else
      {
        v50 = 0;
      }
      v20 = *v18;
      v23 = ValidateHwnd(v5);
      if ( !v23 && v5 )
        goto LABEL_40;
      if ( v50 )
      {
        CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v22, v21);
        if ( (unsigned int)ShouldSetNoOwner(CurrentProcessWin32Process, v23) )
          v23 = 0LL;
      }
      if ( !(unsigned int)IsParentBandValid(a1, v23) )
      {
LABEL_40:
        v7 = 87LL;
        goto LABEL_13;
      }
      v26 = gatomBrokeredForeground;
      if ( v23 && GetProp(a1, (unsigned __int16)gatomBrokeredForeground, 1LL) )
        goto LABEL_12;
      if ( v25 )
      {
        if ( !v23 )
          goto LABEL_53;
        if ( GetProp(v23, v26, 1LL) )
          goto LABEL_12;
      }
      if ( v23 && (*(char *)(v23 + 60) < 0 || *(char *)(v23 + 59) < 0) )
        goto LABEL_12;
LABEL_53:
      v27 = *v18;
      if ( v27 )
        v8 = *v27;
      else
        v8 = 0LL;
      v47[0] = *(_QWORD *)(gptiCurrent + 368LL);
      *(_QWORD *)(gptiCurrent + 368LL) = v47;
      v47[1] = v23;
      if ( v23 )
        ++*(_DWORD *)(v23 + 8);
      if ( !v25 )
      {
        v38 = -(__int64)(xxxSetParentWorker(a1, v23, 0LL) != 0);
        v8 &= v38;
        goto LABEL_78;
      }
      v48[0] = *(_QWORD *)(gptiCurrent + 368LL);
      *(_QWORD *)(gptiCurrent + 368LL) = v48;
      v48[1] = v20;
      if ( v20 )
        ++*((_DWORD *)v20 + 2);
      xxxHandleOwnerSwitch(a1, (struct tagWND *)v23, (struct tagWND *)v20);
      v28 = IsParentBandValid(a1, v23);
      v29 = a1;
      if ( v28 )
      {
        if ( (unsigned int)ValidateOwnerDepth(a1) )
        {
          v30 = LODWORD(gSharedInfo[2]);
          v31 = gSharedInfo[1];
          v32 = (unsigned int)v30 * (unsigned __int16)*(_DWORD *)a1;
          if ( (*(_BYTE *)(v32 + v31 + 25) & 1) == 0 )
          {
            if ( !v23 )
            {
              HMAssignmentUnlock(v45);
              goto LABEL_72;
            }
            v32 = (unsigned int)v30 * (unsigned __int16)*(_DWORD *)v23;
            if ( (*(_BYTE *)(v32 + v31 + 25) & 1) == 0 )
            {
              *((_QWORD *)&v45 + 1) = v23;
              v46 = v45;
              HMAssignmentLock(&v46);
              WindowCloakState = GetWindowCloakState(v23);
              v34 = a1;
              if ( WindowCloakState )
              {
                v35 = WindowCloakState;
                v36 = 0LL;
              }
              else
              {
                if ( !(unsigned int)IsWindowShellCloaked(a1, 1) )
                {
LABEL_72:
                  xxxInheritWindowMonitor(a1);
LABEL_76:
                  ThreadUnlock1(v32, v30);
LABEL_78:
                  ThreadUnlock1(v38, v37);
                  return v8;
                }
                v49 = 0;
                v36 = &v49;
                v35 = 2;
                v34 = a1;
              }
              zzzSetWindowCompositionCloak((__int64)v34, (__int64)v36, v35);
              goto LABEL_72;
            }
          }
LABEL_75:
          v8 = 0LL;
          goto LABEL_76;
        }
        v29 = a1;
      }
      xxxHandleOwnerSwitch(v29, (struct tagWND *)v20, (struct tagWND *)v23);
      UserSetLastError(87LL);
      goto LABEL_75;
    case 0xFFFFFFFA:
      v8 = *((_QWORD *)a1 + 9);
      *((_QWORD *)a1 + 9) = a3;
      return v8;
    case 0xFFFFFFFC:
      if ( PsGetCurrentProcessWin32Process(a1, a2) == *(_QWORD *)(*((_QWORD *)a1 + 2) + 376LL) )
      {
        v11 = *((_WORD *)a1 + 41);
        if ( v11 >= 0 )
        {
          v12 = *((_BYTE *)a1 + 58);
          if ( (v12 & 4) != 0 )
          {
            v8 = MapServerToClientPfn(*((_QWORD *)a1 + 20), a4);
            if ( !v8 )
              return 0LL;
            goto LABEL_26;
          }
          if ( (v11 & 0x3FFF) == 0x2A5 )
          {
            v8 = *((_QWORD *)a1 + 20);
          }
          else
          {
            v8 = MapClientNeuterToClientPfn(*((_QWORD *)a1 + 21), *((_QWORD *)a1 + 20), a4);
            if ( v8 != v13 )
            {
LABEL_26:
              if ( (v5 & 0xFFFF0000) == 0xFFFF0000 )
              {
                LOBYTE(v9) = 7;
                v15 = HMValidateHandleNoRip(v5, v9);
                if ( v15 )
                {
                  v16 = *(_QWORD *)(v15 + 40);
                  v5 = *(_QWORD *)(v16 + 16);
                  a4 = *(_WORD *)(v16 + 24) & 2;
                }
              }
              v17 = MapClientToServerPfn(v5);
              if ( v17 )
              {
                SetOrClrWF(0, a1, 0x208u, 1);
                SetOrClrWF(1, a1, 0x204u, 1);
                *((_QWORD *)a1 + 20) = v17;
                _InterlockedOr(v44, 0);
              }
              else
              {
                SetOrClrWF(a4 != 0, a1, 0x208u, 1);
                if ( (*((_BYTE *)a1 + 58) & 4) != 0 )
                  SetOrClrWF(0, a1, 0x204u, 1);
                *((_QWORD *)a1 + 20) = MapClientNeuterToClientPfn(*((_QWORD *)a1 + 21), v5, a4);
                _InterlockedOr(v44, 0);
                *((_WORD *)a1 + 40) = xxxClientWOWGetProcModule(*((_QWORD *)a1 + 20));
              }
              return v8;
            }
          }
          if ( a4 != ((v12 >> 3) & 1) )
          {
            v9 = 2 - (unsigned int)(a4 != 0);
            if ( (a4 != 0) != 2 )
            {
              CPD = GetCPD(a1, (unsigned int)v9 | 0x20, v8);
              if ( CPD )
                v8 = CPD;
            }
          }
          goto LABEL_26;
        }
      }
LABEL_12:
      v7 = 5LL;
      goto LABEL_13;
  }
  if ( (_DWORD)a2 != -2 )
  {
    v7 = 1413LL;
LABEL_13:
    UserSetLastError(v7);
    return 0LL;
  }
  v8 = *((_QWORD *)a1 + 43);
  *((_QWORD *)a1 + 43) = a3;
  return v8;
}
