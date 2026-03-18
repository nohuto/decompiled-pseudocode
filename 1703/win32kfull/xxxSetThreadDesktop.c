/*
 * XREFs of xxxSetThreadDesktop @ 0x1C001A398
 * Callers:
 *     xxxSetCsrssThreadDesktop @ 0x1C0017ED0 (xxxSetCsrssThreadDesktop.c)
 *     NtUserSetThreadDesktop @ 0x1C001A310 (NtUserSetThreadDesktop.c)
 *     ?xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z @ 0x1C003CF20 (-xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z.c)
 *     xxxRestoreCsrssThreadDesktop @ 0x1C00C7A50 (xxxRestoreCsrssThreadDesktop.c)
 *     ?DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z @ 0x1C0111624 (-DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z.c)
 *     xxxNextWindow @ 0x1C01CC154 (xxxNextWindow.c)
 * Callees:
 *     zzzSetDesktop @ 0x1C001A520 (zzzSetDesktop.c)
 *     MapDesktop @ 0x1C001B370 (MapDesktop.c)
 *     RemovePtiFromShellMiPList @ 0x1C001BFA0 (RemovePtiFromShellMiPList.c)
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     xxxSetForegroundWindow2 @ 0x1C00B489C (xxxSetForegroundWindow2.c)
 *     zzzAttachToQueue @ 0x1C00B66AC (zzzAttachToQueue.c)
 *     MagContextThreadCallout @ 0x1C01EBC20 (MagContextThreadCallout.c)
 */

__int64 __fastcall xxxSetThreadDesktop(__int64 a1, __int64 a2)
{
  __int64 *v4; // rsi
  __int64 v5; // rax
  __int64 result; // rax
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  int v11; // edx
  __int64 v12; // rax
  int v13; // [rsp+20h] [rbp-28h] BYREF
  __int64 v14; // [rsp+28h] [rbp-20h]
  __int64 v15; // [rsp+30h] [rbp-18h]
  int v16; // [rsp+38h] [rbp-10h]
  int v17; // [rsp+3Ch] [rbp-Ch]

  v4 = *(__int64 **)(gptiCurrent + 376LL);
  if ( !a2 || (v5 = *v4, v13 = 1, v14 = v5, v15 = a2, v16 = 0, v17 = 1, result = MapDesktop(&v13), (int)result >= 0) )
  {
    if ( PsGetCurrentProcess(a1) != gpepCSRSS )
    {
      if ( *(_DWORD *)(gptiCurrent + 780LL)
        || *(_DWORD *)(gptiCurrent + 600LL)
        || (v7 = *(_QWORD *)(gptiCurrent + 408LL)) != 0
        && (v8 = *(_QWORD *)(v7 + 216)) != 0
        && *(_QWORD *)(v8 + 32) == gptiCurrent )
      {
        UserSetLastError(170LL);
        return 2147483665LL;
      }
      RemovePtiFromShellMiPList(gptiCurrent);
      if ( !v4[38] && a1 )
      {
        LockObjectAssignment(v4 + 38, a2);
        v4[45] = a1;
      }
    }
    if ( *(_QWORD *)(gptiCurrent + 408LL) != a2 && (*(_DWORD *)(gptiCurrent + 1096LL) & 8) != 0 )
      MagContextThreadCallout(*(_QWORD *)&gMagnContext, gptiCurrent, 0LL, 1LL);
    v9 = *(_QWORD *)(gptiCurrent + 408LL);
    if ( v9 != a2 )
    {
      v10 = *(_QWORD *)(gptiCurrent + 384LL);
      if ( *(_DWORD *)(v10 + 344) > 1u )
      {
        v12 = AllocQueue(0LL, 0LL);
        if ( !v12 )
        {
          UserSetLastError(8LL);
          return 3221225495LL;
        }
        ++*(_DWORD *)(v12 + 344);
        zzzAttachToQueue(gptiCurrent, (struct tagQ *)v12);
      }
      else if ( v10 == gpqForeground )
      {
        xxxSetForegroundWindow2(0LL);
      }
      else if ( !v9 )
      {
        v11 = (gdwGTERMFlags & 1) - 1;
        *(_DWORD *)(gptiCurrent + 672LL) = v11;
        *(_DWORD *)(v10 + 336) = v11;
      }
    }
    return zzzSetDesktop(gptiCurrent);
  }
  return result;
}
