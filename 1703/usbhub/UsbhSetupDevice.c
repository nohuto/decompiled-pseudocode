/*
 * XREFs of UsbhSetupDevice @ 0x1C0021D38
 * Callers:
 *     UsbhReset2Complete @ 0x1C0015860 (UsbhReset2Complete.c)
 * Callees:
 *     UsbhSyncSendCommandToDevice @ 0x1C0006AC0 (UsbhSyncSendCommandToDevice.c)
 *     UsbhQueryPortState @ 0x1C00130E0 (UsbhQueryPortState.c)
 *     Log @ 0x1C0013A00 (Log.c)
 *     FdoExt @ 0x1C0014F60 (FdoExt.c)
 *     PdoExt @ 0x1C0018C00 (PdoExt.c)
 *     UsbhGetInitRegUsbDeviceFlags @ 0x1C001C850 (UsbhGetInitRegUsbDeviceFlags.c)
 *     UsbhBuildDeviceID @ 0x1C001CFA0 (UsbhBuildDeviceID.c)
 *     UsbhBuildHardwareID @ 0x1C001D200 (UsbhBuildHardwareID.c)
 *     UsbhBuildCompatibleID @ 0x1C001DC20 (UsbhBuildCompatibleID.c)
 *     UsbhValidateDeviceDescriptor @ 0x1C001F9D4 (UsbhValidateDeviceDescriptor.c)
 *     UsbhGetMSOS_Descriptor @ 0x1C001FA08 (UsbhGetMSOS_Descriptor.c)
 *     UsbhGetDeviceInformation @ 0x1C001FAE0 (UsbhGetDeviceInformation.c)
 *     Usbh_HubGetUsbDescriptors @ 0x1C001FD28 (Usbh_HubGetUsbDescriptors.c)
 *     UsbhFreeID @ 0x1C0022140 (UsbhFreeID.c)
 *     Usbh__TestPoint__Ulong @ 0x1C0022170 (Usbh__TestPoint__Ulong.c)
 *     UsbhGetLanguageIdString @ 0x1C00221B8 (UsbhGetLanguageIdString.c)
 *     UsbhGetSerialNumber @ 0x1C0022228 (UsbhGetSerialNumber.c)
 *     UsbhUpdateUxdSettings @ 0x1C0022298 (UsbhUpdateUxdSettings.c)
 *     UsbhEtwLogHubIrpEvent @ 0x1C0024BE0 (UsbhEtwLogHubIrpEvent.c)
 *     __security_check_cookie @ 0x1C00283F0 (__security_check_cookie.c)
 *     memset @ 0x1C00289C0 (memset.c)
 *     UsbhGetMsOs20DescriptorSet @ 0x1C003F398 (UsbhGetMsOs20DescriptorSet.c)
 *     UsbhGetMsOsContainerID @ 0x1C003F4EC (UsbhGetMsOsContainerID.c)
 *     UsbhGetMsOsExtendedConfigDesc @ 0x1C003F79C (UsbhGetMsOsExtendedConfigDesc.c)
 *     UsbhSendMsOs20AltEnumCommand @ 0x1C003FEA4 (UsbhSendMsOs20AltEnumCommand.c)
 *     UsbhGetAlternateUsbDescriptors @ 0x1C0042FC8 (UsbhGetAlternateUsbDescriptors.c)
 *     UsbhGetBillboardInfo @ 0x1C004313C (UsbhGetBillboardInfo.c)
 *     WPP_RECORDER_SF_S @ 0x1C00454FC (WPP_RECORDER_SF_S.c)
 *     UsbhException @ 0x1C004F144 (UsbhException.c)
 *     UsbhBusIf_SetClearRootPortResumeTime @ 0x1C0050188 (UsbhBusIf_SetClearRootPortResumeTime.c)
 *     UsbhBusIf_SetMsOs20Support @ 0x1C0050294 (UsbhBusIf_SetMsOs20Support.c)
 *     UsbhGetProductIdString @ 0x1C0052E10 (UsbhGetProductIdString.c)
 *     UsbhValidateBOSDescriptorSet @ 0x1C0053FC8 (UsbhValidateBOSDescriptorSet.c)
 *     UsbhValidateMsOs20DescriptorSet @ 0x1C0054394 (UsbhValidateMsOs20DescriptorSet.c)
 *     UsbhGetBosDescriptor @ 0x1C00553A8 (UsbhGetBosDescriptor.c)
 *     UsbhGetDeviceDescriptor @ 0x1C0055518 (UsbhGetDeviceDescriptor.c)
 *     UsbhGetQualifierDescriptorFromDevice @ 0x1C00555F8 (UsbhGetQualifierDescriptorFromDevice.c)
 *     UsbDualRoleFeaturesQueryLocalMachine @ 0x1C0059BF4 (UsbDualRoleFeaturesQueryLocalMachine.c)
 */

