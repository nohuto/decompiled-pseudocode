/*
 * XREFs of ?xxxDWP_SetRedraw@@YAXPEAUtagWND@@H@Z @ 0x1C0111C44
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C0094260 (xxxRealDefWindowProc.c)
 * Callees:
 *     zzzLockDisplayAreaAndInvalidateDCCache @ 0x1C0071F0C (zzzLockDisplayAreaAndInvalidateDCCache.c)
 *     SetOrClrWF @ 0x1C008B874 (SetOrClrWF.c)
 *     SetVisible @ 0x1C0092DB0 (SetVisible.c)
 *     ?SetRedrawProp@@YAXPEAUtagWND@@H@Z @ 0x1C0111D00 (-SetRedrawProp@@YAXPEAUtagWND@@H@Z.c)
 *     SpbCheckPwnd @ 0x1C01EFFBC (SpbCheckPwnd.c)
 */

void __fastcall xxxDWP_SetRedraw(struct tagWND *a1, int a2)
{
  if ( a2 )
  {
    if ( (*((_BYTE *)a1 + 71) & 0x10) == 0 )
    {
      SetRedrawProp(a1, 0);
      SetVisible(a1, 1);
      if ( *(_QWORD *)(gpDispInfo + 24LL) )
        SpbCheckPwnd(a1);
      zzzLockDisplayAreaAndInvalidateDCCache((__int64)a1, 1, 0LL);
      SetOrClrWF(1, a1, 0x108u, 1);
    }
  }
  else if ( (*((_BYTE *)a1 + 71) & 0x10) != 0 )
  {
    if ( *(_QWORD *)(gpDispInfo + 24LL) )
      SpbCheckPwnd(a1);
    SetRedrawProp(a1, 1);
    SetVisible(a1, 2 * (*((_BYTE *)a1 + 61) & 1));
    zzzLockDisplayAreaAndInvalidateDCCache((__int64)a1, 1, 0LL);
  }
}
