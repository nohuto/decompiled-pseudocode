/*
 * XREFs of ACPIBusAndFilterIrpQueryCapabilities @ 0x1C008EB70
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0001600 (ACPIInternalGetDeviceExtension.c)
 *     ACPIDebugGetIrpText @ 0x1C0001654 (ACPIDebugGetIrpText.c)
 *     WPP_RECORDER_SF_qsLqss @ 0x1C0001680 (WPP_RECORDER_SF_qsLqss.c)
 *     ACPIGet @ 0x1C0002C00 (ACPIGet.c)
 *     AMLIGetNSObjectType @ 0x1C0005210 (AMLIGetNSObjectType.c)
 *     ACPIGetD3Policy @ 0x1C0009C10 (ACPIGetD3Policy.c)
 *     AMLIIsNamedChildPresent @ 0x1C000A900 (AMLIIsNamedChildPresent.c)
 *     WPP_RECORDER_SF_Lqss @ 0x1C000D1D0 (WPP_RECORDER_SF_Lqss.c)
 *     AMLIGetNamedChild @ 0x1C000E580 (AMLIGetNamedChild.c)
 *     AMLIDereferenceHandleEx @ 0x1C00142C0 (AMLIDereferenceHandleEx.c)
 *     ACPIDockIsDockDevice @ 0x1C00172D0 (ACPIDockIsDockDevice.c)
 *     __security_check_cookie @ 0x1C002BF40 (__security_check_cookie.c)
 *     AcpiIsDeviceSecure @ 0x1C008E07C (AcpiIsDeviceSecure.c)
 *     ACPISystemPowerQueryDeviceCapabilities @ 0x1C008E730 (ACPISystemPowerQueryDeviceCapabilities.c)
 *     ACPIProcessPhysicalDeviceLocation @ 0x1C008E8D0 (ACPIProcessPhysicalDeviceLocation.c)
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
  volatile signed __int32 *v14; // r14
  int DeviceCapabilities; // r14d
  char v16; // r12
  char *IrpText; // rax
  const char *v18; // r8
  __int64 v19; // r10
  int v21; // edx
  __int64 v22; // rdx
  int v23; // eax
  int v24; // eax
  __int64 v25; // rax
  const char *v26; // rdx
  const char *v27; // rcx
  unsigned __int16 v28; // r9
  __int64 v29; // rax
  bool v31; // [rsp+61h] [rbp-48h] BYREF
  unsigned __int8 v32; // [rsp+62h] [rbp-47h]
  __int64 v33; // [rsp+68h] [rbp-41h]
  int v34; // [rsp+70h] [rbp-39h] BYREF
  __int64 v35; // [rsp+78h] [rbp-31h] BYREF
  __int64 v36; // [rsp+80h] [rbp-29h] BYREF
  __int64 v37; // [rsp+88h] [rbp-21h] BYREF
  __int64 v38; // [rsp+90h] [rbp-19h] BYREF
  __int64 **v39; // [rsp+98h] [rbp-11h] BYREF
  __int64 *v40; // [rsp+A0h] [rbp-9h] BYREF
  int v41; // [rsp+A8h] [rbp-1h]
  int v42; // [rsp+B0h] [rbp+7h] BYREF
  int v43; // [rsp+B8h] [rbp+Fh]

  v4 = *(_QWORD *)(a2 + 184);
  v5 = a2;
  v33 = a2;
  v32 = *(_BYTE *)(v4 + 1);
  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  v8 = 0;
  v9 = byte_1C0066CD0;
  v10 = (__int64 *)DeviceExtension;
  if ( !DeviceExtension )
  {
    DeviceCapabilities = -1073741823;
    goto LABEL_34;
  }
  v11 = *(__int64 **)(DeviceExtension + 712);
  if ( (*(_DWORD *)(DeviceExtension + 952) & 0x800LL) != 0 && ACPIGetD3Policy(DeviceExtension, &v31) >= 0 && v31 )
    v10[1] &= ~0x800uLL;
  v12 = *(_DWORD **)(v4 + 8);
  if ( (v10[1] & 0x8000000000LL) == 0 )
  {
    v13 = AMLIGetNamedChild(v11, 1447907935);
    v14 = (volatile signed __int32 *)v13;
    if ( v13 )
    {
      if ( (unsigned int)AMLIGetNSObjectType((__int64)v13) == 8 )
      {
        v35 = 0LL;
        if ( (int)ACPIGet(v10, 1447907935, 268713986, 0LL, 0, 0LL, 0LL, (__int64)&v35, 0LL) < 0 )
          v12[1] |= 0x10u;
        else
          v12[1] = (v35 != 0 ? 0x10 : 0) | v12[1] & 0xFFFFFFEF;
        AMLIDereferenceHandleEx(v14, v22);
      }
      else
      {
        v12[1] |= 0x10u;
      }
    }
    if ( !ACPIDockIsDockDevice() )
    {
      if ( AMLIIsNamedChildPresent(v11, 810173791) )
      {
        v23 = v12[1];
        if ( (v23 & 0x10) == 0 )
          v12[1] = v23 | 0x40000;
        v12[1] |= 0x18u;
      }
      if ( AMLIIsNamedChildPresent(v11, 826951007)
        || AMLIIsNamedChildPresent(v11, 843728223)
        || AMLIIsNamedChildPresent(v11, 860505439)
        || AMLIIsNamedChildPresent(v11, 877282655) )
      {
        v24 = v12[1];
        if ( (v24 & 0x10) == 0 )
          v12[1] = v24 | 0x40000;
        v12[1] |= 0x10010u;
      }
    }
  }
  if ( AMLIIsNamedChildPresent(v11, 1129466207) )
    *(_DWORD *)(a1 + 48) |= 0x4000u;
  v36 = 0LL;
  DeviceCapabilities = ACPIGet(v10, 1096045407, -1878783998, 0LL, 0, 0LL, 0LL, (__int64)&v36, 0LL);
  if ( DeviceCapabilities >= 0 )
  {
    v40 = v10;
    v39 = &v40;
    v41 = 8;
    if ( (int)EmClientRuleEvaluate(&GUID_EM_RULE_ACPI_DEVICE_IGNORE_STA_DISABLE, &v39, 1LL, &v34) >= 0 && v34 == 2 )
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
    if ( (v36 & 4) == 0 )
      v12[1] |= 0x20000u;
    if ( AMLIIsNamedChildPresent(v11, 1314214751) )
    {
      v37 = 0LL;
      if ( (int)ACPIGet(v10, 1314214751, 268697602, 0LL, 0, 0LL, 0LL, (__int64)&v37, 0LL) >= 0 )
        v12[3] = v37;
    }
    v38 = 0LL;
    if ( AMLIIsNamedChildPresent(v11, 1380204895) )
    {
      DeviceCapabilities = ACPIGet(v10, 1380204895, -1878785022, 0LL, 0, 0LL, 0LL, (__int64)&v38, 0LL);
      if ( DeviceCapabilities < 0 )
      {
        v25 = v10[1];
        v26 = byte_1C0066CD0;
        v27 = byte_1C0066CD0;
        if ( (v25 & 0x200000000000LL) != 0 )
        {
          v26 = (const char *)v10[70];
          if ( (v25 & 0x400000000000LL) != 0 )
            v27 = (const char *)v10[71];
        }
        v28 = 13;
LABEL_77:
        WPP_RECORDER_SF_Lqss(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          2u,
          5u,
          v28,
          (__int64)&WPP_d090b5073bab31288d0accdb237e434e_Traceguids,
          DeviceCapabilities,
          (char)v10,
          v26,
          v27);
        goto LABEL_33;
      }
      v12[2] = v38;
    }
    DeviceCapabilities = ACPISystemPowerQueryDeviceCapabilities(v10, (__int64)v12);
    if ( DeviceCapabilities >= 0 )
    {
      if ( (v10[119] & 0x80000000) == 0 )
      {
        if ( AcpiIsDeviceSecure((__int64)v10) )
          v10[119] |= 0x2000000000uLL;
        v10[119] |= 0x80000000uLL;
      }
      if ( (v10[119] & 0x2000000000LL) != 0 )
        v12[1] |= 0x100000u;
      if ( !v16 )
      {
        v12[1] |= 0x80u;
        v21 = v12[1] ^ (v12[1] ^ (*((_DWORD *)v10 + 2) >> 9)) & 0x100;
        v12[1] = v21;
        v12[1] = v21 & 0xFFFFFFBF | (v10[71] != 0 ? 0x40 : 0);
      }
      if ( (int)ACPIProcessPhysicalDeviceLocation(v10, &v42) >= 0 && (v42 & 0x7F) != 0 )
      {
        if ( (v43 & 1) == 0 )
          v12[1] |= 0x40000u;
        if ( v43 < 0 )
          v12[1] |= 0x40000u;
      }
      DeviceCapabilities = 0;
      goto LABEL_33;
    }
    v29 = v10[1];
    v26 = byte_1C0066CD0;
    v27 = byte_1C0066CD0;
    if ( (v29 & 0x200000000000LL) != 0 )
    {
      v26 = (const char *)v10[70];
      if ( (v29 & 0x400000000000LL) != 0 )
        v27 = (const char *)v10[71];
    }
    v28 = 14;
    goto LABEL_77;
  }
LABEL_33:
  v5 = v33;
LABEL_34:
  if ( v10 )
  {
    v8 = (char)v10;
    if ( (v10[1] & 0x200000000000LL) != 0 )
      v9 = (const char *)v10[70];
  }
  IrpText = ACPIDebugGetIrpText(0x400000000000LL, v32);
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
