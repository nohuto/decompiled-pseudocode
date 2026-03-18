/*
 * XREFs of ACPILoadProcessFACS @ 0x1C009A774
 * Callers:
 *     ACPILoadProcessFADT @ 0x1C009A88C (ACPILoadProcessFADT.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C00019EC (WPP_RECORDER_SF_D.c)
 *     _guard_dispatch_icall_nop @ 0x1C00041D0 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_ @ 0x1C0009204 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_q @ 0x1C00299A8 (WPP_RECORDER_SF_q.c)
 */

__int64 ACPILoadProcessFACS()
{
  unsigned int v0; // ebx
  __int64 v1; // rax
  int v2; // edx
  __int64 v3; // rdi
  int v4; // edx

  v0 = 0;
  v1 = (*(__int64 (**)(void))(PmHalDispatchTable + 104))();
  v3 = v1;
  if ( v1 )
  {
    if ( *(_DWORD *)(v1 + 4) == 64 )
    {
      LOBYTE(v2) = 2;
      WPP_RECORDER_SF_q(
        WPP_GLOBAL_Control->DeviceExtension,
        v2,
        6,
        15,
        (__int64)&WPP_ed917bd00cfd3c06aafe64848ab367c8_Traceguids,
        v1);
      *((_QWORD *)AcpiInformation + 2) = v3;
      *((_QWORD *)AcpiInformation + 5) = v3 + 16;
      LOBYTE(v4) = 4;
      WPP_RECORDER_SF_D(
        WPP_GLOBAL_Control->DeviceExtension,
        v4,
        6,
        16,
        (__int64)&WPP_ed917bd00cfd3c06aafe64848ab367c8_Traceguids,
        *(_DWORD *)(v3 + 16));
      return v0;
    }
    LOBYTE(v2) = 2;
    WPP_RECORDER_SF_q(
      WPP_GLOBAL_Control->DeviceExtension,
      v2,
      6,
      14,
      (__int64)&WPP_ed917bd00cfd3c06aafe64848ab367c8_Traceguids,
      v1);
  }
  else
  {
    LOBYTE(v2) = 2;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v2,
      6,
      13,
      (__int64)&WPP_ed917bd00cfd3c06aafe64848ab367c8_Traceguids);
  }
  return (unsigned int)-1072431079;
}
