/*
 * XREFs of xxxSetWindowStyle @ 0x1C0050000
 * Callers:
 *     xxxSetModernAppWindow @ 0x1C0004A10 (xxxSetModernAppWindow.c)
 *     xxxSetWindowData @ 0x1C004EA08 (xxxSetWindowData.c)
 *     ?xxxEnumTurnOffCompositing@@YAHPEAUtagWND@@_J@Z @ 0x1C01C18C0 (-xxxEnumTurnOffCompositing@@YAHPEAUtagWND@@_J@Z.c)
 * Callees:
 *     SetOrClrWF @ 0x1C001C5B4 (SetOrClrWF.c)
 *     UnsetRedirectedWindow @ 0x1C001D5C8 (UnsetRedirectedWindow.c)
 *     UnsetLayeredWindow @ 0x1C001D9B4 (UnsetLayeredWindow.c)
 *     xxxSetLayeredWindow @ 0x1C001DD44 (xxxSetLayeredWindow.c)
 *     IncVisWindows @ 0x1C0021DA8 (IncVisWindows.c)
 *     DecVisWindows @ 0x1C0022068 (DecVisWindows.c)
 *     ComposeWindowIfNeeded @ 0x1C0022184 (ComposeWindowIfNeeded.c)
 *     SetRedirectedWindow @ 0x1C0022830 (SetRedirectedWindow.c)
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     xxxSendMessage @ 0x1C00509B0 (xxxSendMessage.c)
 *     IsTopLevelOrLayeredChildWindow @ 0x1C00626B0 (IsTopLevelOrLayeredChildWindow.c)
 *     _IsTopLevelWindow @ 0x1C00626F0 (_IsTopLevelWindow.c)
 *     xxxSetWindowPos @ 0x1C0063478 (xxxSetWindowPos.c)
 *     xxxRedrawWindow @ 0x1C0065644 (xxxRedrawWindow.c)
 *     GetStyleWindow @ 0x1C0067050 (GetStyleWindow.c)
 *     zzzLockDisplayAreaAndInvalidateDCCache @ 0x1C006CCF4 (zzzLockDisplayAreaAndInvalidateDCCache.c)
 *     PostIAMShellHookMessageEx @ 0x1C00B3840 (PostIAMShellHookMessageEx.c)
 *     GetAppCompatFlags2 @ 0x1C00C3100 (GetAppCompatFlags2.c)
 *     _IsWindowVisible @ 0x1C010838C (_IsWindowVisible.c)
 *     VerifyChildMenu @ 0x1C013E26C (VerifyChildMenu.c)
 *     _guard_dispatch_icall_nop @ 0x1C01400F0 (_guard_dispatch_icall_nop.c)
 *     ClrWFNoDwmNotify @ 0x1C01B5638 (ClrWFNoDwmNotify.c)
 *     xxxTurnOffCompositing @ 0x1C01C273C (xxxTurnOffCompositing.c)
 *     Is31TrayWindow @ 0x1C020AC64 (Is31TrayWindow.c)
 */

