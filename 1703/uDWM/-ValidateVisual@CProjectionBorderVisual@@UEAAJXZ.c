/*
 * XREFs of ?ValidateVisual@CProjectionBorderVisual@@UEAAJXZ @ 0x18007F0F0
 * Callers:
 *     <none>
 * Callees:
 *     ?ValidateVisual@CRenderDataVisual@@UEAAJXZ @ 0x18001EC70 (-ValidateVisual@CRenderDataVisual@@UEAAJXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18004DD44 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?_UpdateInstructions@CProjectionBorderVisual@@IEAAJXZ @ 0x18007F3A0 (-_UpdateInstructions@CProjectionBorderVisual@@IEAAJXZ.c)
 */

__int64 __fastcall CProjectionBorderVisual::ValidateVisual(CProjectionBorderVisual *this)
{
  int updated; // eax
  unsigned int v3; // ebx
  int v4; // eax

  if ( (*((_DWORD *)this + 20) & 0x4000) != 0 )
  {
    updated = CProjectionBorderVisual::_UpdateInstructions(this);
    v3 = updated;
    if ( updated < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, updated, 0x1Au);
      return v3;
    }
    *((_DWORD *)this + 20) &= ~0x4000u;
  }
  v4 = CRenderDataVisual::ValidateVisual(this);
  v3 = v4;
  if ( v4 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v4, 0x1Eu);
  return v3;
}
