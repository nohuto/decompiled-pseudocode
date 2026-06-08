/*
 * XREFs of PepNotifyPerfConstraints @ 0x1C000993C
 * Callers:
 *     RegisterKernelPepPerf @ 0x1C001FDF0 (RegisterKernelPepPerf.c)
 *     PepUpdatePerformanceConstraintWorker @ 0x1C002BCC0 (PepUpdatePerformanceConstraintWorker.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C0001374 (WPP_RECORDER_SF_D.c)
 */

__int64 __fastcall PepNotifyPerfConstraints(__int64 a1, _DWORD *a2, _DWORD *a3)
{
  __int64 v3; // rcx
  int v6; // eax
  unsigned int v7; // ebx
  int v9; // [rsp+28h] [rbp-10h]
  __int64 v10; // [rsp+40h] [rbp+8h] BYREF

  v3 = *(_QWORD *)(a1 + 1088);
  v10 = 0LL;
  v6 = PoFxProcessorNotification(v3, 12LL, &v10);
  v7 = v6;
  if ( v6 >= 0 )
  {
    *a2 = v10;
    *a3 = HIDWORD(v10);
  }
  else
  {
    v9 = v6;
    WPP_RECORDER_SF_D(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      2u,
      0x23u,
      (__int64)&WPP_c5c7ce996b8d3bf3de21e73d0ef31f21_Traceguids,
      v9);
  }
  return v7;
}
