/*
 * XREFs of ?ShouldAttachDevice@MobileTouchProcessor@@UEAA_NPEAUDeviceInfo@@@Z @ 0x18006A9C0
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 *     ?CreateChildInputProcessor@@YAJW4InputType@@PEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z @ 0x1800365C0 (-CreateChildInputProcessor@@YAJW4InputType@@PEAUInputProcessorCreateParams@@PEAPEAUIInputProcess.c)
 *     ?IsMobileTouchDevice@MobileTouchProcessor@@SAHPEBUDeviceInfo@@@Z @ 0x18006A940 (-IsMobileTouchDevice@MobileTouchProcessor@@SAHPEBUDeviceInfo@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

char __fastcall MobileTouchProcessor::ShouldAttachDevice(MobileTouchProcessor *this, struct DeviceInfo *a2)
{
  __int64 v5; // rax
  __int64 v6; // rcx
  int ChildInputProcessor; // eax
  __int64 v8; // rcx
  _QWORD v9[4]; // [rsp+30h] [rbp-38h] BYREF
  int v10; // [rsp+50h] [rbp-18h]
  char v11; // [rsp+54h] [rbp-14h]

  if ( (unsigned int)MobileTouchProcessor::IsMobileTouchDevice(a2) )
  {
    if ( (*((_BYTE *)a2 + 4) & 8) != 0 && !*((_QWORD *)this + 22) )
    {
      *((_QWORD *)this + 22) = a2;
      return 1;
    }
    if ( *((char *)a2 + 4) < 0 && !*((_QWORD *)this + 23) )
    {
      *((_QWORD *)this + 23) = a2;
      *((_DWORD *)a2 + 1) |= 8u;
      v5 = *((_QWORD *)this + 23);
      v9[3] = 0LL;
      v10 = -1;
      v6 = *((_QWORD *)this + 21);
      v9[0] = v5;
      v9[1] = *((_QWORD *)this + 3);
      v11 = 1;
      v9[2] = this;
      if ( v6 )
      {
        *((_QWORD *)this + 21) = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
      }
      ChildInputProcessor = CreateChildInputProcessor(128, v9, (__int64)this + 168);
      if ( ChildInputProcessor >= 0 )
        return 1;
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
        McTemplateU0qqq(v8, &MinInput_Warning_CheckResult, 0, 179, ChildInputProcessor);
    }
  }
  return 0;
}
