/*
 * XREFs of ?RmSrvAcquireResourceSet@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_ResourceSetInfo@ExecutionModel@@PEAUIResourceSetCallback@3@PEAXPEBG3KK_KK55PEAU_RM_ACTIVATOR@@PEA_N@Z @ 0x180020840
 * Callers:
 *     ?HampRmContextAcquireResourceSet@@YAJPEAVHAM_ACTIVITY_RM_CONTEXT@@@Z @ 0x180023170 (-HampRmContextAcquireResourceSet@@YAJPEAVHAM_ACTIVITY_RM_CONTEXT@@@Z.c)
 *     RmCoreRpcSrvAcquireResourceSet @ 0x1800273D0 (RmCoreRpcSrvAcquireResourceSet.c)
 *     ?AcquireResourceSet@RmpRpExtResourceSetThunk@@SAJPEAU_RM_SERVICE_GLOBALS@@PEAU_ResourceSetInfo@ExecutionModel@@PEAUIResourceSetCallback@4@PEAXPEBG3KK_KKPEAUIResourceSet@4@PEA_NPEAPEAU64@@Z @ 0x18004D478 (-AcquireResourceSet@RmpRpExtResourceSetThunk@@SAJPEAU_RM_SERVICE_GLOBALS@@PEAU_ResourceSetInfo@E.c)
 *     ?Handle_RM_AcquireResourceSet@ResourceManagerServerProxy@@QEAAJPEAXPEAURmResourceSetInfo@@EPEBGPEAEKKK_KKPEAH4PEA_K@Z @ 0x18004DBD8 (-Handle_RM_AcquireResourceSet@ResourceManagerServerProxy@@QEAAJPEAXPEAURmResourceSetInfo@@EPEBGP.c)
 * Callees:
 *     _TlgCreateSid @ 0x18000EE38 (_TlgCreateSid.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x18000FAF0 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     _TlgWrite @ 0x18000FC80 (_TlgWrite.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x1800141C0 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     _TlgCreateWsz @ 0x180014DC0 (_TlgCreateWsz.c)
 *     ?AcquireResourceSet@ResourceManager@ExecutionModel@@QEAAJPEBU_ResourceSetInfo@2@PEAU_RM_PARTITION@@PEAXPEAUIResourceSetCallback@2@2PEBGPEAT_RM_SID@@KK_KKPEAU_RM_ACTIVATOR@@PEA_NPEAVResourceSet@2@6PEAPEAV82@@Z @ 0x18001DAC0 (-AcquireResourceSet@ResourceManager@ExecutionModel@@QEAAJPEBU_ResourceSetInfo@2@PEAU_RM_PARTITIO.c)
 *     ?GetMemoryRequirementEstimateFromRegistry@ResourceManager@ExecutionModel@@QEBAJPEAU_ResourceSetInfo@2@PEBGKPEA_K@Z @ 0x18001E048 (-GetMemoryRequirementEstimateFromRegistry@ResourceManager@ExecutionModel@@QEBAJPEAU_ResourceSetI.c)
 *     ?Release@ResourceSet@ExecutionModel@@UEAAKXZ @ 0x18001FF90 (-Release@ResourceSet@ExecutionModel@@UEAAKXZ.c)
 *     ?RmpPartitionRelease@@YAXPEAU_RM_PARTITION@@@Z @ 0x1800229A4 (-RmpPartitionRelease@@YAXPEAU_RM_PARTITION@@@Z.c)
 *     ?RmpPartitionTableFindOrCreatePartition@@YAJPEAU_RM_PARTITION_TABLE@@PEAXPEAPEAU_RM_PARTITION@@@Z @ 0x1800229E0 (-RmpPartitionTableFindOrCreatePartition@@YAJPEAU_RM_PARTITION_TABLE@@PEAXPEAPEAU_RM_PARTITION@@@.c)
 *     ?RmpResourceSetInfoIsValid@@YAKPEBU_ResourceSetInfo@ExecutionModel@@@Z @ 0x180022D10 (-RmpResourceSetInfoIsValid@@YAKPEBU_ResourceSetInfo@ExecutionModel@@@Z.c)
 *     _TlgKeywordOn @ 0x180022DC0 (_TlgKeywordOn.c)
 *     ?RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x180023550 (-RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     ?RmpResourceSetTableFindEmSetById@@YAJPEAU_RM_OBJECT_TABLE@@_KPEAPEAVResourceSet@ExecutionModel@@@Z @ 0x1800272D8 (-RmpResourceSetTableFindEmSetById@@YAJPEAU_RM_OBJECT_TABLE@@_KPEAPEAVResourceSet@ExecutionModel@.c)
 *     __security_check_cookie @ 0x18003E9A0 (__security_check_cookie.c)
 *     IsNotifyGameModeExtensionRecipientsPresentPresent @ 0x18003F3EC (IsNotifyGameModeExtensionRecipientsPresentPresent.c)
 *     memcpy_0 @ 0x180041D16 (memcpy_0.c)
 *     memset_0 @ 0x180041D1C (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x180041D40 (_guard_dispatch_icall_nop.c)
 *     ?SetAmount@_ResourceSetInfo@ExecutionModel@@QEAAJW4Enum@ResourceType@2@_K@Z @ 0x18004CBB0 (-SetAmount@_ResourceSetInfo@ExecutionModel@@QEAAJW4Enum@ResourceType@2@_K@Z.c)
 */

