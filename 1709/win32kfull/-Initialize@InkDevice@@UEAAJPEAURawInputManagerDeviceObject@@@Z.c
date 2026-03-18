/*
 * XREFs of ?Initialize@InkDevice@@UEAAJPEAURawInputManagerDeviceObject@@@Z @ 0x1C021ED00
 * Callers:
 *     ?OnDeviceAttached@InkProcessor@@QEAAJPEAURawInputManagerDeviceObject@@@Z @ 0x1C0218DF4 (-OnDeviceAttached@InkProcessor@@QEAAJPEAURawInputManagerDeviceObject@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x1C0042F00 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     ?Initialize@RimBackedDeviceBase@Rim@@UEAAJPEAURawInputManagerDeviceObject@@@Z @ 0x1C020BBE0 (-Initialize@RimBackedDeviceBase@Rim@@UEAAJPEAURawInputManagerDeviceObject@@@Z.c)
 *     ?SendSynchronousIoControl@RimBackedDeviceBase@Rim@@QEBAJKPEAXK0KPEAK@Z @ 0x1C020BC94 (-SendSynchronousIoControl@RimBackedDeviceBase@Rim@@QEBAJKPEAXK0KPEAK@Z.c)
 *     ?GetDeviceCaps@InkDeviceParser@@SAJPEAU_HIDP_PREPARSED_DATA@@PEAUUsageValueInfo@@1PEAVCapabilities@InkDevice@@@Z @ 0x1C0219A64 (-GetDeviceCaps@InkDeviceParser@@SAJPEAU_HIDP_PREPARSED_DATA@@PEAUUsageValueInfo@@1PEAVCapabiliti.c)
 *     ?GetDeviceFeatures@InkDeviceParser@@SAJPEAU_HIDP_PREPARSED_DATA@@PEBXKPEBUUsageValueInfo@@PEAVFeatures@InkDevice@@@Z @ 0x1C0219D08 (-GetDeviceFeatures@InkDeviceParser@@SAJPEAU_HIDP_PREPARSED_DATA@@PEBXKPEBUUsageValueInfo@@PEAVFe.c)
 *     ?UnInitialize@InkDevice@@UEAAXXZ @ 0x1C021FF30 (-UnInitialize@InkDevice@@UEAAXXZ.c)
 *     ?ValidateDeviceFeatures@InkDevice@@AEBAJXZ @ 0x1C021FFC8 (-ValidateDeviceFeatures@InkDevice@@AEBAJXZ.c)
 */

