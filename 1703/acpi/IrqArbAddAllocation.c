/*
 * XREFs of IrqArbAddAllocation @ 0x1C0086020
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_Dq @ 0x1C0005C74 (WPP_RECORDER_SF_Dq.c)
 *     WPP_RECORDER_SF_DDDssDssqq @ 0x1C0005E50 (WPP_RECORDER_SF_DDDssDssqq.c)
 *     ACPIInternalInterruptPolarityCacheGetPolarity @ 0x1C00060C4 (ACPIInternalInterruptPolarityCacheGetPolarity.c)
 *     WPP_RECORDER_SF_ @ 0x1C0008934 (WPP_RECORDER_SF_.c)
 *     LinkNodeCrackPrt @ 0x1C001B96C (LinkNodeCrackPrt.c)
 *     ProcessorDeleteDeviceIdtAssignment @ 0x1C0026D98 (ProcessorDeleteDeviceIdtAssignment.c)
 *     __security_check_cookie @ 0x1C002BF40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C002C750 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C002CB80 (memset.c)
 *     WPP_RECORDER_SF_d @ 0x1C0056320 (WPP_RECORDER_SF_d.c)
 *     IcSetPossibleInput @ 0x1C0084DF8 (IcSetPossibleInput.c)
 *     IcIsInterruptTypeSecondary @ 0x1C0085FE0 (IcIsInterruptTypeSecondary.c)
 *     IrqArbGsivFromIrq @ 0x1C0086A70 (IrqArbGsivFromIrq.c)
 *     PcisuppIsPciDevice @ 0x1C0086D18 (PcisuppIsPciDevice.c)
 *     IrqArbGetDeviceIrql @ 0x1C00882DC (IrqArbGetDeviceIrql.c)
 *     IrqArbpLookupIsaOverrideByGsiv @ 0x1C0088600 (IrqArbpLookupIsaOverrideByGsiv.c)
 *     IcAddPossibleReference @ 0x1C00891D0 (IcAddPossibleReference.c)
 *     IcGetPossibleInput @ 0x1C0089220 (IcGetPossibleInput.c)
 *     ProcessorGetDestinationMode @ 0x1C00894D8 (ProcessorGetDestinationMode.c)
 *     MsiGetTargetInfo @ 0x1C0089514 (MsiGetTargetInfo.c)
 *     AcpiCheckExternalConnection @ 0x1C008C8D4 (AcpiCheckExternalConnection.c)
 *     IcRemovePossibleReference @ 0x1C0094268 (IcRemovePossibleReference.c)
 *     LinkNodeGetPossibleGsiv @ 0x1C00A5590 (LinkNodeGetPossibleGsiv.c)
 *     LinkNodeGetPossibleResources @ 0x1C00A55B0 (LinkNodeGetPossibleResources.c)
 */

