/*
 * XREFs of UsbhSetupDevice @ 0x1C0022C90
 * Callers:
 *     UsbhReset2Complete @ 0x1C00143E0 (UsbhReset2Complete.c)
 * Callees:
 *     UsbhQueryPortState @ 0x1C0011680 (UsbhQueryPortState.c)
 *     Log @ 0x1C00155F0 (Log.c)
 *     FdoExt @ 0x1C0015670 (FdoExt.c)
 *     UsbhSyncSendCommandToDevice @ 0x1C0016E10 (UsbhSyncSendCommandToDevice.c)
 *     PdoExt @ 0x1C001B570 (PdoExt.c)
 *     UsbhEtwLogHubIrpEvent @ 0x1C001DAF0 (UsbhEtwLogHubIrpEvent.c)
 *     UsbhUpdateUxdSettings @ 0x1C001E070 (UsbhUpdateUxdSettings.c)
 *     UsbhGetInitRegUsbDeviceFlags @ 0x1C0021420 (UsbhGetInitRegUsbDeviceFlags.c)
 *     UsbhBuildHardwareID @ 0x1C0021690 (UsbhBuildHardwareID.c)
 *     UsbhBuildDeviceID @ 0x1C0021C10 (UsbhBuildDeviceID.c)
 *     UsbhValidateDeviceDescriptor @ 0x1C00228FC (UsbhValidateDeviceDescriptor.c)
 *     UsbhGetMSOS_Descriptor @ 0x1C0022930 (UsbhGetMSOS_Descriptor.c)
 *     UsbhGetDeviceInformation @ 0x1C0022A08 (UsbhGetDeviceInformation.c)
 *     Usbh__TestPoint__Ulong @ 0x1C0023280 (Usbh__TestPoint__Ulong.c)
 *     UsbhGetLanguageIdString @ 0x1C00232DC (UsbhGetLanguageIdString.c)
 *     UsbhBuildCompatibleID @ 0x1C0023460 (UsbhBuildCompatibleID.c)
 *     UsbhGetSerialNumber @ 0x1C00234F4 (UsbhGetSerialNumber.c)
 *     UsbhGetProductIdString @ 0x1C00287E8 (UsbhGetProductIdString.c)
 *     UsbhFreeID @ 0x1C0028A88 (UsbhFreeID.c)
 *     UsbhGetMsOsContainerID @ 0x1C00291BC (UsbhGetMsOsContainerID.c)
 *     __security_check_cookie @ 0x1C0029310 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00294E0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0029840 (memset.c)
 *     UsbhGetMsOs20DescriptorSet @ 0x1C0040414 (UsbhGetMsOs20DescriptorSet.c)
 *     UsbhGetMsOsExtendedConfigDesc @ 0x1C0040568 (UsbhGetMsOsExtendedConfigDesc.c)
 *     UsbhSendMsOs20AltEnumCommand @ 0x1C0040C94 (UsbhSendMsOs20AltEnumCommand.c)
 *     UsbhGetAlternateUsbDescriptors @ 0x1C0043E08 (UsbhGetAlternateUsbDescriptors.c)
 *     UsbhGetBillboardInfo @ 0x1C0043F7C (UsbhGetBillboardInfo.c)
 *     WPP_RECORDER_SF_S @ 0x1C00463AC (WPP_RECORDER_SF_S.c)
 *     UsbhException @ 0x1C004FE34 (UsbhException.c)
 *     UsbhBusIf_SetClearRootPortResumeTime @ 0x1C0050E68 (UsbhBusIf_SetClearRootPortResumeTime.c)
 *     UsbhBusIf_SetMsOs20Support @ 0x1C0050F74 (UsbhBusIf_SetMsOs20Support.c)
 *     UsbhValidateBOSDescriptorSet @ 0x1C00541BC (UsbhValidateBOSDescriptorSet.c)
 *     UsbhValidateMsOs20DescriptorSet @ 0x1C0054584 (UsbhValidateMsOs20DescriptorSet.c)
 *     UsbhGetBosDescriptor @ 0x1C0055448 (UsbhGetBosDescriptor.c)
 *     UsbhGetDeviceDescriptor @ 0x1C00555EC (UsbhGetDeviceDescriptor.c)
 *     UsbhGetQualifierDescriptorFromDevice @ 0x1C00556C4 (UsbhGetQualifierDescriptorFromDevice.c)
 *     UsbDualRoleFeaturesQueryLocalMachine @ 0x1C0059DFC (UsbDualRoleFeaturesQueryLocalMachine.c)
 */

