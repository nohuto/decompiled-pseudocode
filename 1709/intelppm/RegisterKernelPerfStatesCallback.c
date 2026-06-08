/*
 * XREFs of RegisterKernelPerfStatesCallback @ 0x1C001D480
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C0002CD8 (WPP_RECORDER_SF_D.c)
 *     _guard_dispatch_icall_nop @ 0x1C0004CB0 (_guard_dispatch_icall_nop.c)
 */

__int64 RegisterKernelPerfStatesCallback()
{
  int v0; // ebx
  int v2; // [rsp+28h] [rbp-10h]

  v0 = ((__int64 (*)(void))qword_1C00197D8)();
  if ( v0 < 0 )
  {
    v2 = v0;
    WPP_RECORDER_SF_D(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      3u,
      0x1Fu,
      (__int64)&WPP_3f0965cfccb23b2033a01e6dc5919532_Traceguids,
      v2);
  }
  return (unsigned int)v0;
}
