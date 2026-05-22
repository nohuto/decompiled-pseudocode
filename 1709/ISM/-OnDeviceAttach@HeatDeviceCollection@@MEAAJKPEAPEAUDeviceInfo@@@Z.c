/*
 * XREFs of ?OnDeviceAttach@HeatDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x18009B100
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 *     ?FindDeviceId@RIMDeviceCollection@@IEAAJKPEAPEAVRIMDevice@@PEAK@Z @ 0x180089F60 (-FindDeviceId@RIMDeviceCollection@@IEAAJKPEAPEAVRIMDevice@@PEAK@Z.c)
 *     ?OnDeviceAttach@HIDDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x18009C9F0 (-OnDeviceAttach@HIDDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 *     memset @ 0x1800CAA5E (memset.c)
 *     ??2@YAPEAX_K@Z @ 0x1800CB4F0 (--2@YAPEAX_K@Z.c)
 */

__int64 __fastcall HeatDeviceCollection::OnDeviceAttach(
        HeatDeviceCollection *this,
        unsigned int a2,
        struct DeviceInfo **a3)
{
  void *v6; // rbx
  __int64 v7; // rcx
  unsigned int v8; // edi
  int v9; // eax
  __int64 v10; // rcx
  unsigned int *v11; // r9
  int DeviceId; // eax
  __int64 v13; // rcx
  __int64 v14; // rbx
  struct RIMDevice *v16; // [rsp+30h] [rbp-48h] BYREF
  _QWORD v17[5]; // [rsp+38h] [rbp-40h] BYREF
  struct DeviceInfo *v18; // [rsp+98h] [rbp+20h] BYREF

  v16 = 0LL;
  memset(v17, 0, sizeof(v17));
  v6 = operator new(0xA40uLL);
  memset(v6, 0, 0xA40uLL);
  v18 = (struct DeviceInfo *)v6;
  if ( v6 )
  {
    v9 = HIDDeviceCollection::OnDeviceAttach(this, a2, &v18);
    v8 = v9;
    if ( v9 >= 0 )
    {
      DeviceId = RIMDeviceCollection::FindDeviceId(this, a2, &v16, v11);
      v8 = DeviceId;
      if ( DeviceId >= 0 )
      {
        *a3 = v18;
        v14 = *((_QWORD *)v16 + 2);
        RIMEnableMonitorMappingForDevice(*((_QWORD *)this + 10), v14, 0LL);
        if ( (int)RIMGetDeviceProperties(*((_QWORD *)this + 10), v14, v17) >= 0 )
        {
          *((_QWORD *)*a3 + 2) = v17[1];
          *((_DWORD *)*a3 + 6) = v17[2];
        }
      }
      else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      {
        McTemplateU0qqq(v13, &MinInput_Warning_CheckResult, 0, 123, DeviceId);
      }
    }
    else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      McTemplateU0qqq(v10, &MinInput_Warning_CheckResult, 0, 119, v9);
    }
  }
  else
  {
    v8 = -2147024882;
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      McTemplateU0qqq(v7, &MinInput_Warning_CheckResult, 0, 114, 14);
  }
  return v8;
}
