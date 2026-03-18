/*
 * XREFs of xxxSetWindowStyle @ 0x1C00A55A0
 * Callers:
 *     xxxSetModernAppWindow @ 0x1C0008910 (xxxSetModernAppWindow.c)
 *     xxxSetWindowData @ 0x1C00A40EC (xxxSetWindowData.c)
 *     ?xxxEnumTurnOffCompositing@@YAHPEAUtagWND@@_J@Z @ 0x1C01C5100 (-xxxEnumTurnOffCompositing@@YAHPEAUtagWND@@_J@Z.c)
 * Callees:
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     _IsTopLevelWindow @ 0x1C0065520 (_IsTopLevelWindow.c)
 *     xxxSetWindowPos @ 0x1C0066BA4 (xxxSetWindowPos.c)
 *     xxxRedrawWindow @ 0x1C0069A60 (xxxRedrawWindow.c)
 *     GetStyleWindow @ 0x1C006B4B0 (GetStyleWindow.c)
 *     zzzLockDisplayAreaAndInvalidateDCCache @ 0x1C0071F0C (zzzLockDisplayAreaAndInvalidateDCCache.c)
 *     GetAppCompatFlags2 @ 0x1C007C450 (GetAppCompatFlags2.c)
 *     UnsetRedirectedWindow @ 0x1C008A4D0 (UnsetRedirectedWindow.c)
 *     UnsetLayeredWindow @ 0x1C008B638 (UnsetLayeredWindow.c)
 *     SetOrClrWF @ 0x1C008B874 (SetOrClrWF.c)
 *     xxxSetLayeredWindow @ 0x1C008BC2C (xxxSetLayeredWindow.c)
 *     SetRedirectedWindow @ 0x1C008FCF8 (SetRedirectedWindow.c)
 *     ComposeWindowIfNeeded @ 0x1C009286C (ComposeWindowIfNeeded.c)
 *     IncVisWindows @ 0x1C0092CD4 (IncVisWindows.c)
 *     DecVisWindows @ 0x1C0092F98 (DecVisWindows.c)
 *     xxxSendMessage @ 0x1C00A6110 (xxxSendMessage.c)
 *     PostIAMShellHookMessageEx @ 0x1C00C90D0 (PostIAMShellHookMessageEx.c)
 *     _IsWindowVisible @ 0x1C0112B5C (_IsWindowVisible.c)
 *     IsTopLevelOrLayeredChildWindow @ 0x1C01143B4 (IsTopLevelOrLayeredChildWindow.c)
 *     VerifyChildMenu @ 0x1C01443E0 (VerifyChildMenu.c)
 *     _guard_dispatch_icall_nop @ 0x1C0145690 (_guard_dispatch_icall_nop.c)
 *     ClrWFNoDwmNotify @ 0x1C01B8880 (ClrWFNoDwmNotify.c)
 *     xxxTurnOffCompositing @ 0x1C01C56BC (xxxTurnOffCompositing.c)
 *     Is31TrayWindow @ 0x1C020BF38 (Is31TrayWindow.c)
 */

