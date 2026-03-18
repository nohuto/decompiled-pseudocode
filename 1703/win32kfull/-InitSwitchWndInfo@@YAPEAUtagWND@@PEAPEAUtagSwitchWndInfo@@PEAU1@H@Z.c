/*
 * XREFs of ?InitSwitchWndInfo@@YAPEAUtagWND@@PEAPEAUtagSwitchWndInfo@@PEAU1@H@Z @ 0x1C01CADC4
 * Callers:
 *     xxxNextWindow @ 0x1C01CC154 (xxxNextWindow.c)
 *     xxxOldNextWindow @ 0x1C01CC84C (xxxOldNextWindow.c)
 * Callees:
 *     GetDPIServerInfo @ 0x1C000E928 (GetDPIServerInfo.c)
 *     HMValidateHandleNoSecure @ 0x1C0053930 (HMValidateHandleNoSecure.c)
 *     W32GetThreadWin32Thread @ 0x1C0054B98 (W32GetThreadWin32Thread.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0055C44 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     FreeHwndList @ 0x1C00693F0 (FreeHwndList.c)
 *     BuildHwndList @ 0x1C0069470 (BuildHwndList.c)
 *     _GetKeyState @ 0x1C00B89D4 (_GetKeyState.c)
 *     ?NextPrevTaskIndex@@YAHPEAUtagSwitchWndInfo@@HHH@Z @ 0x1C01CB1E0 (-NextPrevTaskIndex@@YAHPEAUtagSwitchWndInfo@@HHH@Z.c)
 *     ?_RemoveNonTaskWindows@@YAHPEAUtagBWL@@PEAUtagWND@@PEAHPEAPEAPEAUHWND__@@@Z @ 0x1C01CB2B0 (-_RemoveNonTaskWindows@@YAHPEAUtagBWL@@PEAUtagWND@@PEAHPEAPEAPEAUHWND__@@@Z.c)
 *     _GetNextQueueWindow @ 0x1C01CBF24 (_GetNextQueueWindow.c)
 */

struct tagWND *__fastcall InitSwitchWndInfo(struct tagSwitchWndInfo **a1, struct tagWND *a2, int a3)
{
  unsigned int v3; // edi
  __int64 v6; // r14
  __int64 v7; // rbx
  __int64 v8; // r13
  struct tagBWL *v9; // rax
  struct tagBWL *v10; // r15
  int v11; // esi
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rbx
  int v16; // r12d
  INT v17; // eax
  int v18; // edx
  __int64 PrevTaskIndex; // r8
  int v20; // r14d
  int v21; // eax
  bool v22; // zf
  int v23; // esi
  __int64 v24; // rcx
  int v25; // r15d
  int v26; // eax
  int v27; // r9d
  int v28; // edx
  int v29; // r10d
  _DWORD *v30; // rdi
  int v31; // r11d
  int v32; // r8d
  int v33; // r10d
  int v34; // ecx
  int v35; // r9d
  int v36; // [rsp+20h] [rbp-58h]
  HWND *v37; // [rsp+28h] [rbp-50h] BYREF
  int *DPIServerInfo; // [rsp+30h] [rbp-48h]
  int v41; // [rsp+98h] [rbp+20h] BYREF

