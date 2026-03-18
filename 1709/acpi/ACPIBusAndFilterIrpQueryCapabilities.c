/*
 * XREFs of ACPIBusAndFilterIrpQueryCapabilities @ 0x1C0086D20
 * Callers:
 *     <none>
 * Callees:
 *     AMLIDereferenceHandleEx @ 0x1C0002108 (AMLIDereferenceHandleEx.c)
 *     ACPIGetD3Policy @ 0x1C0003DF0 (ACPIGetD3Policy.c)
 *     AMLIGetNamedChild @ 0x1C0003F20 (AMLIGetNamedChild.c)
 *     ACPIInternalGetDeviceExtension @ 0x1C0004AB0 (ACPIInternalGetDeviceExtension.c)
 *     ACPIDebugGetIrpText @ 0x1C0004E3C (ACPIDebugGetIrpText.c)
 *     WPP_RECORDER_SF_qsLqss @ 0x1C0005700 (WPP_RECORDER_SF_qsLqss.c)
 *     AMLIIsNamedChildPresent @ 0x1C00058A0 (AMLIIsNamedChildPresent.c)
 *     WPP_RECORDER_SF_Lqss @ 0x1C0006AC0 (WPP_RECORDER_SF_Lqss.c)
 *     ACPIGet @ 0x1C0006FE0 (ACPIGet.c)
 *     ACPIDockIsDockDevice @ 0x1C000CF70 (ACPIDockIsDockDevice.c)
 *     AMLIGetNSObjectType @ 0x1C00113A0 (AMLIGetNSObjectType.c)
 *     __security_check_cookie @ 0x1C002BC10 (__security_check_cookie.c)
 *     ACPISystemPowerQueryDeviceCapabilities @ 0x1C008639C (ACPISystemPowerQueryDeviceCapabilities.c)
 *     ACPIProcessPhysicalDeviceLocation @ 0x1C0086720 (ACPIProcessPhysicalDeviceLocation.c)
 *     AcpiIsDeviceSecure @ 0x1C0096600 (AcpiIsDeviceSecure.c)
 */