__int64 __fastcall RmSrvAcquireResourceSet(
        struct _RM_SERVICE_GLOBALS *a1,
        struct ExecutionModel::_ResourceSetInfo *a2,
        struct ExecutionModel::IResourceSetCallback *a3,
        void *a4,
        wchar_t *pwsz,
        SID *Sid,
        unsigned int a7,
        unsigned int a8,
        unsigned __int64 a9,
        unsigned int a10,
        unsigned __int64 a11,
        unsigned __int64 a12,
        struct _RM_ACTIVATOR *a13,
        bool *a14)
{
  const SID *v15; // r12
  struct ExecutionModel::ResourceSet *v17; // r13
  ExecutionModel::ResourceSet *v18; // r15
  unsigned int v19; // r14d
  ULONG v20; // eax
  __int16 v21; // cx
  int v22; // eax
  __int16 v23; // ax
  PVOID v24; // rdi
  int v25; // ecx
  signed int PackageFullNameFromKey; // eax
  DWORD v27; // r14d
  _QWORD *Value; // rdi
  unsigned __int64 v29; // r9
  __int64 v30; // r8
  __int64 v31; // r10
  unsigned int v32; // edx
  __int64 v33; // r11
  __int64 v34; // r10
  int v35; // ecx
  _QWORD *v36; // rax
  __int64 (__fastcall *v38)(ExecutionModel::ResourceSet *); // rax
  bool *v39; // r9
  bool v40; // di
  __int64 v41; // rax
  const WCHAR *v42; // rcx
  DWORD v44; // ebx
  int PartitionHandlesForPackage; // eax
  __int64 v46; // r9
  int MemoryRequirementEstimateFromRegistry; // [rsp+90h] [rbp-80h] BYREF
  unsigned __int64 v48; // [rsp+98h] [rbp-78h]
  struct _RM_SERVICE_GLOBALS *v49; // [rsp+A0h] [rbp-70h]
  __int16 v50; // [rsp+A8h] [rbp-68h] BYREF
  __int64 v51; // [rsp+B0h] [rbp-60h]
  HANDLE v52; // [rsp+B8h] [rbp-58h] BYREF
  struct ExecutionModel::ResourceSet *v53; // [rsp+C0h] [rbp-50h] BYREF
  int v54; // [rsp+C8h] [rbp-48h]
  int v55; // [rsp+CCh] [rbp-44h]
  PVOID P; // [rsp+D0h] [rbp-40h]
  ExecutionModel::ResourceSet *v57; // [rsp+D8h] [rbp-38h] BYREF
  HANDLE Handle; // [rsp+E0h] [rbp-30h] BYREF
  int v59; // [rsp+E8h] [rbp-28h] BYREF
  char v60[4]; // [rsp+ECh] [rbp-24h] BYREF
  unsigned int v61; // [rsp+F0h] [rbp-20h] BYREF
  BOOL v62; // [rsp+F4h] [rbp-1Ch] BYREF
  int v63; // [rsp+F8h] [rbp-18h] BYREF
  unsigned int v64; // [rsp+FCh] [rbp-14h] BYREF
  int v65; // [rsp+100h] [rbp-10h] BYREF
  BOOL v66; // [rsp+104h] [rbp-Ch] BYREF
  unsigned int v67; // [rsp+108h] [rbp-8h] BYREF
  unsigned int v68; // [rsp+10Ch] [rbp-4h] BYREF
  BOOL v69; // [rsp+110h] [rbp+0h] BYREF
  int v70; // [rsp+114h] [rbp+4h] BYREF
  unsigned int v71; // [rsp+118h] [rbp+8h] BYREF
  BOOL v72; // [rsp+11Ch] [rbp+Ch] BYREF
  unsigned int v73; // [rsp+120h] [rbp+10h] BYREF
  struct _RM_PARTITION *v74; // [rsp+128h] [rbp+18h] BYREF
  bool *v75; // [rsp+130h] [rbp+20h]
  int v76; // [rsp+138h] [rbp+28h] BYREF
  unsigned __int64 v77; // [rsp+140h] [rbp+30h]
  unsigned __int64 v78; // [rsp+148h] [rbp+38h] BYREF
  void *v79; // [rsp+150h] [rbp+40h]
  struct ExecutionModel::IResourceSetCallback *v80; // [rsp+158h] [rbp+48h]
  __int64 v81; // [rsp+160h] [rbp+50h] BYREF
  __int64 v82; // [rsp+168h] [rbp+58h] BYREF
  __int64 v83; // [rsp+170h] [rbp+60h] BYREF
  __int64 v84; // [rsp+178h] [rbp+68h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+180h] [rbp+70h] BYREF
  EVENT_DESCRIPTOR v86; // [rsp+190h] [rbp+80h] BYREF
  EVENT_DESCRIPTOR v87; // [rsp+1A0h] [rbp+90h] BYREF
  _BYTE v88[80]; // [rsp+1B0h] [rbp+A0h] BYREF
  char v89[144]; // [rsp+200h] [rbp+F0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+290h] [rbp+180h] BYREF
  void *v91; // [rsp+2A0h] [rbp+190h]
  int v92; // [rsp+2A8h] [rbp+198h]
  int v93; // [rsp+2ACh] [rbp+19Ch]
  struct _EVENT_DATA_DESCRIPTOR v94; // [rsp+2B0h] [rbp+1A0h] BYREF
  void *v95; // [rsp+2C0h] [rbp+1B0h]
  int v96; // [rsp+2C8h] [rbp+1B8h]
  int v97; // [rsp+2CCh] [rbp+1BCh]
  int *v98; // [rsp+2D0h] [rbp+1C0h]
  __int64 v99; // [rsp+2D8h] [rbp+1C8h]
  unsigned __int64 *v100; // [rsp+2E0h] [rbp+1D0h]
  __int64 v101; // [rsp+2E8h] [rbp+1D8h]
  const WCHAR *v102; // [rsp+2F0h] [rbp+1E0h]
  int v103; // [rsp+2F8h] [rbp+1E8h]
  int v104; // [rsp+2FCh] [rbp+1ECh]
  unsigned int *v105; // [rsp+300h] [rbp+1F0h]
  __int64 v106; // [rsp+308h] [rbp+1F8h]
  unsigned __int64 *v107; // [rsp+310h] [rbp+200h]
  __int64 v108; // [rsp+318h] [rbp+208h]
  BOOL *v109; // [rsp+320h] [rbp+210h]
  __int64 v110; // [rsp+328h] [rbp+218h]
  int *v111; // [rsp+330h] [rbp+220h]
  __int64 v112; // [rsp+338h] [rbp+228h]
  __int64 *v113; // [rsp+340h] [rbp+230h]
  __int64 v114; // [rsp+348h] [rbp+238h]
  __int64 *v115; // [rsp+350h] [rbp+240h]
  __int64 v116; // [rsp+358h] [rbp+248h]
  unsigned __int64 *v117; // [rsp+360h] [rbp+250h]
  __int64 v118; // [rsp+368h] [rbp+258h]
  unsigned int *v119; // [rsp+370h] [rbp+260h]
  __int64 v120; // [rsp+378h] [rbp+268h]
  char *v121; // [rsp+380h] [rbp+270h]
  __int64 v122; // [rsp+388h] [rbp+278h]
  char *v123; // [rsp+390h] [rbp+280h]
  __int64 v124; // [rsp+398h] [rbp+288h]
  int *v125; // [rsp+3A0h] [rbp+290h]
  __int64 v126; // [rsp+3A8h] [rbp+298h]
  BOOL *v127; // [rsp+3B0h] [rbp+2A0h]
  __int64 v128; // [rsp+3B8h] [rbp+2A8h]
  unsigned int *v129; // [rsp+3C0h] [rbp+2B0h]
  __int64 v130; // [rsp+3C8h] [rbp+2B8h]
  struct _EVENT_DATA_DESCRIPTOR v131; // [rsp+3D0h] [rbp+2C0h] BYREF
  void *v132; // [rsp+3E0h] [rbp+2D0h]
  int v133; // [rsp+3E8h] [rbp+2D8h]
  int v134; // [rsp+3ECh] [rbp+2DCh]
  __int16 *v135; // [rsp+3F0h] [rbp+2E0h]
  __int64 v136; // [rsp+3F8h] [rbp+2E8h]
  char *v137; // [rsp+400h] [rbp+2F0h]
  __int64 v138; // [rsp+408h] [rbp+2F8h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+410h] [rbp+300h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+420h] [rbp+310h] BYREF
  int *p_MemoryRequirementEstimateFromRegistry; // [rsp+440h] [rbp+330h]
  __int64 v142; // [rsp+448h] [rbp+338h]
  unsigned __int64 *v143; // [rsp+450h] [rbp+340h]
  __int64 v144; // [rsp+458h] [rbp+348h]
  struct _EVENT_DATA_DESCRIPTOR v145; // [rsp+460h] [rbp+350h] BYREF
  unsigned int *v146; // [rsp+470h] [rbp+360h]
  __int64 v147; // [rsp+478h] [rbp+368h]
  unsigned __int64 *v148; // [rsp+480h] [rbp+370h]
  __int64 v149; // [rsp+488h] [rbp+378h]
  BOOL *v150; // [rsp+490h] [rbp+380h]
  __int64 v151; // [rsp+498h] [rbp+388h]
  int *v152; // [rsp+4A0h] [rbp+390h]
  __int64 v153; // [rsp+4A8h] [rbp+398h]
  __int64 *v154; // [rsp+4B0h] [rbp+3A0h]
  __int64 v155; // [rsp+4B8h] [rbp+3A8h]
  __int64 *v156; // [rsp+4C0h] [rbp+3B0h]
  __int64 v157; // [rsp+4C8h] [rbp+3B8h]
  unsigned __int64 *v158; // [rsp+4D0h] [rbp+3C0h]
  __int64 v159; // [rsp+4D8h] [rbp+3C8h]
  unsigned int *v160; // [rsp+4E0h] [rbp+3D0h]
  __int64 v161; // [rsp+4E8h] [rbp+3D8h]
  char *v162; // [rsp+4F0h] [rbp+3E0h]
  __int64 v163; // [rsp+4F8h] [rbp+3E8h]
  char *v164; // [rsp+500h] [rbp+3F0h]
  __int64 v165; // [rsp+508h] [rbp+3F8h]
  int *v166; // [rsp+510h] [rbp+400h]
  __int64 v167; // [rsp+518h] [rbp+408h]
  BOOL *v168; // [rsp+520h] [rbp+410h]
  __int64 v169; // [rsp+528h] [rbp+418h]
  unsigned int *v170; // [rsp+530h] [rbp+420h]
  __int64 v171; // [rsp+538h] [rbp+428h]
  _BYTE v172[464]; // [rsp+540h] [rbp+430h] BYREF

  v15 = Sid;
  v49 = a1;
  v79 = a4;
  v80 = a3;
  v75 = a14;
  if ( HampLockTrackerId == -1 || !TlsGetValue(HampLockTrackerId) )
  {
    HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v89);
    v55 = 0;
  }
  else
  {
    v55 = 1;
  }
  if ( hProvider > 4u && (qword_1800920C0 & 1) != 0 && (qword_1800920C8 & 1) == qword_1800920C8 )
  {
    *(_DWORD *)&EventDescriptor.Level = 260;
    UserData.Ptr = (ULONGLONG)off_1800920B8;
    *(_DWORD *)&EventDescriptor.Id = ((unsigned int)&unk_18007CF07 - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
    EventDescriptor.Keyword = 1LL;
    UserData.Size = *(unsigned __int16 *)off_1800920B8;
    v91 = &unk_18007CF12;
    UserData.Reserved = 2;
    v92 = 23;
    v93 = 1;
    EventWriteTransfer(qword_1800920D0, &EventDescriptor, 0LL, 0LL, 2u, &UserData);
  }
  v54 = 0;
  v17 = 0LL;
  v53 = 0LL;
  v18 = 0LL;
  v57 = 0LL;
  v74 = 0LL;
  Handle = 0LL;
  v52 = 0LL;
  v19 = a8;
  if ( a8 != 2 && a8 != 4 && a8 != 8 )
  {
    PackageFullNameFromKey = -1073741578;
    goto LABEL_98;
  }
  if ( !pwsz )
  {
    PackageFullNameFromKey = -1073741581;
    goto LABEL_98;
  }
  if ( !Sid )
    goto LABEL_97;
  if ( a9 == -1LL )
  {
    PackageFullNameFromKey = -1073741577;
    goto LABEL_98;
  }
  if ( !RtlValidSid(Sid) || RtlLengthSid(Sid) > 0x44 )
  {
LABEL_97:
    PackageFullNameFromKey = -1073741580;
    goto LABEL_98;
  }
  memset_0(v88, 0, 0x44uLL);
  v20 = RtlLengthSid(Sid);
  memcpy_0(v88, Sid, v20);
  if ( !RmpResourceSetInfoIsValid(a2) )
  {
    PackageFullNameFromKey = -1073741584;
    goto LABEL_98;
  }
  v21 = *((_WORD *)a2 + 20);
  v22 = *((_BYTE *)a2 + 42) & 7;
  if ( (v21 & 0x20) != 0 && v22 == 4 )
  {
    *((_BYTE *)a2 + 42) &= 0xF8u;
    v22 = 0;
  }
  if ( a10 && v22 )
  {
    if ( v22 != 4 )
    {
      PackageFullNameFromKey = -1073741776;
      goto LABEL_98;
    }
LABEL_104:
    if ( a11 != -1LL )
    {
      PackageFullNameFromKey = -1073741776;
      goto LABEL_98;
    }
    if ( !a10 )
    {
      PackageFullNameFromKey = -1073741776;
      goto LABEL_98;
    }
    goto LABEL_20;
  }
  if ( v22 == 4 )
    goto LABEL_104;
LABEL_20:
  v23 = *((_WORD *)a2 + 8);
  if ( (v23 & 0x200) != 0 && (*((_BYTE *)v49 + 532) & 8) == 0 || (v23 & 0x500) == 0x400 )
  {
    PackageFullNameFromKey = -1073741585;
    goto LABEL_98;
  }
  if ( a12 == -1LL )
  {
    PackageFullNameFromKey = -1073741574;
    goto LABEL_98;
  }
  if ( (v21 & 0x20) != 0 )
  {
    if ( a11 != -1LL )
    {
      PackageFullNameFromKey = -1073741776;
      goto LABEL_98;
    }
    if ( !a3 )
    {
      PackageFullNameFromKey = -1073741583;
      goto LABEL_98;
    }
  }
  v24 = (PVOID)*((_QWORD *)v49 + 279);
  P = v24;
  MemoryRequirementEstimateFromRegistry = ExecutionModel::ResourceManager::GetMemoryRequirementEstimateFromRegistry(
                                            (char ***)v24,
                                            a2,
                                            pwsz,
                                            a8,
                                            &v78);
  if ( MemoryRequirementEstimateFromRegistry >= 0 && v78 && v78 <= *((_QWORD *)a2 + 8) )
    ExecutionModel::_ResourceSetInfo::SetAmount(a2, 1LL, v78);
  if ( (a9 & 0xF000000000000000uLL) == 0x2000000000000000LL
    || !(unsigned __int8)IsNotifyGameModeExtensionRecipientsPresentPresent() )
  {
    v25 = 0;
    Handle = (HANDLE)-2LL;
    PackageFullNameFromKey = 0;
    v52 = 0LL;
    goto LABEL_31;
  }
  v59 = 464;
  PackageFullNameFromKey = PsmGetPackageFullNameFromKey(pwsz, v172, &v59);
  if ( PackageFullNameFromKey < 0 )
  {
LABEL_118:
    v25 = MemoryRequirementEstimateFromRegistry;
LABEL_31:
    if ( PackageFullNameFromKey < 0 )
      goto LABEL_98;
    goto LABEL_32;
  }
  PartitionHandlesForPackage = GetPartitionHandlesForPackage(v172, &Handle, &v52, v60);
  if ( PartitionHandlesForPackage < 0 )
  {
    PackageFullNameFromKey = PartitionHandlesForPackage & 0xEFFFFFFF;
    goto LABEL_118;
  }
  if ( (v60[0] & 1) != 0 )
    v25 = 1;
  else
    v25 = MemoryRequirementEstimateFromRegistry;
LABEL_32:
  if ( v25 )
    *((_BYTE *)a2 + 42) |= 0x80u;
  if ( v52 )
  {
    if ( v52 == (HANDLE)-2LL )
    {
      PackageFullNameFromKey = -1073741733;
      goto LABEL_98;
    }
    if ( (int)NtCompareObjects(*((_QWORD *)v49 + 48), v52) >= 0 )
    {
      PackageFullNameFromKey = -1073741733;
      goto LABEL_98;
    }
  }
  PackageFullNameFromKey = RmpPartitionTableFindOrCreatePartition(
                             (struct _RM_SERVICE_GLOBALS *)((char *)v49 + 336),
                             Handle,
                             &v74);
  if ( PackageFullNameFromKey < 0 )
    goto LABEL_98;
  v27 = HampLockTrackerId;
  v54 = 1;
  if ( HampLockTrackerId != -1 )
  {
    Value = TlsGetValue(HampLockTrackerId);
    if ( *(_QWORD *)TlsGetValue(v27) )
      __int2c();
    *Value |= 1uLL;
    ++Value[1];
    v24 = P;
  }
  RtlAcquireSRWLockExclusive(&RmpGlobalLock);
  dword_1800937F8 = GetCurrentThreadId();
  v77 = a12;
  v48 = a12;
  P = 0LL;
  RtlAcquireSRWLockShared((char *)v49 + 576);
  v29 = v77;
  v30 = 0LL;
  v31 = 37
      * (BYTE6(v48)
       + 37
       * (BYTE5(v48)
        + 37
        * (BYTE4(v48)
         + 37 * (BYTE3(v48) + 37 * (BYTE2(v48) + 37 * (BYTE1(v48) + 37 * ((unsigned __int8)v77 + 11623883LL)))))));
  LODWORD(v48) = *((_DWORD *)v49 + 141);
  v32 = v48;
  v33 = -1LL << (v48 & 0x1F);
  v34 = v33 & (HIBYTE(v48) + v31);
  v51 = v34;
LABEL_41:
  if ( v30 )
    goto LABEL_44;
  if ( v32 >> 5 )
  {
    v35 = (v32 >> 5) - 1;
    v29 = v77;
    v32 = v48;
    v30 = *((_QWORD *)v49 + 71)
        + 8LL
        * ((37
          * (BYTE6(v51)
           + 37
           * (BYTE5(v51)
            + 37
            * (BYTE4(v51)
             + 37 * (BYTE3(v51) + 37 * (BYTE2(v51) + 37 * (BYTE1(v51) + 37 * ((unsigned __int8)v34 + 11623883)))))))
          + HIBYTE(v51)) & (unsigned int)v35);
LABEL_44:
    while ( 1 )
    {
      v30 = *(_QWORD *)v30;
      if ( (v30 & 1) != 0 )
        break;
      if ( v34 == (v33 & *(_QWORD *)(v30 + 8)) )
      {
        if ( v29 != *(_QWORD *)(v30 + 32) )
          goto LABEL_41;
        if ( _InterlockedIncrement64((volatile signed __int64 *)(v30 + 16)) <= 1 )
          __fastfail(0xEu);
        v17 = v53;
        v18 = v57;
        P = (PVOID)v30;
        break;
      }
    }
  }
  RtlReleaseSRWLockShared((char *)v49 + 576);
  if ( P )
  {
    RmpObjectRelease(P);
    PackageFullNameFromKey = -1073741574;
LABEL_131:
    v19 = a8;
    goto LABEL_98;
  }
  v17 = 0LL;
  v53 = 0LL;
  if ( a11 == -1LL )
    goto LABEL_49;
  PackageFullNameFromKey = RmpResourceSetTableFindEmSetById(
                             (struct _RM_SERVICE_GLOBALS *)((char *)v49 + 560),
                             a11,
                             &v53);
  v17 = v53;
  if ( PackageFullNameFromKey == -1073741275 )
  {
    v19 = a8;
    MemoryRequirementEstimateFromRegistry = -2147220218;
LABEL_99:
    RmpReleaseGlobalLock();
    goto LABEL_56;
  }
  if ( PackageFullNameFromKey < 0 )
    goto LABEL_131;
  if ( (*((_BYTE *)v53 + 1498) & 7) == 4 )
  {
    v19 = a8;
    PackageFullNameFromKey = -1073741575;
LABEL_98:
    MemoryRequirementEstimateFromRegistry = PackageFullNameFromKey | 0x10000000;
    if ( !v54 )
      goto LABEL_56;
    goto LABEL_99;
  }
LABEL_49:
  v19 = a8;
  MemoryRequirementEstimateFromRegistry = ExecutionModel::ResourceManager::AcquireResourceSet(
                                            (ExecutionModel::ResourceManager *)v24,
                                            a2,
                                            v74,
                                            v52,
                                            v80,
                                            v79,
                                            pwsz,
                                            v88,
                                            a7,
                                            a8,
                                            a9,
                                            a10,
                                            a13,
                                            v75,
                                            v17,
                                            a12,
                                            &v57);
  if ( MemoryRequirementEstimateFromRegistry < 0 )
  {
    v18 = v57;
    goto LABEL_99;
  }
  dword_1800937F8 = 0;
  RtlReleaseSRWLockExclusive(&RmpGlobalLock);
  if ( HampLockTrackerId != -1 )
  {
    v36 = TlsGetValue(HampLockTrackerId);
    if ( (*(_BYTE *)v36 & 1) == 0 )
      __int2c();
    if ( v36[1]-- == 1LL )
      *v36 &= ~1uLL;
  }
  v18 = v57;
  MemoryRequirementEstimateFromRegistry = 0;
LABEL_56:
  if ( v17 )
    (*(void (__fastcall **)(struct ExecutionModel::ResourceSet *))(*(_QWORD *)v17 + 16LL))(v17);
  if ( v18 )
  {
    v38 = *(__int64 (__fastcall **)(ExecutionModel::ResourceSet *))(*(_QWORD *)v18 + 16LL);
    if ( v38 == ExecutionModel::ResourceSet::Release )
      ExecutionModel::ResourceSet::Release(v18);
    else
      v38(v18);
  }
  if ( (((unsigned __int64)Handle + 2) & 0xFFFFFFFFFFFFFFFDuLL) != 0 )
    NtClose(Handle);
  if ( (((unsigned __int64)v52 + 2) & 0xFFFFFFFFFFFFFFFDuLL) != 0 )
    NtClose(v52);
  if ( v74 )
    RmpPartitionRelease(v74);
  if ( hProvider )
  {
    v39 = v75;
    if ( v75 )
      v40 = *v75;
    else
      v40 = 0;
    if ( !Sid )
      v15 = (const SID *)((char *)v49 + 2092);
    if ( hProvider > 5u && (qword_1800920C0 & 1) != 0 && (qword_1800920C8 & 1) == qword_1800920C8 )
    {
      v136 = 2LL;
      v50 = 50;
      v138 = 200LL;
      v135 = &v50;
      v137 = (char *)a2 + 152;
      TlgCreateSid(&pDesc, v15);
      *(_DWORD *)&v86.Level = 5;
      v131.Ptr = (ULONGLONG)off_1800920B8;
      *(_DWORD *)&v86.Id = ((unsigned int)&unk_18007C74A - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
      v86.Keyword = 1LL;
      v131.Size = *(unsigned __int16 *)off_1800920B8;
      v132 = &unk_18007C755;
      v131.Reserved = 2;
      v133 = 68;
      v134 = 1;
      EventWriteTransfer(qword_1800920D0, &v86, 0LL, 0LL, 5u, &v131);
      v39 = v75;
    }
    if ( a11 == -1LL && (*((_BYTE *)a2 + 40) & 0x10) != 0 )
    {
      if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 9uLL) )
      {
        v142 = 4LL;
        p_MemoryRequirementEstimateFromRegistry = &MemoryRequirementEstimateFromRegistry;
        v144 = 8LL;
        v143 = &a12;
        TlgCreateWsz(&v145, pwsz);
        v61 = v19;
        v146 = &v61;
        v147 = 4LL;
        v148 = &a9;
        v62 = v40;
        v150 = &v62;
        v63 = *((_DWORD *)a2 + 2);
        v152 = &v63;
        v81 = *((_QWORD *)a2 + 14);
        v154 = &v81;
        v82 = *((_QWORD *)a2 + 17);
        v156 = &v82;
        v158 = &a11;
        v64 = a10;
        v160 = &v64;
        v162 = (char *)a2 + 42;
        v164 = (char *)a2 + 24;
        v65 = *(_DWORD *)a2;
        v166 = &v65;
        v149 = 8LL;
        v66 = v46 != 0;
        v168 = &v66;
        v67 = a7;
        v170 = &v67;
        v151 = 4LL;
        v153 = 4LL;
        v155 = 8LL;
        v157 = 8LL;
        v159 = 8LL;
        v161 = 4LL;
        v163 = 1LL;
        v165 = 8LL;
        v167 = 4LL;
        v169 = 4LL;
        v171 = 4LL;
        TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18007CFA1, 0LL, 0LL, 0x12u, &pData);
      }
    }
    else if ( hProvider > 4u
           && (qword_1800920C0 & 0x400000000009LL) != 0
           && (qword_1800920C8 & 0x400000000009LL) == qword_1800920C8 )
    {
      v99 = 4LL;
      v98 = &MemoryRequirementEstimateFromRegistry;
      v100 = &a12;
      LODWORD(v41) = 0;
      v101 = 8LL;
      v42 = &::pwsz;
      if ( pwsz )
      {
        v42 = pwsz;
        v41 = -1LL;
        do
          ++v41;
        while ( pwsz[v41] );
      }
      v102 = v42;
      v104 = 0;
      v103 = 2 * v41 + 2;
      v105 = &v68;
      v107 = &a9;
      v69 = v40;
      v109 = &v69;
      v70 = *((_DWORD *)a2 + 2);
      v111 = &v70;
      v83 = *((_QWORD *)a2 + 14);
      v113 = &v83;
      v84 = *((_QWORD *)a2 + 17);
      v115 = &v84;
      v117 = &a11;
      v71 = a10;
      v119 = &v71;
      v121 = (char *)a2 + 42;
      v123 = (char *)a2 + 24;
      v76 = *(_DWORD *)a2;
      v125 = &v76;
      v68 = v19;
      v72 = v39 != 0LL;
      v127 = &v72;
      v73 = a7;
      v129 = &v73;
      v106 = 4LL;
      v108 = 8LL;
      v110 = 4LL;
      v112 = 4LL;
      v114 = 8LL;
      v116 = 8LL;
      v118 = 8LL;
      v120 = 4LL;
      v122 = 1LL;
      v124 = 8LL;
      v126 = 4LL;
      v128 = 4LL;
      v130 = 4LL;
      *(_DWORD *)&v87.Level = 516;
      v94.Ptr = (ULONGLONG)off_1800920B8;
      *(_DWORD *)&v87.Id = ((unsigned int)&unk_18007C79A - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
      v87.Keyword = 0x400000000009LL;
      v94.Size = *(unsigned __int16 *)off_1800920B8;
      v95 = &unk_18007C7A5;
      v94.Reserved = 2;
      v96 = 262;
      v97 = 1;
      EventWriteTransfer(qword_1800920D0, &v87, 0LL, 0LL, 0x12u, &v94);
    }
  }
  if ( !v55 )
  {
    v44 = HampLockTrackerId;
    if ( HampLockTrackerId != -1 )
    {
      if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
        __int2c();
      TlsSetValue(v44, 0LL);
    }
  }
  return (unsigned int)MemoryRequirementEstimateFromRegistry;
}
