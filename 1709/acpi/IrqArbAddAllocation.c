/*
 * XREFs of IrqArbAddAllocation @ 0x1C00889C0
 * Callers:
 *     <none>
 * Callees:
 *     LinkNodeCrackPrt @ 0x1C000D438 (LinkNodeCrackPrt.c)
 *     WPP_RECORDER_SF_Dq @ 0x1C000E590 (WPP_RECORDER_SF_Dq.c)
 *     WPP_RECORDER_SF_DDDssDssqq @ 0x1C000E618 (WPP_RECORDER_SF_DDDssDssqq.c)
 *     WPP_RECORDER_SF_ @ 0x1C000EA0C (WPP_RECORDER_SF_.c)
 *     ProcessorDeleteDeviceIdtAssignment @ 0x1C000EF94 (ProcessorDeleteDeviceIdtAssignment.c)
 *     ACPIInternalInterruptPolarityCacheGetPolarity @ 0x1C0028CA4 (ACPIInternalInterruptPolarityCacheGetPolarity.c)
 *     __security_check_cookie @ 0x1C002BC10 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C002C170 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C002C4C0 (memset.c)
 *     WPP_RECORDER_SF_d @ 0x1C0056F10 (WPP_RECORDER_SF_d.c)
 *     IcIsInterruptTypeSecondary @ 0x1C0088988 (IcIsInterruptTypeSecondary.c)
 *     IrqArbGsivFromIrq @ 0x1C00893E8 (IrqArbGsivFromIrq.c)
 *     PcisuppIsPciDevice @ 0x1C0089690 (PcisuppIsPciDevice.c)
 *     IrqArbGetDeviceIrql @ 0x1C008B020 (IrqArbGetDeviceIrql.c)
 *     IrqArbpLookupIsaOverrideByGsiv @ 0x1C008B6E0 (IrqArbpLookupIsaOverrideByGsiv.c)
 *     MsiGetTargetInfo @ 0x1C008CFB4 (MsiGetTargetInfo.c)
 *     ProcessorGetDestinationMode @ 0x1C008D054 (ProcessorGetDestinationMode.c)
 *     AcpiCheckExternalConnection @ 0x1C008D4D4 (AcpiCheckExternalConnection.c)
 *     IcAddPossibleReference @ 0x1C009066C (IcAddPossibleReference.c)
 *     IcSetPossibleInput @ 0x1C00906BC (IcSetPossibleInput.c)
 *     IcGetPossibleInput @ 0x1C009545C (IcGetPossibleInput.c)
 *     IcRemovePossibleReference @ 0x1C0097194 (IcRemovePossibleReference.c)
 *     LinkNodeGetPossibleGsiv @ 0x1C00A8040 (LinkNodeGetPossibleGsiv.c)
 *     LinkNodeGetPossibleResources @ 0x1C00A8060 (LinkNodeGetPossibleResources.c)
 */

