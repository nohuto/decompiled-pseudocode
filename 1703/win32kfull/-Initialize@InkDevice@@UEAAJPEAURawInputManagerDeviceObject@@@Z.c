/*
 * XREFs of ?Initialize@InkDevice@@UEAAJPEAURawInputManagerDeviceObject@@@Z @ 0x1C021DA00
 * Callers:
 *     ?OnDeviceAttached@InkProcessor@@QEAAJPEAURawInputManagerDeviceObject@@@Z @ 0x1C0217C64 (-OnDeviceAttached@InkProcessor@@QEAAJPEAURawInputManagerDeviceObject@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x1C00BA030 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     ?Initialize@RimBackedDeviceBase@Rim@@UEAAJPEAURawInputManagerDeviceObject@@@Z @ 0x1C0209E50 (-Initialize@RimBackedDeviceBase@Rim@@UEAAJPEAURawInputManagerDeviceObject@@@Z.c)
 *     ?SendSynchronousIoControl@RimBackedDeviceBase@Rim@@QEBAJKPEAXK0KPEAK@Z @ 0x1C0209F04 (-SendSynchronousIoControl@RimBackedDeviceBase@Rim@@QEBAJKPEAXK0KPEAK@Z.c)
 *     ?GetDeviceCaps@InkDeviceParser@@SAJPEAU_HIDP_PREPARSED_DATA@@PEAUUsageValueInfo@@1PEAVCapabilities@InkDevice@@@Z @ 0x1C0218874 (-GetDeviceCaps@InkDeviceParser@@SAJPEAU_HIDP_PREPARSED_DATA@@PEAUUsageValueInfo@@1PEAVCapabiliti.c)
 *     ?GetDeviceFeatures@InkDeviceParser@@SAJPEAU_HIDP_PREPARSED_DATA@@PEBXKPEBUUsageValueInfo@@PEAVFeatures@InkDevice@@@Z @ 0x1C0218B20 (-GetDeviceFeatures@InkDeviceParser@@SAJPEAU_HIDP_PREPARSED_DATA@@PEBXKPEBUUsageValueInfo@@PEAVFe.c)
 *     ?UnInitialize@InkDevice@@UEAAXXZ @ 0x1C021EBF0 (-UnInitialize@InkDevice@@UEAAXXZ.c)
 *     ?ValidateDeviceFeatures@InkDevice@@AEBAJXZ @ 0x1C021EC88 (-ValidateDeviceFeatures@InkDevice@@AEBAJXZ.c)
 */