__int64 __fastcall UsbhSetupDevice(__int64 a1, struct _DEVICE_OBJECT *a2, _DWORD *a3)
{
  _DWORD *v6; // rbx
  void *v7; // rcx
  void *v8; // rcx
  void *v9; // rcx
  void *v10; // rcx
  void *v11; // rcx
  void *v12; // rcx
  void *v13; // rcx
  void *v14; // rcx
  void *v15; // rcx
  int *v16; // r15
  __int64 result; // rax
  __int64 v18; // r14
  _DWORD *v19; // rax
  int (__fastcall *v20)(_QWORD, __int64, _DWORD *, int *, _QWORD, int *); // r10
  __int64 v21; // rcx
  int BosDescriptor; // r14d
  int v23; // r8d
  PDEVICE_OBJECT v24; // rcx
  __int64 v25; // rax
  void *v26; // rcx
  void *v27; // rcx
  void *v28; // rcx
  int v29; // r14d
  int v30; // eax
  unsigned int v31; // r10d
  __int64 v32; // r8
  char AlternateUsbDescriptors; // r12
  __int64 *v34; // rcx
  __int64 v35; // rax
  __int64 *v36; // r8
  __int64 v37; // r8
  int v38; // ecx
  __int64 v39; // r9
  __int64 v40; // rcx
  int v41; // eax
  char v42; // cl
  char v43; // al
  __int128 v44; // xmm0
  const EVENT_DESCRIPTOR *v45; // r9
  _QWORD *PoolWithTag; // rax
  int v47; // r8d
  void *v48; // r14
  int QualifierDescriptorFromDevice; // eax
  int v50; // [rsp+48h] [rbp-51h]
  _BYTE v51[4]; // [rsp+50h] [rbp-49h] BYREF
  int v52; // [rsp+54h] [rbp-45h] BYREF
  int v53; // [rsp+58h] [rbp-41h] BYREF
  int v54; // [rsp+5Ch] [rbp-3Dh] BYREF
  int v55; // [rsp+60h] [rbp-39h] BYREF
  _DWORD *v56; // [rsp+68h] [rbp-31h]
  _BYTE v57[8]; // [rsp+70h] [rbp-29h] BYREF
  __int64 v58; // [rsp+78h] [rbp-21h]
  __int64 v59; // [rsp+80h] [rbp-19h]
  __int64 *v60; // [rsp+88h] [rbp-11h]
  __int64 v61; // [rsp+90h] [rbp-9h]
  __int64 v62; // [rsp+98h] [rbp-1h]
  char v63; // [rsp+A0h] [rbp+7h]
  __int64 v64; // [rsp+A8h] [rbp+Fh] BYREF
  char v65; // [rsp+B0h] [rbp+17h]
  int v66; // [rsp+B1h] [rbp+18h]

  v52 = 0;
  v51[0] = 0;
  v56 = FdoExt(a1);
  v6 = PdoExt((__int64)a2);
  Log(a1, 4, 1936028740, (__int64)a2, *((unsigned __int16 *)v6 + 710));
  v7 = (void *)*((_QWORD *)v6 + 298);
  if ( v7 )
  {
    ExFreePoolWithTag(v7, 0);
    *((_QWORD *)v6 + 298) = 0LL;
  }
  v8 = (void *)*((_QWORD *)v6 + 142);
  if ( v8 )
  {
    ExFreePoolWithTag(v8, 0);
    *((_QWORD *)v6 + 142) = 0LL;
  }
  v9 = (void *)*((_QWORD *)v6 + 279);
  if ( v9 )
  {
    ExFreePoolWithTag(v9, 0);
    *((_QWORD *)v6 + 279) = 0LL;
  }
  v10 = (void *)*((_QWORD *)v6 + 299);
  if ( v10 )
  {
    ExFreePoolWithTag(v10, 0);
    *((_QWORD *)v6 + 299) = 0LL;
  }
  v11 = (void *)*((_QWORD *)v6 + 354);
  *((_QWORD *)v6 + 300) = 0LL;
  if ( v11 )
  {
    ExFreePoolWithTag(v11, 0);
    *((_QWORD *)v6 + 354) = 0LL;
  }
  v12 = (void *)*((_QWORD *)v6 + 266);
  if ( v12 )
  {
    ExFreePoolWithTag(v12, 0);
    *((_QWORD *)v6 + 266) = 0LL;
    v6[531] = 0;
  }
  v6[353] &= ~0x200u;
  v13 = (void *)*((_QWORD *)v6 + 272);
  if ( v13 )
  {
    ExFreePoolWithTag(v13, 0);
    *((_QWORD *)v6 + 272) = 0LL;
    v6[543] = 0;
  }
  v14 = (void *)*((_QWORD *)v6 + 274);
  if ( v14 )
  {
    ExFreePoolWithTag(v14, 0);
    *((_QWORD *)v6 + 274) = 0LL;
    v6[547] = 0;
  }
  v15 = (void *)*((_QWORD *)v6 + 315);
  if ( v15 )
  {
    ExFreePoolWithTag(v15, 0);
    *((_QWORD *)v6 + 315) = 0LL;
  }
  v16 = v6 + 704;
  memset(v6 + 704, 0, 0x38uLL);
  result = UsbhQueryPortState(a1, *((_WORD *)v6 + 710), (__int64)&v53, &v52);
  if ( a3 )
    *a3 = v52;
  if ( (result & 0xC0000000) == 0xC0000000 )
  {
    v6[703] = 1073807368;
    return result;
  }
  if ( (v53 & 0x200) != 0 )
  {
    v6[290] = 0;
  }
  else if ( (v53 & 0x400) != 0 )
  {
    v6[290] = 2;
  }
  else
  {
    v6[290] = 1;
  }
  Log(a1, 4, 1936999473, (__int64)a2, (int)v6[290]);
  v55 = 18;
  v54 = 0;
  v18 = *((_QWORD *)v6 + 144);
  v19 = FdoExt(a1);
  v20 = (int (__fastcall *)(_QWORD, __int64, _DWORD *, int *, _QWORD, int *))*((_QWORD *)v19 + 534);
  if ( !v20 || v20(*((_QWORD *)v19 + 529), v18, v6 + 348, &v55, 0LL, &v54) < 0 )
    goto LABEL_129;
  UsbhGetInitRegUsbDeviceFlags(v21, (__int64)a2);
  if ( !*((_BYTE *)v6 + 2879) )
    goto LABEL_28;
  if ( (int)UsbhSendMsOs20AltEnumCommand(a1, a2, v6 + 718) < 0 )
    goto LABEL_66;
  if ( (int)UsbhGetDeviceDescriptor(a1, a2) < 0 )
  {
LABEL_129:
    v6[703] = 1073807360;
    return 3221225485LL;
  }
  if ( !UsbhValidateDeviceDescriptor(a1, (__int64)(v6 + 348), v32, 0LL, 0LL) )
  {
    v6[703] = 1073807365;
    return 3221225485LL;
  }
  UsbhBusIf_SetMsOs20Support(a1, *((_QWORD *)v6 + 144), v6 + 348, 0LL);
LABEL_28:
  result = UsbhGetDeviceInformation(a1, (__int64)a2);
  BosDescriptor = result;
  if ( (result & 0xC0000000) == 0xC0000000 )
    return result;
  if ( *((_WORD *)v6 + 697) <= 0x200u || (v6[356] & 0x20000) != 0 )
    goto LABEL_30;
  BosDescriptor = UsbhGetBosDescriptor(*((_QWORD *)v6 + 147), a2, &v53);
  if ( BosDescriptor < 0 )
    return (unsigned int)BosDescriptor;
  AlternateUsbDescriptors = UsbhValidateBOSDescriptorSet(a1, *((_QWORD *)v6 + 299), (int)v6 + 1392, v53, v57);
  if ( AlternateUsbDescriptors == 1 )
    v6[699] |= 0x20u;
  v34 = v60;
  if ( v60 )
  {
    if ( !*((_BYTE *)v60 + 7) || (v6[353] & 0x40000000) != 0 )
    {
LABEL_78:
      if ( v34 )
      {
        *v16 |= 1u;
        v6[356] &= 0xFFFFF9FF;
        if ( *((_WORD *)v34 + 2) )
        {
          UsbhBusIf_SetMsOs20Support(a1, *((_QWORD *)v6 + 144), 0LL, *((unsigned __int8 *)v34 + 6));
          BosDescriptor = UsbhGetMsOs20DescriptorSet(a1, a2, v60);
          if ( BosDescriptor < 0 )
          {
            v6[703] = 1073807388;
            UsbhEtwLogHubIrpEvent(a1, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_ENUM_MSOS20_DESC_FAILURE);
            return (unsigned int)BosDescriptor;
          }
          AlternateUsbDescriptors = UsbhValidateMsOs20DescriptorSet(a1, a2, v60);
          if ( !AlternateUsbDescriptors )
          {
            v6[703] = 1073807389;
            UsbhEtwLogHubIrpEvent(a1, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_ENUM_MSOS20_DESC_VALIDATION_FAILURE);
            return 3221225485LL;
          }
          v38 = *v16;
          if ( (*v16 & 0x200) != 0 )
            v6[353] |= 0x20u;
          if ( (v6[293] & 0x10) != 0 && (v6[353] & 4) == 0 && (v38 & 0x80u) != 0 )
          {
            LOBYTE(v37) = 1;
            v39 = *(unsigned __int8 *)(*((_QWORD *)v6 + 356) + 5LL);
            if ( (v56[640] & 1) == 0 )
              v39 = 20LL;
            UsbhBusIf_SetClearRootPortResumeTime(a1, *((_QWORD *)v6 + 144), v37, v39);
            v6[353] |= 0x20000000u;
          }
        }
      }
      goto LABEL_92;
    }
    v35 = *v60;
    v36 = v60;
    *v16 |= 4u;
    *((_QWORD *)v6 + 359) = v35;
    BosDescriptor = UsbhSendMsOs20AltEnumCommand(a1, a2, v36);
    if ( BosDescriptor >= 0 )
    {
      AlternateUsbDescriptors = UsbhGetAlternateUsbDescriptors(a1, a2, v57);
      if ( AlternateUsbDescriptors )
      {
        RtlWriteRegistryValue(2u, *((PCWSTR *)v6 + 142), L"MsOs20DescriptorSetInfo", 3u, v6 + 718, 8u);
        v34 = v60;
        goto LABEL_78;
      }
      return 3221225485LL;
    }
LABEL_66:
    v6[703] = 1073807390;
    return 3221225485LL;
  }
LABEL_92:
  v40 = v61;
  if ( v61 )
  {
    v6[356] |= 0x40000u;
    v6[758] = *(_DWORD *)(v40 + 22);
    v64 = *((_QWORD *)v6 + 380);
    v41 = *(_DWORD *)(v40 + 22);
    v65 = 1;
    v66 = v41;
    ZwUpdateWnfStateData(&WNF_USB_TYPE_C_PARTNER_STATE, &v64, 13LL, 0LL, 0LL, 0, 0);
    UsbDualRoleFeaturesQueryLocalMachine(&v53);
    LOBYTE(v64) = 64;
    HIWORD(v64) = 0;
    LOWORD(v52) = 0;
    v42 = *(_BYTE *)(v61 + 21);
    *(_DWORD *)((char *)&v64 + 2) = v53;
    BYTE1(v64) = v42;
    BosDescriptor = UsbhSyncSendCommandToDevice(*((_QWORD *)v6 + 147), (__int64)a2, &v64, 0LL, &v52);
    if ( BosDescriptor < 0 )
      Log(a1, 4, 1399075121, 0LL, 0LL);
  }
  if ( v62 )
  {
    result = UsbhGetBillboardInfo(*((_QWORD *)v6 + 147));
    BosDescriptor = result;
    if ( (int)result < 0 )
      return result;
    *((_QWORD *)v6 + 300) = v62;
  }
  if ( *(_BYTE *)(*((_QWORD *)v6 + 298) + 4LL) > 1u && v63 == 1 )
  {
    v43 = *((_BYTE *)v6 + 1396);
    if ( !v43 || v43 == -17 && *((_BYTE *)v6 + 1397) == 2 && *((_BYTE *)v6 + 1398) == 1 )
      v6[353] |= 0x20u;
  }
  if ( !*((_BYTE *)v6 + 2724) && AlternateUsbDescriptors == 1 && v59 )
  {
    v44 = *(_OWORD *)(v59 + 4);
    *((_BYTE *)v6 + 2724) = 1;
    *(_OWORD *)(v6 + 677) = v44;
  }
  if ( v58 )
  {
    v6[353] |= 0x80000u;
    v6[699] |= 0x200u;
  }
LABEL_30:
  if ( BosDescriptor < 0 )
    return (unsigned int)BosDescriptor;
  if ( (*(_BYTE *)v16 & 2) == 0 )
  {
    BosDescriptor = UsbhGetMSOS_Descriptor(a1, (__int64)a2);
    if ( BosDescriptor != -1073741637 && (BosDescriptor & 0xC0000000) == 0xC0000000 )
    {
      v45 = (const EVENT_DESCRIPTOR *)&USBHUB_ETW_EVENT_HUB_ENUM_MSOS_DESC_FAILURE;
LABEL_114:
      UsbhEtwLogHubIrpEvent(a1, 0LL, 0LL, v45);
      return (unsigned int)BosDescriptor;
    }
  }
  result = UsbhUpdateUxdSettings(a1, a2, 0, v51);
  if ( (result & 0xC0000000) != 0xC0000000 )
  {
    BosDescriptor = UsbhGetSerialNumber(a1);
    v24 = (PDEVICE_OBJECT)(BosDescriptor & 0xC0000000);
    if ( (_DWORD)v24 == -1073741824 )
    {
      v45 = (const EVENT_DESCRIPTOR *)&USBHUB_ETW_EVENT_HUB_ENUM_SERIAL_NUMBER_FAILURE;
      goto LABEL_114;
    }
    v25 = *((_QWORD *)v6 + 266);
    if ( v25 )
    {
      v6[353] |= 0x200u;
      v24 = WPP_GLOBAL_Control;
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_S(
          WPP_GLOBAL_Control->DeviceExtension,
          0,
          v23,
          40,
          (__int64)&WPP_e3e41794e16d35283050e58212bb38b7_Traceguids,
          v25);
    }
    if ( (v6[356] & 0x400) != 0 && (v6[353] & 0x20) == 0 )
      *((_QWORD *)v6 + 315) = UsbhGetMsOsExtendedConfigDesc(v24, a2);
    if ( (v6[293] & 0x10) == 0 )
      BosDescriptor = UsbhGetMsOsContainerID(a1);
    if ( (BosDescriptor & 0xC0000000) == 0xC0000000 && BosDescriptor != -1073741637 )
      return (unsigned int)BosDescriptor;
    v26 = (void *)*((_QWORD *)v6 + 262);
    if ( v26 )
    {
      ExFreePoolWithTag(v26, 0);
      *((_QWORD *)v6 + 262) = 0LL;
      v6[523] = 0;
    }
    v27 = (void *)*((_QWORD *)v6 + 260);
    if ( v27 )
    {
      ExFreePoolWithTag(v27, 0);
      *((_QWORD *)v6 + 260) = 0LL;
      v6[519] = 0;
    }
    v28 = (void *)*((_QWORD *)v6 + 264);
    if ( v28 )
    {
      ExFreePoolWithTag(v28, 0);
      *((_QWORD *)v6 + 264) = 0LL;
      v6[527] = 0;
    }
    v29 = UsbhBuildDeviceID(a1, (__int64)a2, (__int64)(v6 + 518));
    if ( v29 < 0 )
      goto LABEL_49;
    v29 = UsbhBuildHardwareID(a1, (__int64)a2, (__int64)(v6 + 522));
    if ( v29 >= 0 )
    {
      v29 = UsbhBuildCompatibleID(a1, a2, v6 + 526);
      if ( (v29 & 0xC0000000) != 0xC0000000 )
        goto LABEL_49;
      UsbhFreeID(v6 + 522);
    }
    UsbhFreeID(v6 + 518);
LABEL_49:
    UsbhGetLanguageIdString(a1);
    if ( *((_BYTE *)v6 + 1407) && (v6[356] & 0x800) == 0 )
      UsbhGetProductIdString(*((_QWORD *)v6 + 147));
    if ( v29 >= 0 && v56[634] == 1 && v6[290] == 1 && *((_WORD *)v6 + 697) >= 0x200u )
    {
      PoolWithTag = ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, 0xAuLL, 0x42554855u);
      v48 = PoolWithTag;
      if ( PoolWithTag )
      {
        LOWORD(v52) = 10;
        *PoolWithTag = 0LL;
        *((_WORD *)PoolWithTag + 4) = 0;
        QualifierDescriptorFromDevice = UsbhGetQualifierDescriptorFromDevice(
                                          a1,
                                          (_DWORD)a2,
                                          v47,
                                          (_DWORD)PoolWithTag,
                                          (__int64)&v52);
        if ( QualifierDescriptorFromDevice >= 0 )
        {
          LOBYTE(v50) = 0;
          UsbhException(
            a1,
            *((unsigned __int16 *)v6 + 710),
            100,
            (int)v48,
            10,
            QualifierDescriptorFromDevice,
            0,
            usbfile_bus_c,
            4551,
            v50);
          v6[353] |= 1u;
        }
        ExFreePoolWithTag(v48, 0);
      }
      v29 = 0;
    }
    v30 = Usbh__TestPoint__Ulong(a1, 6LL, (unsigned int)v29, *((unsigned __int16 *)v6 + 710));
    Log(a1, 4, 1936999486, (__int64)a2, v30);
    return v31;
  }
  return result;
}
