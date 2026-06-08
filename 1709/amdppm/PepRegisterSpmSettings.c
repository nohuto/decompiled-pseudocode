/*
 * XREFs of PepRegisterSpmSettings @ 0x1C002D5AC
 * Callers:
 *     RegisterKernelPepIdleStates @ 0x1C0025BE0 (RegisterKernelPepIdleStates.c)
 *     RegisterIdleComplete @ 0x1C002623C (RegisterIdleComplete.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C000134C (WPP_RECORDER_SF_D.c)
 *     _guard_dispatch_icall_nop @ 0x1C000C6F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall PepRegisterSpmSettings(__int64 a1)
{
  __int64 v1; // rcx
  int v2; // eax
  __int64 v3; // rcx
  int v4; // eax
  __int64 v5; // [rsp+48h] [rbp+10h] BYREF

  if ( !PepSpmHandleQueried && (*(_DWORD *)(a1 + 264) & 0x800LL) != 0 )
  {
    v1 = *(_QWORD *)(a1 + 1088);
    v5 = 0LL;
    PepSpmHandleQueried = 1;
    v2 = PoFxProcessorNotification(v1, 17LL, &v5);
    v3 = 0LL;
    if ( v2 >= 0 )
      v3 = v5;
    if ( v3 )
    {
      v4 = ((__int64 (*)(void))qword_1C0011600)();
      if ( v4 < 0 )
        WPP_RECORDER_SF_D(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          2u,
          3u,
          0x14u,
          (__int64)&WPP_8339d009578e31aa40b3fb467d4dc632_Traceguids,
          v4);
    }
  }
}