  v3 = 0;
  v6 = 0LL;
  v7 = *(_QWORD *)(gptiCurrent + 416LL);
  v8 = *(_QWORD *)(GetDispInfo(a1) + 88);
  *a1 = 0LL;
  v9 = BuildHwndList(*(_QWORD *)(*(_QWORD *)(v7 + 16) + 112LL), 2, 0LL);
  v10 = v9;
  if ( !v9 )
  {
LABEL_40:
    LOBYTE(v3) = (GetKeyState(0x10u) & 0x8000u) != 0LL;
    return (struct tagWND *)GetNextQueueWindow(a2, v3, 0LL);
  }
  v11 = _RemoveNonTaskWindows(v9, a2, &v41, &v37);
  if ( v11 < 2 )
  {
    if ( v11 != 1
      || (v12 = HMValidateHandleNoSecure(*((_QWORD *)v10 + 4), 1), (v6 = v12) != 0)
      && (*(_BYTE *)(v12 + 63) & 7) == 1
      && a2 == (struct tagWND *)v12 )
    {
      v6 = *(_QWORD *)(v7 + 160);
    }
LABEL_9:
    FreeHwndList(v10);
    if ( v6 )
      return (struct tagWND *)v6;
    goto LABEL_40;
  }
  v13 = Win32AllocPoolWithQuota(120LL, 1818325845LL);
  v14 = v13;
  if ( !v13 )
    goto LABEL_9;
  *(_QWORD *)(v13 + 8) = gptiCurrent;
  *(_QWORD *)(v13 + 16) = v10;
  *(_QWORD *)(v13 + 24) = v37;
  *(_DWORD *)(v13 + 40) = v11;
  *(_DWORD *)(v13 + 44) = v11;
  if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) != 0 )
    v16 = *(_DWORD *)(gpsi + 1924LL);
  else
    v16 = *(_DWORD *)(gpsi + 2312LL);
  v17 = EngMulDiv(11, *(unsigned __int16 *)(gpsi + 8678LL), 96);
  v18 = v41;
  *(_DWORD *)(v14 + 112) = v16;
  v36 = v16 + v17;
  *(_DWORD *)(v14 + 116) = v16 + v17;
  PrevTaskIndex = (int)NextPrevTaskIndex((struct tagSwitchWndInfo *)v14, v18, 1, a3 == 0);
  v20 = v11;
  *(_QWORD *)(v14 + 32) = (char *)v10 + 8 * PrevTaskIndex + 32;
  if ( gnFastAltTabColumns < v11 )
    v20 = gnFastAltTabColumns;
  v21 = v11 / v20;
  v22 = v11 == v20 * (v11 / v20);
  v23 = v11 % v20;
  v24 = !v22;
  v25 = v24 + v21;
  v26 = gnFastAltTabRows;
  if ( v25 <= gnFastAltTabRows )
  {
    *(_DWORD *)(v14 + 48) = 0;
  }
  else
  {
    v25 = gnFastAltTabRows;
    *(_DWORD *)(v14 + 48) = 1;
    v23 = v20;
    *(_DWORD *)(v14 + 44) = v20 * v26;
  }
  *(_DWORD *)(v14 + 56) = v20;
  *(_DWORD *)(v14 + 60) = v25;
  if ( !v23 )
    v23 = v20;
  *(_DWORD *)(v14 + 64) = v23;
  if ( (int)PrevTaskIndex < v20 * v25 )
  {
    v29 = 0;
    v27 = (int)PrevTaskIndex / v20;
    v24 = (unsigned int)(v20 * ((int)PrevTaskIndex / v20));
    v28 = (int)PrevTaskIndex % v20;
  }
  else
  {
    v27 = (v25 >> 2) + 1;
    v28 = (v20 >> 2) + 1;
    v29 = PrevTaskIndex - v20 * v27 - v28;
  }
  *(_DWORD *)(v14 + 52) = v29;
  *(_DWORD *)(v14 + 72) = v27;
  *(_DWORD *)(v14 + 68) = v28;
  DPIServerInfo = (int *)GetDPIServerInfo(v24);
  if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) == 0
    && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
    && (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL) + 52LL) & 1) != 0 )
  {
    v30 = (_DWORD *)(*(_QWORD *)(v8 + 40) + 44LL);
  }
  else if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) == 1
         && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
         && (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL)
                       + 52LL) & 1) != 0 )
  {
    v30 = (_DWORD *)(*(_QWORD *)(v8 + 40) + 60LL);
  }
  else
  {
    v30 = (_DWORD *)(*(_QWORD *)(v8 + 40) + 28LL);
  }
  v31 = *DPIServerInfo;
  v32 = DPIServerInfo[5];
  v33 = v16 / 2 + DPIServerInfo[4] + v36 * gnFastAltTabColumns + 6 * *DPIServerInfo;
  if ( v30[2] - *v30 < v33 )
    v33 = v30[2] - *v30;
  v34 = v30[3] - v30[1];
  *(_DWORD *)(v14 + 76) = v33;
  v35 = v36 * v25 + v16 + v32 / 2 + 2 * v32;
  if ( v34 < v35 )
    v35 = v34;
  *(_DWORD *)(v14 + 80) = v35;
  if ( v25 == 1 )
    v20 = v23;
  *(_DWORD *)(v14 + 88) = v16 >> 1;
  *(_DWORD *)(v14 + 84) = (v33 + -4 * v31 - v36 * v20) >> 1;
  *(_QWORD *)v14 = gpswiFirst;
  gpswiFirst = (struct tagSwitchWndInfo *)v14;
  *a1 = (struct tagSwitchWndInfo *)v14;
  return (struct tagWND *)HMValidateHandleNoSecure(**(_QWORD **)(v14 + 32), 1);
}
