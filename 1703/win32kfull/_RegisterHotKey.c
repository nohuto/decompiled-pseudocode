/*
 * XREFs of _RegisterHotKey @ 0x1C00BD09C
 * Callers:
 *     xxxSetShellWindow @ 0x1C00154D0 (xxxSetShellWindow.c)
 *     RawInputThread @ 0x1C004A5F0 (RawInputThread.c)
 *     SetWindowArrangementHotKeys @ 0x1C00BB190 (SetWindowArrangementHotKeys.c)
 *     ?SetWinlogonHotKeys@@YAXXZ @ 0x1C00BB690 (-SetWinlogonHotKeys@@YAXXZ.c)
 *     NtUserRegisterHotKey @ 0x1C00BCFA0 (NtUserRegisterHotKey.c)
 *     _RegisterWindowArrangementCallout @ 0x1C00F66E0 (_RegisterWindowArrangementCallout.c)
 *     SetDebugHotKeys @ 0x1C011B188 (SetDebugHotKeys.c)
 * Callees:
 *     IsShellProcess @ 0x1C001BECC (IsShellProcess.c)
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     ?FindHotKey@@YAHPEAUtagTHREADINFO@@PEAUtagWND@@HIIHPEAPEAUtagHOTKEY@@@Z @ 0x1C00BD31C (-FindHotKey@@YAHPEAUtagTHREADINFO@@PEAUtagWND@@HIIHPEAPEAUtagHOTKEY@@@Z.c)
 *     CheckWinstaAttributeAccess @ 0x1C00BD550 (CheckWinstaAttributeAccess.c)
 */

__int64 __fastcall RegisterHotKey(struct tagWND *a1, __int64 a2, int a3, __int16 a4, ULONG_PTR BugCheckParameter2)
{
  __int64 v9; // rcx
  BOOL v10; // r15d
  __int64 v11; // rcx
  __int16 v12; // di
  unsigned __int16 v13; // si
  unsigned int v14; // edi
  struct tagHOTKEY *v15; // rcx
  __int64 v16; // rbx
  __int64 v17; // rcx
  __int64 v19; // rax
  _DWORD *i; // rcx
  __int64 v21; // rcx
  __int16 v22; // dx
  struct tagHOTKEY *v23[2]; // [rsp+40h] [rbp-38h] BYREF

  if ( PsGetCurrentProcess(a1) != gpepCSRSS && grpWinStaList && !(unsigned int)CheckWinstaAttributeAccess(0x10u)
    || (_DWORD)BugCheckParameter2 == 231 )
  {
    return 0LL;
  }
  v10 = a4 < 0 && PsGetCurrentProcess(v9) == gpepCSRSS;
  v11 = *(_QWORD *)(gptiCurrent + 376LL);
  v12 = a4 & 0x7FFF;
  v13 = v12 & 0x7800;
  v14 = v12 & 0xF;
  if ( *(int *)(v11 + 12) < 0 )
  {
    v13 |= 0x2000u;
  }
  else if ( (v13 & 0x2000) != 0 && !(unsigned int)IsShellProcess(v11) && !a2 )
  {
    v21 = 5LL;
LABEL_29:
    UserSetLastError(v21);
    return 0LL;
  }
  if ( (unsigned __int64)a1 >= 2 && *((_QWORD *)a1 + 2) != gptiCurrent )
  {
    v21 = 1408LL;
    goto LABEL_29;
  }
  if ( (unsigned int)FindHotKey(gptiCurrent, a1, a3, v14, BugCheckParameter2, 0, v23) )
  {
    v21 = 1409LL;
    goto LABEL_29;
  }
  v15 = v23[0];
  if ( v23[0] )
  {
    v22 = *((_WORD *)v23[0] + 13);
    if ( v22 < 0 || v10 )
      KeBugCheckEx(
        0x164u,
        0x10uLL,
        *((unsigned int *)v23[0] + 7) | 0x80000000LL,
        *((unsigned __int16 *)v23[0] + 12),
        (unsigned __int16)v22);
    *((_WORD *)v23[0] + 13) = v13;
    *((_WORD *)v15 + 12) = v14;
    *((_DWORD *)v15 + 7) = BugCheckParameter2;
    goto LABEL_20;
  }
  v16 = Win32AllocPool(48LL, 1802007381LL);
  if ( v16 )
  {
    if ( v10 )
    {
      v19 = 0LL;
      for ( i = (_DWORD *)&WPP_MAIN_CB.Queue.Wcb.CurrentIrp + 1; *i; i += 2 )
      {
        v19 = (unsigned int)(v19 + 1);
        if ( (unsigned int)v19 >= 2 )
        {
          Win32FreePool(v16);
          KeBugCheckEx(0x164u, 0x10uLL, (unsigned int)BugCheckParameter2, v14, v13);
        }
      }
      *((_DWORD *)&WPP_MAIN_CB.Queue.Wcb.CurrentIrp + 2 * v19 + 1) = BugCheckParameter2;
      *((_DWORD *)&WPP_MAIN_CB.Queue.Wcb.CurrentIrp + 2 * v19) = v14;
    }
    *(_QWORD *)v16 = gptiCurrent;
    if ( (unsigned __int64)a1 < 2 )
    {
      *(_QWORD *)(v16 + 16) = a1;
    }
    else
    {
      v23[1] = a1;
      v23[0] = (struct tagHOTKEY *)(v16 + 16);
      *(_QWORD *)(v16 + 16) = 0LL;
      HMAssignmentLock(v23);
    }
    *(_DWORD *)(v16 + 32) = a3;
    if ( v10 )
      *(_WORD *)(v16 + 26) = 0x8000;
    else
      *(_WORD *)(v16 + 26) = 0;
    *(_WORD *)(v16 + 26) |= v13;
    *(_WORD *)(v16 + 24) = v14;
    *(_DWORD *)(v16 + 28) = BugCheckParameter2;
    *(_QWORD *)(v16 + 8) = a2;
    v17 = *(_BYTE *)(v16 + 28) & 0x7F;
    *(_QWORD *)(v16 + 40) = *((_QWORD *)&WPP_MAIN_CB.DeviceQueue.Type + v17);
    *((_QWORD *)&WPP_MAIN_CB.DeviceQueue.Type + v17) = v16;
LABEL_20:
    qword_1C032C3A8 = 0LL;
    return 1LL;
  }
  return 0LL;
}