__int64 __fastcall xxxSetWindowStyle(struct tagWND *a1, __int64 a2, unsigned int a3)
{
  int v3; // r15d
  int v5; // r12d
  int v6; // r9d
  int v7; // r14d
  __int64 v8; // rcx
  bool v9; // zf
  unsigned int v10; // edi
  __int64 v12; // r8
  int v13; // esi
  __int64 v14; // rax
  int v15; // r13d
  __int64 v16; // rax
  char v17; // al
  __int64 CurrentProcessWin32Process; // rax
  int v19; // r8d
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  char v23; // cl
  __int64 v24; // r10
  BOOL v25; // r11d
  __int64 v26; // rcx
  __int64 v27; // rdx
  __int64 v28; // r9
  int v29; // r14d
  struct tagWND *i; // rcx
  __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rcx
  int v34; // edi
  __int64 v35; // r8
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // rax
  __int64 v39; // rax
  char v40; // al
  struct tagWND *j; // rcx
  int v42; // eax
  __int64 v43; // r8
  __int64 v44; // rcx
  unsigned int v45; // edi
  int v46; // ecx
  int v47; // ecx
  int v48; // edi
  int v49; // r14d
  unsigned int v50; // edx
  unsigned int v51; // eax
  unsigned int v52; // ecx
  int v53; // ecx
  int v54; // eax
  int v55; // eax
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // r8
  __int64 v59; // r9
  unsigned int v60; // r14d
  __int64 v61; // r15
  __int64 v62; // rax
  void *v63; // rdi
  int v64; // r15d
  __int64 v65; // r8
  __int64 v66; // rcx
  __int64 v67; // rdx
  __int64 v68; // rax
  __int64 v69; // rax
  char v70; // al
  __int64 v71; // rdx
  int v72; // [rsp+40h] [rbp-29h] BYREF
  __int16 v73; // [rsp+44h] [rbp-25h]
  int v74; // [rsp+46h] [rbp-23h]
  __int64 v75; // [rsp+4Ah] [rbp-1Fh]
  __int64 v76; // [rsp+52h] [rbp-17h]
  __int64 v77; // [rsp+5Ah] [rbp-Fh]
  _TBYTE v78; // [rsp+62h] [rbp-7h]
  __int64 v79; // [rsp+6Ch] [rbp+3h]
  int v80; // [rsp+74h] [rbp+Bh]
  unsigned int v81; // [rsp+78h] [rbp+Fh]
  int v82; // [rsp+D0h] [rbp+67h]
  int v83; // [rsp+D8h] [rbp+6Fh]
  int v84; // [rsp+E0h] [rbp+77h]
  unsigned int v85; // [rsp+E0h] [rbp+77h]
  unsigned int v86; // [rsp+E0h] [rbp+77h]
  unsigned int v87; // [rsp+E8h] [rbp+7Fh] BYREF
  unsigned int v88; // [rsp+ECh] [rbp+83h]

  v83 = a2;
  v3 = 0;
  v5 = 0;
  v6 = (*((_DWORD *)a1 + 16) >> 22) & 8;
  v7 = a2;
  v8 = (*((_DWORD *)a1 + 17) >> 26) & 4;
  v82 = 0;
  v84 = v8 | v6 & 0xFFFFFFFB;
  if ( (_DWORD)a2 != -16 )
  {
    v10 = *((_DWORD *)a1 + 16) & (((~(unsigned __int8)*((_DWORD *)a1 + 76) & 0x20) << 14) | 0xFFF7FFFF) & 0xA7F77FF;
    goto LABEL_5;
  }
  v9 = (*((_DWORD *)a1 + 16) & 0x800) == 0;
  v10 = *((_DWORD *)a1 + 17);
  v87 = v10;
  if ( !v9 )
  {
    v10 |= 0x10000000u;
LABEL_5:
    v87 = v10;
  }
  v9 = (*((_BYTE *)a1 + 61) & 2) == 0;
  v88 = a3;
  if ( !v9 )
  {
    xxxSendMessage(a1, 124LL, (int)a2, &v87);
    v8 = gSharedInfo[1];
    a2 = *(unsigned __int8 *)(LODWORD(gSharedInfo[2]) * (unsigned int)(unsigned __int16)*(_DWORD *)a1 + v8 + 25);
    if ( (a2 & 1) != 0 )
      return v10;
    v87 = v10;
  }
  v12 = *((_QWORD *)a1 + 3);
  v13 = 1;
  if ( !v12 )
    goto LABEL_31;
  v8 = gpsi;
  if ( (*(_DWORD *)(gpsi + 2104LL) & 8) == 0 )
    goto LABEL_31;
  v8 = **(_QWORD **)(gptiCurrent + 416LL);
  a2 = (unsigned int)(*(_DWORD *)(gptiCurrent + 600LL) | *(_DWORD *)(v8 + 16));
  if ( ((*(_WORD *)(gptiCurrent + 600LL) | *(_WORD *)(v8 + 16)) & 0x800) == 0
    && !*(_QWORD *)(*(_QWORD *)(v12 + 8) + 184LL) )
  {
    goto LABEL_31;
  }
  v8 = *((_QWORD *)a1 + 13);
  if ( !v8 )
    goto LABEL_31;
  a2 = *(_QWORD *)(v12 + 8);
  v14 = 0LL;
  if ( a2 )
    v14 = *(_QWORD *)(a2 + 16);
  if ( v8 != v14 )
    goto LABEL_31;
  if ( (*((_BYTE *)a1 + 66) & 4) != 0 )
  {
    v15 = 1;
    goto LABEL_32;
  }
  if ( *((char *)a1 + 64) < 0 || (*((_BYTE *)a1 + 67) & 8) != 0 )
    goto LABEL_31;
  if ( (*((_BYTE *)a1 + 61) & 2) != 0 )
  {
    v16 = *((_QWORD *)a1 + 15);
    if ( !v16 )
    {
      v15 = 1;
      goto LABEL_32;
    }
    if ( (*(_BYTE *)(v16 + 61) & 2) != 0 )
      goto LABEL_31;
  }
  if ( (*((_BYTE *)a1 + 60) & 0x40) != 0
    || (v17 = *((_BYTE *)a1 + 70), (v17 & 0xA) != 0) && ((v17 & 0xC0) != 0 || (*((_BYTE *)a1 + 71) & 0x20) != 0) )
  {
    v15 = Is31TrayWindow(a1);
  }
  else
  {
LABEL_31:
    v15 = 0;
  }
LABEL_32:
  if ( v7 != -16 )
  {
    if ( (GetAppCompatFlags2(1024LL) & 4) != 0 )
      v45 = v88 & 0x777FF;
    else
      v45 = v88 & 0xA7F77FF;
    v46 = v87 & 8;
    v88 = v45;
    if ( v46 != (v45 & 8) && ((*((_BYTE *)a1 + 61) & 2) != 0 || !HIWORD(v45)) )
    {
      v45 = v46 | v45 & 0xFFFFFFF7;
      v88 = v45;
    }
    v47 = v45 & 0x80000;
    if ( (((~(unsigned __int8)*((_DWORD *)a1 + 76) & 0x20) << 14) & *((_DWORD *)a1 + 16)) != 0 )
    {
      if ( v47 )
        goto LABEL_126;
      if ( (unsigned int)IsTopLevelOrLayeredChildWindow(a1) && !(unsigned int)IsTopLevelWindow(a1) )
        v5 = 1;
      UnsetLayeredWindow(a1, v5);
    }
    else
    {
      if ( !v47 )
        goto LABEL_126;
      if ( (int)xxxSetLayeredWindow(a1, 1, 0LL) < 0 )
        return 0LL;
    }
    v45 = v88;
LABEL_126:
    if ( ((*((_DWORD *)a1 + 16) & 0x200000) != 0) == ((v45 >> 21) & 1)
      && ((*((_DWORD *)a1 + 16) & 0x200000) == 0 || (v45 & 0x2000000) == 0) )
    {
      v48 = v45 & 0x2000000;
      v49 = *((_DWORD *)a1 + 16) & 0x2000000;
      if ( !v49 && v48 && GetStyleWindow(*((_QWORD *)a1 + 13), 2818LL) )
        return 0LL;
      LOBYTE(v3) = v48 != 0;
      v86 = (2 * v3) | (*((_DWORD *)a1 + 17) >> 28) & 1 | v84 & 0xFFFFFFFC;
      if ( v49 )
      {
        if ( !v48 )
        {
          UnsetRedirectedWindow(a1);
          ClrWFNoDwmNotify(a1, 2818LL);
        }
      }
      else if ( v48 )
      {
        if ( (int)SetRedirectedWindow(a1, 2) < 0 )
          return 0LL;
        SetOrClrWF(1, a1, 0xB02u, 0);
        v82 = 1;
      }
      ((void (__fastcall *)(struct tagWND *))(&grpVisCompStyleChangeAction)[v86])(a1);
      if ( v82 )
        xxxTurnOffCompositing(a1, 1LL);
      v50 = v88;
      v51 = v88;
      *((_DWORD *)a1 + 16) = v88 & 0xFDF7FFFF | *((_DWORD *)a1 + 16) & 0xF7888800;
      v52 = v87;
      if ( ((v87 ^ v51) & 0x407000) != 0 )
      {
        xxxSetWindowPos(a1, 0, 0, 55);
        v50 = v88;
        v52 = v87;
      }
      if ( ((v52 ^ v50) & 0x80000) != 0 && v5 )
        xxxRedrawWindow(a1);
      goto LABEL_148;
    }
    UserSetLastError(87LL);
    return 0LL;
  }
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v8, a2);
  v19 = v88;
  if ( CurrentProcessWin32Process != *(_QWORD *)(*((_QWORD *)a1 + 2) + 376LL)
    && *(_WORD *)(gpsi + 854LL) == *(_WORD *)(*((_QWORD *)a1 + 21) + 10LL)
    && (v87 & 0x20) != 0
    && (v88 & 0x20) == 0 )
  {
    UserSetLastError(5LL);
    return 0LL;
  }
  v20 = *((_QWORD *)a1 + 3);
  v21 = 0LL;
  if ( v20 )
  {
    v22 = *(_QWORD *)(v20 + 8);
    if ( v22 )
      v21 = *(_QWORD *)(v22 + 16);
  }
  if ( *((_QWORD *)a1 + 13) == v21 )
  {
    v19 = v88 | 0x4000000;
    v88 |= 0x4000000u;
  }
  if ( ((v87 ^ v19) & 0x6000000) != 0 )
  {
    zzzLockDisplayAreaAndInvalidateDCCache(a1, 1LL, 0LL);
    v19 = v88;
  }
  v23 = *((_BYTE *)a1 + 71);
  if ( (v23 & 0x40) == 0 && (v23 & 0x20) != 0 && (*((_BYTE *)a1 + 56) & 8) == 0 && (v19 & 0x20000000) == 0 )
  {
    v19 |= 0x20000000u;
    v88 = v19;
  }
  v24 = *((_QWORD *)a1 + 13);
  v25 = (v23 & 0xC0) == 64;
  if ( !v24 )
    goto LABEL_56;
  v26 = *((_QWORD *)a1 + 3);
  v27 = 0LL;
  if ( v26 )
  {
    v28 = *(_QWORD *)(v26 + 8);
    if ( v28 )
      v27 = *(_QWORD *)(v28 + 16);
  }
  if ( v24 != v27 || (v29 = 1, (*((_DWORD *)a1 + 17) & 0x30000000) != 0x10000000) )