__int64 __fastcall xxxSetWindowStyle(struct tagWND *a1, int a2, unsigned int a3)
{
  int v5; // r13d
  int v6; // r15d
  int v7; // eax
  __int64 v8; // rcx
  bool v9; // zf
  unsigned int v10; // edi
  __int64 v12; // r8
  int v13; // esi
  __int64 v14; // rdx
  __int64 v15; // rax
  int v16; // r12d
  __int64 v17; // rax
  char v18; // al
  __int64 CurrentProcessWin32Process; // rax
  int v20; // r8d
  __int64 v21; // rdx
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  char v25; // cl
  __int64 v26; // r10
  BOOL v27; // r11d
  __int64 v28; // rcx
  __int64 v29; // rdx
  __int64 v30; // r9
  int v31; // r14d
  struct tagWND *i; // rcx
  __int64 v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rcx
  int v36; // edi
  __int64 v37; // r8
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // rax
  __int64 v41; // rax
  char v42; // al
  struct tagWND *j; // rcx
  int v44; // eax
  __int64 v45; // r8
  __int64 v46; // rcx
  unsigned int v47; // edi
  int v48; // ecx
  int v49; // ecx
  __int64 v50; // rdx
  int v51; // edi
  int v52; // r14d
  unsigned int v53; // edx
  unsigned int v54; // eax
  unsigned int v55; // ecx
  int v56; // ecx
  int v57; // eax
  int v58; // eax
  __int64 v59; // rcx
  unsigned int v60; // r14d
  __int64 v61; // r15
  __int64 v62; // rax
  void *v63; // rdi
  int v64; // r15d
  __int64 v65; // r8
  __int64 v66; // rax
  __int64 v67; // rdx
  __int64 v68; // rcx
  __int64 v69; // rax
  char v70; // al
  __int64 v71; // rdx
  _QWORD v72[5]; // [rsp+40h] [rbp-29h] BYREF
  int v73; // [rsp+68h] [rbp-1h]
  __int64 v74; // [rsp+6Ch] [rbp+3h]
  int v75; // [rsp+74h] [rbp+Bh]
  unsigned int v76; // [rsp+78h] [rbp+Fh]
  int v78; // [rsp+E0h] [rbp+77h]
  unsigned int v79; // [rsp+E0h] [rbp+77h]
  unsigned int v80; // [rsp+E0h] [rbp+77h]
  unsigned int v81; // [rsp+E8h] [rbp+7Fh] BYREF
  unsigned int v82; // [rsp+ECh] [rbp+83h]

  v5 = 0;
  v6 = 0;
  v7 = (*((_DWORD *)a1 + 16) >> 22) & 8;
  v8 = (*((_DWORD *)a1 + 17) >> 26) & 4;
  v78 = v8 | v7 & 0xFFFFFFFB;
  if ( a2 != -16 )
  {
    v10 = *((_DWORD *)a1 + 16) & (((~(unsigned __int8)*((_DWORD *)a1 + 76) & 0x20) << 14) | 0xA7777FF);
    goto LABEL_5;
  }
  v9 = (*((_DWORD *)a1 + 16) & 0x800) == 0;
  v10 = *((_DWORD *)a1 + 17);
  v81 = v10;
  if ( !v9 )
  {
    v10 |= 0x10000000u;
LABEL_5:
    v81 = v10;
  }
  v9 = (*((_BYTE *)a1 + 61) & 2) == 0;
  v82 = a3;
  if ( !v9 )
  {
    xxxSendMessage(a1, 124LL, a2, &v81);
    v8 = gSharedInfo[1];
    if ( (*(_BYTE *)(LODWORD(gSharedInfo[2]) * (unsigned int)(unsigned __int16)*(_DWORD *)a1 + v8 + 25) & 1) != 0 )
      return v10;
    v81 = v10;
  }
  v12 = *((_QWORD *)a1 + 3);
  v13 = 1;
  if ( !v12 )
    goto LABEL_31;
  v8 = gpsi;
  if ( (*(_DWORD *)(gpsi + 2104LL) & 8) == 0 )
    goto LABEL_31;
  v8 = **(_QWORD **)(gptiCurrent + 440LL);
  if ( ((*(_DWORD *)(gptiCurrent + 656LL) | *(_DWORD *)(v8 + 16)) & 0x800) == 0
    && !*(_QWORD *)(*(_QWORD *)(v12 + 8) + 184LL) )
  {
    goto LABEL_31;
  }
  v8 = *((_QWORD *)a1 + 13);
  if ( !v8 )
    goto LABEL_31;
  v14 = *(_QWORD *)(v12 + 8);
  v15 = 0LL;
  if ( v14 )
    v15 = *(_QWORD *)(v14 + 16);
  if ( v8 != v15 )
    goto LABEL_31;
  if ( (*((_BYTE *)a1 + 66) & 4) != 0 )
  {
    v16 = 1;
    goto LABEL_32;
  }
  if ( *((char *)a1 + 64) < 0 || (*((_BYTE *)a1 + 67) & 8) != 0 )
    goto LABEL_31;
  if ( (*((_BYTE *)a1 + 61) & 2) != 0 )
  {
    v17 = *((_QWORD *)a1 + 15);
    if ( !v17 )
    {
      v16 = 1;
      goto LABEL_32;
    }
    if ( (*(_BYTE *)(v17 + 61) & 2) != 0 )
      goto LABEL_31;
  }
  if ( (*((_BYTE *)a1 + 60) & 0x40) != 0
    || (v18 = *((_BYTE *)a1 + 70), (v18 & 0xA) != 0) && ((v18 & 0xC0) != 0 || (*((_BYTE *)a1 + 71) & 0x20) != 0) )
  {
    v16 = Is31TrayWindow(a1);
  }
  else
  {
LABEL_31:
    v16 = 0;
  }
LABEL_32:
  if ( a2 != -16 )
  {
    if ( (GetAppCompatFlags2(0x400u) & 4) != 0 )
      v47 = v82 & 0x777FF;
    else
      v47 = v82 & 0xA7F77FF;
    v48 = v81 & 8;
    v82 = v47;
    if ( v48 != (v47 & 8) && ((*((_BYTE *)a1 + 61) & 2) != 0 || !HIWORD(v47)) )
    {
      v47 = v48 | v47 & 0xFFFFFFF7;
      v82 = v47;
    }
    v49 = v47 & 0x80000;
    if ( (((~(unsigned __int8)*((_DWORD *)a1 + 76) & 0x20) << 14) & *((_DWORD *)a1 + 16)) != 0 )
    {
      if ( v49 )
        goto LABEL_127;
      if ( (unsigned int)IsTopLevelOrLayeredChildWindow(a1) && !(unsigned int)IsTopLevelWindow((__int64)a1) )
        v6 = 1;
      UnsetLayeredWindow(a1, v6);
    }
    else
    {
      if ( !v49 )
        goto LABEL_127;
      if ( (int)xxxSetLayeredWindow(a1, 1, 0LL) < 0 )
        return 0LL;
    }
    v47 = v82;
LABEL_127:
    v50 = *((_DWORD *)a1 + 16) & 0x200000;
    if ( ((*((_DWORD *)a1 + 16) & 0x200000) != 0) == ((v47 >> 21) & 1) && (!(_DWORD)v50 || (v47 & 0x2000000) == 0) )
    {
      v51 = v47 & 0x2000000;
      v52 = *((_DWORD *)a1 + 16) & 0x2000000;
      if ( !v52 && v51 && GetStyleWindow(*((_QWORD *)a1 + 13), 2818) )
        return 0LL;
      v80 = (*((_DWORD *)a1 + 17) >> 28) & 1 | v78 & 0xFFFFFFFC | (v51 != 0 ? 2 : 0);
      if ( v52 )
      {
        if ( !v51 )
        {
          UnsetRedirectedWindow(a1);
          ClrWFNoDwmNotify(a1, 2818LL);
        }
      }
      else if ( v51 )
      {
        if ( (int)SetRedirectedWindow(a1, 2) < 0 )
          return 0LL;
        SetOrClrWF(1, a1, 0xB02u, 0);
        v5 = 1;
      }
      ((void (__fastcall *)(struct tagWND *))(&grpVisCompStyleChangeAction)[v80])(a1);
      if ( v5 )
        xxxTurnOffCompositing(a1, 1LL);
      v53 = v82;
      v54 = v82;
      *((_DWORD *)a1 + 16) = v82 & 0xFDF7FFFF | *((_DWORD *)a1 + 16) & 0xF7888800;
      v55 = v81;
      if ( ((v81 ^ v54) & 0x407000) != 0 )
      {
        xxxSetWindowPos(a1, 0LL, 0LL, 0LL, 0, 0, 55);
        v53 = v82;
        v55 = v81;
      }
      if ( ((v55 ^ v53) & 0x80000) != 0 && v6 )
        xxxRedrawWindow(a1, 0LL, 0LL, 1157LL);
      goto LABEL_149;
    }
    UserSetLastError(87LL, v50);
    return 0LL;
  }
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v8);
  v20 = v82;
  if ( CurrentProcessWin32Process != *(_QWORD *)(*((_QWORD *)a1 + 2) + 400LL) )
  {
    v21 = *((_QWORD *)a1 + 21);
    if ( *(_WORD *)(gpsi + 854LL) == *(_WORD *)(v21 + 10) && (v81 & 0x20) != 0 && (v82 & 0x20) == 0 )
    {
      UserSetLastError(5LL, v21);
      return 0LL;
    }
  }
  v22 = *((_QWORD *)a1 + 3);
  v23 = 0LL;
  if ( v22 )
  {
    v24 = *(_QWORD *)(v22 + 8);
    if ( v24 )
      v23 = *(_QWORD *)(v24 + 16);
  }
  if ( *((_QWORD *)a1 + 13) == v23 )
  {
    v20 = v82 | 0x4000000;
    v82 |= 0x4000000u;
  }
  if ( ((v81 ^ v20) & 0x6000000) != 0 )
  {
    zzzLockDisplayAreaAndInvalidateDCCache((__int64)a1, 1, 0LL);
    v20 = v82;
  }
  v25 = *((_BYTE *)a1 + 71);
  if ( (v25 & 0x40) == 0 && (v25 & 0x20) != 0 && (*((_BYTE *)a1 + 56) & 8) == 0 && (v20 & 0x20000000) == 0 )
  {
    v20 |= 0x20000000u;
    v82 = v20;
  }
  v26 = *((_QWORD *)a1 + 13);
  v27 = (v25 & 0xC0) == 64;
  if ( !v26 )
    goto LABEL_57;
  v28 = *((_QWORD *)a1 + 3);
  v29 = 0LL;
  if ( v28 )
  {
    v30 = *(_QWORD *)(v28 + 8);
    if ( v30 )
      v29 = *(_QWORD *)(v30 + 16);
  }
  if ( v26 == v29 && (*((_DWORD *)a1 + 17) & 0x30000000) == 0x10000000 )
    v31 = 1;
  else
