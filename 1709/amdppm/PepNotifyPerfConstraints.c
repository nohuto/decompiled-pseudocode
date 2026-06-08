/*
 * XREFs of PepNotifyPerfConstraints @ 0x1C000AC8C
 * Callers:
 *     RegisterKernelPepPerf @ 0x1C0029030 (RegisterKernelPepPerf.c)
 *     PepUpdatePerformanceConstraintWorker @ 0x1C002CE10 (PepUpdatePerformanceConstraintWorker.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C000134C (WPP_RECORDER_SF_D.c)
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
      (__int64)&WPP_b70b4e498b28328aa1f9660b11147ff3_Traceguids,
      v9);
  }
  return v7;
}
