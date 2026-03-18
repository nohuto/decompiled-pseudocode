/*
 * XREFs of xxxSetThreadDesktop @ 0x1C008C4B4
 * Callers:
 *     xxxRestoreCsrssThreadDesktop @ 0x1C00484B0 (xxxRestoreCsrssThreadDesktop.c)
 *     xxxSetCsrssThreadDesktop @ 0x1C0048FF0 (xxxSetCsrssThreadDesktop.c)
 *     NtUserSetThreadDesktop @ 0x1C008B5B0 (NtUserSetThreadDesktop.c)
 *     ?xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z @ 0x1C00DF4D0 (-xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z.c)
 *     ?DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z @ 0x1C011B4F0 (-DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z.c)
 *     xxxNextWindow @ 0x1C01D04FC (xxxNextWindow.c)
 * Callees:
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     zzzSetDesktop @ 0x1C008C630 (zzzSetDesktop.c)
 *     MapDesktop @ 0x1C008E520 (MapDesktop.c)
 *     zzzAttachToQueue @ 0x1C00CAED8 (zzzAttachToQueue.c)
 *     xxxSetForegroundWindow2 @ 0x1C00CDBE4 (xxxSetForegroundWindow2.c)
 *     MagContextThreadCallout @ 0x1C01A8010 (MagContextThreadCallout.c)
 */

__int64 __fastcall xxxSetThreadDesktop(__int64 a1, __int64 a2)
{
  __int64 *v4; // rsi
  __int64 v5; // rax
  __int64 result; // rax
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  int v12; // edx
  __int64 v13; // rax
  __int64 v14; // rdx
  int v15; // [rsp+20h] [rbp-28h] BYREF
  __int64 v16; // [rsp+28h] [rbp-20h]
  __int64 v17; // [rsp+30h] [rbp-18h]
  int v18; // [rsp+38h] [rbp-10h]
  int v19; // [rsp+3Ch] [rbp-Ch]

  v4 = *(__int64 **)(gptiCurrent + 400LL);
  if ( !a2 || (v5 = *v4, v15 = 1, v16 = v5, v17 = a2, v18 = 0, v19 = 1, result = MapDesktop(&v15), (int)result >= 0) )
  {
    if ( PsGetCurrentProcess(a1, a2) != gpepCSRSS )
    {
      if ( *(_DWORD *)(gptiCurrent + 868LL)
        || *(_DWORD *)(gptiCurrent + 656LL)
        || (v8 = *(_QWORD *)(gptiCurrent + 432LL)) != 0
        && (v9 = *(_QWORD *)(v8 + 216)) != 0
        && *(_QWORD *)(v9 + 32) == gptiCurrent )
      {
        UserSetLastError(170LL, v7);
        return 2147483665LL;
      }
      if ( !v4[39] && a1 )
      {
        LockObjectAssignment(v4 + 39, a2);
        v4[46] = a1;
      }
    }
    if ( *(_QWORD *)(gptiCurrent + 432LL) != a2 && (*(_DWORD *)(gptiCurrent + 1184LL) & 8) != 0 )
      MagContextThreadCallout(*(_QWORD *)&gMagnContext, gptiCurrent, 0LL, 1LL);
    v10 = *(_QWORD *)(gptiCurrent + 432LL);
    if ( v10 != a2 )
    {
      v11 = *(_QWORD *)(gptiCurrent + 408LL);
      if ( *(_DWORD *)(v11 + 384) > 1u )
      {
        v13 = AllocQueue(0LL);
        if ( !v13 )
        {
          UserSetLastError(8LL, v14);
          return 3221225495LL;
        }
        ++*(_DWORD *)(v13 + 384);
        zzzAttachToQueue(gptiCurrent, (struct tagQ *)v13);
      }
      else if ( v11 == gpqForeground )
      {
        xxxSetForegroundWindow2(0LL);
      }
      else if ( !v10 )
      {
        v12 = (gdwGTERMFlags & 1) - 1;
        *(_DWORD *)(gptiCurrent + 728LL) = v12;
        *(_DWORD *)(v11 + 376) = v12;
      }
    }
    return zzzSetDesktop(gptiCurrent);
  }
  return result;
}
