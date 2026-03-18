/*
 * XREFs of ACPIBusAndFilterIrpQueryCapabilities @ 0x1C00758E0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qsLqss @ 0x1C00014E0 (WPP_RECORDER_SF_qsLqss.c)
 *     ACPIDebugGetIrpText @ 0x1C000167C (ACPIDebugGetIrpText.c)
 *     ACPIInternalGetDeviceExtension @ 0x1C000169C (ACPIInternalGetDeviceExtension.c)
 *     AMLIGetNSObjectType @ 0x1C0001D20 (AMLIGetNSObjectType.c)
 *     ACPIGet @ 0x1C0001D30 (ACPIGet.c)
 *     AMLIDereferenceHandleEx @ 0x1C0002AF0 (AMLIDereferenceHandleEx.c)
 *     AMLIGetNamedChild @ 0x1C0002B24 (AMLIGetNamedChild.c)
 *     __security_check_cookie @ 0x1C0003F30 (__security_check_cookie.c)
 *     ACPIDockIsDockDevice @ 0x1C00087E4 (ACPIDockIsDockDevice.c)
 *     WPP_RECORDER_SF_Dqss @ 0x1C00173F8 (WPP_RECORDER_SF_Dqss.c)
 *     ACPIGetD3Policy @ 0x1C003F590 (ACPIGetD3Policy.c)
 *     AMLIIsNamedChildPresent @ 0x1C0043DAC (AMLIIsNamedChildPresent.c)
 *     AcpiCheckSecureDevice @ 0x1C008847C (AcpiCheckSecureDevice.c)
 *     ACPISystemPowerQueryDeviceCapabilities @ 0x1C0088B20 (ACPISystemPowerQueryDeviceCapabilities.c)
 *     ACPIProcessPhysicalDeviceLocation @ 0x1C008B638 (ACPIProcessPhysicalDeviceLocation.c)
 */

