/*
 * XREFs of ?UpdateTitle@CTopLevelWindow@@AEAAJXZ @ 0x1800253C0
 * Callers:
 *     ?ValidateVisual@CTopLevelWindow@@UEAAJXZ @ 0x180025B70 (-ValidateVisual@CTopLevelWindow@@UEAAJXZ.c)
 * Callees:
 *     ?SetText@CText@@QEAAJPEBG@Z @ 0x18001C468 (-SetText@CText@@QEAAJPEBG@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18004DD44 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CTopLevelWindow::UpdateTitle(CText **this)
{
  unsigned int v1; // ebx
  int v3; // eax

  v1 = 0;
  if ( this[64] )
  {
    v3 = CText::SetText(this[64], *((wchar_t **)this[90] + 2));
    v1 = v3;
    if ( v3 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, 0x1273u);
  }
  return v1;
}
