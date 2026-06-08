/*
 * XREFs of PepRegisterSpmSettings @ 0x1C001E3A0
 * Callers:
 *     RegisterIdleComplete @ 0x1C002010C (RegisterIdleComplete.c)
 *     RegisterKernelPepIdleStates @ 0x1C003163C (RegisterKernelPepIdleStates.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C0001D9C (WPP_RECORDER_SF_D.c)
 *     _guard_dispatch_icall_nop @ 0x1C0004F10 (_guard_dispatch_icall_nop.c)
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
      v4 = ((__int64 (*)(void))qword_1C001A7F0)();
      if ( v4 < 0 )
        WPP_RECORDER_SF_D(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          2u,
          3u,
          0x14u,
          (__int64)&WPP_03cea2f8b6a43217516e73b8caef141a_Traceguids,
          v4);
    }
  }
}