void __fastcall IrqArbAddAllocation(__int64 a1, ULONGLONG *a2)
{
  int v2; // edi
  BOOL v3; // r12d
  int v5; // edx
  int v6; // r8d
  int v7; // eax
  char v8; // r12
  _DWORD *v9; // r13
  __int64 v10; // rcx
  unsigned int v11; // eax
  __int64 v12; // r8
  ULONGLONG v13; // rcx
  _DWORD *UserData; // rsi
  unsigned int v15; // ebx
  __int64 v16; // rdx
  int IsPciDevice; // eax
  int v18; // r14d
  char v19; // r11
  int PossibleInput; // eax
  __int16 v21; // r9
  int v22; // edi
  unsigned __int8 v23; // di
  __int64 v24; // r8
  bool v25; // zf
  ULONGLONG v26; // rax
  BOOL v27; // ecx
  __int64 v28; // r10
  __int16 v29; // dx
  unsigned int v30; // r12d
  void *v31; // r11
  int v32; // r9d
  ULONGLONG v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  unsigned int v36; // ebx
  int v37; // eax
  POOL_TYPE v38; // r10d
  int v39; // edx
  _DWORD *PoolWithTag; // rax
  int v41; // ecx
  char v42; // di
  int v43; // eax
  int v44; // r9d
  int v45; // eax
  BOOL v46; // ebx
  const char *v47; // r9
  UCHAR v48; // di
  const char *v49; // rdx
  const char *v50; // r8
  NTSTATUS v51; // eax
  int TargetInfo; // eax
  int v53; // edi
  _DWORD *v54; // rbx
  __int128 v55; // xmm0
  int v56; // eax
  int v57; // ecx
  unsigned int v58; // eax
  int DeviceIrql; // eax
  int v60; // eax
  int PossibleResources; // eax
  __int64 v62; // rdx
  unsigned int v63; // ebx
  char v64; // di
  int Flags; // [rsp+20h] [rbp-B9h]
  PVOID Owner; // [rsp+30h] [rbp-A9h]
  char v67; // [rsp+80h] [rbp-59h]
  char v68; // [rsp+81h] [rbp-58h] BYREF
  _BYTE v69[2]; // [rsp+82h] [rbp-57h] BYREF
  unsigned int v70; // [rsp+84h] [rbp-55h]
  char v71; // [rsp+88h] [rbp-51h]
  char v72; // [rsp+89h] [rbp-50h]
  int v73; // [rsp+8Ch] [rbp-4Dh]
  unsigned int v74; // [rsp+90h] [rbp-49h] BYREF
  char v75; // [rsp+94h] [rbp-45h]
  BOOL v76; // [rsp+98h] [rbp-41h]
  int v77; // [rsp+9Ch] [rbp-3Dh] BYREF
  PVOID P; // [rsp+A0h] [rbp-39h] BYREF
  __int64 v79; // [rsp+A8h] [rbp-31h]
  __int64 v80; // [rsp+B0h] [rbp-29h]
  _OWORD v81[2]; // [rsp+B8h] [rbp-21h] BYREF
  _BYTE v82[32]; // [rsp+D8h] [rbp-1h] BYREF

  v80 = a1;
  memset(v81, 0, sizeof(v81));
  Owner = *(PVOID *)(a2[4] + 32);
  WPP_RECORDER_SF_Dq(WPP_GLOBAL_Control->DeviceExtension, v5, v6, 13);
  v7 = *(_DWORD *)a2;
  v8 = 0;
  v9 = 0LL;
  v67 = 0;
  v10 = *(unsigned int *)a2;
  P = 0LL;
  v72 = 0;
  v77 = v7;
  v11 = IrqArbGsivFromIrq(v10);
  v13 = a2[5];
  UserData = 0LL;
  v74 = 0;
  LOBYTE(v2) = 0;
  v15 = v11;
  v70 = v11;
  v73 = v2;
  v16 = *(_QWORD *)(v13 + 40);
  v71 = 0;
  if ( (*(_BYTE *)(v16 + 4) & 0x20) != 0 )
  {
    v19 = 0;
  }
  else
  {
    IsPciDevice = PcisuppIsPciDevice(*(_QWORD *)(a2[4] + 32), &v68);
    LOBYTE(v18) = IsPciDevice;
    if ( IsPciDevice < 0 )
    {
LABEL_84:
      LOBYTE(v16) = 4;
      WPP_RECORDER_SF_d(
        WPP_GLOBAL_Control->DeviceExtension,
        v16,
        20,
        17,
        (__int64)&WPP_7e722731483c3b8ec3839991a228af4a_Traceguids,
        v18);
      v63 = v70;
      if ( DWORD1(v81[1]) )
        ProcessorDeleteDeviceIdtAssignment(*(PVOID *)(a2[4] + 32), v70, DWORD1(v81[1]), 1);
      if ( v8 )
        --v9[7];
      if ( v72 )
      {
        LOBYTE(v62) = (a2[8] & 2) != 0;
        IcRemovePossibleReference(v63, v62);
      }
      if ( UserData )
      {
        if ( !(_BYTE)v2 )
          ExFreePoolWithTag(UserData, 0);
      }
      return;
    }
    v19 = v68;
  }
  if ( (a2[8] & 2) != 0 && v19 )
  {
    LOBYTE(v16) = 4;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v16,
      20,
      14,
      (__int64)&WPP_7e722731483c3b8ec3839991a228af4a_Traceguids);
    return;
  }
  LOBYTE(v3) = 0;
  v69[0] = 0;
  v76 = v3;
  if ( v15 < 0xFFF00000 )
  {
    PossibleInput = IcGetPossibleInput(v15, v16, v69);
    if ( PossibleInput >= 0 )
    {
      LOBYTE(v3) = PossibleInput != 263;
      v76 = PossibleInput != 263;
    }
  }
  if ( v19 && (*(_BYTE *)(*(_QWORD *)(a2[5] + 40) + 4LL) & 2) == 0 )
  {
    v23 = 3;
    if ( (a2[8] & 2) != 0 )
    {
LABEL_68:
      v24 = v15;
      goto LABEL_18;
    }
    v60 = LinkNodeCrackPrt(*(_QWORD *)(a2[4] + 32), &P, &v74, 1);
    v9 = P;
    LOBYTE(v18) = v60;
    if ( v60 < 0 )
      goto LABEL_83;
    if ( !P )
    {
      v24 = v74;
      v70 = v74;
      goto LABEL_18;
    }
    PossibleResources = LinkNodeGetPossibleResources(P, &P, &v68);
    LOBYTE(v18) = PossibleResources;
    if ( PossibleResources < 0 )
      goto LABEL_83;
    ExFreePoolWithTag(P, 0);
    v23 = v68 & 2 | 1;
    if ( (int)LinkNodeGetPossibleGsiv(v9, &v74) < 0 )
    {
      if ( v9[7] )
      {
        LOBYTE(v18) = 1;
LABEL_83:
        LOBYTE(v2) = v73;
        v8 = 0;
        goto LABEL_84;
      }
      v9[9] = v15;
    }
    ++v9[7];
    v24 = v15;
    v67 = 1;
    goto LABEL_18;
  }
  if ( (unsigned __int8)IrqArbpLookupIsaOverrideByGsiv(v15, &v74, v12, 1LL) )
  {
    v23 = byte_1C0078394[8 * v74];
    if ( v23 != 0xFF )
      goto LABEL_68;
  }
  v22 = (unsigned __int16)(v21 & *(_WORD *)(*(_QWORD *)(a2[5] + 40) + 4LL));
  if ( IcIsInterruptTypeSecondary(v15) )
  {
    v71 = 1;
    v64 = v22 ^ 1;
    AcpiCheckExternalConnection();
    v18 = -1073741822;
    KeEnterCriticalRegion();
    ExAcquireResourceSharedLite(&ExternalTranslatorInterfaceLock, 1u);
    if ( ExternalTranslationInterface )
      v18 = (*((__int64 (__fastcall **)(_QWORD, _QWORD, _BYTE *))ExternalTranslationInterface + 9))(v15, 0LL, v82);
    ExReleaseResourceLite(&ExternalTranslatorInterfaceLock);
    KeLeaveCriticalRegion();
    if ( v18 >= 0 )
    {
      v23 = v82[16] | v64;
      goto LABEL_68;
    }
    goto LABEL_83;
  }
  if ( (*(_BYTE *)(*(_QWORD *)(a2[5] + 40) + 4LL) & 2) != 0
    || !ACPIInternalInterruptPolarityCacheGetPolarity(*(_QWORD *)(a2[4] + 32), v77, &v74) )
  {
    v23 = v22 == 0 ? 3 : 0;
  }
  else
  {
    v23 = v74 | v22 ^ 1;
  }
  v24 = v15;
  if ( (*(_BYTE *)(*(_QWORD *)(a2[5] + 40) + 4LL) & 2) != 0 )
    v23 |= 4u;
