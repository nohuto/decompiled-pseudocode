/*
 * XREFs of zzzPostInertiaMessage @ 0x1C020AA48
 * Callers:
 *     ?xxxInertiaPTPTimerProc@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C01AF030 (-xxxInertiaPTPTimerProc@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     ?xxxInertiaTimerProc@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C01AF110 (-xxxInertiaTimerProc@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     ?zzzSendEndInertia@@YAXPEAUtagTPSTATE@@H@Z @ 0x1C01B09C4 (-zzzSendEndInertia@@YAXPEAUtagTPSTATE@@H@Z.c)
 *     SendPTPEndInertia @ 0x1C01B0F30 (SendPTPEndInertia.c)
 * Callees:
 *     _PostMessage @ 0x1C00B3950 (_PostMessage.c)
 *     _PostThreadMessage @ 0x1C00CBC1C (_PostThreadMessage.c)
 *     ?xxxRouteSyntheticTouchpadToMT@@YAHIUtagPOINT@@0_K@Z @ 0x1C020A28C (-xxxRouteSyntheticTouchpadToMT@@YAHIUtagPOINT@@0_K@Z.c)
 */

__int64 __fastcall zzzPostInertiaMessage(unsigned int a1, __int64 a2, struct tagPOINT a3, struct tagPOINT a4)
{
  unsigned __int16 x; // bx
  __int64 result; // rax
  __int64 v8; // r10
  unsigned __int16 y; // [rsp+44h] [rbp+1Ch]

  y = a3.y;
  x = a3.x;
  if ( a1 - 571 > 1 )
    return 0LL;
  if ( (*(_DWORD *)(a2 + 136) & 0x10) != 0 )
    return xxxRouteSyntheticTouchpadToMT(a1, a3, a4, *(_QWORD *)(a2 + 8));
  v8 = ValidateHwnd(*(_QWORD *)(a2 + 120));
  result = 0LL;
  if ( v8 && *(char *)(v8 + 60) >= 0 && *(char *)(v8 + 59) >= 0 )
  {
    if ( !__CFSHR__(*(_DWORD *)(a2 + 136), 2) )
      return PostMessage(v8, a1, *(_QWORD *)(a2 + 8), (struct _LARGE_STRING *)(x | ((unsigned __int64)y << 16)));
    if ( !*(_QWORD *)(v8 + 328) )
      return result;
    if ( __CFSHR__(*(_DWORD *)(a2 + 136), 2) )
      return PostThreadMessage(*(_QWORD *)(v8 + 328), a1, *(_QWORD *)(a2 + 8), x | ((unsigned __int64)y << 16));
    else
      return PostMessage(v8, a1, *(_QWORD *)(a2 + 8), (struct _LARGE_STRING *)(x | ((unsigned __int64)y << 16)));
  }
  return result;
}