__int64 __fastcall InkDevice::Initialize(InkDevice *this, struct RawInputManagerDeviceObject *a2)
{
  int DeviceCaps; // eax
  __int64 v4; // rdx
  const GUID *v5; // r8
  const GUID *v6; // r9
  int v7; // ebx
  __int64 v8; // rsi
  struct _HIDP_PREPARSED_DATA *v9; // r15
  struct UsageValueInfo *v10; // rax
  const GUID *v11; // r9
  _BYTE *v12; // rdi
  const GUID *v13; // r8
  const GUID *v14; // r9
  int DeviceFeatures; // eax
  const GUID *v16; // r9
  int v17; // r9d
  int v18; // edx
  int v19; // ecx
  int v20; // r8d
  int v21; // eax
  __int64 v22; // rax
  const GUID *v23; // r9
  unsigned int v25[2]; // [rsp+40h] [rbp-C0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp-B8h] BYREF
  unsigned int *v27; // [rsp+68h] [rbp-98h]
  int v28; // [rsp+70h] [rbp-90h]
  int v29; // [rsp+74h] [rbp-8Ch]
  _BYTE v30[544]; // [rsp+80h] [rbp-80h] BYREF

  DeviceCaps = Rim::RimBackedDeviceBase::Initialize(this, a2);
  v7 = DeviceCaps;
  if ( DeviceCaps < 0 )
  {
    if ( (unsigned int)pRelatedActivityId <= 2 )
    {
LABEL_40:
      v12 = *(_BYTE **)v25;
      goto LABEL_41;
    }
LABEL_3:
    v29 = 0;
    v25[0] = DeviceCaps;
    v27 = v25;
    v28 = 4;
    TlgWrite((TraceLoggingHProvider)&pRelatedActivityId, &unk_1C02E9672, v5, v6, 3u, &pData);
    goto LABEL_40;
  }
  v8 = *((_QWORD *)this + 2);
  if ( v8 )
    v8 = *(_QWORD *)(v8 + 520);
  v9 = *(struct _HIDP_PREPARSED_DATA **)(v8 + 16);
  if ( *(_WORD *)(v8 + 42) != 0xFF0F || *(_WORD *)(v8 + 40) != 256 || *(_WORD *)(v8 + 110) != 1118 )
  {
    v7 = -1073741811;
    if ( (unsigned int)pRelatedActivityId > 2 )
    {
      v29 = 0;
      v27 = v25;
      v25[0] = -1073741811;
      v28 = 4;
      TlgWrite((TraceLoggingHProvider)&pRelatedActivityId, &unk_1C02E9672, v5, v6, 3u, &pData);
    }
    goto LABEL_40;
  }
  v10 = (struct UsageValueInfo *)Win32AllocPoolZInit(76LL, 1349217865LL);
  *((_QWORD *)this + 19) = v10;
  if ( !v10 )
  {
    v7 = -1073741801;
    if ( (unsigned int)pRelatedActivityId > 2 )
    {
      v29 = 0;
      v25[0] = -1073741801;
      v27 = v25;
      v28 = 4;
      TlgWrite((TraceLoggingHProvider)&pRelatedActivityId, &unk_1C02E9672, v5, v11, 3u, &pData);
    }
    goto LABEL_40;
  }
  DeviceCaps = InkDeviceParser::GetDeviceCaps(v9, (struct UsageValueInfo *)v30, v10, (InkDevice *)((char *)this + 104));
  v7 = DeviceCaps;
  if ( DeviceCaps < 0 )
  {
    if ( (unsigned int)pRelatedActivityId <= 2 )
      goto LABEL_40;
    goto LABEL_3;
  }
  v12 = (_BYTE *)Win32AllocPoolZInit(*(unsigned __int16 *)(v8 + 48), 1349217865LL);
  if ( !v12 )
  {
    v7 = -1073741801;
    if ( (unsigned int)pRelatedActivityId > 2 )
    {
      v29 = 0;
      v25[0] = -1073741801;
      v27 = v25;
      v28 = 4;
      TlgWrite((TraceLoggingHProvider)&pRelatedActivityId, &unk_1C02E9672, v13, v14, 3u, &pData);
    }
    goto LABEL_44;
  }
  *v12 = *((_BYTE *)this + 104);
  DeviceFeatures = Rim::RimBackedDeviceBase::SendSynchronousIoControl(
                     this,
                     0xB0192u,
                     0LL,
                     0,
                     v12,
                     *(unsigned __int16 *)(v8 + 48),
                     v25);
  v7 = DeviceFeatures;
  if ( DeviceFeatures < 0 )
  {
    if ( (unsigned int)pRelatedActivityId <= 2 )
      goto LABEL_41;
LABEL_26:
    v29 = 0;
    v25[0] = DeviceFeatures;
    v27 = v25;
    v28 = 4;
    TlgWrite((TraceLoggingHProvider)&pRelatedActivityId, &unk_1C02E9672, v5, v16, 3u, &pData);
    goto LABEL_41;
  }
  DeviceFeatures = InkDeviceParser::GetDeviceFeatures(
                     v9,
                     v12,
                     *(unsigned __int16 *)(v8 + 48),
                     (const struct UsageValueInfo *)v30,
                     (InkDevice *)((char *)this + 116));
  v7 = DeviceFeatures;
  if ( DeviceFeatures < 0 )
  {
    if ( (unsigned int)pRelatedActivityId <= 2 )
      goto LABEL_41;
    goto LABEL_26;
  }
  DeviceFeatures = InkDevice::ValidateDeviceFeatures(this);
  v7 = DeviceFeatures;
  if ( DeviceFeatures < 0 )
  {
    if ( (unsigned int)pRelatedActivityId <= 2 )
      goto LABEL_41;
    goto LABEL_26;
  }
  v17 = *((_DWORD *)this + 36);
  v18 = (4 * (v17 & 0x10)) | 0xB;
  if ( (v17 & 4) == 0 )
    v18 = (4 * (*((_DWORD *)this + 36) & 0x10)) | 9;
  v19 = v18 | 4;
  if ( (v17 & 8) == 0 )
    v19 = v18;
  v20 = v19 | 0x10;
  if ( (v17 & 1) == 0 )
    v20 = v19;
  v21 = v20 | 0x20;
  if ( (v17 & 2) == 0 )
    v21 = v20;
  *((_DWORD *)this + 37) = v21;
  v22 = Win32AllocPoolZInit(*(unsigned __int16 *)(v8 + 46), 1349217865LL);
  *((_QWORD *)this + 20) = v22;
  if ( !v22 )
  {
    v7 = -1073741801;
    if ( (unsigned int)pRelatedActivityId > 2 )
    {
      v29 = 0;
      v25[0] = -1073741801;
      v27 = v25;
      v28 = 4;
      TlgWrite((TraceLoggingHProvider)&pRelatedActivityId, &unk_1C02E9672, v5, v23, 3u, &pData);
    }
  }
LABEL_41:
  if ( v12 )
    Win32FreePool(v12, v4, v5);
  if ( v7 < 0 )
LABEL_44:
    InkDevice::UnInitialize(this);
  return (unsigned int)v7;
}
