/*
 * XREFs of _RegisterHotKey @ 0x1C0052DB4
 * Callers:
 *     NtUserRegisterHotKey @ 0x1C0052CC0 (NtUserRegisterHotKey.c)
 *     RawInputThread @ 0x1C0087D60 (RawInputThread.c)
 *     xxxSetShellWindow @ 0x1C00D5AE8 (xxxSetShellWindow.c)
 *     _RegisterWindowArrangementCallout @ 0x1C00D6230 (_RegisterWindowArrangementCallout.c)
 *     SetWindowArrangementHotKeys @ 0x1C011F4F0 (SetWindowArrangementHotKeys.c)
 *     ?SetWinlogonHotKeys@@YAXXZ @ 0x1C012033C (-SetWinlogonHotKeys@@YAXXZ.c)
 *     SetDebugHotKeys @ 0x1C0124F28 (SetDebugHotKeys.c)
 * Callees:
 *     ?FindHotKey@@YAHPEAUtagTHREADINFO@@PEAUtagWND@@HIIPEAPEAUtagHOTKEY@@@Z @ 0x1C00530B8 (-FindHotKey@@YAHPEAUtagTHREADINFO@@PEAUtagWND@@HIIPEAPEAUtagHOTKEY@@@Z.c)
 *     CheckWinstaAttributeAccess @ 0x1C0053250 (CheckWinstaAttributeAccess.c)
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     IsShellProcess @ 0x1C0090B7C (IsShellProcess.c)
 *     ?HKAddChildHotkey@@YA_NPEAUtagTHREADINFO@@PEAUtagHOTKEY@@PEAUtagWND@@HG@Z @ 0x1C01C6B0C (-HKAddChildHotkey@@YA_NPEAUtagTHREADINFO@@PEAUtagHOTKEY@@PEAUtagWND@@HG@Z.c)
 *     ?HKRemoveMatchingChildHotkeys@@YA_NPEAUtagHOTKEY@@PEAUtagTHREADINFO@@PEAUtagWND@@HW4HotkeyQueryType@@@Z @ 0x1C01C6C10 (-HKRemoveMatchingChildHotkeys@@YA_NPEAUtagHOTKEY@@PEAUtagTHREADINFO@@PEAUtagWND@@HW4HotkeyQueryT.c)
 */

