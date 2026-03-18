/*
 * XREFs of ?IsRoute@TargetingInfo@@QEBA_NXZ @ 0x1801CEAD0
 * Callers:
 *     ?TargetPointer@CManipulationManager@@AEAAXPEAVCManipulationContext@@PEAVCManipulationFrame@@KPEAPEAX@Z @ 0x1801D0D0C (-TargetPointer@CManipulationManager@@AEAAXPEAVCManipulationContext@@PEAVCManipulationFrame@@KPEA.c)
 * Callees:
 *     <none>
 */

bool __fastcall TargetingInfo::IsRoute(TargetingInfo *this)
{
  bool result; // al

  if ( *(_DWORD *)this == 2 )
    return 0;
  result = 1;
  if ( *(_DWORD *)this == 1 && !*((_QWORD *)this + 1) )
    return 0;
  return result;
}
