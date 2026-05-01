/*
 * XREFs of ?_SetText@CDragVisual@@AEAAXPEBG@Z @ 0x1802F3A1C
 * Callers:
 *     ?SetAppLayout@CDragVisual@@UEAAJPEAUIAppLayout@@PEAUtagRECT@@@Z @ 0x1802F1760 (-SetAppLayout@CDragVisual@@UEAAJPEAUIAppLayout@@PEAUtagRECT@@@Z.c)
 * Callees:
 *     McTemplateU0 @ 0x18000ABDC (McTemplateU0.c)
 */

void __fastcall CDragVisual::_SetText(HWND *this, const unsigned __int16 *a2)
{
  __int64 v3; // rcx

  SetWindowTextW(this[19], a2);
  if ( *((_BYTE *)this + 272) )
  {
    if ( (Microsoft_Windows_Immersive_ShellEnableBits & 8) != 0 )
      McTemplateU0(v3, (__int64)&DragVisual_AppChange_Info);
  }
}
