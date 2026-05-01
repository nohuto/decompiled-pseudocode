/*
 * XREFs of ?IsInHighZOrderBand@CClassicWindow@@UEBA_NXZ @ 0x180007E00
 * Callers:
 *     ?IsInHighZOrderBand@CClassicWindowExternal@@UEAAHXZ @ 0x180005800 (-IsInHighZOrderBand@CClassicWindowExternal@@UEAAHXZ.c)
 * Callees:
 *     <none>
 */

char __fastcall CClassicWindow::IsInHighZOrderBand(CClassicWindow *this)
{
  int WindowBand; // eax
  char v2; // cl
  int v4; // [rsp+30h] [rbp+8h] BYREF

  WindowBand = GetWindowBand(*((_QWORD *)this + 2), &v4);
  v2 = 0;
  if ( !WindowBand )
    return 0;
  if ( v4 == 2 || v4 == 16 )
    return 1;
  return v2;
}
