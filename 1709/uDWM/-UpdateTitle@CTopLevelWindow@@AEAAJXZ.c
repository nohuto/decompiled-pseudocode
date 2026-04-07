/*
 * XREFs of ?UpdateTitle@CTopLevelWindow@@AEAAJXZ @ 0x18001A0AC
 * Callers:
 *     ?ValidateVisual@CTopLevelWindow@@UEAAJXZ @ 0x18001A860 (-ValidateVisual@CTopLevelWindow@@UEAAJXZ.c)
 * Callees:
 *     ?SetText@CText@@QEAAJPEBG@Z @ 0x180014B28 (-SetText@CText@@QEAAJPEBG@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18002BDF0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CTopLevelWindow::UpdateTitle(CText **this)
{
  unsigned int v1; // ebx
  int v3; // eax

  v1 = 0;
  if ( this[64] )
  {
    v3 = CText::SetText(this[64], *((const unsigned __int16 **)this[90] + 2));
    v1 = v3;
    if ( v3 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v3, 0x126Bu);
  }
  return v1;
}
