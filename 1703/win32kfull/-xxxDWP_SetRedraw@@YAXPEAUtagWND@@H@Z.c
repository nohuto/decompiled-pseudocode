/*
 * XREFs of ?xxxDWP_SetRedraw@@YAXPEAUtagWND@@H@Z @ 0x1C0107FCC
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C003EA18 (xxxRealDefWindowProc.c)
 * Callees:
 *     SetVisible @ 0x1C0021E80 (SetVisible.c)
 *     zzzLockDisplayAreaAndInvalidateDCCache @ 0x1C006CCF4 (zzzLockDisplayAreaAndInvalidateDCCache.c)
 *     ?SetRedrawProp@@YAXPEAUtagWND@@H@Z @ 0x1C010808C (-SetRedrawProp@@YAXPEAUtagWND@@H@Z.c)
 *     SpbCheckPwnd @ 0x1C01E3FA4 (SpbCheckPwnd.c)
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
