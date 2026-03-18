/*
 * XREFs of ?CompleteManipulation@CManipulation@@UEAAJW4InteractionState@@@Z @ 0x180199070
 * Callers:
 *     <none>
 * Callees:
 *     ?_SendUpdateToRenderThread@CManipulation@@AEAAJ_NPEBUD2DVector3@@1@Z @ 0x18019A670 (-_SendUpdateToRenderThread@CManipulation@@AEAAJ_NPEBUD2DVector3@@1@Z.c)
 *     ?_UpdateCaptureState@CManipulation@@AEAAX_N@Z @ 0x18019AC84 (-_UpdateCaptureState@CManipulation@@AEAAX_N@Z.c)
 */

__int64 __fastcall CManipulation::CompleteManipulation(__int64 a1)
{
  bool v1; // dl
  CManipulation *v2; // rcx
  const struct D2DVector3 *v3; // r8
  __int64 v4; // r9
  int v5; // r10d

  CManipulation::_UpdateCaptureState((CManipulation *)(a1 - 64), 0);
  if ( *(_DWORD *)(v4 + 164) != v5 )
  {
    *(_DWORD *)(v4 + 164) = v5;
    LODWORD(v3) = CManipulation::_SendUpdateToRenderThread(v2, v1, v3, 0LL);
  }
  return (unsigned int)v3;
}