__int64 __fastcall UsbhSetupDevice(__int64 a1, __int64 a2, _DWORD *a3)
{
  _DWORD *v6; // rbx
  void *v7; // rcx
  void *v8; // rcx
  void *v9; // rcx
  void *v10; // rcx
  void *v11; // rcx
  void *v12; // rcx
  int *v13; // r13
  __int64 result; // rax
  __int64 v15; // rcx
  int BosDescriptor; // r14d
  int MSOS_Descriptor; // eax
  int v18; // r8d
  PDEVICE_OBJECT v19; // rcx
  __int64 v20; // rax
  int v21; // r14d
  int v22; // r8d
  int v23; // eax
  unsigned int v24; // r10d
  __int64 v25; // r8
  __int64 v26; // r9
  char AlternateUsbDescriptors; // r12
  __int64 *v28; // rcx
  __int64 v29; // rax
  void *v30; // r9
  __int64 v31; // r8
  int v32; // ecx
  __int64 v33; // r9
  __int64 v34; // rcx
  int v35; // eax
  char v36; // cl
  char v37; // al
  __int128 v38; // xmm0
  int QualifierDescriptorFromDevice; // eax
  int ValueData; // [rsp+20h] [rbp-89h]
  int ValueDataa; // [rsp+20h] [rbp-89h]
  int v42; // [rsp+48h] [rbp-61h]
  _BYTE v43[4]; // [rsp+50h] [rbp-59h] BYREF
  int v44; // [rsp+54h] [rbp-55h] BYREF
  int v45; // [rsp+58h] [rbp-51h] BYREF
  int v46; // [rsp+5Ch] [rbp-4Dh] BYREF
  int v47; // [rsp+60h] [rbp-49h] BYREF
  _BYTE v48[8]; // [rsp+68h] [rbp-41h] BYREF
  __int64 v49; // [rsp+70h] [rbp-39h]
  __int64 v50; // [rsp+78h] [rbp-31h]
  __int64 *v51; // [rsp+80h] [rbp-29h]
  __int64 v52; // [rsp+88h] [rbp-21h]
  __int64 v53; // [rsp+90h] [rbp-19h]
  char v54; // [rsp+98h] [rbp-11h]
  __int64 v55; // [rsp+A0h] [rbp-9h] BYREF
  char v56; // [rsp+A8h] [rbp-1h]
  int v57; // [rsp+A9h] [rbp+0h]
  int v58[2]; // [rsp+B0h] [rbp+7h] BYREF

  v45 = 0;
  v43[0] = 0;
  *(_QWORD *)v58 = FdoExt(a1);
  v6 = PdoExt(a2);
  Log(a1, 4, 1936028740, a2, *((unsigned __int16 *)v6 + 710));
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
  v11 = (void *)*((_QWORD *)v6 + 352);
  *((_QWORD *)v6 + 300) = 0LL;
  if ( v11 )
  {
    ExFreePoolWithTag(v11, 0);
    *((_QWORD *)v6 + 352) = 0LL;
  }
  UsbhFreeID(v6 + 530);
  v6[353] &= ~0x200u;
  UsbhFreeID(v6 + 542);
  UsbhFreeID(v6 + 546);
  v12 = (void *)*((_QWORD *)v6 + 313);
  if ( v12 )
  {
    ExFreePoolWithTag(v12, 0);
    *((_QWORD *)v6 + 313) = 0LL;
  }
  v13 = v6 + 700;
  memset(v6 + 700, 0, 0x38uLL);
  result = UsbhQueryPortState(a1, *((_WORD *)v6 + 710), (__int64)&v44, &v45);
  if ( a3 )
    *a3 = v45;
  if ( (result & 0xC0000000) == 0xC0000000 )
  {
    v6[699] = 1073807368;
    return result;
  }
  if ( (v44 & 0x200) != 0 )
  {
    v6[290] = 0;
  }
  else if ( (v44 & 0x400) != 0 )
  {
    v6[290] = 2;
  }
  else
  {
    v6[290] = 1;
  }
  Log(a1, 4, 1936999473, a2, (int)v6[290]);
  v46 = 0;
  v47 = 18;
  if ( (int)Usbh_HubGetUsbDescriptors(a1, *((_QWORD *)v6 + 144), (__int64)(v6 + 348), (__int64)&v47, 0LL, (__int64)&v46) < 0 )
    goto LABEL_46;
  UsbhGetInitRegUsbDeviceFlags(v15, a2);
  if ( !*((_BYTE *)v6 + 2863) )
    goto LABEL_21;
  if ( (int)UsbhSendMsOs20AltEnumCommand(a1, a2, v6 + 714) < 0 )
    goto LABEL_53;
  if ( (int)UsbhGetDeviceDescriptor(a1, a2) < 0 )
  {
LABEL_46:
    v6[699] = 1073807360;
    return 3221225485LL;
  }
  if ( !UsbhValidateDeviceDescriptor(a1, (__int64)(v6 + 348), v25, 0LL, 0LL) )
  {
    v6[699] = 1073807365;
    return 3221225485LL;
  }
  UsbhBusIf_SetMsOs20Support(a1, *((_QWORD *)v6 + 144), v6 + 348, 0LL);
LABEL_21:
  result = UsbhGetDeviceInformation(a1, a2);
  BosDescriptor = result;
  if ( (result & 0xC0000000) == 0xC0000000 )
    return result;
  if ( *((_WORD *)v6 + 697) <= 0x200u || (v6[356] & 0x20000) != 0 )
    goto LABEL_23;
  BosDescriptor = UsbhGetBosDescriptor(*((_QWORD *)v6 + 147), a2, &v44);
  if ( BosDescriptor < 0 )
    return (unsigned int)BosDescriptor;
  AlternateUsbDescriptors = UsbhValidateBOSDescriptorSet(a1, *((_QWORD *)v6 + 299), (int)v6 + 1392, v44, v48);
  if ( AlternateUsbDescriptors == 1 )
    v6[695] |= 0x20u;
  v28 = v51;
  if ( !v51 )
    goto LABEL_79;
  if ( *((_BYTE *)v51 + 7) && (v6[353] & 0x40000000) == 0 )
  {
    v29 = *v51;
    *v13 |= 4u;
    *((_QWORD *)v6 + 357) = v29;
    BosDescriptor = UsbhSendMsOs20AltEnumCommand(a1, a2, v28);
    if ( BosDescriptor >= 0 )
    {
      AlternateUsbDescriptors = UsbhGetAlternateUsbDescriptors(a1, a2, v48);
      if ( !AlternateUsbDescriptors )
        return 3221225485LL;
      RtlWriteRegistryValue(2u, *((PCWSTR *)v6 + 142), L"MsOs20DescriptorSetInfo", 3u, v6 + 714, 8u);
      v28 = v51;
      goto LABEL_65;
    }
LABEL_53:
    v6[699] = 1073807390;
    return 3221225485LL;
  }
LABEL_65:
  if ( v28 )
  {
    *v13 |= 1u;
    v6[356] &= 0xFFFFF9FF;
    if ( *((_WORD *)v28 + 2) )
    {
      LOBYTE(v26) = *((_BYTE *)v28 + 6);
      UsbhBusIf_SetMsOs20Support(a1, *((_QWORD *)v6 + 144), 0LL, v26);
      BosDescriptor = UsbhGetMsOs20DescriptorSet(a1, a2, v51);
      if ( BosDescriptor < 0 )
      {
        ValueDataa = *((unsigned __int16 *)v6 + 710);
        v6[699] = 1073807388;
        UsbhEtwLogHubIrpEvent(a1, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_ENUM_MSOS20_DESC_FAILURE, ValueDataa, BosDescriptor);
        return (unsigned int)BosDescriptor;
      }
      AlternateUsbDescriptors = UsbhValidateMsOs20DescriptorSet(a1, a2, v51);
      if ( AlternateUsbDescriptors )
      {
        v32 = *v13;
        if ( (*v13 & 0x200) != 0 )
          v6[353] |= 0x20u;
        if ( (v6[293] & 0x10) != 0 && (v6[353] & 4) == 0 && (v32 & 0x80u) != 0 )
        {
          LOBYTE(v31) = 1;
          v33 = *(unsigned __int8 *)(*((_QWORD *)v6 + 354) + 5LL);
          if ( (*(_BYTE *)(*(_QWORD *)v58 + 2560LL) & 1) == 0 )
            v33 = 20LL;
          UsbhBusIf_SetClearRootPortResumeTime(a1, *((_QWORD *)v6 + 144), v31, v33);
          v6[353] |= 0x20000000u;
        }
        goto LABEL_79;
      }
      ValueData = *((unsigned __int16 *)v6 + 710);
      v6[699] = 1073807389;
      UsbhEtwLogHubIrpEvent(
        a1,
        0LL,
        0LL,
        &USBHUB_ETW_EVENT_HUB_ENUM_MSOS20_DESC_VALIDATION_FAILURE,
        ValueData,
        -1073741811);
      return 3221225485LL;
    }
  }
LABEL_79:
  v34 = v52;
  if ( v52 )
  {
    v6[356] |= 0x40000u;
    v6[754] = *(_DWORD *)(v34 + 22);
    v55 = *((_QWORD *)v6 + 378);
    v35 = *(_DWORD *)(v34 + 22);
    v56 = 1;
    v57 = v35;
    ZwUpdateWnfStateData(&WNF_USB_TYPE_C_PARTNER_STATE, &v55, 13LL);
    UsbDualRoleFeaturesQueryLocalMachine(&v44);
    LOBYTE(v55) = 64;
    HIWORD(v55) = 0;
    LOWORD(v45) = 0;
    v36 = *(_BYTE *)(v52 + 21);
    *(_DWORD *)((char *)&v55 + 2) = v44;
    BYTE1(v55) = v36;
    BosDescriptor = UsbhSyncSendCommandToDevice(*((_QWORD *)v6 + 147), a2, &v55, 0LL, &v45);
    if ( BosDescriptor < 0 )
      Log(a1, 4, 1399075121, 0LL, 0LL);
  }
  if ( v53 )
  {
    result = UsbhGetBillboardInfo(*((_QWORD *)v6 + 147));
    BosDescriptor = result;
    if ( (int)result < 0 )
      return result;
    *((_QWORD *)v6 + 300) = v53;
  }
  if ( *(_BYTE *)(*((_QWORD *)v6 + 298) + 4LL) > 1u && v54 == 1 )
  {
    v37 = *((_BYTE *)v6 + 1396);
    if ( !v37 || v37 == -17 && *((_BYTE *)v6 + 1397) == 2 && *((_BYTE *)v6 + 1398) == 1 )
      v6[353] |= 0x20u;
  }
  if ( !*((_BYTE *)v6 + 2708) && AlternateUsbDescriptors == 1 && v50 )
  {
    v38 = *(_OWORD *)(v50 + 4);
    *((_BYTE *)v6 + 2708) = 1;
    *(_OWORD *)(v6 + 673) = v38;
  }
  if ( v49 )
  {
    v6[353] |= 0x80000u;
    v6[695] |= 0x200u;
  }
LABEL_23:
  if ( BosDescriptor < 0 )
    return (unsigned int)BosDescriptor;
  if ( (*(_BYTE *)v13 & 2) == 0 )
  {
    MSOS_Descriptor = UsbhGetMSOS_Descriptor(a1, a2);
    BosDescriptor = MSOS_Descriptor;
    if ( MSOS_Descriptor != -1073741637 && (MSOS_Descriptor & 0xC0000000) == 0xC0000000 )
    {
      v30 = &USBHUB_ETW_EVENT_HUB_ENUM_MSOS_DESC_FAILURE;
LABEL_69:
      UsbhEtwLogHubIrpEvent(a1, 0LL, 0LL, v30, *((unsigned __int16 *)v6 + 710), BosDescriptor);
      return (unsigned int)BosDescriptor;
    }
  }
  result = UsbhUpdateUxdSettings(a1, a2, 0LL, v43);
  if ( (result & 0xC0000000) != 0xC0000000 )
  {
    BosDescriptor = UsbhGetSerialNumber(a1);
    v19 = (PDEVICE_OBJECT)(BosDescriptor & 0xC0000000);
    if ( (_DWORD)v19 == -1073741824 )
    {
      v30 = &USBHUB_ETW_EVENT_HUB_ENUM_SERIAL_NUMBER_FAILURE;
      goto LABEL_69;
    }
    v20 = *((_QWORD *)v6 + 266);
    if ( v20 )
    {
      v6[353] |= 0x200u;
      v19 = WPP_GLOBAL_Control;
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_S(
          WPP_GLOBAL_Control->DeviceExtension,
          0,
          v18,
          40,
          (__int64)&WPP_104684de40073ce1937d0e9f4e1d15ba_Traceguids,
          v20);
    }
    LOBYTE(v19) = (v6[356] & 0x400) != 0;
    if ( ((unsigned __int8)v19 & ((v6[353] & 0x20) == 0)) != 0 )
      *((_QWORD *)v6 + 313) = UsbhGetMsOsExtendedConfigDesc(v19, a2);
    if ( (v6[293] & 0x10) == 0 )
      BosDescriptor = UsbhGetMsOsContainerID(a1);
    if ( (BosDescriptor & 0xC0000000) == 0xC0000000 && BosDescriptor != -1073741637 )
      return (unsigned int)BosDescriptor;
    UsbhFreeID(v6 + 522);
    UsbhFreeID(v6 + 518);
    UsbhFreeID(v6 + 526);
    v21 = UsbhBuildDeviceID(a1, a2, (__int64)(v6 + 518));
    if ( v21 < 0 )
      goto LABEL_37;
    v21 = UsbhBuildHardwareID(a1, a2, (__int64)(v6 + 522));
    if ( v21 >= 0 )
    {
      v21 = UsbhBuildCompatibleID(a1, a2, (__int64)(v6 + 526));
      if ( (v21 & 0xC0000000) != 0xC0000000 )
        goto LABEL_37;
      UsbhFreeID(v6 + 522);
    }
    UsbhFreeID(v6 + 518);
LABEL_37:
    UsbhGetLanguageIdString(a1);
    if ( *((_BYTE *)v6 + 1407) && (v6[356] & 0x800) == 0 )
      UsbhGetProductIdString(*((_QWORD *)v6 + 147));
    if ( v21 >= 0 && *(_DWORD *)(*(_QWORD *)v58 + 2536LL) == 1 && v6[290] == 1 && *((_WORD *)v6 + 697) >= 0x200u )
    {
      LOWORD(v45) = 10;
      QualifierDescriptorFromDevice = UsbhGetQualifierDescriptorFromDevice(
                                        a1,
                                        a2,
                                        v22,
                                        (unsigned int)v58,
                                        (__int64)&v45);
      if ( QualifierDescriptorFromDevice >= 0 )
      {
        LOBYTE(v42) = 0;
        UsbhException(
          a1,
          *((unsigned __int16 *)v6 + 710),
          100,
          (int)v58,
          10,
          QualifierDescriptorFromDevice,
          0,
          usbfile_bus_c,
          4545,
          v42);
        v6[353] |= 1u;
      }
      v21 = 0;
    }
    v23 = Usbh__TestPoint__Ulong(a1, 6LL, (unsigned int)v21, *((unsigned __int16 *)v6 + 710));
    Log(a1, 4, 1936999486, a2, v23);
    return v24;
  }
  return result;
}
