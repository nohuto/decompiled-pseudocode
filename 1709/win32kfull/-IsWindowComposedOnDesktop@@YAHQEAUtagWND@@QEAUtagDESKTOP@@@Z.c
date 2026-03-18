/*
 * XREFs of ?IsWindowComposedOnDesktop@@YAHQEAUtagWND@@QEAUtagDESKTOP@@@Z @ 0x1C0044380
 * Callers:
 *     zzzDecomposeDesktop @ 0x1C0044214 (zzzDecomposeDesktop.c)
 *     zzzComposeDesktop @ 0x1C0044710 (zzzComposeDesktop.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall IsWindowComposedOnDesktop(struct tagWND *const a1, struct tagDESKTOP *const a2)
{
  struct tagDESKTOP *v2; // r8
  _BOOL8 result; // rax

  v2 = (struct tagDESKTOP *)*((_QWORD *)a1 + 3);
  result = 0LL;
  if ( v2 )
  {
    if ( v2 == a2 )
      return (*((_BYTE *)a1 + 304) & 0x20) != 0;
  }
  return result;
}