__int64 __fastcall ACPIBusAndFilterIrpQueryCapabilities(ULONG_PTR a1, __int64 a2, __int64 a3, char a4)
{
  __int64 v4; // rdi
  char v5; // r15
  __int64 DeviceExtension; // rax
  char v8; // bl
  const char *v9; // r13
  _QWORD *v10; // rsi
  int DeviceCapabilities; // r14d
  _QWORD *v12; // r15
  _DWORD *v13; // rdi
  __int64 *v14; // rax
  volatile signed __int32 *v15; // r14
  int v16; // eax
  int v17; // eax
  char v18; // r12
  int v19; // ecx
  unsigned int v20; // ecx
  __int64 v21; // rax
  const char *v22; // rdx
  const char *v23; // rcx
  unsigned __int16 v24; // r9
  __int64 v25; // rax
  int v26; // edx
  char *IrpText; // rax
  const char *v28; // r8
  __int64 v29; // r10
  bool v32; // [rsp+61h] [rbp-48h] BYREF
  unsigned __int8 v33; // [rsp+62h] [rbp-47h]
  __int64 v34; // [rsp+68h] [rbp-41h]
  int v35; // [rsp+70h] [rbp-39h] BYREF
  __int64 v36; // [rsp+78h] [rbp-31h] BYREF
  __int64 v37; // [rsp+80h] [rbp-29h] BYREF
  __int64 v38; // [rsp+88h] [rbp-21h] BYREF
  __int64 v39; // [rsp+90h] [rbp-19h] BYREF
  _QWORD *v40; // [rsp+98h] [rbp-11h] BYREF
  _QWORD *v41; // [rsp+A0h] [rbp-9h] BYREF
  int v42; // [rsp+A8h] [rbp-1h]
  _BYTE v43[8]; // [rsp+B0h] [rbp+7h] BYREF
  int v44; // [rsp+B8h] [rbp+Fh]

  v4 = *(_QWORD *)(a2 + 184);
  v5 = a2;
  v34 = a2;
  v33 = *(_BYTE *)(v4 + 1);
  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  v8 = 0;
  v9 = byte_1C005B1F0;
  v10 = (_QWORD *)DeviceExtension;
  if ( DeviceExtension )
  {
    v12 = *(_QWORD **)(DeviceExtension + 712);
    if ( (*(_DWORD *)(DeviceExtension + 952) & 0x800LL) != 0 && ACPIGetD3Policy(DeviceExtension, &v32) >= 0 && v32 )
      v10[1] &= ~0x800uLL;
    v13 = *(_DWORD **)(v4 + 8);
    if ( (v10[1] & 0x8000000000LL) == 0 )
    {
      v14 = AMLIGetNamedChild(v12, 1447907935);
      v15 = (volatile signed __int32 *)v14;
      if ( v14 )
      {
        if ( (unsigned int)AMLIGetNSObjectType((__int64)v14) == 8 )
        {
          v36 = 0LL;
          if ( (int)ACPIGet((__int64)v10, 0x564D525Fu, 268713986, 0LL, 0, 0LL, 0LL, (__int64)&v36, 0LL) < 0 )
            v13[1] |= 0x10u;
          else
            v13[1] = (v36 != 0 ? 0x10 : 0) | v13[1] & 0xFFFFFFEF;
          AMLIDereferenceHandleEx(v15);
        }
        else
        {
          v13[1] |= 0x10u;
        }
      }
      if ( !ACPIDockIsDockDevice() )
      {
        if ( AMLIIsNamedChildPresent(v12, 810173791) )
        {
          v16 = v13[1];
          if ( (v16 & 0x10) == 0 )
          {
            v16 |= 0x40000u;
            v13[1] = v16;
          }
          v13[1] = v16 | 0x18;
        }
        if ( AMLIIsNamedChildPresent(v12, 826951007)
          || AMLIIsNamedChildPresent(v12, 843728223)
          || AMLIIsNamedChildPresent(v12, 860505439)
          || AMLIIsNamedChildPresent(v12, 877282655) )
        {
          v17 = v13[1];
          if ( (v17 & 0x10) == 0 )
          {
            v17 |= 0x40000u;
            v13[1] = v17;
          }
          v13[1] = v17 | 0x10010;
        }
      }
    }
    if ( AMLIIsNamedChildPresent(v12, 1129466207) )
      *(_DWORD *)(a1 + 48) |= 0x4000u;
    v37 = 0LL;
    DeviceCapabilities = ACPIGet((__int64)v10, 0x4154535Fu, -1878783998, 0LL, 0, 0LL, 0LL, (__int64)&v37, 0LL);
    if ( DeviceCapabilities < 0 )
      goto LABEL_74;
    v41 = v10;
    v40 = &v41;
    v42 = 8;
    if ( (int)EmClientRuleEvaluate(&GUID_EM_RULE_ACPI_DEVICE_IGNORE_STA_DISABLE, &v40, 1LL, &v35) >= 0 && v35 == 2 )
    {
      v13[1] &= ~0x4000u;
LABEL_33:
      v18 = a4;
      goto LABEL_45;
    }
    if ( (v10[1] & 0x40000000000000LL) != 0 )
    {
      v18 = a4;
      if ( !a4 )
      {
        v19 = v13[1];
        if ( (AcpiOverrideAttributes & 2) != 0 )
          v20 = v19 | 0x4000;
        else
          v20 = v19 & 0xFFFFBFFF;
        v13[1] = v20;
      }
    }
    else
    {
      if ( AMLIIsNamedChildPresent(v12, 1397900127) && !AMLIIsNamedChildPresent(v12, 1397904223) )
      {
        v13[1] |= 0x4000u;
        goto LABEL_33;
      }
      v18 = a4;
      if ( a4 )
        v13[1] &= ~0x4000u;
    }
LABEL_45:
    if ( (v37 & 4) == 0 )
      v13[1] |= 0x20000u;
    if ( AMLIIsNamedChildPresent(v12, 1314214751) )
    {
      v38 = 0LL;
      if ( (int)ACPIGet((__int64)v10, 0x4E55535Fu, 268697602, 0LL, 0, 0LL, 0LL, (__int64)&v38, 0LL) >= 0 )
        v13[3] = v38;
    }
    v39 = 0LL;
    if ( AMLIIsNamedChildPresent(v12, 1380204895) )
    {
      DeviceCapabilities = ACPIGet((__int64)v10, 0x5244415Fu, -1878785022, 0LL, 0, 0LL, 0LL, (__int64)&v39, 0LL);
      if ( DeviceCapabilities < 0 )
      {
        v21 = v10[1];
        v22 = byte_1C005B1F0;
        v23 = byte_1C005B1F0;
        if ( (v21 & 0x200000000000LL) != 0 )
        {
          v22 = (const char *)v10[70];
          if ( (v21 & 0x400000000000LL) != 0 )
            v23 = (const char *)v10[71];
        }
        v24 = 13;
        goto LABEL_56;
      }
      v13[2] = v39;
    }
    DeviceCapabilities = ACPISystemPowerQueryDeviceCapabilities((ULONG_PTR)v10);
    if ( DeviceCapabilities >= 0 )
    {
      if ( (unsigned __int8)AcpiCheckSecureDevice(v10) )
        v13[1] |= 0x100000u;
      if ( !v18 )
      {
        v13[1] |= 0x80u;
        v26 = v13[1] ^ ((unsigned __int16)v13[1] ^ (unsigned __int16)((unsigned __int64)*((unsigned int *)v10 + 2) >> 9)) & 0x100;
        v13[1] = v26;
        v13[1] = v26 & 0xFFFFFFBF | (v10[71] != 0LL ? 0x40 : 0);
      }
      if ( (int)ACPIProcessPhysicalDeviceLocation(v10, v43, 0LL) >= 0 && (v43[0] & 0x7F) != 0 )
      {
        if ( (v44 & 1) == 0 )
          v13[1] |= 0x40000u;
        if ( v44 < 0 )
          v13[1] |= 0x40000u;
      }
      DeviceCapabilities = 0;
      goto LABEL_74;
    }
    v25 = v10[1];
    v22 = byte_1C005B1F0;
    v23 = byte_1C005B1F0;
    if ( (v25 & 0x200000000000LL) != 0 )
    {
      v22 = (const char *)v10[70];
      if ( (v25 & 0x400000000000LL) != 0 )
        v23 = (const char *)v10[71];
    }
    v24 = 14;
LABEL_56:
    WPP_RECORDER_SF_Dqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      5u,
      v24,
      (__int64)&WPP_4bcb5acd96f437848f1ce24078773eb7_Traceguids,
      DeviceCapabilities,
      (char)v10,
      v22,
      v23);
LABEL_74:
    v5 = v34;
    goto LABEL_75;
  }
  DeviceCapabilities = -1073741823;
LABEL_75:
  if ( v10 )
  {
    v8 = (char)v10;
    if ( (v10[1] & 0x200000000000LL) != 0 )
      v9 = (const char *)v10[70];
  }
  IrpText = ACPIDebugGetIrpText(0x400000000000LL, v33);
  WPP_RECORDER_SF_qsLqss(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    2u,
    5u,
    0xFu,
    v29,
    v5,
    IrpText,
    DeviceCapabilities,
    v8,
    v9,
    v28);
  return (unsigned int)DeviceCapabilities;
}