LABEL_57:
    v31 = 0;
  if ( v16 )
  {
    for ( i = a1;
          (*((_BYTE *)i + 71) & 0x10) != 0 || (*((_BYTE *)i + 65) & 8) != 0;
          i = (struct tagWND *)*((_QWORD *)i + 13) )
    {
      if ( (*((_WORD *)i + 41) & 0x3FFF) == 0x29D )
      {
        v6 = 1;
        break;
      }
    }
  }
  *((_DWORD *)a1 + 17) = v20;
  if ( (v20 & 0x10000000) != 0 )
    *((_DWORD *)a1 + 16) |= 0x800u;
  else
    *((_DWORD *)a1 + 16) &= ~0x800u;
  if ( !v26 )
    goto LABEL_75;
  v33 = *((_QWORD *)a1 + 3);
  v34 = 0LL;
  if ( v33 )
  {
    v35 = *(_QWORD *)(v33 + 8);
    if ( v35 )
      v34 = *(_QWORD *)(v35 + 16);
  }
  if ( v26 == v34 && (v20 & 0x30000000) == 0x10000000 )
    v36 = 1;
  else
LABEL_75:
    v36 = 0;
  v79 = *((_BYTE *)a1 + 67) & 2 | v78 & 0xFFFFFFFC | ((v20 & 0x10000000) != 0);
  VerifyChildMenu(a1, v27);
  ((void (__fastcall *)(struct tagWND *))(&grpVisCompStyleChangeAction)[v79])(a1);
  if ( v31 != v36 )
  {
    if ( v31 )
    {
      DecVisWindows((__int64)a1);
    }
    else
    {
      IncVisWindows((__int64)a1);
      if ( (*((_BYTE *)a1 + 66) & 8) == 0 )
        ComposeWindowIfNeeded(a1, 0);
    }
  }
  v37 = *((_QWORD *)a1 + 3);
  if ( !v37
    || (*(_DWORD *)(gpsi + 2104LL) & 8) == 0
    || ((*(_DWORD *)(gptiCurrent + 656LL) | *(_DWORD *)(**(_QWORD **)(gptiCurrent + 440LL) + 16LL)) & 0x800) == 0
    && !*(_QWORD *)(*(_QWORD *)(v37 + 8) + 184LL) )
  {
    goto LABEL_149;
  }
  v38 = *((_QWORD *)a1 + 13);
  if ( !v38 )
    goto LABEL_149;
  v39 = *(_QWORD *)(v37 + 8);
  v40 = 0LL;
  if ( v39 )
    v40 = *(_QWORD *)(v39 + 16);
  if ( v38 != v40 )
    goto LABEL_149;
  if ( (*((_BYTE *)a1 + 66) & 4) != 0 )
    goto LABEL_100;
  if ( *((char *)a1 + 64) >= 0 && (*((_BYTE *)a1 + 67) & 8) == 0 )
  {
    if ( (*((_BYTE *)a1 + 61) & 2) == 0 )
      goto LABEL_192;
    v41 = *((_QWORD *)a1 + 15);
    if ( !v41 )
      goto LABEL_100;
    if ( (*(_BYTE *)(v41 + 61) & 2) == 0 )
    {
LABEL_192:
      if ( (*((_BYTE *)a1 + 60) & 0x40) != 0
        || (v42 = *((_BYTE *)a1 + 70), (v42 & 0xA) != 0) && ((v42 & 0xC0) != 0 || (*((_BYTE *)a1 + 71) & 0x20) != 0) )
      {
        if ( (unsigned int)Is31TrayWindow(a1) )
        {
LABEL_100:
          for ( j = a1; ; j = (struct tagWND *)*((_QWORD *)j + 13) )
          {
            if ( (*((_BYTE *)j + 71) & 0x10) == 0 && (*((_BYTE *)j + 65) & 8) == 0 )
            {
              v44 = 0;
              goto LABEL_107;
            }
            if ( (*((_WORD *)j + 41) & 0x3FFF) == 0x29D )
              break;
          }
          v44 = 1;
LABEL_107:
          if ( v6 != v44 )
          {
            v45 = *(_QWORD *)a1;
            v46 = *(_QWORD *)(gptiCurrent + 432LL);
            if ( v6 )
              PostIAMShellHookMessageEx(v46, 22LL, v45);
            else
              PostIAMShellHookMessageEx(v46, 17LL, v45);
          }
        }
      }
    }
  }
