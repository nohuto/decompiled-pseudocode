/*
 * XREFs of IrqArbAddAllocation @ 0x1C008F8F0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C0003F30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00041D0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0004540 (memset.c)
 *     WPP_RECORDER_SF_ @ 0x1C0009204 (WPP_RECORDER_SF_.c)
 *     ACPIInternalInterruptPolarityCacheGetPolarity @ 0x1C0029EF4 (ACPIInternalInterruptPolarityCacheGetPolarity.c)
 *     WPP_RECORDER_SF_d @ 0x1C00377D8 (WPP_RECORDER_SF_d.c)
 *     LinkNodeCrackPrt @ 0x1C0056F60 (LinkNodeCrackPrt.c)
 *     ProcessorDeleteDeviceIdtAssignment @ 0x1C0057F50 (ProcessorDeleteDeviceIdtAssignment.c)
 *     WPP_RECORDER_SF_DDDssDssqq @ 0x1C0058504 (WPP_RECORDER_SF_DDDssDssqq.c)
 *     WPP_RECORDER_SF_Dq @ 0x1C0058970 (WPP_RECORDER_SF_Dq.c)
 *     AcpiCheckExternalConnection @ 0x1C007A724 (AcpiCheckExternalConnection.c)
 *     PcisuppIsPciDevice @ 0x1C008C778 (PcisuppIsPciDevice.c)
 *     LinkNodeGetPossibleGsiv @ 0x1C008D288 (LinkNodeGetPossibleGsiv.c)
 *     LinkNodeGetPossibleResources @ 0x1C008D2A8 (LinkNodeGetPossibleResources.c)
 *     ProcessorGetDestinationMode @ 0x1C008E464 (ProcessorGetDestinationMode.c)
 *     IrqArbGetDeviceIrql @ 0x1C00906A0 (IrqArbGetDeviceIrql.c)
 *     IrqArbGsivFromIrq @ 0x1C0090A20 (IrqArbGsivFromIrq.c)
 *     IrqArbpLookupIsaOverrideByGsiv @ 0x1C00917A4 (IrqArbpLookupIsaOverrideByGsiv.c)
 *     IcAddPossibleReference @ 0x1C0091DE8 (IcAddPossibleReference.c)
 *     IcGetPossibleInput @ 0x1C0092504 (IcGetPossibleInput.c)
 *     IcIsInterruptTypeSecondary @ 0x1C0092638 (IcIsInterruptTypeSecondary.c)
 *     IcRemovePossibleReference @ 0x1C0092854 (IcRemovePossibleReference.c)
 *     IcSetPossibleInput @ 0x1C00928A8 (IcSetPossibleInput.c)
 *     MsiGetTargetInfo @ 0x1C0092FD4 (MsiGetTargetInfo.c)
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
  _DWORD *UserData; // r14
  unsigned int v15; // ebx
  __int64 v16; // rdx
  char v17; // r11
  int IsPciDevice; // eax
  int v19; // esi
  int PossibleInput; // eax
  unsigned __int8 v21; // di
  int v22; // eax
  __int64 v23; // r8
  int PossibleResources; // eax
  __int64 v25; // rdx
  unsigned int v26; // ebx
  __int16 v27; // r9
  int v28; // edi
  char v29; // di
  bool v30; // zf
  ULONGLONG v31; // rax
  BOOL v32; // ecx
  __int64 v33; // r10
  __int16 v34; // dx
  unsigned int v35; // r12d
  void *v36; // r11
  int v37; // r9d
  ULONGLONG v38; // rcx
  __int64 v39; // r8
  __int64 v40; // r9
  unsigned int v41; // ebx
  int v42; // eax
  POOL_TYPE v43; // r10d
  int v44; // edx
  _DWORD *PoolWithTag; // rax
  int v46; // edx
  int v47; // ecx
  ULONGLONG v48; // r8
  int TargetInfo; // eax
  int v50; // edi
  _DWORD *v51; // rbx
  __int128 v52; // xmm0
  int v53; // eax
  int v54; // ecx
  unsigned int v55; // eax
  int v56; // eax
  int v57; // eax
  BOOL v58; // eax
  char v59; // di
  int v60; // eax
  int v61; // r11d
  int DeviceIrql; // eax
  BOOL v63; // ebx
  const char *v64; // r9
  UCHAR v65; // di
  const char *v66; // rdx
  const char *v67; // r8
  NTSTATUS v68; // eax
  int Flags; // [rsp+20h] [rbp-B9h]
  PVOID Owner; // [rsp+30h] [rbp-A9h]
  char v71; // [rsp+80h] [rbp-59h]
  char v72; // [rsp+81h] [rbp-58h] BYREF
  _BYTE v73[2]; // [rsp+82h] [rbp-57h] BYREF
  unsigned int v74; // [rsp+84h] [rbp-55h]
  char v75; // [rsp+88h] [rbp-51h]
  char v76; // [rsp+89h] [rbp-50h]
  int v77; // [rsp+8Ch] [rbp-4Dh]
  unsigned int v78; // [rsp+90h] [rbp-49h] BYREF
  char v79; // [rsp+94h] [rbp-45h]
  BOOL v80; // [rsp+98h] [rbp-41h]
  int v81; // [rsp+9Ch] [rbp-3Dh] BYREF
  PVOID P; // [rsp+A0h] [rbp-39h] BYREF
  __int64 v83; // [rsp+A8h] [rbp-31h]
  __int64 v84; // [rsp+B0h] [rbp-29h]
  _OWORD v85[2]; // [rsp+B8h] [rbp-21h] BYREF
  _BYTE v86[32]; // [rsp+D8h] [rbp-1h] BYREF

  v84 = a1;
  memset(v85, 0, sizeof(v85));
  Owner = *(PVOID *)(a2[4] + 32);
  WPP_RECORDER_SF_Dq(WPP_GLOBAL_Control->DeviceExtension, v5, v6, 13);
  v7 = *(_DWORD *)a2;
  v8 = 0;
  v9 = 0LL;
  v71 = 0;
  v10 = *(unsigned int *)a2;
  P = 0LL;
  v76 = 0;
  v81 = v7;
  v11 = IrqArbGsivFromIrq(v10);
  v13 = a2[5];
  LOBYTE(v2) = 0;
  v78 = 0;
  UserData = 0LL;
  v15 = v11;
  v74 = v11;
  v77 = v2;
  v16 = *(_QWORD *)(v13 + 40);
  v75 = 0;
  if ( (*(_BYTE *)(v16 + 4) & 0x20) != 0 )
  {
    v17 = 0;
  }
  else
  {
    IsPciDevice = PcisuppIsPciDevice(*(_QWORD *)(a2[4] + 32), (bool *)&v72);
    LOBYTE(v19) = IsPciDevice;
    if ( IsPciDevice < 0 )
    {
LABEL_23:
      LOBYTE(v16) = 4;
      WPP_RECORDER_SF_d(
        WPP_GLOBAL_Control->DeviceExtension,
        v16,
        20,
        17,
        (__int64)&WPP_2a27aa2651e339a73dc9c9f16621dec0_Traceguids,
        v19);
      v26 = v74;
      if ( DWORD1(v85[1]) )
        ProcessorDeleteDeviceIdtAssignment(*(PVOID *)(a2[4] + 32), v74, DWORD1(v85[1]), 1);
      if ( v8 )
        --v9[7];
      if ( v76 )
      {
        LOBYTE(v25) = (a2[8] & 2) != 0;
        IcRemovePossibleReference(v26, v25);
      }
      if ( UserData )
      {
        if ( !(_BYTE)v2 )
          ExFreePoolWithTag(UserData, 0);
      }
      return;
    }
    v17 = v72;
  }
  if ( (a2[8] & 2) != 0 && v17 )
  {
    LOBYTE(v16) = 4;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v16,
      20,
      14,
      (__int64)&WPP_2a27aa2651e339a73dc9c9f16621dec0_Traceguids);
    return;
  }
  LOBYTE(v3) = 0;
  v73[0] = 0;
  v80 = v3;
  if ( v15 < 0xFFF00000 )
  {
    PossibleInput = IcGetPossibleInput(v15, v16, v73);
    if ( PossibleInput >= 0 )
    {
      LOBYTE(v3) = PossibleInput != 263;
      v80 = PossibleInput != 263;
    }
  }
  if ( v17 && (*(_BYTE *)(*(_QWORD *)(a2[5] + 40) + 4LL) & 2) == 0 )
  {
    v21 = 3;
    if ( (a2[8] & 2) == 0 )
    {
      v22 = LinkNodeCrackPrt(*(_QWORD *)(a2[4] + 32), &P, &v78, 1);
      v9 = P;
      LOBYTE(v19) = v22;
      if ( v22 < 0 )
        goto LABEL_21;
      if ( !P )
      {
        v23 = v78;
        v74 = v78;
        goto LABEL_43;
      }
      PossibleResources = LinkNodeGetPossibleResources((__int64)P, &P, &v72);
      LOBYTE(v19) = PossibleResources;
      if ( PossibleResources < 0 )
        goto LABEL_21;
      ExFreePoolWithTag(P, 0);
      v21 = v72 & 2 | 1;
      if ( (int)LinkNodeGetPossibleGsiv((__int64)v9, &v78) < 0 )
      {
        if ( v9[7] )
        {
          LOBYTE(v19) = 1;
LABEL_21:
          v8 = 0;
LABEL_22:
          LOBYTE(v2) = v77;
          goto LABEL_23;
        }
        v9[9] = v15;
      }
      ++v9[7];
      v23 = v15;
      v71 = 1;
      goto LABEL_43;
    }
LABEL_42:
    v23 = v15;
    goto LABEL_43;
  }
  if ( (unsigned __int8)IrqArbpLookupIsaOverrideByGsiv(v15, &v78, v12, 1LL) )
  {
    v21 = byte_1C00664C4[8 * v78];
    if ( v21 != 0xFF )
      goto LABEL_42;
  }
  v28 = (unsigned __int16)(v27 & *(_WORD *)(*(_QWORD *)(a2[5] + 40) + 4LL));
  if ( (unsigned __int8)IcIsInterruptTypeSecondary(v15) )
  {
    v75 = 1;
    v29 = v28 ^ 1;
    AcpiCheckExternalConnection();
    v19 = -1073741822;
    KeEnterCriticalRegion();
    ExAcquireResourceSharedLite(&ExternalTranslatorInterfaceLock, 1u);
    if ( ExternalTranslationInterface )
      v19 = (*((__int64 (__fastcall **)(_QWORD, _QWORD, _BYTE *))ExternalTranslationInterface + 9))(v15, 0LL, v86);
    ExReleaseResourceLite(&ExternalTranslatorInterfaceLock);
    KeLeaveCriticalRegion();
    if ( v19 < 0 )
    {
      v8 = 0;
      goto LABEL_22;
    }
    v21 = v86[16] | v29;
    goto LABEL_42;
  }
  if ( (*(_BYTE *)(*(_QWORD *)(a2[5] + 40) + 4LL) & 2) != 0
    || !ACPIInternalInterruptPolarityCacheGetPolarity(*(_QWORD *)(a2[4] + 32), v81, &v78) )
  {
    v21 = v28 == 0 ? 3 : 0;
  }
  else
  {
    v21 = v78 | v28 ^ 1;
  }
  v23 = v15;
  if ( (*(_BYTE *)(*(_QWORD *)(a2[5] + 40) + 4LL) & 2) != 0 )
    v21 |= 4u;
LABEL_43:
  v30 = (a2[8] & 2) == 0;
  v72 = 0;
  if ( !v30 )
  {
    v72 = 1;
    if ( v3 )
    {
      if ( ((v73[0] ^ v21) & 0xFFFFFFFB) != 0 )
      {
        LOBYTE(v16) = 4;
        WPP_RECORDER_SF_(
          WPP_GLOBAL_Control->DeviceExtension,
          v16,
          20,
          15,
          (__int64)&WPP_2a27aa2651e339a73dc9c9f16621dec0_Traceguids);
        LOBYTE(v2) = v77;
        LOBYTE(v19) = 1;
        v8 = v71;
        goto LABEL_23;
      }
    }
  }
  v31 = a2[5];
  v32 = 0;
  v33 = *(_QWORD *)(v31 + 40);
  v83 = v33;
  v34 = *(_WORD *)(v33 + 4);
  if ( (v34 & 2) != 0 )
  {
    v35 = *(_DWORD *)(v33 + 12) - *(_DWORD *)(v33 + 8) + 1;
  }
  else
  {
    v35 = 1;
    v32 = (*(_BYTE *)(v31 + 36) & 1) != 0;
  }
  v36 = (void *)a2[9];
  v37 = v32 | 2;
  P = v36;
  if ( (v34 & 8) == 0 )
    v37 = v32;
  v78 = 0;
  v81 = v37;
  v73[0] = v21 & 8;
  v79 = v21 & 1;
  v38 = a2[4];
  v78 = ((v21 & 8) != 0 ? 2 : 0) | !(v21 & 1);
  LODWORD(Owner) = v37;
  v19 = ((__int64 (__fastcall *)(_QWORD, __int64, __int64, void *, unsigned int, unsigned int, PVOID, int, _OWORD *))ProcessorReserveIdtEntries)(
          *(_QWORD *)(v38 + 32),
          v33,
          v23,
          v36,
          v35,
          v78,
          Owner,
          1,
          v85);
  if ( v19 >= 0 )
  {
    v41 = v74;
  }
  else
  {
    v40 = 1LL;
    if ( v35 <= 1 )
    {
      v41 = v74;
    }
    else
    {
      v35 = 1;
      v41 = v74;
      v19 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, PVOID, int, unsigned int, int, int, _OWORD *))ProcessorReserveIdtEntries)(
              *(_QWORD *)(a2[4] + 32),
              *(_QWORD *)(a2[5] + 40),
              v74,
              P,
              1,
              (unsigned __int8)-((v21 & 8) != 0) & 2u | !(v21 & 1),
              v81,
              1,
              v85);
    }
    if ( v19 < 0 )
      return;
  }
  if ( (*(_BYTE *)(*(_QWORD *)(a2[5] + 40) + 4LL) & 2) != 0 )
  {
    v43 = PagedPool;
  }
  else
  {
    if ( !v80 )
    {
      LOBYTE(v39) = v21;
      LOBYTE(v40) = (*(_BYTE *)(v83 + 4) & 8) != 0;
      v42 = IcSetPossibleInput(v41, v85, v39, v40);
      LOBYTE(v19) = v42;
      if ( v42 < 0 )
        goto LABEL_115;
    }
    LOBYTE(v16) = (a2[8] & 2) != 0;
    IcAddPossibleReference(v41, v16);
    v76 = v43;
  }
  v80 = 0;
  if ( (v21 & 4) == 0 )
  {
    v44 = v43;
    if ( ((unsigned __int8)v43 & *(_BYTE *)(a2[5] + 36)) != 0 )
      v44 = 3;
    v80 = v44;
  }
  PoolWithTag = ExAllocatePoolWithTag(v43, 88LL * (v35 - 1) + 120, 0x49706341u);
  UserData = PoolWithTag;
  if ( !PoolWithTag )
    goto LABEL_115;
  memset(PoolWithTag, 0, 0x78uLL);
  *UserData = 1;
  UserData[1] = 4;
  v46 = 4;
  v47 = *(_DWORD *)(a2[4] + 40);
  if ( v47 && v47 != 2 )
  {
    v46 = 5;
    UserData[1] = 5;
  }
  v48 = a2[5];
  if ( (*(_DWORD *)(v48 + 36) & 4) != 0 )
  {
    v46 |= 2u;
    UserData[1] = v46;
    v48 = a2[5];
  }
  if ( (*(_BYTE *)(*(_QWORD *)(v48 + 40) + 4LL) & 0x20) != 0 )
  {
    UserData[1] = v46 | 0x10;
    v48 = a2[5];
  }
  if ( (*(_BYTE *)(*(_QWORD *)(v48 + 40) + 4LL) & 2) == 0 )
  {
    if ( v9 )
    {
      *((_QWORD *)UserData + 2) = v9;
      v57 = 2;
    }
    else
    {
      v57 = 1;
    }
    UserData[2] = v57;
    UserData[8] = 0;
    UserData[9] = DWORD1(v85[1]);
    *(_OWORD *)(UserData + 14) = v85[0];
    v58 = (v75 || v73[0]) && !v79;
    v59 = v21 & 0xA;
    UserData[12] = v58;
    switch ( v59 )
    {
      case 10:
        v60 = 3;
        break;
      case 8:
        v60 = 4;
        break;
      case 2:
        v60 = 2;
        break;
      default:
        v60 = v59 == 0;
        break;
    }
    UserData[11] = v60;
    UserData[22] = IrqArbGsivFromIrq(*a2);
    UserData[23] ^= v61 & (UserData[23] ^ (UserData[1] >> 4));
    DeviceIrql = IrqArbGetDeviceIrql(UserData + 8, UserData + 10);
    LOBYTE(v19) = DeviceIrql;
    if ( DeviceIrql >= 0 )
      goto LABEL_105;
LABEL_115:
    LOBYTE(v2) = v77;
LABEL_114:
    v8 = v71;
    goto LABEL_23;
  }
  UserData[2] = 3;
  TargetInfo = MsiGetTargetInfo(v85, DWORD1(v85[1]), UserData + 4);
  LOBYTE(v19) = TargetInfo;
  if ( TargetInfo < 0 )
    goto LABEL_115;
  *((_BYTE *)UserData + 26) = BYTE8(v85[1]);
  ProcessorGetDestinationMode((__int64)v85, &v81);
  v50 = 0;
  if ( v35 )
  {
    v51 = UserData + 14;
    do
    {
      *(v51 - 6) = 3;
      v52 = v85[0];
      *(v51 - 3) = 0;
      *(v51 - 2) = 1;
      v53 = v81;
      *(_OWORD *)v51 = v52;
      v54 = v50 + DWORD1(v85[1]);
      v51[12] = v53;
      v55 = v74;
      *(v51 - 5) = v54;
      v51[8] = v50 + v55;
      v56 = IrqArbGetDeviceIrql(&UserData[22 * v50 + 8], &UserData[22 * v50 + 10]);
      LOBYTE(v19) = v56;
      if ( v56 < 0 )
        goto LABEL_115;
      v51 += 22;
    }
    while ( ++v50 < v35 );
  }
LABEL_105:
  v63 = v80;
  v64 = "RTL_RANGE_LIST_ADD_SHARED";
  v65 = v72;
  v66 = "RTL_RANGE_LIST_ADD_IF_CONFLICT";
  v67 = "ARBITER_RANGE_BOOT_ALLOCATED";
  if ( (v80 & 2) == 0 )
    v64 = " ";
  if ( !v80 )
    v66 = " ";
  if ( !v72 )
    v67 = " ";
  WPP_RECORDER_SF_DDDssDssqq(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    (__int64)v66,
    (__int64)v67,
    (__int64)v64,
    Flags);
  v68 = RtlAddRange(*(PRTL_RANGE_LIST *)(v84 + 48), *a2, a2[1], v65, v63 | 0x10, UserData, *(PVOID *)(a2[4] + 32));
  LOBYTE(v19) = v68;
  if ( v68 < 0 )
  {
    LOBYTE(v2) = v77;
    if ( v68 != -1073741823 )
      LOBYTE(v2) = 1;
    goto LABEL_114;
  }
}
