/*
 * XREFs of ?GetImmersiveRealmFallbackWindow@@YAPEAUtagWND@@PEBU1@@Z @ 0x1C00B3CA8
 * Callers:
 *     xxxActivateWindow @ 0x1C00B3994 (xxxActivateWindow.c)
 * Callees:
 *     FBadWindow @ 0x1C00B3C74 (FBadWindow.c)
 */

struct tagWND *__fastcall GetImmersiveRealmFallbackWindow(const struct tagWND *a1)
{
  int v1; // eax
  __int64 v2; // rbx

  if ( a1 )
  {
    v1 = *((_DWORD *)a1 + 80);
    if ( v1 == 2 || v1 == 16 )
      return 0LL;
  }
  v2 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 408LL) + 296LL);
  if ( (unsigned int)FBadWindow(v2) )
    return 0LL;
  else
    return (struct tagWND *)v2;
}
