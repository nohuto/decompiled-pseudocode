/*
 * XREFs of ?OnDeviceAttach@HIDDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x180074F90
 * Callers:
 *     ?OnDeviceAttach@AugmentedInputDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x18006CCA0 (-OnDeviceAttach@AugmentedInputDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 *     ?OnDeviceAttach@SpatialRimDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x180071130 (-OnDeviceAttach@SpatialRimDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 *     ?OnDeviceAttach@MobileButtonDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x180072970 (-OnDeviceAttach@MobileButtonDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 *     ?OnDeviceAttach@ConsumerControlDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x180073330 (-OnDeviceAttach@ConsumerControlDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 *     ?OnDeviceAttach@HeatDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x180073B60 (-OnDeviceAttach@HeatDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 *     ?OnDeviceAttach@GazeDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x180073FD0 (-OnDeviceAttach@GazeDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 *     ?OnDeviceAttach@CameraControlDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x180074450 (-OnDeviceAttach@CameraControlDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 * Callees:
 *     ?FindDeviceId@RIMDeviceCollection@@IEAAJKPEAPEAVRIMDevice@@PEAK@Z @ 0x18006E420 (-FindDeviceId@RIMDeviceCollection@@IEAAJKPEAPEAVRIMDevice@@PEAK@Z.c)
 *     ?LogRawInputDeviceAttached@RawInputProvidersTelemetry@@SAXIGGG@Z @ 0x180074B34 (-LogRawInputDeviceAttached@RawInputProvidersTelemetry@@SAXIGGG@Z.c)
 *     memset_0 @ 0x1800E1A3C (memset_0.c)
 *     __security_check_cookie @ 0x1800E1B10 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800E1CF0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x1800E20D0 (--2@YAPEAX_K@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x1800E212C (--_U@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HIDDeviceCollection::OnDeviceAttach(HIDDeviceCollection *this, int a2, struct DeviceInfo **a3)
{
  unsigned int *v6; // r9
  int DeviceId; // ebx
  __int16 *v8; // rsi
  struct RIMDevice *v9; // r13
  struct RIMDevice *v10; // rdi
  __int64 v11; // rcx
  int v12; // ebx
  void *v13; // rax
  void *v14; // r14
  int v15; // ebx
  int v16; // edi
  NTSTATUS Caps; // ebx
  struct RIMDevice *v18; // rdx
  int v19; // eax
  unsigned int v20; // ecx
  __int16 v21; // dx
  __int16 v22; // r8
  size_t Size; // [rsp+20h] [rbp-69h] BYREF
  struct RIMDevice *v25; // [rsp+28h] [rbp-61h] BYREF
  int v26; // [rsp+30h] [rbp-59h]
  char v27[8]; // [rsp+38h] [rbp-51h] BYREF
  __int16 v28; // [rsp+40h] [rbp-49h]
  __int16 v29; // [rsp+42h] [rbp-47h]
  __int16 v30; // [rsp+44h] [rbp-45h]
  _HIDP_CAPS Capabilities; // [rsp+60h] [rbp-29h] BYREF

  LODWORD(Size) = 0;
  v26 = a2;
  memset_0(v27, 0, 0x28uLL);
  if ( !a3 )
  {
    DeviceId = -2147418113;
    if ( IsDebuggerPresent() )
      __debugbreak();
    RaiseFailFastException(0LL, 0LL, 0);
    return (unsigned int)DeviceId;
  }
  v8 = (__int16 *)*a3;
  if ( !*a3 )
  {
    v8 = (__int16 *)operator new(0x3D8uLL);
    memset_0(v8, 0, 0x3D8uLL);
    *((_DWORD *)v8 + 2) = 984;
  }
  v25 = 0LL;
  DeviceId = RIMDeviceCollection::FindDeviceId(this, a2, &v25, v6);
  if ( DeviceId >= 0 )
  {
    v9 = v25;
    if ( !(*(unsigned __int8 (__fastcall **)(HIDDeviceCollection *, struct RIMDevice *))(*(_QWORD *)this + 88LL))(
            this,
            v25) )
      return (unsigned int)-2147418113;
    v10 = (struct RIMDevice *)*((_QWORD *)v9 + 2);
    v11 = *((_QWORD *)this + 10);
    v25 = v10;
    v12 = RIMGetDevicePreparsedData(v11, v10, 0LL, &Size);
    if ( v12 >= 0 || (DeviceId = v12 | 0x10000000, DeviceId >= 0) )
    {
      v13 = operator new[]((unsigned int)Size);
      v14 = v13;
      if ( !v13 )
        return (unsigned int)-2147024882;
      memset_0(v13, 0, (unsigned int)Size);
      v15 = RIMGetDevicePreparsedData(*((_QWORD *)this + 10), v10, v14, &Size);
      if ( v15 < 0 && (DeviceId = v15 | 0x10000000, DeviceId < 0)
        || (v16 = 64,
            memset_0(&Capabilities, 0, sizeof(Capabilities)),
            Caps = HidP_GetCaps((PHIDP_PREPARSED_DATA)v14, &Capabilities),
            Caps < 0)
        && (DeviceId = Caps | 0x10000000, DeviceId < 0) )
      {
        operator delete(v14);
        return (unsigned int)DeviceId;
      }
      switch ( Capabilities.Usage )
      {
        case 4u:
          if ( Capabilities.UsagePage == 13 )
          {
            v16 = 8;
LABEL_54:
            v18 = v25;
            DeviceId = 0;
            *((_DWORD *)v9 + 14) = Size;
            v19 = v26;
            *((_QWORD *)v9 + 6) = v14;
            *(_DWORD *)v8 = v19;
            *((_DWORD *)v8 + 1) = v16;
            if ( (int)RIMGetDeviceProperties(*((_QWORD *)this + 10), v18, v27) >= 0 )
            {
              v20 = *((_DWORD *)v8 + 1);
              v8[18] = v28;
              v21 = v8[18];
              v8[19] = v29;
              v22 = v8[19];
              v8[20] = v30;
              RawInputProvidersTelemetry::LogRawInputDeviceAttached(v20, v21, v22, v30);
            }
            *a3 = (struct DeviceInfo *)v8;
            return (unsigned int)DeviceId;
          }
          goto LABEL_53;
        case 5u:
          if ( Capabilities.UsagePage == 13 )
          {
            v16 = 32;
            goto LABEL_54;
          }
          if ( Capabilities.UsagePage == 1 )
            goto LABEL_54;
          goto LABEL_53;
        case 0xEEu:
          if ( Capabilities.UsagePage != 1 )
            goto LABEL_53;
LABEL_32:
          v16 = 128;
          goto LABEL_54;
        case 1u:
          if ( Capabilities.UsagePage == 12 )
            goto LABEL_32;
          break;
        case 2u:
          break;
        default:
          goto LABEL_36;
      }
      if ( Capabilities.UsagePage == 13 )
      {
        v16 = 16;
        goto LABEL_54;
      }
LABEL_36:
      if ( Capabilities.Usage == 0xFFAA )
      {
        if ( Capabilities.UsagePage == 1 )
        {
          v16 = 1024;
          goto LABEL_54;
        }
        goto LABEL_53;
      }
      if ( Capabilities.Usage == 15 && Capabilities.UsagePage == 1 )
      {
LABEL_43:
        v16 = 0x2000;
        goto LABEL_54;
      }
      if ( Capabilities.Usage == 1 )
      {
        if ( Capabilities.UsagePage == 0xFF0A )
          goto LABEL_43;
        if ( Capabilities.UsagePage == 18 )
        {
LABEL_47:
          v16 = 0x4000;
          goto LABEL_54;
        }
      }
      else if ( Capabilities.Usage == 15 )
      {
        if ( Capabilities.UsagePage == 13 )
        {
          v16 = 2048;
          goto LABEL_54;
        }
        goto LABEL_53;
      }
      if ( Capabilities.Usage != 2 )
      {
        if ( Capabilities.Usage == 120 )
        {
          v16 = 128;
          if ( Capabilities.UsagePage == 12 )
            goto LABEL_54;
        }
        goto LABEL_53;
      }
      if ( Capabilities.UsagePage != 18 )
      {
LABEL_53:
        v16 = 256;
        goto LABEL_54;
      }
      goto LABEL_47;
    }
  }
  return (unsigned int)DeviceId;
}