__int64 __fastcall InkDevice::Initialize(InkDevice *this, struct RawInputManagerDeviceObject *a2)
{
  int DeviceCaps; // eax
  const GUID *v4; // r8
  const GUID *v5; // r9
  int v6; // ebx
  __int64 v7; // rsi
  struct _HIDP_PREPARSED_DATA *v8; // r15
  struct UsageValueInfo *v9; // rax
  const GUID *v10; // r8
  const GUID *v11; // r9
  _BYTE *v12; // rdi
  const GUID *v13; // r8
  const GUID *v14; // r9
  int DeviceFeatures; // eax
  const GUID *v16; // r8
  const GUID *v17; // r9
  int v18; // r9d
  int v19; // edx
  int v20; // ecx
  int v21; // r8d
  int v22; // eax
  __int64 v23; // rax
  const GUID *v24; // r8
  const GUID *v25; // r9
  unsigned int v27[2]; // [rsp+40h] [rbp-C0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp-B8h] BYREF
  unsigned int *v29; // [rsp+68h] [rbp-98h]
  int v30; // [rsp+70h] [rbp-90h]
  int v31; // [rsp+74h] [rbp-8Ch]
  _BYTE v32[544]; // [rsp+80h] [rbp-80h] BYREF

  DeviceCaps = Rim::RimBackedDeviceBase::Initialize(this, a2);
  v6 = DeviceCaps;
  if ( DeviceCaps < 0 )
  {
    if ( hProvider <= 2u )
    {
LABEL_40:
      v12 = *(_BYTE **)v27;
      goto LABEL_41;
    }
LABEL_3:
    v31 = 0;
    v27[0] = DeviceCaps;
    v29 = v27;
    v30 = 4;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C02EC6AD, v4, v5, 3u, &pData);
    goto LABEL_40;
  }
  v7 = *((_QWORD *)this + 2);
  if ( v7 )
    v7 = *(_QWORD *)(v7 + 520);
  v8 = *(struct _HIDP_PREPARSED_DATA **)(v7 + 16);
  if ( *(_WORD *)(v7 + 42) != 0xFF0F || *(_WORD *)(v7 + 40) != 256 || *(_WORD *)(v7 + 110) != 1118 )
  {
    v6 = -1073741811;
    if ( hProvider > 2u )
    {
      v31 = 0;
      v29 = v27;
      v27[0] = -1073741811;
      v30 = 4;
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C02EC6AD, v4, v5, 3u, &pData);
    }
    goto LABEL_40;
  }
  v9 = (struct UsageValueInfo *)Win32AllocPoolZInit(76LL, 1349217865LL);
  *((_QWORD *)this + 19) = v9;
  if ( !v9 )
  {
    v6 = -1073741801;
    if ( hProvider > 2u )
    {
      v31 = 0;
      v27[0] = -1073741801;
      v29 = v27;
      v30 = 4;
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C02EC6AD, v10, v11, 3u, &pData);
    }
    goto LABEL_40;
  }
  DeviceCaps = InkDeviceParser::GetDeviceCaps(v8, (struct UsageValueInfo *)v32, v9, (InkDevice *)((char *)this + 104));
  v6 = DeviceCaps;
  if ( DeviceCaps < 0 )
  {
    if ( hProvider <= 2u )
      goto LABEL_40;
    goto LABEL_3;
  }
  v12 = (_BYTE *)Win32AllocPoolZInit(*(unsigned __int16 *)(v7 + 48), 1349217865LL);
  if ( !v12 )
  {
    v6 = -1073741801;
    if ( hProvider > 2u )
    {
      v31 = 0;
      v27[0] = -1073741801;
      v29 = v27;
      v30 = 4;
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C02EC6AD, v13, v14, 3u, &pData);
    }
    goto LABEL_44;
  }
  *v12 = *((_BYTE *)this + 104);
  DeviceFeatures = Rim::RimBackedDeviceBase::SendSynchronousIoControl(
                     this,
                     721298LL,
                     0LL,
                     0,
                     v12,
                     *(unsigned __int16 *)(v7 + 48),
                     v27);
  v6 = DeviceFeatures;
  if ( DeviceFeatures < 0 )
  {
    if ( hProvider <= 2u )
      goto LABEL_41;
LABEL_26:
    v31 = 0;
    v27[0] = DeviceFeatures;
    v29 = v27;
    v30 = 4;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C02EC6AD, v16, v17, 3u, &pData);
    goto LABEL_41;
  }
  DeviceFeatures = InkDeviceParser::GetDeviceFeatures(
                     v8,
                     v12,
                     *(unsigned __int16 *)(v7 + 48),
                     (const struct UsageValueInfo *)v32,
                     (InkDevice *)((char *)this + 116));
  v6 = DeviceFeatures;
  if ( DeviceFeatures < 0 )
  {
    if ( hProvider <= 2u )
      goto LABEL_41;
    goto LABEL_26;
  }
  DeviceFeatures = InkDevice::ValidateDeviceFeatures(this);
  v6 = DeviceFeatures;
  if ( DeviceFeatures < 0 )
  {
    if ( hProvider <= 2u )
      goto LABEL_41;
    goto LABEL_26;
  }
  v18 = *((_DWORD *)this + 36);
  v19 = (4 * (v18 & 0x10)) | 0xB;
  if ( (v18 & 4) == 0 )
    v19 = (4 * (*((_DWORD *)this + 36) & 0x10)) | 9;
  v20 = v19 | 4;
  if ( (v18 & 8) == 0 )
    v20 = v19;
  v21 = v20 | 0x10;
  if ( (v18 & 1) == 0 )
    v21 = v20;
  v22 = v21 | 0x20;
  if ( (v18 & 2) == 0 )
    v22 = v21;
  *((_DWORD *)this + 37) = v22;
  v23 = Win32AllocPoolZInit(*(unsigned __int16 *)(v7 + 46), 1349217865LL);
  *((_QWORD *)this + 20) = v23;
  if ( !v23 )
  {
    v6 = -1073741801;
    if ( hProvider > 2u )
    {
      v31 = 0;
      v27[0] = -1073741801;
      v29 = v27;
      v30 = 4;
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C02EC6AD, v24, v25, 3u, &pData);
    }
  }
LABEL_41:
  if ( v12 )
    Win32FreePool(v12);
  if ( v6 < 0 )
LABEL_44:
    InkDevice::UnInitialize(this);
  return (unsigned int)v6;
}
