/*
 * XREFs of zzzPostInertiaMessage @ 0x1C020DBB4
 * Callers:
 *     ?xxxInertiaPTPTimerProc@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C01B23B0 (-xxxInertiaPTPTimerProc@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     ?xxxInertiaTimerProc@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C01B24A0 (-xxxInertiaTimerProc@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     ?zzzSendEndInertia@@YAXPEAUtagTPSTATE@@H@Z @ 0x1C01B3DAC (-zzzSendEndInertia@@YAXPEAUtagTPSTATE@@H@Z.c)
 *     SendPTPEndInertia @ 0x1C01B4330 (SendPTPEndInertia.c)
 *     EditionPostInertiaMessage @ 0x1C01C0760 (EditionPostInertiaMessage.c)
 * Callees:
 *     _PostThreadMessage @ 0x1C009E634 (_PostThreadMessage.c)
 *     _PostMessage @ 0x1C00C91E0 (_PostMessage.c)
 *     ?xxxRouteSyntheticTouchpadToMT@@YAHIUtagPOINT@@0_K@Z @ 0x1C020D430 (-xxxRouteSyntheticTouchpadToMT@@YAHIUtagPOINT@@0_K@Z.c)
 */

__int64 __fastcall zzzPostInertiaMessage(unsigned int a1, __int64 a2, struct tagPOINT a3, struct tagPOINT a4, int a5)
{
  unsigned __int16 x; // bx
  __int64 v9; // rax
  __int64 v10; // rcx
  unsigned __int16 y; // [rsp+44h] [rbp+1Ch]

  y = a3.y;
  x = a3.x;
  if ( a1 - 571 <= 1 )
  {
    if ( (*(_DWORD *)(a2 + 136) & 0x10) != 0 )
    {
      if ( a5 )
        return xxxRouteSyntheticTouchpadToMT(a1, a3, a4, *(_QWORD *)(a2 + 8));
    }
    else
    {
      v9 = ValidateHwnd(*(_QWORD *)(a2 + 120));
      if ( v9 && *(char *)(v9 + 60) >= 0 && *(char *)(v9 + 59) >= 0 )
      {
        if ( (*(_DWORD *)(a2 + 136) & 2) == 0 )
          return PostMessage(v9, a1, *(_QWORD *)(a2 + 8), (struct _LARGE_STRING *)(x | (unsigned __int64)(y << 16)));
        v10 = *(_QWORD *)(v9 + 328);
        if ( v10 )
          return PostThreadMessage(v10, a1, *(_QWORD *)(a2 + 8), x | (unsigned __int64)(y << 16));
      }
    }
  }
  return 0LL;
}
