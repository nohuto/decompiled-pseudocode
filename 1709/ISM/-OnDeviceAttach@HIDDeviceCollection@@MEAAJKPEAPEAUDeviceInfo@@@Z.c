/*
 * XREFs of ?OnDeviceAttach@HIDDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x18009C9F0
 * Callers:
 *     ?OnDeviceAttach@PTPDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x18008A800 (-OnDeviceAttach@PTPDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 *     ?OnDeviceAttach@TouchDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x18008B010 (-OnDeviceAttach@TouchDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 *     ?OnDeviceAttach@AugmentedInputDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x18008BE30 (-OnDeviceAttach@AugmentedInputDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 *     ?OnDeviceAttach@SpatialInputControllerCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x180092EE0 (-OnDeviceAttach@SpatialInputControllerCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 *     ?OnDeviceAttach@MobileButtonDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x180099840 (-OnDeviceAttach@MobileButtonDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 *     ?OnDeviceAttach@ConsumerControlDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x18009A5F0 (-OnDeviceAttach@ConsumerControlDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 *     ?OnDeviceAttach@HeatDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x18009B100 (-OnDeviceAttach@HeatDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 *     ?OnDeviceAttach@GazeDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x18009B740 (-OnDeviceAttach@GazeDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 * Callees:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 *     ?FindDeviceId@RIMDeviceCollection@@IEAAJKPEAPEAVRIMDevice@@PEAK@Z @ 0x180089F60 (-FindDeviceId@RIMDeviceCollection@@IEAAJKPEAPEAVRIMDevice@@PEAK@Z.c)
 *     ?LogRawInputDeviceAttached@RawInputProvidersTelemetry@@SAXIGGG@Z @ 0x18009C544 (-LogRawInputDeviceAttached@RawInputProvidersTelemetry@@SAXIGGG@Z.c)
 *     memset @ 0x1800CAA5E (memset.c)
 *     __security_check_cookie @ 0x1800CAB30 (__security_check_cookie.c)
 *     ??2@YAPEAX_K@Z @ 0x1800CB4F0 (--2@YAPEAX_K@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x1800CB52C (--_U@YAPEAX_K@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800CBCC8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HIDDeviceCollection::OnDeviceAttach(HIDDeviceCollection *this, int a2, struct DeviceInfo **a3)
{
  void *v3; // rsi
  __int64 v7; // rcx
  unsigned int *v8; // r9
  _WORD *v9; // r14
  __int64 v10; // rcx
  char v11; // al
  int v12; // ebx
  int v13; // r9d
  int DeviceId; // eax
  __int64 v15; // rcx
  struct RIMDevice *v16; // r13
  struct RIMDevice *v17; // rdi
  __int64 v18; // rcx
  __int64 v19; // rcx
  int v20; // ebx
  void *v21; // rax
  __int64 v22; // rcx
  int v23; // ebx
  int v24; // edi
  __int64 v25; // rcx
  NTSTATUS Caps; // ebx
  struct RIMDevice *v27; // rdx
  int v28; // eax
  size_t Size; // [rsp+30h] [rbp-69h] BYREF
  struct RIMDevice *v31; // [rsp+38h] [rbp-61h] BYREF
  int v32; // [rsp+40h] [rbp-59h]
  _WORD v33[20]; // [rsp+48h] [rbp-51h] BYREF
  _HIDP_CAPS Capabilities; // [rsp+70h] [rbp-29h] BYREF

  v3 = 0LL;
  v32 = a2;
  LODWORD(Size) = 0;
  memset(v33, 0, sizeof(v33));
  if ( !a3 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      McTemplateU0qqq(v7, &MinInput_Warning_CheckResult, 0, 215, 255);
    if ( IsDebuggerPresent() )
      __debugbreak();
    __fastfail(7u);
  }
  v9 = *a3;
  if ( *a3 || (v9 = operator new(0xA40uLL), memset(v9, 0, 0xA40uLL), v9) )
  {
    v31 = 0LL;
    DeviceId = RIMDeviceCollection::FindDeviceId(this, a2, &v31, v8);
    v12 = DeviceId;
    if ( DeviceId < 0 )
    {
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
        McTemplateU0qqq(v15, &MinInput_Warning_CheckResult, 0, 245, DeviceId);
LABEL_43:
      if ( v12 < 0 && v3 )
        operator delete(v3);
      return (unsigned int)v12;
    }
    v16 = v31;
    if ( !(*(unsigned __int8 (__fastcall **)(HIDDeviceCollection *, struct RIMDevice *))(*(_QWORD *)this + 88LL))(
            this,
            v31) )
    {
      v11 = -1;
      v12 = -2147418113;
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
        return (unsigned int)v12;
      v13 = 249;
      goto LABEL_11;
    }
    v17 = (struct RIMDevice *)*((_QWORD *)v16 + 2);
    v18 = *((_QWORD *)this + 10);
    v31 = v17;
    v20 = RIMGetDevicePreparsedData(v18, v17, 0LL, &Size);
    if ( v20 < 0 )
    {
      v12 = v20 | 0x10000000;
      if ( v12 < 0 )
      {
        if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
          McTemplateU0qqq(v19, &MinInput_Warning_CheckResult, 0, 264, v12);
        goto LABEL_43;
      }
    }
    v21 = operator new[]((unsigned int)Size);
    v3 = v21;
    if ( !v21 )
    {
      v11 = 14;
      v12 = -2147024882;
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
        return (unsigned int)v12;
      v13 = 269;
      goto LABEL_11;
    }
    memset(v21, 0, (unsigned int)Size);
    v23 = RIMGetDevicePreparsedData(*((_QWORD *)this + 10), v17, v3, &Size);
    if ( v23 < 0 )
    {
      v12 = v23 | 0x10000000;
      if ( v12 < 0 )
      {
        if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
          McTemplateU0qqq(v22, &MinInput_Warning_CheckResult, 0, 277, v12);
        goto LABEL_43;
      }
    }
    v24 = 64;
    memset(&Capabilities, 0, sizeof(Capabilities));
    Caps = HidP_GetCaps((PHIDP_PREPARSED_DATA)v3, &Capabilities);
    if ( Caps < 0 )
    {
      v12 = Caps | 0x10000000;
      if ( v12 < 0 )
      {
        if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
          McTemplateU0qqq(v25, &MinInput_Warning_CheckResult, 0, 283, v12);
        goto LABEL_43;
      }
    }
    switch ( Capabilities.Usage )
    {
      case 4u:
        if ( Capabilities.UsagePage == 13 )
        {
          v24 = 8;
LABEL_41:
          v27 = v31;
          v12 = 0;
          *((_DWORD *)v16 + 14) = Size;
          v28 = v32;
          *((_QWORD *)v16 + 6) = v3;
          *(_DWORD *)v9 = v28;
          *((_DWORD *)v9 + 1) = v24;
          *a3 = (struct DeviceInfo *)v9;
          if ( (int)RIMGetDeviceProperties(*((_QWORD *)this + 10), v27, v33) < 0 )
            return (unsigned int)v12;
          *((_WORD *)*a3 + 14) = v33[10];
          *((_WORD *)*a3 + 15) = v33[11];
          *((_WORD *)*a3 + 16) = v33[12];
          RawInputProvidersTelemetry::LogRawInputDeviceAttached(
            *((_DWORD *)*a3 + 1),
            *((_WORD *)*a3 + 14),
            *((_WORD *)*a3 + 15),
            *((_WORD *)*a3 + 16));
          goto LABEL_43;
        }
        goto LABEL_40;
      case 5u:
        if ( Capabilities.UsagePage == 13 )
        {
          v24 = 32;
          goto LABEL_41;
        }
        if ( Capabilities.UsagePage == 1 )
          goto LABEL_41;
LABEL_40:
        v24 = 256;
        goto LABEL_41;
      case 0xEEu:
        if ( Capabilities.UsagePage != 1 )
          goto LABEL_40;
LABEL_52:
        v24 = 128;
        goto LABEL_41;
      case 1u:
        if ( Capabilities.UsagePage == 12 )
          goto LABEL_52;
        break;
      case 2u:
        break;
      default:
        goto LABEL_56;
    }
    if ( Capabilities.UsagePage == 13 )
    {
      v24 = 16;
      goto LABEL_41;
    }
LABEL_56:
    if ( Capabilities.Usage == 0xFFAA )
    {
      if ( Capabilities.UsagePage == 1 )
      {
        v24 = 1024;
        goto LABEL_41;
      }
      goto LABEL_40;
    }
    if ( Capabilities.Usage == 15 && Capabilities.UsagePage == 1 )
    {
LABEL_63:
      v24 = 0x2000;
      goto LABEL_41;
    }
    if ( Capabilities.Usage == 1 )
    {
      if ( Capabilities.UsagePage == 0xFF0A )
        goto LABEL_63;
      if ( Capabilities.UsagePage == 18 )
      {
LABEL_67:
        v24 = 0x4000;
        goto LABEL_41;
      }
    }
    else if ( Capabilities.Usage == 15 )
    {
      if ( Capabilities.UsagePage == 13 )
      {
        v24 = 2048;
        goto LABEL_41;
      }
      goto LABEL_40;
    }
    if ( Capabilities.Usage != 2 || Capabilities.UsagePage != 18 )
      goto LABEL_40;
    goto LABEL_67;
  }
  v11 = 14;
  v12 = -2147024882;
  if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
  {
    v13 = 240;
LABEL_11:
    McTemplateU0qqq(v10, &MinInput_Warning_CheckResult, 0, v13, v11);
  }
  return (unsigned int)v12;
}
