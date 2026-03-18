/*
 * XREFs of xxxSetWindowData @ 0x1C00A40EC
 * Callers:
 *     xxxSetWindowLongPtr @ 0x1C00A3D38 (xxxSetWindowLongPtr.c)
 *     xxxSetWindowLong @ 0x1C00EF5D8 (xxxSetWindowLong.c)
 * Callees:
 *     HMValidateHandleNoRip @ 0x1C0053EA8 (HMValidateHandleNoRip.c)
 *     zzzSetWindowCompositionCloak @ 0x1C00578F4 (zzzSetWindowCompositionCloak.c)
 *     xxxClientWOWGetProcModule @ 0x1C005AFA8 (xxxClientWOWGetProcModule.c)
 *     GetWindowCloakStateComponentUIAware @ 0x1C005D344 (GetWindowCloakStateComponentUIAware.c)
 *     xxxInheritWindowMonitor @ 0x1C0062068 (xxxInheritWindowMonitor.c)
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     _GetDesktopWindow @ 0x1C0065304 (_GetDesktopWindow.c)
 *     MapClientToServerPfn @ 0x1C00761A0 (MapClientToServerPfn.c)
 *     _GetProp @ 0x1C0076208 (_GetProp.c)
 *     LockWndMenu @ 0x1C007C744 (LockWndMenu.c)
 *     SetOrClrWF @ 0x1C008B874 (SetOrClrWF.c)
 *     MapClientNeuterToClientPfn @ 0x1C00A0F3C (MapClientNeuterToClientPfn.c)
 *     xxxSetWindowStyle @ 0x1C00A55A0 (xxxSetWindowStyle.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     xxxSetParentWorker @ 0x1C00C8434 (xxxSetParentWorker.c)
 *     IsWindowShellCloaked @ 0x1C00C8B24 (IsWindowShellCloaked.c)
 *     GetCPD @ 0x1C00F5458 (GetCPD.c)
 *     ValidateOwnerDepth @ 0x1C010E8FC (ValidateOwnerDepth.c)
 *     UnlockWndMenu @ 0x1C011598C (UnlockWndMenu.c)
 *     ?xxxHandleOwnerSwitch@@YAXPEAUtagWND@@00@Z @ 0x1C0116C8C (-xxxHandleOwnerSwitch@@YAXPEAUtagWND@@00@Z.c)
 *     IsParentBandValid @ 0x1C011AA14 (IsParentBandValid.c)
 *     MapServerToClientPfn @ 0x1C011F544 (MapServerToClientPfn.c)
 */

