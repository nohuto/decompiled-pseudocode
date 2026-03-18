/*
 * XREFs of ?GetLastNonBottomMostWindow@@YAPEAUtagWND@@PEAU1@H@Z @ 0x1C0058058
 * Callers:
 *     ?ValidateZorder@@YAHPEAUtagCVR@@@Z @ 0x1C0057CAC (-ValidateZorder@@YAHPEAUtagCVR@@@Z.c)
 *     CalcForegroundInsertAfter @ 0x1C00587B8 (CalcForegroundInsertAfter.c)
 * Callees:
 *     <none>
 */

struct tagWND *__fastcall GetLastNonBottomMostWindow(struct tagWND *a1, int a2)
{
  __int64 v2; // r9
  __int64 i; // r8

  v2 = 0LL;
  for ( i = *(_QWORD *)(*((_QWORD *)a1 + 13) + 112LL); i && (*(_BYTE *)(i + 60) & 0x20) == 0; i = *(_QWORD *)(i + 88) )
  {
    if ( !a2 || a1 != (struct tagWND *)i )
      v2 = i;
  }
  return (struct tagWND *)v2;
}
