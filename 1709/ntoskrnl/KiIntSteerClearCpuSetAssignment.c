/*
 * XREFs of KiIntSteerClearCpuSetAssignment @ 0x14020B96C
 * Callers:
 *     KeIntSteerAssignCpuSet @ 0x14020B7C4 (KeIntSteerAssignCpuSet.c)
 *     KeIntSteerAssignCpuSetForGsiv @ 0x14020B860 (KeIntSteerAssignCpuSetForGsiv.c)
 *     KiIntSteerAssignCpuSet @ 0x14020B910 (KiIntSteerAssignCpuSet.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiIntSteerClearCpuSetAssignment(__int64 a1)
{
  __int64 result; // rax

  result = 0LL;
  if ( *(_QWORD *)(a1 + 136) )
  {
    *(_WORD *)(a1 + 144) = 0;
    *(_QWORD *)(a1 + 136) = 0LL;
    *(_QWORD *)(a1 + 176) = 0LL;
  }
  return result;
}
