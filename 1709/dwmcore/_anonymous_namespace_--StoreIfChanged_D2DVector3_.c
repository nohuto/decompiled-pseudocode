/*
 * XREFs of _anonymous_namespace_::StoreIfChanged_D2DVector3_ @ 0x1801701C4
 * Callers:
 *     ?UpdateOnManipulationThread@CManipulation@@UEAAJAEBUUpdateOnManipulationThreadArgs@@PEAUIManipulationTelemetryData@@@Z @ 0x180171140 (-UpdateOnManipulationThread@CManipulation@@UEAAJAEBUUpdateOnManipulationThreadArgs@@PEAUIManipul.c)
 * Callees:
 *     <none>
 */

char __fastcall anonymous_namespace_::StoreIfChanged_D2DVector3_(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // r8
  char result; // al

  v2 = *(_QWORD *)a1 - *(_QWORD *)a2;
  if ( *(_QWORD *)a1 == *(_QWORD *)a2 )
    v2 = *(unsigned int *)(a1 + 8) - (unsigned __int64)*(unsigned int *)(a2 + 8);
  result = 0;
  if ( v2 )
  {
    *(_QWORD *)a2 = *(_QWORD *)a1;
    *(_DWORD *)(a2 + 8) = *(_DWORD *)(a1 + 8);
    return 1;
  }
  return result;
}
