/*
 * XREFs of ?OnDeviceArrival@HeatProcessor@@QEAAJPEAUDeviceInfo@@@Z @ 0x18004805C
 * Callers:
 *     ?Initialize@HeatProcessor@@IEAAJPEAUDeviceInfo@@PEAUIInputProcessorHost@@@Z @ 0x180047BB0 (-Initialize@HeatProcessor@@IEAAJPEAUDeviceInfo@@PEAUIInputProcessorHost@@@Z.c)
 *     ?ShouldAttachDevice@HeatProcessor@@UEAA_NPEAUDeviceInfo@@@Z @ 0x180047FD0 (-ShouldAttachDevice@HeatProcessor@@UEAA_NPEAUDeviceInfo@@@Z.c)
 * Callees:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 *     ?GetHeatDeviceInfo@HeatProcessor@@AEAAXPEAUDeviceInfo@@PEAUHeatDeviceInfo@@@Z @ 0x18004824C (-GetHeatDeviceInfo@HeatProcessor@@AEAAXPEAUDeviceInfo@@PEAUHeatDeviceInfo@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HeatProcessor::OnDeviceArrival(HeatProcessor *this, struct DeviceInfo *a2)
{
  int v3; // eax
  __int64 v4; // rcx
  _BYTE v6[40]; // [rsp+30h] [rbp-28h] BYREF

  if ( !a2 )
  {
    if ( IsDebuggerPresent() )
      __debugbreak();
    __fastfail(7u);
  }
  if ( *((_QWORD *)this + 7) )
  {
    HeatProcessor::GetHeatDeviceInfo(this, a2, (struct HeatDeviceInfo *)v6);
    v3 = (*(__int64 (__fastcall **)(_QWORD, _BYTE *))(**((_QWORD **)this + 7) + 24LL))(*((_QWORD *)this + 7), v6);
    if ( v3 < 0 && (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      McTemplateU0qqq(v4, &MinInput_Warning_CheckResult, 0, 188, v3);
  }
  return 0LL;
}
