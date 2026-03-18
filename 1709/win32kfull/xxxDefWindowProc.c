/*
 * XREFs of xxxDefWindowProc @ 0x1C0093900
 * Callers:
 *     xxxEventWndProc @ 0x1C0053E10 (xxxEventWndProc.c)
 *     xxxGetControlColor @ 0x1C007F8A4 (xxxGetControlColor.c)
 *     ?xxxGetColorObjects@@YAPEAUHBRUSH__@@PEAUtagWND@@PEAUHDC__@@@Z @ 0x1C0082D64 (-xxxGetColorObjects@@YAPEAUHBRUSH__@@PEAUtagWND@@PEAUHDC__@@@Z.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C00A8A60 (xxxSendTransformableMessageTimeout.c)
 *     ?xxxSendMessageToClient@@YAXPEAUtagWND@@I_K_JPEAUtagSMS@@HPEA_J@Z @ 0x1C00A9040 (-xxxSendMessageToClient@@YAXPEAUtagWND@@I_K_JPEAUtagSMS@@HPEA_J@Z.c)
 *     ?xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z @ 0x1C00DF4D0 (-xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z.c)
 *     xxxTooltipWndProc @ 0x1C0113E40 (xxxTooltipWndProc.c)
 *     xxxGetWindowText @ 0x1C013C8A4 (xxxGetWindowText.c)
 *     xxxSwitchWndProc @ 0x1C01D1410 (xxxSwitchWndProc.c)
 *     xxxMenuWindowProc @ 0x1C0209E90 (xxxMenuWindowProc.c)
 *     xxxSBWndProc @ 0x1C02110F0 (xxxSBWndProc.c)
 * Callees:
 *     xxxLoadUserApiHook @ 0x1C00586D0 (xxxLoadUserApiHook.c)
 *     xxxRealDefWindowProc @ 0x1C0094260 (xxxRealDefWindowProc.c)
 *     SfnDWORD @ 0x1C00AA690 (SfnDWORD.c)
 *     _guard_dispatch_icall_nop @ 0x1C0145690 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall xxxDefWindowProc(struct tagWND *a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // ebx
  unsigned int v9; // eax
  __int64 v10; // rax

  v4 = a2;
  if ( (_DWORD)a2 == 397 || (_DWORD)a2 == 325 )
    return 0LL;
  if ( gihmodUserApiHook < 0
    || *((char *)a1 + 59) < 0 && ((_DWORD)a2 != 130 || (*((_BYTE *)a1 + 58) & 4) == 0 || *((__int16 *)a1 + 41) < 0)
    || (*(_DWORD *)(gptiCurrent + 464LL) & 1) != 0
    || !(unsigned int)xxxLoadUserApiHook(gptiCurrent, a2) )
  {
    return xxxRealDefWindowProc(a1);
  }
  v9 = v4 & 0x1FFFF;
  if ( (*((_BYTE *)a1 + 58) & 8) != 0 )
  {
    if ( v9 < 0x400 )
      return ((__int64 (__fastcall *)(struct tagWND *, _QWORD, __int64, __int64, _QWORD, _QWORD, int, _QWORD))gapfnScSendMessage[(unsigned __int8)MessageTable[(unsigned __int16)v4]])(
               a1,
               v4,
               a3,
               a4,
               0LL,
               *(_QWORD *)(gpsi + 552LL),
               1,
               0LL);
    v10 = *(_QWORD *)(gpsi + 552LL);
    return SfnDWORD((_DWORD)a1, v4, a3, a4, 0LL, v10);
  }
  if ( v9 >= 0x400 )
  {
    v10 = *(_QWORD *)(gpsi + 736LL);
    return SfnDWORD((_DWORD)a1, v4, a3, a4, 0LL, v10);
  }
  return ((__int64 (__fastcall *)(struct tagWND *, _QWORD, __int64, __int64, _QWORD, _QWORD, _DWORD, _QWORD))gapfnScSendMessage[(unsigned __int8)MessageTable[(unsigned __int16)v4]])(
           a1,
           v4,
           a3,
           a4,
           0LL,
           *(_QWORD *)(gpsi + 736LL),
           0,
           0LL);
}
