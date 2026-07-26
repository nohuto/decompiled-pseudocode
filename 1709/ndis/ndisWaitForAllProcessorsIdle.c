/*
 * XREFs of ndisWaitForAllProcessorsIdle @ 0x1C00F9AB8
 * Callers:
 *     ndisWaitForExternalDriver @ 0x1C00AB5E8 (ndisWaitForExternalDriver.c)
 *     ?ReportTimeout@NdisWatchdogState@@QEAAXXZ @ 0x1C00F9750 (-ReportTimeout@NdisWatchdogState@@QEAAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00245E0 (__security_check_cookie.c)
 */

void ndisWaitForAllProcessorsIdle()
{
  _GROUP_AFFINITY *p_PreviousAffinity; // r14
  USHORT ActiveGroupCount; // si
  USHORT i; // bx
  ULONG ActiveProcessorCount; // eax
  ULONG v4; // edi
  ULONG j; // ebp
  _GROUP_AFFINITY Affinity; // [rsp+20h] [rbp-48h] BYREF
  _GROUP_AFFINITY PreviousAffinity; // [rsp+30h] [rbp-38h] BYREF

  p_PreviousAffinity = &PreviousAffinity;
  Affinity.Mask = 0LL;
  *(_QWORD *)&Affinity.Group = 0LL;
  PreviousAffinity.Mask = 0LL;
  *(_QWORD *)&PreviousAffinity.Group = 0LL;
  ActiveGroupCount = KeQueryActiveGroupCount();
  for ( i = 0; i < ActiveGroupCount; ++i )
  {
    ActiveProcessorCount = KeQueryActiveProcessorCountEx(i);
    Affinity.Group = i;
    v4 = 0;
    for ( j = ActiveProcessorCount; v4 < j; p_PreviousAffinity = 0LL )
    {
      Affinity.Mask = 1LL << v4;
      KeSetSystemGroupAffinityThread(&Affinity, p_PreviousAffinity);
      ++v4;
    }
  }
  KeRevertToUserGroupAffinityThread(&PreviousAffinity);
}