__int64 __fastcall ACPIBusAndFilterIrpQueryCapabilities(ULONG_PTR a1, __int64 a2, __int64 a3, char a4)
{
  __int64 v4; // rbx
  char v5; // r15
  __int64 DeviceExtension; // rax
  char v8; // si
  const char *v9; // r13
  __int64 *v10; // rdi
  __int64 *v11; // r15
  _DWORD *v12; // rbx
  __int64 *v13; // rax
  __int64 v14; // r14
  int DeviceCapabilities; // r14d
  char v16; // r12
  char *IrpText; // rax
  const char *v18; // r8
  __int64 v19; // r10
  int v21; // edx
  int v22; // eax
  int v23; // eax
  __int64 v24; // rax
  const char *v25; // rdx
  const char *v26; // rcx
  unsigned __int16 v27; // r9
  __int64 v28; // rax
  bool v30; // [rsp+61h] [rbp-48h] BYREF
  unsigned __int8 v31; // [rsp+62h] [rbp-47h]
  __int64 v32; // [rsp+68h] [rbp-41h]
  int v33; // [rsp+70h] [rbp-39h] BYREF
  __int64 v34; // [rsp+78h] [rbp-31h] BYREF
  __int64 v35; // [rsp+80h] [rbp-29h] BYREF
  __int64 v36; // [rsp+88h] [rbp-21h] BYREF
  __int64 v37; // [rsp+90h] [rbp-19h] BYREF
  __int64 **v38; // [rsp+98h] [rbp-11h] BYREF
  __int64 *v39; // [rsp+A0h] [rbp-9h] BYREF
  int v40; // [rsp+A8h] [rbp-1h]
  int v41; // [rsp+B0h] [rbp+7h] BYREF
  int v42; // [rsp+B8h] [rbp+Fh]

  v4 = *(_QWORD *)(a2 + 184);
  v5 = a2;
  v32 = a2;
  v31 = *(_BYTE *)(v4 + 1);
  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  v8 = 0;
  v9 = byte_1C0067B08;
  v10 = (__int64 *)DeviceExtension;
  if ( !DeviceExtension )
  {
    DeviceCapabilities = -1073741823;
    goto LABEL_34;
  }
  v11 = *(__int64 **)(DeviceExtension + 712);
  if ( (*(_DWORD *)(DeviceExtension + 952) & 0x800LL) != 0 && ACPIGetD3Policy(DeviceExtension, &v30) >= 0 && v30 )
    v10[1] &= ~0x800uLL;
  v12 = *(_DWORD **)(v4 + 8);
  if ( (v10[1] & 0x8000000000LL) == 0 )
  {
    v13 = AMLIGetNamedChild(v11, 1447907935);
    v14 = (__int64)v13;
    if ( v13 )
    {
      if ( (unsigned int)AMLIGetNSObjectType((__int64)v13) == 8 )
      {
        v34 = 0LL;
        if ( (int)ACPIGet(v10, 1447907935, 268713986, 0LL, 0, 0LL, 0LL, (__int64)&v34, 0LL) < 0 )
          v12[1] |= 0x10u;
        else
          v12[1] = (v34 != 0 ? 0x10 : 0) | v12[1] & 0xFFFFFFEF;
        AMLIDereferenceHandleEx(v14);
      }
      else
      {
        v12[1] |= 0x10u;
      }
    }
    if ( !ACPIDockIsDockDevice(v11) )
    {
      if ( AMLIIsNamedChildPresent(v11, 810173791) )
      {
        v22 = v12[1];
        if ( (v22 & 0x10) == 0 )
          v12[1] = v22 | 0x40000;
        v12[1] |= 0x18u;
      }
      if ( AMLIIsNamedChildPresent(v11, 826951007)
        || AMLIIsNamedChildPresent(v11, 843728223)
        || AMLIIsNamedChildPresent(v11, 860505439)
        || AMLIIsNamedChildPresent(v11, 877282655) )
      {
        v23 = v12[1];
        if ( (v23 & 0x10) == 0 )
          v12[1] = v23 | 0x40000;
        v12[1] |= 0x10010u;
      }
    }
  }
  if ( AMLIIsNamedChildPresent(v11, 1129466207) )
    *(_DWORD *)(a1 + 48) |= 0x4000u;
  v35 = 0LL;
  DeviceCapabilities = ACPIGet(v10, 1096045407, -1878783998, 0LL, 0, 0LL, 0LL, (__int64)&v35, 0LL);
  if ( DeviceCapabilities >= 0 )
  {
    v39 = v10;
    v38 = &v39;
    v40 = 8;
    if ( (int)EmClientRuleEvaluate(&GUID_EM_RULE_ACPI_DEVICE_IGNORE_STA_DISABLE, &v38, 1LL, &v33) >= 0 && v33 == 2 )
    {
      v16 = a4;
LABEL_18:
      v12[1] &= ~0x4000u;
      goto LABEL_19;
    }
    if ( (v10[1] & 0x40000000000000LL) != 0 )
    {
      v16 = a4;
      if ( !a4 )
      {
        if ( (AcpiOverrideAttributes & 2) == 0 )
          goto LABEL_18;
        v12[1] |= 0x4000u;
      }
    }
    else if ( AMLIIsNamedChildPresent(v11, 1397900127) && !AMLIIsNamedChildPresent(v11, 1397904223) )
    {
      v12[1] |= 0x4000u;
      v16 = a4;
    }
    else
    {
      v16 = a4;
      if ( a4 )
        goto LABEL_18;
    }
LABEL_19:
    if ( (v35 & 4) == 0 )
      v12[1] |= 0x20000u;
    if ( AMLIIsNamedChildPresent(v11, 1314214751) )
    {
      v36 = 0LL;
      if ( (int)ACPIGet(v10, 1314214751, 268697602, 0LL, 0, 0LL, 0LL, (__int64)&v36, 0LL) >= 0 )
        v12[3] = v36;
    }
    v37 = 0LL;
    if ( AMLIIsNamedChildPresent(v11, 1380204895) )
    {
      DeviceCapabilities = ACPIGet(v10, 1380204895, -1878785022, 0LL, 0, 0LL, 0LL, (__int64)&v37, 0LL);
      if ( DeviceCapabilities < 0 )
      {
        v24 = v10[1];
        v25 = byte_1C0067B08;
        v26 = byte_1C0067B08;
        if ( (v24 & 0x200000000000LL) != 0 )
        {
          v25 = (const char *)v10[70];
          if ( (v24 & 0x400000000000LL) != 0 )
            v26 = (const char *)v10[71];
        }
        v27 = 13;
LABEL_77:
        WPP_RECORDER_SF_Lqss(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          2u,
          5u,
          v27,
          (__int64)&WPP_843bede4f2e6353a81a7e5fb8ad73c2f_Traceguids,
          DeviceCapabilities,
          (char)v10,
          v25,
          v26);
        goto LABEL_33;
      }
      v12[2] = v37;
    }
    DeviceCapabilities = ACPISystemPowerQueryDeviceCapabilities(v10, (__int64)v12);
    if ( DeviceCapabilities >= 0 )
    {
      if ( (v10[119] & 0x80000000) == 0 )
      {
        if ( (unsigned __int8)AcpiIsDeviceSecure(v10) )
          v10[119] |= 0x2000000000uLL;
        v10[119] |= 0x80000000uLL;
      }
      if ( (v10[119] & 0x2000000000LL) != 0 )
        v12[1] |= 0x100000u;
      if ( !v16 )
      {
        v12[1] |= 0x80u;
        v21 = v12[1] ^ ((unsigned __int16)v12[1] ^ (unsigned __int16)((unsigned __int64)*((unsigned int *)v10 + 2) >> 9)) & 0x100;
        v12[1] = v21;
        v12[1] = v21 & 0xFFFFFFBF | (v10[71] != 0 ? 0x40 : 0);
      }
      if ( (int)ACPIProcessPhysicalDeviceLocation(v10, &v41) >= 0 && (v41 & 0x7F) != 0 )
      {
        if ( (v42 & 1) == 0 )
          v12[1] |= 0x40000u;
        if ( v42 < 0 )
          v12[1] |= 0x40000u;
      }
      DeviceCapabilities = 0;
      goto LABEL_33;
    }
    v28 = v10[1];
    v25 = byte_1C0067B08;
    v26 = byte_1C0067B08;
    if ( (v28 & 0x200000000000LL) != 0 )
    {
      v25 = (const char *)v10[70];
      if ( (v28 & 0x400000000000LL) != 0 )
        v26 = (const char *)v10[71];
    }
    v27 = 14;
    goto LABEL_77;
  }
LABEL_33:
  v5 = v32;
LABEL_34:
  if ( v10 )
  {
    v8 = (char)v10;
    if ( (v10[1] & 0x200000000000LL) != 0 )
      v9 = (const char *)v10[70];
  }
  IrpText = ACPIDebugGetIrpText(0x400000000000LL, v31);
  WPP_RECORDER_SF_qsLqss(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    2u,
    5u,
    0xFu,
    v19,
    v5,
    IrpText,
    DeviceCapabilities,
    v8,
    v9,
    v18);
  return (unsigned int)DeviceCapabilities;
}