void __fastcall IrqArbAddAllocation(__int64 a1, ULONGLONG *a2)
{
  int v2; // esi
  int IsPciDevice; // r15d
  int v5; // edx
  int v6; // r8d
  int v7; // eax
  _DWORD *v8; // r13
  __int64 v9; // rcx
  unsigned int v10; // eax
  __int64 v11; // r8
  ULONGLONG v12; // rcx
  _DWORD *v13; // rdi
  unsigned int v14; // r12d
  __int64 v15; // rdx
  char v16; // bl
  int PossibleInput; // eax
  unsigned __int8 v18; // si
  __int16 v19; // r9
  int v20; // ebx
  unsigned int v21; // edx
  bool v22; // zf
  ULONGLONG v23; // r8
  BOOL v24; // ecx
  __int64 v25; // r10
  char v26; // al
  unsigned int v27; // r12d
  int v28; // r8d
  unsigned int v29; // ebx
  unsigned int v30; // ebx
  int v31; // eax
  POOL_TYPE v32; // r9d
  int v33; // edx
  _DWORD *PoolWithTag; // rax
  int v35; // ecx
  char v36; // si
  int v37; // eax
  int v38; // eax
  unsigned int v39; // ebx
  const char *v40; // r9
  UCHAR v41; // si
  const char *v42; // rdx
  const char *v43; // r8
  NTSTATUS v44; // eax
  int TargetInfo; // eax
  int v46; // esi
  _DWORD *v47; // rbx
  __int128 v48; // xmm0
  int v49; // eax
  int v50; // ecx
  unsigned int v51; // eax
  int DeviceIrql; // eax
  int v53; // eax
  int PossibleResources; // eax
  unsigned int v55; // ebx
  __int64 Flags; // [rsp+20h] [rbp-B9h]
  unsigned int UserData; // [rsp+28h] [rbp-B1h]
  PVOID Owner; // [rsp+30h] [rbp-A9h]
  char v59; // [rsp+80h] [rbp-59h] BYREF
  char v60[3]; // [rsp+81h] [rbp-58h] BYREF
  unsigned int v61; // [rsp+84h] [rbp-55h]
  unsigned int v62; // [rsp+88h] [rbp-51h] BYREF
  char v63; // [rsp+8Ch] [rbp-4Dh]
  char v64; // [rsp+8Dh] [rbp-4Ch]
  char v65; // [rsp+8Eh] [rbp-4Bh]
  int v66; // [rsp+90h] [rbp-49h]
  char v67; // [rsp+94h] [rbp-45h]
  BOOL v68; // [rsp+98h] [rbp-41h]
  int v69; // [rsp+9Ch] [rbp-3Dh] BYREF
  PVOID P; // [rsp+A0h] [rbp-39h] BYREF
  __int64 v71; // [rsp+A8h] [rbp-31h]
  __int64 v72; // [rsp+B0h] [rbp-29h]
  _OWORD v73[2]; // [rsp+B8h] [rbp-21h] BYREF
  _BYTE v74[32]; // [rsp+D8h] [rbp-1h] BYREF

  v72 = a1;
  memset(v73, 0, sizeof(v73));
  Owner = *(PVOID *)(a2[4] + 32);
  WPP_RECORDER_SF_Dq(WPP_GLOBAL_Control->DeviceExtension, v5, v6, 13);
  v7 = *(_DWORD *)a2;
  v8 = 0LL;
  v9 = *(unsigned int *)a2;
  P = 0LL;
  v64 = 0;
  v65 = 0;
  v69 = v7;
  v10 = IrqArbGsivFromIrq(v9);
  v12 = a2[5];
  v13 = 0LL;
  v62 = 0;
  LOBYTE(v2) = 0;
  v14 = v10;
  v61 = v10;
  v66 = v2;
  v15 = *(_QWORD *)(v12 + 40);
  v63 = 0;
  if ( (*(_BYTE *)(v15 + 4) & 0x20) != 0 )
  {
    v16 = 0;
  }
  else
  {
    IsPciDevice = PcisuppIsPciDevice(*(_QWORD *)(a2[4] + 32), &v59);
    if ( IsPciDevice < 0 )
    {
LABEL_110:
      LOBYTE(v15) = 4;
      WPP_RECORDER_SF_d(
        WPP_GLOBAL_Control->DeviceExtension,
        v15,
        20,
        17,
        (__int64)&WPP_7e722731483c3b8ec3839991a228af4a_Traceguids,
        IsPciDevice);
      v55 = v61;
      if ( DWORD1(v73[1]) )
        ProcessorDeleteDeviceIdtAssignment(*(PVOID *)(a2[4] + 32), v61, DWORD1(v73[1]), 1);
      if ( v64 )
        --v8[7];
      if ( v65 )
        IcRemovePossibleReference(v55, (*((unsigned __int8 *)a2 + 64) >> 1) & 1);
      if ( v13 )
      {
        if ( !(_BYTE)v2 )
          ExFreePoolWithTag(v13, 0);
      }
      return;
    }
    v16 = v59;
  }
  if ( (a2[8] & 2) != 0 && v16 )
  {
    LOBYTE(v15) = 4;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v15,
      20,
      14,
      (__int64)&WPP_7e722731483c3b8ec3839991a228af4a_Traceguids);
    return;
  }
  LOBYTE(IsPciDevice) = 0;
  v60[0] = 0;
  v68 = IsPciDevice;
  if ( v14 < 0xFFF00000 )
  {
    PossibleInput = IcGetPossibleInput(v14, v15, v60);
    if ( PossibleInput >= 0 )
    {
      LOBYTE(IsPciDevice) = PossibleInput != 263;
      v68 = PossibleInput != 263;
    }
  }
  v18 = 3;
  if ( v16 && (*(_BYTE *)(*(_QWORD *)(a2[5] + 40) + 4LL) & 2) == 0 )
  {
    if ( (a2[8] & 2) != 0 )
    {
LABEL_78:
      v21 = v14;
      goto LABEL_20;
    }
    v53 = LinkNodeCrackPrt(*(_QWORD *)(a2[4] + 32), &P, &v62, 1);
    v8 = P;
    LOBYTE(IsPciDevice) = v53;
    if ( v53 < 0 )
      goto LABEL_79;
    if ( !P )
    {
      v21 = v62;
      LOBYTE(IsPciDevice) = v68;
      v61 = v62;
      goto LABEL_20;
    }
    PossibleResources = LinkNodeGetPossibleResources(P, &P, &v59);
    LOBYTE(IsPciDevice) = PossibleResources;
    if ( PossibleResources < 0 )
      goto LABEL_79;
    ExFreePoolWithTag(P, 0);
    v18 = v59 & 2 | 1;
    if ( (int)LinkNodeGetPossibleGsiv(v8, &v62) < 0 )
    {
      if ( v8[7] )
      {
        LOBYTE(IsPciDevice) = 1;
        goto LABEL_79;
      }
      v8[9] = v14;
    }
    ++v8[7];
    v64 = 1;
LABEL_87:
    LOBYTE(IsPciDevice) = v68;
    goto LABEL_78;
  }
  if ( (unsigned __int8)IrqArbpLookupIsaOverrideByGsiv(v14, &v62, v11, 1LL) )
  {
    v18 = byte_1C0076334[8 * v62];
    if ( v18 != 0xFF )
      goto LABEL_78;
  }
  v20 = (unsigned __int16)(v19 & *(_WORD *)(*(_QWORD *)(a2[5] + 40) + 4LL));
  if ( IcIsInterruptTypeSecondary(v14) )
  {
    v63 = 1;
    AcpiCheckExternalConnection();
    IsPciDevice = -1073741822;
    KeEnterCriticalRegion();
    ExAcquireResourceSharedLite(&ExternalTranslatorInterfaceLock, 1u);
    if ( ExternalTranslationInterface )
      IsPciDevice = (*((__int64 (__fastcall **)(_QWORD, _QWORD, _BYTE *))ExternalTranslationInterface + 9))(
                      v14,
                      0LL,
                      v74);
    ExReleaseResourceLite(&ExternalTranslatorInterfaceLock);
    KeLeaveCriticalRegion();
    if ( IsPciDevice < 0 )
      goto LABEL_79;
    v18 = v74[16] | (v20 == 0);
    goto LABEL_87;
  }
  if ( (*(_BYTE *)(*(_QWORD *)(a2[5] + 40) + 4LL) & 2) != 0
    || !ACPIInternalInterruptPolarityCacheGetPolarity(*(_QWORD *)(a2[4] + 32), v69, &v62) )
  {
    v18 = v20 != 1 ? 3 : 0;
  }
  else
  {
    v18 = v62 | (v20 != 1);
  }
  v21 = v14;
  if ( (*(_BYTE *)(*(_QWORD *)(a2[5] + 40) + 4LL) & 2) != 0 )
    v18 |= 4u;