__int64 __fastcall xxxSetWindowData(struct tagWND *a1, __int64 a2, __int64 a3, unsigned int a4)
{
  __int64 v5; // r15
  __int64 v7; // rcx
  __int64 v8; // rsi
  __int16 v10; // ax
  unsigned __int8 v11; // r11
  __int64 v12; // r10
  __int64 CPD; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // r13
  struct tagWND **v17; // r13
  int v18; // esi
  __int64 v19; // rcx
  __int64 v20; // r14
  __int64 CurrentProcessWin32Process; // rax
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 ThreadWin32Thread; // rax
  __int64 v25; // rax
  struct tagWND *v26; // r15
  int v27; // eax
  __int64 v28; // rdx
  struct tagWND *v29; // rcx
  __int64 v30; // rdx
  __int64 v31; // r8
  __int64 v32; // rcx
  unsigned int WindowCloakStateComponentUIAware; // eax
  struct tagWND *v34; // rcx
  unsigned int v35; // r8d
  int *v36; // rdx
  __int64 v37; // rdx
  __int64 v38; // rdx
  __int64 v39; // rcx
  _QWORD *v40; // r14
  __int64 *v41; // rax
  __int64 v42; // rax
  unsigned __int8 v43; // al
  char v44; // al
  signed __int32 v45[8]; // [rsp+8h] [rbp-69h] BYREF
  struct tagWND *v46; // [rsp+28h] [rbp-49h]
  __int128 v47; // [rsp+38h] [rbp-39h]
  __int128 v48; // [rsp+48h] [rbp-29h] BYREF
  _QWORD v49[3]; // [rsp+58h] [rbp-19h] BYREF
  _QWORD v50[3]; // [rsp+70h] [rbp-1h] BYREF
  int v51; // [rsp+88h] [rbp+17h] BYREF
  int v52; // [rsp+E0h] [rbp+6Fh]

  v5 = a3;
  if ( (_DWORD)a2 == -40 )
  {
    if ( PsGetCurrentProcessWin32Process(a1) == *(_QWORD *)(*((_QWORD *)a1 + 2) + 400LL) )
    {
      v43 = *((_BYTE *)a1 + 306);
      v8 = ((unsigned __int64)v43 >> 2) & 1;
      if ( v5 )
        v44 = v43 | 4;
      else
        v44 = v43 & 0xFB;
      *((_BYTE *)a1 + 306) = v44;
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
        v40 = (_QWORD *)((char *)a1 + 208);
        v41 = (__int64 *)*((_QWORD *)a1 + 26);
        v8 = 0LL;
        if ( v41 )
          v8 = *v41;
        if ( a3 )
        {
          v42 = ValidateHmenu(a3);
          if ( v42 )
            LockWndMenu((__int64)a1, v40, v42);
          else
            return 0LL;
        }
        else
        {
          UnlockWndMenu(a1);
        }
      }
      return v8;
    case 0xFFFFFFF8:
      v17 = (struct tagWND **)((char *)a1 + 104);
      if ( *((_QWORD *)a1 + 13) == GetDesktopWindow((__int64)a1) )
      {
        v17 = (struct tagWND **)((char *)a1 + 120);
        v18 = 1;
      }
      else
      {
        v18 = 0;
      }
      v46 = *v17;
      v52 = v18;
      v20 = ValidateHwnd(v5);
      if ( !v20 && v5 )
        goto LABEL_39;
      if ( v18 )
      {
        CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v19);
        if ( (unsigned int)ShouldSetNoOwner(CurrentProcessWin32Process, v20, v22, v23) )
          v20 = 0LL;
      }
      if ( !(unsigned int)IsParentBandValid(a1, v20) )
      {
LABEL_39:
        v7 = 87LL;
        goto LABEL_13;
      }
      if ( v20 && GetProp((__int64)a1, gatomBrokeredForeground, 1) )
        goto LABEL_12;
      if ( v18 )
      {
        if ( !v20 )
          goto LABEL_52;
        if ( GetProp(v20, gatomBrokeredForeground, 1) )
          goto LABEL_12;
      }
      if ( v20 && (*(char *)(v20 + 60) < 0 || *(char *)(v20 + 59) < 0) )
        goto LABEL_12;
LABEL_52:
      if ( *v17 )
        v8 = *(_QWORD *)*v17;
      else
        v8 = 0LL;
      ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
      v49[0] = *(_QWORD *)(ThreadWin32Thread + 392);
      *(_QWORD *)(ThreadWin32Thread + 392) = v49;
      v49[1] = v20;
      if ( v20 )
        _InterlockedAdd((volatile signed __int32 *)(v20 + 8), 1u);
      if ( !v52 )
      {
        v39 = -(__int64)(xxxSetParentWorker(a1) != 0);
        v8 &= v39;
        goto LABEL_77;
      }
      v25 = W32GetThreadWin32Thread(KeGetCurrentThread());
      v26 = v46;
      v50[0] = *(_QWORD *)(v25 + 392);
      *(_QWORD *)(v25 + 392) = v50;
      v50[1] = v26;
      if ( v26 )
        _InterlockedAdd((volatile signed __int32 *)v26 + 2, 1u);
      xxxHandleOwnerSwitch(a1, (struct tagWND *)v20, v26);
      v27 = IsParentBandValid(a1, v20);
      v29 = a1;
      if ( v27 )
      {
        if ( (unsigned int)ValidateOwnerDepth(a1, v28) )
        {
          v30 = LODWORD(gSharedInfo[2]);
          v31 = gSharedInfo[1];
          v32 = (unsigned int)v30 * (unsigned __int16)*(_DWORD *)a1;
          if ( (*(_BYTE *)(v32 + v31 + 25) & 1) == 0 )
          {
            if ( !v20 )
            {
              HMAssignmentUnlock(v17);
              goto LABEL_71;
            }
            v32 = (unsigned int)v30 * (unsigned __int16)*(_DWORD *)v20;
            if ( (*(_BYTE *)(v32 + v31 + 25) & 1) == 0 )
            {
              *(_QWORD *)&v47 = v17;
              *((_QWORD *)&v47 + 1) = v20;
              v48 = v47;
              HMAssignmentLock(&v48);
              WindowCloakStateComponentUIAware = GetWindowCloakStateComponentUIAware((struct tagWND *)v20);
              v34 = a1;
              if ( WindowCloakStateComponentUIAware )
              {
                v35 = WindowCloakStateComponentUIAware;
                v36 = 0LL;
              }
              else
              {
                if ( !(unsigned int)IsWindowShellCloaked(a1) )
                {
LABEL_71:
                  xxxInheritWindowMonitor(a1, (struct tagWND *)v20, 0);
LABEL_75:
                  ThreadUnlock1(v32, v30);
LABEL_77:
                  ThreadUnlock1(v39, v38);
                  return v8;
                }
                v51 = 0;
                v36 = &v51;
                v35 = 2;
                v34 = a1;
              }
              zzzSetWindowCompositionCloak((__int64)v34, v36, v35);
              goto LABEL_71;
            }
          }
LABEL_74:
          v8 = 0LL;
          goto LABEL_75;
        }
        v29 = a1;
      }
      xxxHandleOwnerSwitch(v29, v26, (struct tagWND *)v20);
      UserSetLastError(87LL, v37);
      goto LABEL_74;
    case 0xFFFFFFFA:
      v8 = *((_QWORD *)a1 + 9);
      *((_QWORD *)a1 + 9) = a3;
      return v8;
    case 0xFFFFFFFC:
      if ( PsGetCurrentProcessWin32Process(a1) == *(_QWORD *)(*((_QWORD *)a1 + 2) + 400LL) )
      {
        v10 = *((_WORD *)a1 + 41);
        if ( v10 >= 0 )
        {
          v11 = *((_BYTE *)a1 + 58);
          if ( (v11 & 4) != 0 )
          {
            v8 = MapServerToClientPfn(*((_QWORD *)a1 + 20), a4);
            if ( !v8 )
              return 0LL;
            goto LABEL_25;
          }
          if ( (v10 & 0x3FFF) == 0x2A5 )
          {
            v8 = *((_QWORD *)a1 + 20);
          }
          else
          {
            v8 = MapClientNeuterToClientPfn(*((_QWORD *)a1 + 21), *((_QWORD *)a1 + 20), a4);
            if ( v8 != v12 )
            {
LABEL_25:
              if ( (v5 & 0xFFFF0000) == 0xFFFF0000 )
              {
                v14 = HMValidateHandleNoRip(v5, 7);
                if ( v14 )
                {
                  v15 = *(_QWORD *)(v14 + 40);
                  v5 = *(_QWORD *)(v15 + 16);
                  a4 = *(_WORD *)(v15 + 24) & 2;
                }
              }
              v16 = MapClientToServerPfn(v5);
              if ( v16 )
              {
                SetOrClrWF(0, a1, 0x208u, 1);
                SetOrClrWF(1, a1, 0x204u, 1);
                *((_QWORD *)a1 + 20) = v16;
                _InterlockedOr(v45, 0);
              }
              else
              {
                SetOrClrWF(a4 != 0, a1, 0x208u, 1);
                if ( (*((_BYTE *)a1 + 58) & 4) != 0 )
                  SetOrClrWF(0, a1, 0x204u, 1);
                *((_QWORD *)a1 + 20) = MapClientNeuterToClientPfn(*((_QWORD *)a1 + 21), v5, a4);
                _InterlockedOr(v45, 0);
                *((_WORD *)a1 + 40) = xxxClientWOWGetProcModule(*((_QWORD *)a1 + 20));
              }
              return v8;
            }
          }
          if ( a4 != ((v11 >> 3) & 1) )
          {
            CPD = GetCPD(a1, 34 - (unsigned int)(a4 != 0), v8);
            if ( CPD )
              v8 = CPD;
          }
          goto LABEL_25;
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
    UserSetLastError(v7, a2);
    return 0LL;
  }
  v8 = *((_QWORD *)a1 + 43);
  *((_QWORD *)a1 + 43) = a3;
  return v8;
}
