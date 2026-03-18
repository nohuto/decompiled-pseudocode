/*
 * XREFs of ?CompleteManipulation@CManipulation@@UEAAJW4InteractionState@@@Z @ 0x180167BA0
 * Callers:
 *     <none>
 * Callees:
 *     ?_SendUpdateToRenderThread@CManipulation@@AEAAJ_NPEBUD2DVector3@@1@Z @ 0x180168D1C (-_SendUpdateToRenderThread@CManipulation@@AEAAJ_NPEBUD2DVector3@@1@Z.c)
 *     ?_UpdateCaptureState@CManipulation@@AEAAX_N@Z @ 0x18016933C (-_UpdateCaptureState@CManipulation@@AEAAX_N@Z.c)
 */

__int64 __fastcall CManipulation::CompleteManipulation(CManipulation *a1)
{
  bool v1; // dl
  CManipulation *v2; // rcx
  const struct D2DVector3 *v3; // r8
  int v4; // r9d

  CManipulation::_UpdateCaptureState(a1, 0);
  if ( *((_DWORD *)v2 + 55) != v4 )
  {
    *((_DWORD *)v2 + 55) = v4;
    LODWORD(v3) = CManipulation::_SendUpdateToRenderThread(v2, v1, v3, 0LL);
  }
  return (unsigned int)v3;
}