LABEL_18:
  v25 = (a2[8] & 2) == 0;
  v68 = 0;
  if ( !v25 )
  {
    v68 = 1;
    if ( v3 )
    {
      if ( ((v69[0] ^ v23) & 0xFFFFFFFB) != 0 )
      {
        LOBYTE(v16) = 4;
        WPP_RECORDER_SF_(
          WPP_GLOBAL_Control->DeviceExtension,
          v16,
          20,
          15,
          (__int64)&WPP_7e722731483c3b8ec3839991a228af4a_Traceguids);
        LOBYTE(v2) = v73;
        LOBYTE(v18) = 1;
        v8 = v67;
        goto LABEL_84;
      }
    }
  }
  v26 = a2[5];
  v27 = 0;
  v28 = *(_QWORD *)(v26 + 40);
  v79 = v28;
  v29 = *(_WORD *)(v28 + 4);
  if ( (v29 & 2) != 0 )
  {
    v30 = *(_DWORD *)(v28 + 12) - *(_DWORD *)(v28 + 8) + 1;
  }
  else
  {
    v30 = 1;
    v27 = (*(_BYTE *)(v26 + 36) & 1) != 0;
  }
  v31 = (void *)a2[9];
  v32 = v27 | 2;
  P = v31;
  if ( (v29 & 8) == 0 )
    v32 = v27;
  v74 = 0;
  v77 = v32;
  v69[0] = v23 & 8;
  v75 = v23 & 1;
  v33 = a2[4];
  v74 = ((v23 & 8) != 0 ? 2 : 0) | !(v23 & 1);
  LODWORD(Owner) = v32;
  v18 = ((__int64 (__fastcall *)(_QWORD, __int64, __int64, void *, unsigned int, unsigned int, PVOID, int, _OWORD *))ProcessorReserveIdtEntries)(
          *(_QWORD *)(v33 + 32),
          v28,
          v24,
          v31,
          v30,
          v74,
          Owner,
          1,
          v81);
  if ( v18 < 0 )
  {
    v35 = 1LL;
    if ( v30 <= 1 )
    {
      v36 = v70;
    }
    else
    {
      v30 = 1;
      v36 = v70;
      v18 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, PVOID, int, unsigned int, int, int, _OWORD *))ProcessorReserveIdtEntries)(
              *(_QWORD *)(a2[4] + 32),
              *(_QWORD *)(a2[5] + 40),
              v70,
              P,
              1,
              (unsigned __int8)-((v23 & 8) != 0) & 2u | !(v23 & 1),
              v77,
              1,
              v81);
    }
    if ( v18 < 0 )
      return;
  }
  else
  {
    v36 = v70;
  }
  if ( (*(_BYTE *)(*(_QWORD *)(a2[5] + 40) + 4LL) & 2) != 0 )
  {
    v38 = PagedPool;
  }
  else
  {
    if ( !v76 )
    {
      LOBYTE(v34) = v23;
      LOBYTE(v35) = (*(_BYTE *)(v79 + 4) & 8) != 0;
      v37 = IcSetPossibleInput(v36, v81, v34, v35);
      LOBYTE(v18) = v37;
      if ( v37 < 0 )
        goto LABEL_114;
    }
    LOBYTE(v16) = (a2[8] & 2) != 0;
    IcAddPossibleReference(v36, v16);
    v72 = v38;
  }
  v76 = 0;
  if ( (v23 & 4) == 0 )
  {
    v39 = v38;
    if ( ((unsigned __int8)v38 & *(_BYTE *)(a2[5] + 36)) != 0 )
      v39 = 3;
    v76 = v39;
  }
  PoolWithTag = ExAllocatePoolWithTag(v38, 88LL * (v30 - 1) + 120, 0x49706341u);
  UserData = PoolWithTag;
  if ( !PoolWithTag )
    goto LABEL_114;
  memset(PoolWithTag, 0, 0x78uLL);
  UserData[1] = 4;
  *UserData = 1;
  v41 = UserData[1];
  if ( (*(_DWORD *)(a2[4] + 40) & 0xFFFFFFFD) != 0 )
    v41 = 5;
  UserData[1] = v41;
  if ( (*(_DWORD *)(a2[5] + 36) & 4) != 0 )
    UserData[1] |= 2u;
  if ( (*(_BYTE *)(*(_QWORD *)(a2[5] + 40) + 4LL) & 0x20) != 0 )
    UserData[1] |= 0x10u;
  if ( (*(_BYTE *)(*(_QWORD *)(a2[5] + 40) + 4LL) & 2) != 0 )
  {
    UserData[2] = 3;
    TargetInfo = MsiGetTargetInfo(v81, DWORD1(v81[1]), UserData + 4);
    LOBYTE(v18) = TargetInfo;
    if ( TargetInfo >= 0 )
    {
      *((_BYTE *)UserData + 26) = BYTE8(v81[1]);
      ProcessorGetDestinationMode(v81, &v77);
      v53 = 0;
      if ( !v30 )
        goto LABEL_51;
      v54 = UserData + 14;
      while ( 1 )
      {
        *(v54 - 6) = 3;
        v55 = v81[0];
        *(v54 - 3) = 0;
        *(v54 - 2) = 1;
        v56 = v77;
        *(_OWORD *)v54 = v55;
        v57 = v53 + DWORD1(v81[1]);
        v54[12] = v56;
        v58 = v70;
        *(v54 - 5) = v57;
        v54[8] = v53 + v58;
        DeviceIrql = IrqArbGetDeviceIrql(&UserData[22 * v53 + 8], &UserData[22 * v53 + 10]);
        LOBYTE(v18) = DeviceIrql;
        if ( DeviceIrql < 0 )
          break;
        v54 += 22;
        if ( ++v53 >= v30 )
          goto LABEL_51;
      }
    }
LABEL_114:
    LOBYTE(v2) = v73;
LABEL_115:
    v8 = v67;
    goto LABEL_84;
  }
  if ( v9 )
  {
    UserData[2] = 2;
    *((_QWORD *)UserData + 2) = v9;
  }
  else
  {
    UserData[2] = 1;
  }
  UserData[8] = 0;
  UserData[9] = DWORD1(v81[1]);
  *(_OWORD *)(UserData + 14) = v81[0];
  UserData[12] = (v71 || v69[0]) && !v75;
  v42 = v23 & 0xA;
  switch ( v42 )
  {
    case 10:
      v43 = 3;
      break;
    case 8:
      v43 = 4;
      break;
    case 2:
      v43 = 2;
      break;
    default:
      v43 = v42 == 0;
      break;
  }
  UserData[11] = v43;
  UserData[22] = IrqArbGsivFromIrq(*a2);
  UserData[23] ^= v44 & (UserData[23] ^ (UserData[1] >> 4));
  v45 = IrqArbGetDeviceIrql(UserData + 8, UserData + 10);
  LOBYTE(v18) = v45;
  if ( v45 < 0 )
    goto LABEL_114;
LABEL_51:
  v46 = v76;
  v47 = "RTL_RANGE_LIST_ADD_SHARED";
  v48 = v68;
  v49 = "RTL_RANGE_LIST_ADD_IF_CONFLICT";
  v50 = "ARBITER_RANGE_BOOT_ALLOCATED";
  if ( (v76 & 2) == 0 )
    v47 = " ";
  if ( !v76 )
    v49 = " ";
  if ( !v68 )
    v50 = " ";
  WPP_RECORDER_SF_DDDssDssqq(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    (__int64)v49,
    (__int64)v50,
    (__int64)v47,
    Flags);
  v51 = RtlAddRange(*(PRTL_RANGE_LIST *)(v80 + 48), *a2, a2[1], v48, v46 | 0x10, UserData, *(PVOID *)(a2[4] + 32));
  LOBYTE(v18) = v51;
  if ( v51 < 0 )
  {
    LOBYTE(v2) = v73;
    if ( v51 != -1073741823 )
      LOBYTE(v2) = 1;
    goto LABEL_115;
  }
}