LABEL_20:
  v22 = (a2[8] & 2) == 0;
  v59 = 0;
  if ( !v22 )
  {
    v59 = 1;
    if ( (_BYTE)IsPciDevice )
    {
      if ( (((unsigned __int8)v60[0] ^ v18) & 0xFFFFFFFB) != 0 )
      {
        LOBYTE(v21) = 4;
        WPP_RECORDER_SF_(
          WPP_GLOBAL_Control->DeviceExtension,
          v21,
          20,
          15,
          (__int64)&WPP_7e722731483c3b8ec3839991a228af4a_Traceguids);
        LOBYTE(v2) = v66;
        LOBYTE(IsPciDevice) = 1;
        goto LABEL_110;
      }
    }
  }
  v23 = a2[5];
  v24 = 0;
  v25 = *(_QWORD *)(v23 + 40);
  v71 = v25;
  v26 = *(_BYTE *)(v25 + 4);
  if ( (v26 & 2) != 0 )
  {
    v27 = *(_DWORD *)(v25 + 12) - *(_DWORD *)(v25 + 8) + 1;
  }
  else
  {
    v27 = 1;
    v24 = (*(_BYTE *)(v23 + 36) & 1) != 0;
  }
  v28 = v24 | 2;
  P = (PVOID)a2[9];
  if ( (v26 & 8) == 0 )
    v28 = v24;
  v67 = v18 & 1;
  v69 = v28;
  v60[0] = v18 & 8;
  v62 = ((v67 == 0) ^ (unsigned __int8)(2 * ((v18 & 8) != 0))) & 2 ^ (v67 == 0);
  v29 = v62;
  LODWORD(Flags) = v27;
  IsPciDevice = ((__int64 (__fastcall *)(_QWORD, __int64, _QWORD))ProcessorReserveIdtEntries)(
                  *(_QWORD *)(a2[4] + 32),
                  v25,
                  v21);
  if ( IsPciDevice < 0 )
  {
    if ( v27 <= 1 )
    {
      v30 = v61;
    }
    else
    {
      v27 = 1;
      LODWORD(Owner) = v69;
      UserData = v29;
      v30 = v61;
      IsPciDevice = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, PVOID, int, unsigned int, PVOID, int, _OWORD *))ProcessorReserveIdtEntries)(
                      *(_QWORD *)(a2[4] + 32),
                      *(_QWORD *)(a2[5] + 40),
                      v61,
                      P,
                      1,
                      UserData,
                      Owner,
                      1,
                      v73);
    }
    if ( IsPciDevice < 0 )
      return;
  }
  else
  {
    v30 = v61;
  }
  if ( (*(_BYTE *)(*(_QWORD *)(a2[5] + 40) + 4LL) & 2) == 0 )
  {
    if ( v68
      || (v31 = IcSetPossibleInput(v30, (__int64)v73, v18, (*(_BYTE *)(v71 + 4) & 8) != 0),
          LOBYTE(IsPciDevice) = v31,
          v31 >= 0) )
    {
      IcAddPossibleReference(v30, (*((unsigned __int8 *)a2 + 64) >> 1) & 1);
      v65 = v32;
      goto LABEL_31;
    }
LABEL_79:
    LOBYTE(v2) = v66;
    goto LABEL_110;
  }
  v32 = PagedPool;