_BOOL8 __fastcall RegisterHotKey(struct tagWND *a1, __int64 a2, int a3, __int16 a4, ULONG_PTR BugCheckParameter2)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  BOOL v10; // r12d
  __int16 v11; // si
  unsigned int v12; // r14d
  unsigned __int16 v13; // si
  int v14; // r8d
  struct tagHOTKEY *v15; // rbx
  __int64 v16; // rbx
  __int64 v17; // r8
  __int64 v18; // rcx
  struct tagHOTKEY * near *v20; // rbx
  __int16 v21; // ax
  __int64 v22; // rax
  _DWORD *i; // rcx
  __int64 v24; // rcx
  __int16 v25; // ax
  struct tagHOTKEY *v26[2]; // [rsp+40h] [rbp-10h] BYREF

  if ( PsGetCurrentProcess(a1, a2) != gpepCSRSS && grpWinStaList && !(unsigned int)CheckWinstaAttributeAccess(0x10u)
    || (_DWORD)BugCheckParameter2 == 231 )
  {
    return 0LL;
  }
  v10 = a4 < 0 && PsGetCurrentProcess(v9, v8) == gpepCSRSS;
  v11 = a4;
  v12 = a4 & 0xF;
  v13 = v11 & 0x7A00;
  if ( *(int *)(*(_QWORD *)(gptiCurrent + 400LL) + 12LL) < 0 )
  {
    v13 |= 0x2000u;
  }
  else if ( (v13 & 0x2000) != 0 && !(unsigned int)IsShellProcess() && !a2 )
  {
    v24 = 5LL;
LABEL_36:
    UserSetLastError(v24);
    return 0LL;
  }
  if ( (unsigned __int64)a1 >= 2 && *((_QWORD *)a1 + 2) != gptiCurrent )
  {
    v24 = 1408LL;
    goto LABEL_36;
  }
  if ( (v13 & 0x200) != 0 && (v10 || a2 || a1 == (struct tagWND *)1) )
    return 0LL;
  if ( !(unsigned int)FindHotKey(gptiCurrent, a1, a3, v12, BugCheckParameter2, v26) )
  {
    v15 = v26[0];
    if ( v26[0] )
    {
      v25 = *((_WORD *)v26[0] + 13);
      if ( v25 < 0 || v10 )
        KeBugCheckEx(
          0x164u,
          0x10uLL,
          *((unsigned int *)v26[0] + 7) | 0x80000000LL,
          *((unsigned __int16 *)v26[0] + 12),
          (unsigned __int16)v25);
      *((_WORD *)v26[0] + 13) = v13;
      if ( *((_WORD *)v15 + 12) != (_WORD)v12
        || *((_DWORD *)v15 + 7) != (_DWORD)BugCheckParameter2
        || (v13 & 0x200) == 0 )
      {
        HKRemoveMatchingChildHotkeys(v15, 0LL, 0LL, 0LL, 4);
      }
      *((_WORD *)v15 + 12) = v12;
      *((_DWORD *)v15 + 7) = BugCheckParameter2;
    }
    else
    {
      v16 = Win32AllocPool(64LL, 1802007381LL);
      if ( !v16 )
        return 0LL;
      if ( v10 )
      {
        v22 = 0LL;
        for ( i = (_DWORD *)&WPP_MAIN_CB.Queue.Wcb.DeviceObject + 1; *i; i += 2 )
        {
          v22 = (unsigned int)(v22 + 1);
          if ( (unsigned int)v22 >= 2 )
          {
            Win32FreePool(v16, 0LL, v17);
            KeBugCheckEx(0x164u, 0x10uLL, (unsigned int)BugCheckParameter2, v12, v13);
          }
        }
        *((_DWORD *)&WPP_MAIN_CB.Queue.Wcb.DeviceObject + 2 * v22 + 1) = BugCheckParameter2;
        *((_DWORD *)&WPP_MAIN_CB.Queue.Wcb.DeviceObject + 2 * v22) = v12;
      }
      *(_QWORD *)v16 = gptiCurrent;
      if ( (unsigned __int64)a1 < 2 )
      {
        *(_QWORD *)(v16 + 16) = a1;
      }
      else
      {
        v26[1] = a1;
        v26[0] = (struct tagHOTKEY *)(v16 + 16);
        *(_QWORD *)(v16 + 16) = 0LL;
        HMAssignmentLock(v26);
      }
      *(_DWORD *)(v16 + 32) = a3;
      if ( v10 )
        *(_WORD *)(v16 + 26) = 0x8000;
      else
        *(_WORD *)(v16 + 26) = 0;
      *(_WORD *)(v16 + 26) |= v13;
      *(_WORD *)(v16 + 24) = v12;
      *(_DWORD *)(v16 + 28) = BugCheckParameter2;
      *(_QWORD *)(v16 + 8) = a2;
      *(_QWORD *)(v16 + 56) = v16 + 48;
      *(_QWORD *)(v16 + 48) = v16 + 48;
      v18 = *(_BYTE *)(v16 + 28) & 0x7F;
      *(_QWORD *)(v16 + 40) = (&gphkHashTable)[v18];
      (&gphkHashTable)[v18] = (struct tagHOTKEY * near *)v16;
    }
    qword_1C0327628 = 0LL;
    return 1LL;
  }
  if ( a2 || v10 || a1 == (struct tagWND *)1 )
    return 0LL;
  v20 = (&gphkHashTable)[BugCheckParameter2 & 0x7F];
  if ( !v20 )
    goto LABEL_35;
  do
  {
    if ( __PAIR64__(*((_DWORD *)v20 + 7), *((unsigned __int16 *)v20 + 12)) == __PAIR64__(BugCheckParameter2, v12) )
      break;
    v20 = (struct tagHOTKEY * near *)v20[5];
  }
  while ( v20 );
  if ( !v20 || (v21 = *((_WORD *)v20 + 13), (v21 & 0x200) == 0) )
  {
LABEL_35:
    v24 = 1409LL;
    goto LABEL_36;
  }
  if ( (v13 & 0x200) != 0 )
  {
    if ( (v21 & 0x100) == 0 )
      return 0LL;
    if ( a1 )
    {
      v26[1] = a1;
      v26[0] = (struct tagHOTKEY *)(v20 + 2);
      v20[2] = 0LL;
      HMAssignmentLock(v26);
      v14 = a3;
    }
    else
    {
      v20[2] = 0LL;
    }
    *((_WORD *)v20 + 13) = v13;
    *v20 = (struct tagHOTKEY *)gptiCurrent;
    v20[1] = 0LL;
    *((_DWORD *)v20 + 8) = v14;
    return 1LL;
  }
  return HKAddChildHotkey(gptiCurrent, (struct tagHOTKEY *)v20, a1, v14, v13);
}
