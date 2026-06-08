/*
 * XREFs of RegisterKernelCoordinatedStates @ 0x1C002FE90
 * Callers:
 *     RegisterIdleComplete @ 0x1C0022368 (RegisterIdleComplete.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C0002CD8 (WPP_RECORDER_SF_D.c)
 *     _guard_dispatch_icall_nop @ 0x1C0004CB0 (_guard_dispatch_icall_nop.c)
 *     ProcLibTraceCoordinatedIdleStates @ 0x1C0027114 (ProcLibTraceCoordinatedIdleStates.c)
 *     PepNotifyQueryCoordinatedStates @ 0x1C0031DCC (PepNotifyQueryCoordinatedStates.c)
 */

__int64 __fastcall RegisterKernelCoordinatedStates(__int64 a1)
{
  unsigned int v1; // edi
  int v2; // eax
  _QWORD *v3; // rbx
  PVOID v4; // rcx
  int v5; // eax
  PVOID P; // [rsp+48h] [rbp+10h] BYREF

  P = 0LL;
  if ( dword_1C0019B08 )
  {
    v2 = PepNotifyQueryCoordinatedStates(a1, &P);
    v3 = P;
    v1 = v2;
    if ( v2 >= 0 )
    {
      v4 = P;
      *(_DWORD *)P = dword_1C0019B08;
      v3[4] = PepQueryPlatformStateResidency;
      v3[2] = PepIdlePreExecute;
      v3[3] = PepIdleComplete;
      v5 = ((__int64 (__fastcall *)(PVOID))qword_1C0019810)(v4);
      v1 = v5;
      if ( v5 >= 0 )
      {
        qword_1C0019B18 = (__int64)v3;
        v3 = 0LL;
        ProcLibTraceCoordinatedIdleStates(0);
        v1 = 0;
      }
      else
      {
        WPP_RECORDER_SF_D(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          2u,
          3u,
          0x16u,
          (__int64)&WPP_3f0965cfccb23b2033a01e6dc5919532_Traceguids,
          v5);
      }
    }
    if ( v3 )
      ExFreePoolWithTag(v3, 0x72637250u);
  }
  else
  {
    return 0;
  }
  return v1;
}
