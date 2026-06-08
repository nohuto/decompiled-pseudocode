/*
 * XREFs of RegisterKernelPerfStatesCallback @ 0x1C001E4B0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C0001374 (WPP_RECORDER_SF_D.c)
 *     _guard_dispatch_icall_nop @ 0x1C000C910 (_guard_dispatch_icall_nop.c)
 */

__int64 RegisterKernelPerfStatesCallback()
{
  int v0; // eax
  unsigned int v1; // ebx
  int v3; // [rsp+28h] [rbp-10h]

  v0 = ((__int64 (*)(void))qword_1C0011618)();
  v1 = v0;
  if ( v0 < 0 )
  {
    v3 = v0;
    WPP_RECORDER_SF_D(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      3u,
      0x1Fu,
      (__int64)&WPP_14c59d34299f3db05cee826dbb435205_Traceguids,
      v3);
  }
  return v1;
}