LABEL_31:
  v62 = 0;
  if ( (v18 & 4) == 0 )
  {
    v33 = v32;
    if ( ((unsigned __int8)v32 & *(_BYTE *)(a2[5] + 36)) != 0 )
      v33 = 3;
    v62 = v33;
  }
  PoolWithTag = ExAllocatePoolWithTag(v32, 88LL * (v27 - 1) + 120, 0x49706341u);
  v13 = PoolWithTag;
  if ( !PoolWithTag )
    goto LABEL_79;
  memset(PoolWithTag, 0, 0x78uLL);
  v13[1] = 4;
  *v13 = 1;
  v35 = v13[1];
  if ( (*(_DWORD *)(a2[4] + 40) & 0xFFFFFFFD) != 0 )
    v35 = 5;
  v13[1] = v35;
  if ( (*(_DWORD *)(a2[5] + 36) & 4) != 0 )
    v13[1] |= 2u;
  if ( (*(_BYTE *)(*(_QWORD *)(a2[5] + 40) + 4LL) & 0x20) != 0 )
    v13[1] |= 0x10u;
  if ( (*(_BYTE *)(*(_QWORD *)(a2[5] + 40) + 4LL) & 2) != 0 )
  {
    v13[2] = 3;
    TargetInfo = MsiGetTargetInfo(v73, DWORD1(v73[1]), v13 + 4);
    LOBYTE(IsPciDevice) = TargetInfo;
    if ( TargetInfo >= 0 )
    {
      *((_BYTE *)v13 + 26) = BYTE8(v73[1]);
      ProcessorGetDestinationMode(v73, &v69);
      v46 = 0;
      if ( !v27 )
        goto LABEL_53;
      v47 = v13 + 14;
      while ( 1 )
      {
        *(v47 - 6) = 3;
        v48 = v73[0];
        *(v47 - 3) = 0;
        *(v47 - 2) = 1;
        v49 = v69;
        *(_OWORD *)v47 = v48;
        v50 = v46 + DWORD1(v73[1]);
        v47[12] = v49;
        v51 = v61;
        *(v47 - 5) = v50;
        v47[8] = v46 + v51;
        DeviceIrql = IrqArbGetDeviceIrql(&v13[22 * v46 + 8], &v13[22 * v46 + 10]);
        LOBYTE(IsPciDevice) = DeviceIrql;
        if ( DeviceIrql < 0 )
          break;
        v47 += 22;
        if ( ++v46 >= v27 )
          goto LABEL_53;
      }
    }
    goto LABEL_79;
  }
  if ( v8 )
  {
    v13[2] = 2;
    *((_QWORD *)v13 + 2) = v8;
  }
  else
  {
    v13[2] = 1;
  }
  v13[8] = 0;
  v13[9] = DWORD1(v73[1]);
  *(_OWORD *)(v13 + 14) = v73[0];
  v13[12] = (v63 || v60[0]) && !v67;
  v36 = v18 & 0xA;
  switch ( v36 )
  {
    case 10:
      v37 = 3;
      break;
    case 8:
      v37 = 4;
      break;
    case 2:
      v37 = 2;
      break;
    default:
      v37 = v36 == 0;
      break;
  }
  v13[11] = v37;
  v13[22] = IrqArbGsivFromIrq(*a2);
  v13[23] ^= (v13[23] ^ (v13[1] >> 4)) & 1;
  v38 = IrqArbGetDeviceIrql(v13 + 8, v13 + 10);
  LOBYTE(IsPciDevice) = v38;
  if ( v38 < 0 )
  {
    LOBYTE(v2) = v66;
    goto LABEL_110;
  }
LABEL_53:
  v39 = v62;
  v40 = "RTL_RANGE_LIST_ADD_SHARED";
  v41 = v59;
  v42 = "RTL_RANGE_LIST_ADD_IF_CONFLICT";
  v43 = "ARBITER_RANGE_BOOT_ALLOCATED";
  if ( (v62 & 2) == 0 )
    v40 = " ";
  if ( (v62 & 1) == 0 )
    v42 = " ";
  if ( !v59 )
    v43 = " ";
  WPP_RECORDER_SF_DDDssDssqq(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    (__int64)v42,
    (__int64)v43,
    (__int64)v40,
    Flags);
  v44 = RtlAddRange(*(PRTL_RANGE_LIST *)(v72 + 48), *a2, a2[1], v41, v39 | 0x10, v13, *(PVOID *)(a2[4] + 32));
  LOBYTE(IsPciDevice) = v44;
  if ( v44 < 0 )
  {
    LOBYTE(v2) = v66;
    if ( v44 != -1073741823 )
      LOBYTE(v2) = 1;
    goto LABEL_110;
  }
}
