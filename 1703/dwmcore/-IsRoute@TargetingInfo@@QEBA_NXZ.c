/*
 * XREFs of ?IsRoute@TargetingInfo@@QEBA_NXZ @ 0x180134E98
 * Callers:
 *     ?TargetPointer@CManipulationManager@@AEAAXPEAVCManipulationContext@@PEAVCManipulationFrame@@KPEAPEAXPEAI@Z @ 0x1800CFA6C (-TargetPointer@CManipulationManager@@AEAAXPEAVCManipulationContext@@PEAVCManipulationFrame@@KPEA.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall TargetingInfo::IsRoute(TargetingInfo *this)
{
  __int64 result; // rax

  if ( *(_DWORD *)this == 2 )
    return 0LL;
  result = 1LL;
  if ( *(_DWORD *)this == 1 && !*((_QWORD *)this + 1) )
    return 0LL;
  return result;
}
