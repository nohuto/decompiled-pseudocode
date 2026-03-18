/*
 * XREFs of UsbhGetMsOsExtendedConfigDesc @ 0x1C0040568
 * Callers:
 *     UsbhSetupDevice @ 0x1C0022C90 (UsbhSetupDevice.c)
 * Callees:
 *     PdoExt @ 0x1C001B570 (PdoExt.c)
 *     memset @ 0x1C0029840 (memset.c)
 *     WPP_RECORDER_SF_ @ 0x1C003D10C (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C003D1DC (WPP_RECORDER_SF_d.c)
 *     USBD_ValidateExtendedConfigurationDescriptor @ 0x1C003FEE0 (USBD_ValidateExtendedConfigurationDescriptor.c)
 *     UsbhGetMsOsFeatureDescriptor @ 0x1C00407D0 (UsbhGetMsOsFeatureDescriptor.c)
 */

void *__fastcall UsbhGetMsOsExtendedConfigDesc(__int64 a1, __int64 a2)
{
  int v2; // ebp
  _DWORD *v3; // r14
  void *v4; // rsi
  unsigned int *PoolWithTag; // rax
  int v6; // r8d
  unsigned int *v7; // rdi
  int MsOsFeatureDescriptor; // eax
  int v9; // ebx
  PDEVICE_OBJECT v10; // rcx
  unsigned __int16 v11; // r9
  unsigned __int8 v12; // al
  SIZE_T v13; // rdx
  PVOID v14; // rax
  int v15; // r8d
  unsigned int v16; // ebx
  __int64 v18; // [rsp+28h] [rbp-40h]
  __int64 v19; // [rsp+70h] [rbp+8h] BYREF

  v19 = a1;
  v2 = a2;
  v3 = PdoExt(a2);
  v4 = 0LL;
  if ( (v3[356] & 0x400) == 0 )
    return 0LL;
  PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, 0x10uLL, 0x42554855u);
  v7 = PoolWithTag;
  if ( !PoolWithTag )
    return 0LL;
  *(_QWORD *)PoolWithTag = 0LL;
  *((_QWORD *)PoolWithTag + 1) = 0LL;
  MsOsFeatureDescriptor = UsbhGetMsOsFeatureDescriptor(v2, 0, v6, 4, (__int64)PoolWithTag, 16, (__int64)&v19);
  v9 = MsOsFeatureDescriptor;
  if ( MsOsFeatureDescriptor >= 0 )
  {
    if ( (_DWORD)v19 != 16
      || *((_WORD *)v7 + 2) != 256
      || *((_WORD *)v7 + 3) != 4
      || (v12 = *((_BYTE *)v7 + 8)) == 0
      || (v13 = *v7, v13 != 24LL * v12 + 16) )
    {
      v9 = -1073741668;
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          0,
          1u,
          0xCu,
          (__int64)&WPP_a16cd9a861f636b13128a91f090c0018_Traceguids);
      goto LABEL_25;
    }
    v14 = ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, v13, 0x42554855u);
    v4 = v14;
    if ( !v14 )
    {
      v9 = -1073741670;
      goto LABEL_25;
    }
    memset(v14, 0, *v7);
    MsOsFeatureDescriptor = UsbhGetMsOsFeatureDescriptor(v2, 0, v15, 4, (__int64)v4, *v7, (__int64)&v19);
    v9 = MsOsFeatureDescriptor;
    if ( MsOsFeatureDescriptor >= 0 )
    {
      v16 = v19;
      if ( (_DWORD)v19 != *v7 || RtlCompareMemory(v7, v4, 0x10uLL) != 16 )
      {
        v9 = -1073741668;
        goto LABEL_25;
      }
      MsOsFeatureDescriptor = USBD_ValidateExtendedConfigurationDescriptor(
                                (unsigned int *)v4,
                                v16,
                                *((_QWORD *)v3 + 298),
                                *(unsigned __int16 *)(*((_QWORD *)v3 + 298) + 2LL));
      v9 = MsOsFeatureDescriptor;
      if ( MsOsFeatureDescriptor >= 0 )
        goto LABEL_25;
      v10 = WPP_GLOBAL_Control;
      if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
        goto LABEL_25;
      v11 = 14;
    }
    else
    {
      v10 = WPP_GLOBAL_Control;
      if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
        goto LABEL_25;
      v11 = 13;
    }
    goto LABEL_6;
  }
  v10 = WPP_GLOBAL_Control;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    v11 = 11;
LABEL_6:
    LODWORD(v18) = MsOsFeatureDescriptor;
    WPP_RECORDER_SF_d(
      (__int64)v10->DeviceExtension,
      0,
      1u,
      v11,
      (__int64)&WPP_a16cd9a861f636b13128a91f090c0018_Traceguids,
      v18);
  }
LABEL_25:
  ExFreePoolWithTag(v7, 0);
  if ( v9 >= 0 )
    return v4;
  if ( v4 )
    ExFreePoolWithTag(v4, 0);
  return 0LL;
}