LABEL_149:
  v56 = *((_DWORD *)a1 + 16);
  v57 = *((_DWORD *)a1 + 17);
  if ( (v56 & 1) != 0
    || (v56 & 0x20000) == 0
    && ((v57 & 0x40000) != 0
     || (v58 = v57 & 0xC00000, v58 == 0x400000)
     || v58 == 12582912 && (*((_BYTE *)a1 + 61) & 2) != 0) )
  {
    *((_BYTE *)a1 + 65) |= 1u;
  }
  else
  {
    ClrWFNoDwmNotify(a1, 2305LL);
  }
  if ( (unsigned int)IsWindowDesktopComposed(a1)
    && (v60 = v82,
        v61 = *(_QWORD *)a1,
        v62 = ReferenceDwmApiPort(v59),
        v63 = (void *)v62,
        _InterlockedIncrement64(&g_cDWMWindowUniqueness),
        v62) )
  {
    v76 = v60;
    memset(&v72[1], 0, 32);
    v74 = v61;
    v64 = a2;
    v75 = a2;
    v72[0] = 0x8000003C0014LL;
    v73 = 1073741846;
    LpcRequestPort(v62, v72);
    ObfDereferenceObject(v63);
  }
  else
  {
    v64 = a2;
  }
  v65 = *((_QWORD *)a1 + 3);
  if ( !v65
    || (*(_DWORD *)(gpsi + 2104LL) & 8) == 0
    || ((*(_DWORD *)(gptiCurrent + 656LL) | *(_DWORD *)(**(_QWORD **)(gptiCurrent + 440LL) + 16LL)) & 0x800) == 0
    && !*(_QWORD *)(*(_QWORD *)(v65 + 8) + 184LL) )
  {
    goto LABEL_180;
  }
  v66 = *((_QWORD *)a1 + 13);
  if ( !v66 )
    goto LABEL_180;
  v67 = *(_QWORD *)(v65 + 8);
  v68 = 0LL;
  if ( v67 )
    v68 = *(_QWORD *)(v67 + 16);
  if ( v66 != v68 )
    goto LABEL_180;
  if ( (*((_BYTE *)a1 + 66) & 4) != 0 )
    goto LABEL_181;
  if ( *((char *)a1 + 64) < 0 || (*((_BYTE *)a1 + 67) & 8) != 0 )
    goto LABEL_180;
  if ( (*((_BYTE *)a1 + 61) & 2) != 0 )
  {
    v69 = *((_QWORD *)a1 + 15);
    if ( !v69 )
      goto LABEL_181;
    if ( (*(_BYTE *)(v69 + 61) & 2) != 0 )
      goto LABEL_180;
  }
  if ( (*((_BYTE *)a1 + 60) & 0x40) != 0
    || (v70 = *((_BYTE *)a1 + 70), (v70 & 0xA) != 0) && ((v70 & 0xC0) != 0 || (*((_BYTE *)a1 + 71) & 0x20) != 0) )
  {
    v13 = Is31TrayWindow(a1);
  }
  else
  {
LABEL_180:
    v13 = 0;
  }
LABEL_181:
  if ( v16 != v13 )
  {
    if ( v16 )
    {
      v71 = 18LL;
LABEL_186:
      PostIAMShellHookMessageEx(*(_QWORD *)(gptiCurrent + 432LL), v71, *(_QWORD *)a1);
      goto LABEL_187;
    }
    if ( (unsigned int)IsWindowVisible(a1) )
    {
      v71 = 17LL;
      goto LABEL_186;
    }
  }
LABEL_187:
  if ( (*((_BYTE *)a1 + 61) & 2) != 0 )
    xxxSendMessage(a1, 125LL, v64, &v81);
  return v81;
}