LABEL_56:
    v29 = 0;
  if ( v15 )
  {
    for ( i = a1;
          (*((_BYTE *)i + 71) & 0x10) != 0 || (*((_BYTE *)i + 65) & 8) != 0;
          i = (struct tagWND *)*((_QWORD *)i + 13) )
    {
      if ( (*((_WORD *)i + 41) & 0x3FFF) == 0x29D )
      {
        v3 = 1;
        break;
      }
    }
  }
  *((_DWORD *)a1 + 17) = v19;
  if ( (v19 & 0x10000000) != 0 )
    *((_DWORD *)a1 + 16) |= 0x800u;
  else
    *((_DWORD *)a1 + 16) &= ~0x800u;
  if ( !v24 )
    goto LABEL_74;
  v31 = *((_QWORD *)a1 + 3);
  v32 = 0LL;
  if ( v31 )
  {
    v33 = *(_QWORD *)(v31 + 8);
    if ( v33 )
      v32 = *(_QWORD *)(v33 + 16);
  }
  if ( v24 == v32 && (v19 & 0x30000000) == 0x10000000 )
    v34 = 1;
  else
LABEL_74:
    v34 = 0;
  v85 = *((_BYTE *)a1 + 67) & 2 | v84 & 0xFFFFFFFC | ((v19 & 0x10000000) != 0);
  VerifyChildMenu(a1, v25);
  ((void (__fastcall *)(struct tagWND *))(&grpVisCompStyleChangeAction)[v85])(a1);
  if ( v29 != v34 )
  {
    if ( v29 )
    {
      DecVisWindows((__int64)a1);
    }
    else
    {
      IncVisWindows((__int64)a1);
      if ( (*((_BYTE *)a1 + 66) & 8) == 0 )
        ComposeWindowIfNeeded((__int64)a1, 0);
    }
  }
  v35 = *((_QWORD *)a1 + 3);
  if ( !v35
    || (*(_DWORD *)(gpsi + 2104LL) & 8) == 0
    || ((*(_DWORD *)(gptiCurrent + 600LL) | *(_DWORD *)(**(_QWORD **)(gptiCurrent + 416LL) + 16LL)) & 0x800) == 0
    && !*(_QWORD *)(*(_QWORD *)(v35 + 8) + 184LL) )
  {
    goto LABEL_148;
  }
  v36 = *((_QWORD *)a1 + 13);
  if ( !v36 )
    goto LABEL_148;
  v37 = *(_QWORD *)(v35 + 8);
  v38 = 0LL;
  if ( v37 )
    v38 = *(_QWORD *)(v37 + 16);
  if ( v36 != v38 )
    goto LABEL_148;
  if ( (*((_BYTE *)a1 + 66) & 4) != 0 )
    goto LABEL_99;
  if ( *((char *)a1 + 64) >= 0 && (*((_BYTE *)a1 + 67) & 8) == 0 )
  {
    if ( (*((_BYTE *)a1 + 61) & 2) == 0 )
      goto LABEL_191;
    v39 = *((_QWORD *)a1 + 15);
    if ( !v39 )
      goto LABEL_99;
    if ( (*(_BYTE *)(v39 + 61) & 2) == 0 )
    {
LABEL_191:
      if ( (*((_BYTE *)a1 + 60) & 0x40) != 0
        || (v40 = *((_BYTE *)a1 + 70), (v40 & 0xA) != 0) && ((v40 & 0xC0) != 0 || (*((_BYTE *)a1 + 71) & 0x20) != 0) )
      {
        if ( (unsigned int)Is31TrayWindow(a1) )
        {
LABEL_99:
          for ( j = a1; ; j = (struct tagWND *)*((_QWORD *)j + 13) )
          {
            if ( (*((_BYTE *)j + 71) & 0x10) == 0 && (*((_BYTE *)j + 65) & 8) == 0 )
            {
              v42 = 0;
              goto LABEL_106;
            }
            if ( (*((_WORD *)j + 41) & 0x3FFF) == 0x29D )
              break;
          }
          v42 = 1;
LABEL_106:
          if ( v3 != v42 )
          {
            v43 = *(_QWORD *)a1;
            v44 = *(_QWORD *)(gptiCurrent + 408LL);
            if ( v3 )
              PostIAMShellHookMessageEx(v44, 22LL, v43);
            else
              PostIAMShellHookMessageEx(v44, 17LL, v43);
          }
        }
      }
    }
  }
