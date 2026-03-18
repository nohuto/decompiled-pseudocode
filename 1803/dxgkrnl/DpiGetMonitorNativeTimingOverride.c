/*
 * XREFs of DpiGetMonitorNativeTimingOverride @ 0x1C020B3B8
 * Callers:
 *     ?_RetrieveIntegratedPanelNativeOverride@DXGMONITOR@@QEAAJXZ @ 0x1C023B704 (-_RetrieveIntegratedPanelNativeOverride@DXGMONITOR@@QEAAJXZ.c)
 * Callees:
 *     memset @ 0x1C001C940 (memset.c)
 *     DpiFdoGetChildDescriptor @ 0x1C00396A8 (DpiFdoGetChildDescriptor.c)
 */

__int64 __fastcall DpiGetMonitorNativeTimingOverride(__int64 a1, int a2, _OWORD *a3)
{
  unsigned int v4; // esi
  _QWORD *ChildDescriptor; // rbx
  __int64 v6; // rbx

  v4 = -1071841279;
  ChildDescriptor = DpiFdoGetChildDescriptor(*(_QWORD *)(a1 + 64), a2);
  memset(a3, 0, 0x38uLL);
  if ( ChildDescriptor )
  {
    v6 = ChildDescriptor[12];
    if ( v6 && RtlCompareMemory(a3, (const void *)(v6 + 8), 0x38uLL) != 56 )
    {
      v4 = 0;
      *a3 = *(_OWORD *)(v6 + 8);
      a3[1] = *(_OWORD *)(v6 + 24);
      a3[2] = *(_OWORD *)(v6 + 40);
      *((_QWORD *)a3 + 6) = *(_QWORD *)(v6 + 56);
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v4;
}
