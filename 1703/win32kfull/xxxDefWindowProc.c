/*
 * XREFs of xxxDefWindowProc @ 0x1C003E580
 * Callers:
 *     xxxGetControlColor @ 0x1C002931C (xxxGetControlColor.c)
 *     ?xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z @ 0x1C003CF20 (-xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C00530C0 (xxxSendTransformableMessageTimeout.c)
 *     ?xxxSendMessageToClient@@YAXPEAUtagWND@@I_K_JPEAUtagSMS@@HPEA_J@Z @ 0x1C00535C0 (-xxxSendMessageToClient@@YAXPEAUtagWND@@I_K_JPEAUtagSMS@@HPEA_J@Z.c)
 *     xxxEventWndProc @ 0x1C00C39F0 (xxxEventWndProc.c)
 *     ?xxxGetColorObjects@@YAPEAUHBRUSH__@@PEAUtagWND@@PEAUHDC__@@@Z @ 0x1C00D686C (-xxxGetColorObjects@@YAPEAUHBRUSH__@@PEAUtagWND@@PEAUHDC__@@@Z.c)
 *     xxxTooltipWndProc @ 0x1C010DBA0 (xxxTooltipWndProc.c)
 *     xxxGetWindowText @ 0x1C0138AA8 (xxxGetWindowText.c)
 *     xxxSwitchWndProc @ 0x1C01CD060 (xxxSwitchWndProc.c)
 *     xxxMenuWindowProc @ 0x1C0207D70 (xxxMenuWindowProc.c)
 *     xxxSBWndProc @ 0x1C020F940 (xxxSBWndProc.c)
 * Callees:
 *     xxxLoadUserApiHook @ 0x1C003C330 (xxxLoadUserApiHook.c)
 *     xxxRealDefWindowProc @ 0x1C003EA18 (xxxRealDefWindowProc.c)
 *     SfnDWORD @ 0x1C0054BC0 (SfnDWORD.c)
 *     _guard_dispatch_icall_nop @ 0x1C01400F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall xxxDefWindowProc(struct tagWND *a1, unsigned int a2, __int64 a3, __int64 a4)
{
  unsigned int v9; // eax
  __int64 v10; // rax

  if ( a2 == 397 || a2 == 325 )
    return 0LL;
  if ( gihmodUserApiHook < 0
    || *((char *)a1 + 59) < 0 && (a2 != 130 || (*((_BYTE *)a1 + 58) & 4) == 0 || *((__int16 *)a1 + 41) < 0)
    || (*(_DWORD *)(gptiCurrent + 440LL) & 1) != 0
    || !(unsigned int)xxxLoadUserApiHook(gptiCurrent) )
  {
    return xxxRealDefWindowProc(a1);
  }
  v9 = a2 & 0x1FFFF;
  if ( (*((_BYTE *)a1 + 58) & 8) != 0 )
  {
    if ( v9 < 0x400 )
      return ((__int64 (__fastcall *)(struct tagWND *, _QWORD, __int64, __int64, _QWORD, _QWORD, int, _QWORD))gapfnScSendMessage[(unsigned __int8)MessageTable[(unsigned __int16)a2]])(
               a1,
               a2,
               a3,
               a4,
               0LL,
               *(_QWORD *)(gpsi + 552LL),
               1,
               0LL);
    v10 = *(_QWORD *)(gpsi + 552LL);
    return SfnDWORD((_DWORD)a1, a2, a3, a4, 0LL, v10);
  }
  if ( v9 >= 0x400 )
  {
    v10 = *(_QWORD *)(gpsi + 736LL);
    return SfnDWORD((_DWORD)a1, a2, a3, a4, 0LL, v10);
  }
  return ((__int64 (__fastcall *)(struct tagWND *, _QWORD, __int64, __int64, _QWORD, _QWORD, _DWORD, _QWORD))gapfnScSendMessage[(unsigned __int8)MessageTable[(unsigned __int16)a2]])(
           a1,
           a2,
           a3,
           a4,
           0LL,
           *(_QWORD *)(gpsi + 736LL),
           0,
           0LL);
}