LABEL_148:
  v53 = *((_DWORD *)a1 + 16);
  v54 = *((_DWORD *)a1 + 17);
  if ( (v53 & 1) != 0
    || (v53 & 0x20000) == 0
    && ((v54 & 0x40000) != 0
     || (v55 = v54 & 0xC00000, v55 == 0x400000)
     || v55 == 12582912 && (*((_BYTE *)a1 + 61) & 2) != 0) )
  {
    *((_BYTE *)a1 + 65) |= 1u;
  }
  else
  {
    ClrWFNoDwmNotify(a1, 2305LL);
  }
  if ( (unsigned int)IsWindowDesktopComposed(a1)
    && (v60 = v88,
        v61 = *(_QWORD *)a1,
        v62 = ReferenceDwmApiPort(v57, v56, v58, v59),
        v63 = (void *)v62,
        _InterlockedIncrement64(&g_cDWMWindowUniqueness),
        v62) )
  {
    v74 = 0;
    *(_QWORD *)&v78 = 0LL;
    v75 = 0LL;
    v76 = 0LL;
    v77 = 0LL;
    v79 = v61;
    v64 = v83;
    v73 = 0x8000;
    v80 = v83;
    v72 = 3932180;
    *(_DWORD *)((char *)&v78 + 6) = 1073741846;
    v81 = v60;
    LpcRequestPort(v62, &v72);
    ObfDereferenceObject(v63);
  }
  else
  {
    v64 = v83;
  }
  v65 = *((_QWORD *)a1 + 3);
  if ( !v65
    || (*(_DWORD *)(gpsi + 2104LL) & 8) == 0
    || ((*(_DWORD *)(gptiCurrent + 600LL) | *(_DWORD *)(**(_QWORD **)(gptiCurrent + 416LL) + 16LL)) & 0x800) == 0
    && !*(_QWORD *)(*(_QWORD *)(v65 + 8) + 184LL) )
  {
    goto LABEL_179;
  }
  v66 = *((_QWORD *)a1 + 13);
  if ( !v66 )
    goto LABEL_179;
  v67 = *(_QWORD *)(v65 + 8);
  v68 = 0LL;
  if ( v67 )
    v68 = *(_QWORD *)(v67 + 16);
  if ( v66 != v68 )
    goto LABEL_179;
  if ( (*((_BYTE *)a1 + 66) & 4) != 0 )
    goto LABEL_180;
  if ( *((char *)a1 + 64) < 0 || (*((_BYTE *)a1 + 67) & 8) != 0 )
    goto LABEL_179;
  if ( (*((_BYTE *)a1 + 61) & 2) != 0 )
  {
    v69 = *((_QWORD *)a1 + 15);
    if ( !v69 )
      goto LABEL_180;
    if ( (*(_BYTE *)(v69 + 61) & 2) != 0 )
      goto LABEL_179;
  }
  if ( (*((_BYTE *)a1 + 60) & 0x40) != 0
    || (v70 = *((_BYTE *)a1 + 70), (v70 & 0xA) != 0) && ((v70 & 0xC0) != 0 || (*((_BYTE *)a1 + 71) & 0x20) != 0) )
  {
    v13 = Is31TrayWindow(a1);
  }
  else
  {
LABEL_179:
    v13 = 0;
  }
LABEL_180:
  if ( v15 != v13 )
  {
    if ( v15 )
    {
      v71 = 18LL;
LABEL_185:
      PostIAMShellHookMessageEx(*(_QWORD *)(gptiCurrent + 408LL), v71, *(_QWORD *)a1);
      goto LABEL_186;
    }
    if ( (unsigned int)IsWindowVisible(a1) )
    {
      v71 = 17LL;
      goto LABEL_185;
    }
  }
LABEL_186:
  if ( (*((_BYTE *)a1 + 61) & 2) != 0 )
    xxxSendMessage(a1, 125LL, v64, &v87);
  return v87;
}
