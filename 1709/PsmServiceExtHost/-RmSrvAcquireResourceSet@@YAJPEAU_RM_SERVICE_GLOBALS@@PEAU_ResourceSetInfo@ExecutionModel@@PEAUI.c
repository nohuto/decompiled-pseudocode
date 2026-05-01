/*
 * XREFs of ?RmSrvAcquireResourceSet@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_ResourceSetInfo@ExecutionModel@@PEAUIResourceSetCallback@3@PEAXPEBG3KK_KK55PEAU_RM_ACTIVATOR@@PEA_N@Z @ 0x180012BB0
 * Callers:
 *     ?AcquireResourceSet@RmpRpExtResourceSetThunk@@SAJPEAU_RM_SERVICE_GLOBALS@@PEAU_ResourceSetInfo@ExecutionModel@@PEAUIResourceSetCallback@4@PEAXPEBG3KK_KKPEAUIResourceSet@4@PEA_NPEAPEAU64@@Z @ 0x1800160C8 (-AcquireResourceSet@RmpRpExtResourceSetThunk@@SAJPEAU_RM_SERVICE_GLOBALS@@PEAU_ResourceSetInfo@E.c)
 *     RmCoreRpcSrvAcquireResourceSet @ 0x18001ADA0 (RmCoreRpcSrvAcquireResourceSet.c)
 *     ?Handle_RM_AcquireResourceSet@ResourceManagerServerProxy@@QEAAJPEAXPEAURmResourceSetInfo@@EPEBGPEAEKKK_KKPEAH4PEA_K@Z @ 0x180030928 (-Handle_RM_AcquireResourceSet@ResourceManagerServerProxy@@QEAAJPEAXPEAURmResourceSetInfo@@EPEBGP.c)
 *     ?HampRmContextAcquireResourceSet@@YAJPEAVHAM_ACTIVITY_RM_CONTEXT@@W4_HAM_ACTIVITY_RESOURCE_SET_TYPE@@@Z @ 0x180045834 (-HampRmContextAcquireResourceSet@@YAJPEAVHAM_ACTIVITY_RM_CONTEXT@@W4_HAM_ACTIVITY_RESOURCE_SET_T.c)
 * Callees:
 *     ?SetAmount@_ResourceSetInfo@ExecutionModel@@QEAAJW4Enum@ResourceType@2@_K@Z @ 0x180001F40 (-SetAmount@_ResourceSetInfo@ExecutionModel@@QEAAJW4Enum@ResourceType@2@_K@Z.c)
 *     ?AcquireResourceSet@ResourceManager@ExecutionModel@@QEAAJPEBU_ResourceSetInfo@2@PEAU_RM_PARTITION@@PEAXPEAUIResourceSetCallback@2@2PEBGPEAT_RM_SID@@KK_KKPEAU_RM_ACTIVATOR@@PEA_NPEAVResourceSet@2@6PEAPEAV82@@Z @ 0x18000F210 (-AcquireResourceSet@ResourceManager@ExecutionModel@@QEAAJPEBU_ResourceSetInfo@2@PEAU_RM_PARTITIO.c)
 *     ?GetMemoryRequirementEstimateFromRegistry@ResourceManager@ExecutionModel@@QEBAJPEAU_ResourceSetInfo@2@PEBGKPEA_K@Z @ 0x18000F7C8 (-GetMemoryRequirementEstimateFromRegistry@ResourceManager@ExecutionModel@@QEBAJPEAU_ResourceSetI.c)
 *     ?RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x18000F900 (-RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     ?GetAmount@_ResourceSetInfo@ExecutionModel@@QEBA_KW4Enum@ResourceType@2@@Z @ 0x1800101AC (-GetAmount@_ResourceSetInfo@ExecutionModel@@QEBA_KW4Enum@ResourceType@2@@Z.c)
 *     ?Release@ResourceSet@ExecutionModel@@UEAAKXZ @ 0x1800113A0 (-Release@ResourceSet@ExecutionModel@@UEAAKXZ.c)
 *     ?RmpResourceSetTableFindEmSetById@@YAJPEAU_RM_OBJECT_TABLE@@_KPEAPEAVResourceSet@ExecutionModel@@@Z @ 0x180013940 (-RmpResourceSetTableFindEmSetById@@YAJPEAU_RM_OBJECT_TABLE@@_KPEAPEAVResourceSet@ExecutionModel@.c)
 *     _TlgKeywordOn @ 0x180013B38 (_TlgKeywordOn.c)
 *     ?RmpPartitionRelease@@YAXPEAU_RM_PARTITION@@@Z @ 0x180014AD0 (-RmpPartitionRelease@@YAXPEAU_RM_PARTITION@@@Z.c)
 *     ?RmpPartitionTableFindOrCreatePartition@@YAJPEAU_RM_PARTITION_TABLE@@PEAXPEAPEAU_RM_PARTITION@@@Z @ 0x180014B10 (-RmpPartitionTableFindOrCreatePartition@@YAJPEAU_RM_PARTITION_TABLE@@PEAXPEAPEAU_RM_PARTITION@@@.c)
 *     ?RmpResourceSetInfoIsValid@@YAKPEBU_ResourceSetInfo@ExecutionModel@@@Z @ 0x180014E40 (-RmpResourceSetInfoIsValid@@YAKPEBU_ResourceSetInfo@ExecutionModel@@@Z.c)
 *     ?RmpValidateAndCaptureUserSid@@YAJPEAXKKPEAT_RM_SID@@PEAPEAT1@@Z @ 0x180014EE0 (-RmpValidateAndCaptureUserSid@@YAJPEAXKKPEAT_RM_SID@@PEAPEAT1@@Z.c)
 *     ?RmpObjectAddRef@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x18001549C (-RmpObjectAddRef@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     _TlgCreateWsz @ 0x180015DB4 (_TlgCreateWsz.c)
 *     _TlgWrite @ 0x1800176F0 (_TlgWrite.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x180017E50 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     __security_check_cookie @ 0x180025FE0 (__security_check_cookie.c)
 *     IsNotifyGameModeExtensionRecipientsPresentPresent @ 0x18002695C (IsNotifyGameModeExtensionRecipientsPresentPresent.c)
 *     memset_0 @ 0x180026AAB (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x180026AD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall RmSrvAcquireResourceSet(
        struct _RM_SERVICE_GLOBALS *a1,
        struct ExecutionModel::_ResourceSetInfo *a2,
        struct ExecutionModel::IResourceSetCallback *a3,
        void *a4,
        wchar_t *pwsz,
        _BYTE *Src,
        unsigned int a7,
        unsigned int a8,
        unsigned __int64 a9,
        unsigned int a10,
        unsigned __int64 a11,
        struct ExecutionModel::ResourceSet *a12,
        struct _RM_ACTIVATOR *a13,
        bool *a14)
{
  _BYTE *v15; // r13
  DWORD v16; // edi
  int v17; // r14d
  struct ExecutionModel::ResourceSet *v18; // r12
  ExecutionModel::ResourceSet *v19; // r15
  unsigned int v20; // edi
  int v21; // ecx
  int v22; // eax
  int v23; // ecx
  signed int PackageFullNameFromKey; // eax
  DWORD v25; // r14d
  _BYTE *Value; // rdi
  struct ExecutionModel::ResourceSet *v27; // r8
  __int64 v28; // rdi
  unsigned int v29; // edx
  __int64 v30; // r11
  __int64 v31; // r10
  unsigned int v32; // r9d
  _BYTE *v33; // rax
  __int64 (__fastcall *v35)(ExecutionModel::ResourceSet *); // rax
  bool v36; // r14
  int v37; // eax
  __int64 v38; // rax
  const WCHAR *v39; // rcx
  __int64 v40; // rcx
  __int64 v41; // r10
  ULONGLONG v42; // r8
  ULONG v43; // edx
  DWORD v44; // ebx
  __int64 (__fastcall *v46)(ExecutionModel::ResourceSet *); // rax
  __int64 v47; // rcx
  __int64 v48; // r10
  LPCGUID v49; // r8
  LPCGUID v50; // r9
  int PartitionHandlesForPackage; // eax
  int MemoryRequirementEstimateFromRegistry; // [rsp+90h] [rbp-80h] BYREF
  struct ExecutionModel::ResourceSet *v53; // [rsp+98h] [rbp-78h] BYREF
  int v54; // [rsp+A0h] [rbp-70h] BYREF
  struct _RM_SERVICE_GLOBALS *v55; // [rsp+A8h] [rbp-68h]
  unsigned int v56; // [rsp+B0h] [rbp-60h] BYREF
  struct ExecutionModel::ResourceSet *v57; // [rsp+B8h] [rbp-58h] BYREF
  HANDLE v58; // [rsp+C0h] [rbp-50h] BYREF
  int v59; // [rsp+C8h] [rbp-48h]
  PVOID P; // [rsp+D0h] [rbp-40h] BYREF
  HANDLE Handle; // [rsp+D8h] [rbp-38h] BYREF
  union _RM_SID *v62; // [rsp+E0h] [rbp-30h] BYREF
  int v63; // [rsp+E8h] [rbp-28h] BYREF
  BOOL v64; // [rsp+ECh] [rbp-24h] BYREF
  int v65; // [rsp+F0h] [rbp-20h] BYREF
  unsigned int v66; // [rsp+F4h] [rbp-1Ch] BYREF
  int v67; // [rsp+F8h] [rbp-18h] BYREF
  BOOL v68; // [rsp+FCh] [rbp-14h] BYREF
  unsigned int v69; // [rsp+100h] [rbp-10h] BYREF
  unsigned int v70; // [rsp+104h] [rbp-Ch] BYREF
  BOOL v71; // [rsp+108h] [rbp-8h] BYREF
  int v72; // [rsp+10Ch] [rbp-4h] BYREF
  ExecutionModel::ResourceManager *v73; // [rsp+110h] [rbp+0h] BYREF
  unsigned int v74; // [rsp+118h] [rbp+8h] BYREF
  struct ExecutionModel::ResourceSet *v75; // [rsp+120h] [rbp+10h] BYREF
  struct _RM_PARTITION *v76; // [rsp+128h] [rbp+18h] BYREF
  bool *v77; // [rsp+130h] [rbp+20h]
  struct ExecutionModel::IResourceSetCallback *v78; // [rsp+138h] [rbp+28h]
  unsigned __int64 v79; // [rsp+140h] [rbp+30h] BYREF
  void *v80; // [rsp+148h] [rbp+38h]
  __int64 Amount; // [rsp+150h] [rbp+40h] BYREF
  __int64 v82; // [rsp+158h] [rbp+48h] BYREF
  __int64 v83; // [rsp+160h] [rbp+50h] BYREF
  __int64 v84; // [rsp+168h] [rbp+58h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+170h] [rbp+60h] BYREF
  EVENT_DESCRIPTOR v86; // [rsp+180h] [rbp+70h] BYREF
  EVENT_DESCRIPTOR v87; // [rsp+190h] [rbp+80h] BYREF
  union _RM_SID *v88; // [rsp+1A0h] [rbp+90h] BYREF
  _BYTE v89[80]; // [rsp+1B0h] [rbp+A0h] BYREF
  _BYTE TlsValue[80]; // [rsp+200h] [rbp+F0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+250h] [rbp+140h] BYREF
  void *v92; // [rsp+260h] [rbp+150h]
  int v93; // [rsp+268h] [rbp+158h]
  int v94; // [rsp+26Ch] [rbp+15Ch]
  struct _EVENT_DATA_DESCRIPTOR v95; // [rsp+270h] [rbp+160h] BYREF
  void *v96; // [rsp+280h] [rbp+170h]
  int v97; // [rsp+288h] [rbp+178h]
  int v98; // [rsp+28Ch] [rbp+17Ch]
  int *v99; // [rsp+290h] [rbp+180h]
  __int64 v100; // [rsp+298h] [rbp+188h]
  char *v101; // [rsp+2A0h] [rbp+190h]
  __int64 v102; // [rsp+2A8h] [rbp+198h]
  _BYTE *v103; // [rsp+2B0h] [rbp+1A0h]
  int v104; // [rsp+2B8h] [rbp+1A8h]
  int v105; // [rsp+2BCh] [rbp+1ACh]
  struct _EVENT_DATA_DESCRIPTOR v106; // [rsp+2C0h] [rbp+1B0h] BYREF
  void *v107; // [rsp+2D0h] [rbp+1C0h]
  int v108; // [rsp+2D8h] [rbp+1C8h]
  int v109; // [rsp+2DCh] [rbp+1CCh]
  int *v110; // [rsp+2E0h] [rbp+1D0h]
  __int64 v111; // [rsp+2E8h] [rbp+1D8h]
  struct ExecutionModel::ResourceSet **v112; // [rsp+2F0h] [rbp+1E0h]
  __int64 v113; // [rsp+2F8h] [rbp+1E8h]
  const WCHAR *v114; // [rsp+300h] [rbp+1F0h]
  int v115; // [rsp+308h] [rbp+1F8h]
  int v116; // [rsp+30Ch] [rbp+1FCh]
  unsigned int *v117; // [rsp+310h] [rbp+200h]
  __int64 v118; // [rsp+318h] [rbp+208h]
  unsigned __int64 *v119; // [rsp+320h] [rbp+210h]
  __int64 v120; // [rsp+328h] [rbp+218h]
  BOOL *v121; // [rsp+330h] [rbp+220h]
  __int64 v122; // [rsp+338h] [rbp+228h]
  int *v123; // [rsp+340h] [rbp+230h]
  __int64 v124; // [rsp+348h] [rbp+238h]
  __int64 *v125; // [rsp+350h] [rbp+240h]
  __int64 v126; // [rsp+358h] [rbp+248h]
  __int64 *v127; // [rsp+360h] [rbp+250h]
  __int64 v128; // [rsp+368h] [rbp+258h]
  unsigned __int64 *v129; // [rsp+370h] [rbp+260h]
  __int64 v130; // [rsp+378h] [rbp+268h]
  ExecutionModel::ResourceManager **v131; // [rsp+380h] [rbp+270h]
  __int64 v132; // [rsp+388h] [rbp+278h]
  char *v133; // [rsp+390h] [rbp+280h]
  __int64 v134; // [rsp+398h] [rbp+288h]
  char *v135; // [rsp+3A0h] [rbp+290h]
  __int64 v136; // [rsp+3A8h] [rbp+298h]
  union _RM_SID **v137; // [rsp+3B0h] [rbp+2A0h]
  __int64 v138; // [rsp+3B8h] [rbp+2A8h]
  PVOID *p_P; // [rsp+3C0h] [rbp+2B0h]
  __int64 v140; // [rsp+3C8h] [rbp+2B8h]
  struct ExecutionModel::ResourceSet **v141; // [rsp+3D0h] [rbp+2C0h]
  __int64 v142; // [rsp+3D8h] [rbp+2C8h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+3E0h] [rbp+2D0h] BYREF
  int *p_MemoryRequirementEstimateFromRegistry; // [rsp+400h] [rbp+2F0h]
  __int64 v145; // [rsp+408h] [rbp+2F8h]
  struct ExecutionModel::ResourceSet **v146; // [rsp+410h] [rbp+300h]
  __int64 v147; // [rsp+418h] [rbp+308h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+420h] [rbp+310h] BYREF
  unsigned int *v149; // [rsp+430h] [rbp+320h]
  __int64 v150; // [rsp+438h] [rbp+328h]
  unsigned __int64 *v151; // [rsp+440h] [rbp+330h]
  __int64 v152; // [rsp+448h] [rbp+338h]
  BOOL *v153; // [rsp+450h] [rbp+340h]
  __int64 v154; // [rsp+458h] [rbp+348h]
  int *v155; // [rsp+460h] [rbp+350h]
  __int64 v156; // [rsp+468h] [rbp+358h]
  __int64 *p_Amount; // [rsp+470h] [rbp+360h]
  __int64 v158; // [rsp+478h] [rbp+368h]
  __int64 *v159; // [rsp+480h] [rbp+370h]
  __int64 v160; // [rsp+488h] [rbp+378h]
  unsigned __int64 *v161; // [rsp+490h] [rbp+380h]
  __int64 v162; // [rsp+498h] [rbp+388h]
  unsigned int *v163; // [rsp+4A0h] [rbp+390h]
  __int64 v164; // [rsp+4A8h] [rbp+398h]
  char *v165; // [rsp+4B0h] [rbp+3A0h]
  __int64 v166; // [rsp+4B8h] [rbp+3A8h]
  char *v167; // [rsp+4C0h] [rbp+3B0h]
  __int64 v168; // [rsp+4C8h] [rbp+3B8h]
  int *v169; // [rsp+4D0h] [rbp+3C0h]
  __int64 v170; // [rsp+4D8h] [rbp+3C8h]
  BOOL *v171; // [rsp+4E0h] [rbp+3D0h]
  __int64 v172; // [rsp+4E8h] [rbp+3D8h]
  unsigned int *v173; // [rsp+4F0h] [rbp+3E0h]
  __int64 v174; // [rsp+4F8h] [rbp+3E8h]
  _BYTE v175[464]; // [rsp+500h] [rbp+3F0h] BYREF

  v15 = Src;
  v55 = a1;
  v80 = a4;
  v78 = a3;
  v77 = a14;
  if ( HampLockTrackerId != -1 && TlsGetValue(HampLockTrackerId) )
  {
    v59 = 0;
  }
  else
  {
    memset_0(TlsValue, 0, 0x48uLL);
    v16 = HampLockTrackerId;
    if ( HampLockTrackerId != -1 )
    {
      TlsGetValue(HampLockTrackerId);
      TlsSetValue(v16, TlsValue);
    }
    v59 = 1;
  }
  if ( hProvider > 4u && (qword_1800670D0 & 1) != 0 && (qword_1800670D8 & 1) == qword_1800670D8 )
  {
    *(_DWORD *)&EventDescriptor.Level = 260;
    UserData.Ptr = (ULONGLONG)off_1800670C8;
    *(_DWORD *)&EventDescriptor.Id = ((unsigned int)&unk_1800568D5 - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
    EventDescriptor.Keyword = 1LL;
    UserData.Size = *(unsigned __int16 *)off_1800670C8;
    v92 = &unk_1800568E0;
    UserData.Reserved = 2;
    v93 = 23;
    v94 = 1;
    EventWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, 2u, &UserData);
  }
  v17 = 0;
  v75 = 0LL;
  v18 = 0LL;
  v76 = 0LL;
  v19 = 0LL;
  Handle = 0LL;
  v58 = 0LL;
  v20 = a8;
  if ( a8 == 2 )
  {
LABEL_11:
    if ( !pwsz )
    {
      PackageFullNameFromKey = -1073741581;
      goto LABEL_155;
    }
    if ( Src )
    {
      if ( a9 == -1LL )
      {
        PackageFullNameFromKey = -1073741577;
        goto LABEL_155;
      }
      if ( (int)RmpValidateAndCaptureUserSid(Src, a7, a8, (union _RM_SID *)v89, &v88) >= 0 )
      {
        v62 = (union _RM_SID *)v89;
        goto LABEL_16;
      }
    }
LABEL_154:
    PackageFullNameFromKey = -1073741580;
LABEL_155:
    MemoryRequirementEstimateFromRegistry = PackageFullNameFromKey | 0x10000000;
    if ( !v17 )
      goto LABEL_55;
    goto LABEL_156;
  }
  if ( a8 )
  {
    if ( a8 != 4 && a8 != 8 )
    {
      PackageFullNameFromKey = -1073741578;
      goto LABEL_155;
    }
    goto LABEL_11;
  }
  if ( Src )
    goto LABEL_154;
  if ( a7 )
  {
    PackageFullNameFromKey = -1073741579;
    goto LABEL_155;
  }
  if ( a9 != -1LL )
  {
    PackageFullNameFromKey = -1073741578;
    goto LABEL_155;
  }
  v62 = 0LL;
LABEL_16:
  if ( !RmpResourceSetInfoIsValid(a2) )
  {
    PackageFullNameFromKey = -1073741584;
    goto LABEL_155;
  }
  v21 = *((_BYTE *)a2 + 42) & 7;
  if ( !a10 )
  {
    if ( (unsigned int)(v21 - 2) <= 2 && !a8 )
    {
      PackageFullNameFromKey = -1073741776;
      goto LABEL_155;
    }
    if ( v21 != 4 )
      goto LABEL_20;
LABEL_122:
    if ( a11 != -1LL )
    {
      PackageFullNameFromKey = -1073741776;
      goto LABEL_155;
    }
    if ( !a10 )
    {
      PackageFullNameFromKey = -1073741776;
      goto LABEL_155;
    }
    if ( !a8 )
    {
      PackageFullNameFromKey = -1073741776;
      goto LABEL_155;
    }
    goto LABEL_20;
  }
  if ( (*((_BYTE *)a2 + 42) & 7) != 0 )
  {
    if ( v21 != 4 )
    {
      PackageFullNameFromKey = -1073741776;
      goto LABEL_155;
    }
    goto LABEL_122;
  }
LABEL_20:
  v22 = *((_DWORD *)a2 + 4);
  if ( (v22 & 0x200) != 0 && (*((_BYTE *)v55 + 508) & 0x10) == 0 || (v22 & 0x500) == 0x400 )
  {
    PackageFullNameFromKey = -1073741585;
    goto LABEL_155;
  }
  if ( a12 == (struct ExecutionModel::ResourceSet *)-1LL )
  {
    PackageFullNameFromKey = -1073741574;
    goto LABEL_155;
  }
  if ( (*((_BYTE *)a2 + 40) & 0x20) != 0 )
  {
    if ( a11 != -1LL )
    {
      PackageFullNameFromKey = -1073741776;
      goto LABEL_155;
    }
    if ( !v78 )
    {
      PackageFullNameFromKey = -1073741583;
      goto LABEL_155;
    }
  }
  v73 = (ExecutionModel::ResourceManager *)*((_QWORD *)v55 + 237);
  MemoryRequirementEstimateFromRegistry = ExecutionModel::ResourceManager::GetMemoryRequirementEstimateFromRegistry(
                                            v73,
                                            a2,
                                            pwsz,
                                            a8,
                                            &v79);
  if ( MemoryRequirementEstimateFromRegistry >= 0 && v79 && v79 <= *((_QWORD *)a2 + 9) )
    ExecutionModel::_ResourceSetInfo::SetAmount((__int64)a2, 1, v79);
  if ( (a9 & 0xF000000000000000uLL) == 0x2000000000000000LL
    || !(unsigned __int8)IsNotifyGameModeExtensionRecipientsPresentPresent() )
  {
    v23 = 0;
    Handle = (HANDLE)-2LL;
    PackageFullNameFromKey = 0;
    v58 = 0LL;
    goto LABEL_29;
  }
  v63 = 464;
  PackageFullNameFromKey = PsmGetPackageFullNameFromKey(pwsz, v175, &v63);
  if ( PackageFullNameFromKey < 0 )
  {
LABEL_140:
    v23 = MemoryRequirementEstimateFromRegistry;
LABEL_29:
    if ( PackageFullNameFromKey < 0 )
      goto LABEL_155;
    goto LABEL_30;
  }
  PartitionHandlesForPackage = GetPartitionHandlesForPackage(v175, &Handle, &v58, &v56);
  if ( PartitionHandlesForPackage < 0 )
  {
    PackageFullNameFromKey = PartitionHandlesForPackage & 0xEFFFFFFF;
    goto LABEL_140;
  }
  if ( (v56 & 1) != 0 )
    v23 = 1;
  else
    v23 = MemoryRequirementEstimateFromRegistry;
LABEL_30:
  if ( v23 )
    *((_BYTE *)a2 + 42) |= 0x80u;
  if ( v58 )
  {
    if ( v58 == (HANDLE)-2LL )
    {
      PackageFullNameFromKey = -1073741733;
      goto LABEL_155;
    }
    if ( (int)NtCompareObjects(*((_QWORD *)v55 + 45), v58) >= 0 )
    {
      PackageFullNameFromKey = -1073741733;
      goto LABEL_155;
    }
  }
  PackageFullNameFromKey = RmpPartitionTableFindOrCreatePartition(
                             (struct _RM_SERVICE_GLOBALS *)((char *)v55 + 312),
                             Handle,
                             &v76);
  if ( PackageFullNameFromKey < 0 )
    goto LABEL_155;
  v25 = HampLockTrackerId;
  v54 = 1;
  if ( HampLockTrackerId != -1 )
  {
    Value = TlsGetValue(HampLockTrackerId);
    if ( *(_QWORD *)TlsGetValue(v25) )
      __int2c();
    *(_QWORD *)Value |= 1uLL;
    ++Value[8];
  }
  RtlAcquireSRWLockExclusive(&RmpGlobalLock);
  dword_1800681D0 = GetCurrentThreadId();
  v57 = a12;
  v53 = a12;
  P = 0LL;
  RtlAcquireSRWLockShared((char *)v55 + 552);
  v27 = v57;
  v28 = 0LL;
  v56 = *((_DWORD *)v55 + 135);
  v29 = v56;
  v30 = -1LL << (v56 & 0x1F);
  v31 = v30 & (HIBYTE(v53)
             + 37
             * (BYTE6(v53)
              + 37
              * (BYTE5(v53)
               + 37
               * (BYTE4(v53)
                + 37 * (BYTE3(v53) + 37 * (BYTE2(v53) + 37 * (BYTE1(v53) + 37 * ((unsigned __int8)v57 + 11623883LL))))))));
  v53 = (struct ExecutionModel::ResourceSet *)v31;
LABEL_39:
  if ( v28 )
    goto LABEL_42;
  v32 = v29 >> 5;
  if ( v29 >> 5 )
  {
    v29 = v56;
    v27 = v57;
    v28 = *((_QWORD *)v55 + 68)
        + 8LL
        * ((37
          * (BYTE6(v53)
           + 37
           * (BYTE5(v53)
            + 37
            * (BYTE4(v53)
             + 37 * (BYTE3(v53) + 37 * (BYTE2(v53) + 37 * (BYTE1(v53) + 37 * ((unsigned __int8)v31 + 11623883)))))))
          + HIBYTE(v53)) & (v32 - 1));
LABEL_42:
    while ( 1 )
    {
      v28 = *(_QWORD *)v28;
      if ( (v28 & 1) != 0 )
        break;
      if ( v31 == (v30 & *(_QWORD *)(v28 + 8)) )
      {
        if ( v27 != *(struct ExecutionModel::ResourceSet **)(v28 + 24) )
          goto LABEL_39;
        RmpObjectAddRef((struct _RM_OBJECT_HEADER *)v28);
        goto LABEL_46;
      }
    }
  }
  v28 = (__int64)P;
LABEL_46:
  RtlReleaseSRWLockShared((char *)v55 + 552);
  if ( v28 )
  {
    RmpObjectRelease((char *)v28);
    PackageFullNameFromKey = -1073741574;
LABEL_151:
    v20 = a8;
    v17 = v54;
    goto LABEL_155;
  }
  v57 = 0LL;
  v18 = 0LL;
  if ( a11 == -1LL )
    goto LABEL_48;
  PackageFullNameFromKey = RmpResourceSetTableFindEmSetById(
                             (struct _RM_SERVICE_GLOBALS *)((char *)v55 + 536),
                             a11,
                             &v57);
  v18 = v57;
  if ( PackageFullNameFromKey == -1073741275 )
  {
    v20 = a8;
    MemoryRequirementEstimateFromRegistry = -2147220218;
LABEL_156:
    RmpReleaseGlobalLock();
    goto LABEL_55;
  }
  if ( PackageFullNameFromKey < 0 )
    goto LABEL_151;
  if ( (*((_BYTE *)v57 + 1498) & 7) == 4 )
  {
    v20 = a8;
    PackageFullNameFromKey = -1073741575;
    v17 = v54;
    goto LABEL_155;
  }
LABEL_48:
  v20 = a8;
  MemoryRequirementEstimateFromRegistry = ExecutionModel::ResourceManager::AcquireResourceSet(
                                            v73,
                                            a2,
                                            v76,
                                            v58,
                                            v78,
                                            v80,
                                            pwsz,
                                            v62,
                                            a7,
                                            a8,
                                            a9,
                                            a10,
                                            a13,
                                            v77,
                                            v18,
                                            (unsigned __int64)a12,
                                            &v75);
  if ( MemoryRequirementEstimateFromRegistry < 0 )
  {
    v19 = v75;
    goto LABEL_156;
  }
  dword_1800681D0 = 0;
  RtlReleaseSRWLockExclusive(&RmpGlobalLock);
  if ( HampLockTrackerId != -1 )
  {
    v33 = TlsGetValue(HampLockTrackerId);
    if ( (*v33 & 1) == 0 )
      __int2c();
    if ( v33[8]-- == 1 )
      *(_QWORD *)v33 &= ~1uLL;
  }
  v19 = v75;
  MemoryRequirementEstimateFromRegistry = 0;
LABEL_55:
  if ( v18 )
  {
    v46 = *(__int64 (__fastcall **)(ExecutionModel::ResourceSet *))(*(_QWORD *)v18 + 16LL);
    if ( v46 == ExecutionModel::ResourceSet::Release )
      ExecutionModel::ResourceSet::Release(v18);
    else
      v46(v18);
  }
  if ( v19 )
  {
    v35 = *(__int64 (__fastcall **)(ExecutionModel::ResourceSet *))(*(_QWORD *)v19 + 16LL);
    if ( v35 == ExecutionModel::ResourceSet::Release )
      ExecutionModel::ResourceSet::Release(v19);
    else
      v35(v19);
  }
  if ( (((unsigned __int64)Handle + 2) & 0xFFFFFFFFFFFFFFFDuLL) != 0 )
    NtClose(Handle);
  if ( (((unsigned __int64)v58 + 2) & 0xFFFFFFFFFFFFFFFDuLL) != 0 )
    NtClose(v58);
  if ( v76 )
    RmpPartitionRelease(v76);
  if ( hProvider )
  {
    if ( v77 )
      v36 = *v77;
    else
      v36 = 0;
    if ( !Src )
      v15 = (char *)v55 + 1756;
    if ( hProvider > 5u && (qword_1800670D0 & 1) != 0 && (qword_1800670D8 & 1) == qword_1800670D8 )
    {
      v100 = 2LL;
      LOWORD(v54) = 50;
      v99 = &v54;
      v101 = (char *)a2 + 160;
      LOBYTE(v37) = v15[1];
      v102 = 200LL;
      if ( (unsigned __int8)v37 > 0xFu )
        v37 = 15;
      else
        v37 = (unsigned __int8)v37;
      v103 = v15;
      v104 = 4 * v37 + 8;
      v105 = 0;
      *(_DWORD *)&v86.Level = 5;
      v95.Ptr = (ULONGLONG)off_1800670C8;
      *(_DWORD *)&v86.Id = ((unsigned int)&unk_180056CFA - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
      v86.Keyword = 1LL;
      v95.Size = *(unsigned __int16 *)off_1800670C8;
      v96 = &unk_180056D05;
      v95.Reserved = 2;
      v97 = 68;
      v98 = 1;
      EventWriteTransfer(RegHandle, &v86, 0LL, 0LL, 5u, &v95);
    }
    if ( a11 == -1LL && (*((_BYTE *)a2 + 40) & 0x10) != 0 )
    {
      if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 9uLL) )
      {
        v145 = 4LL;
        p_MemoryRequirementEstimateFromRegistry = &MemoryRequirementEstimateFromRegistry;
        v147 = 8LL;
        v146 = &a12;
        TlgCreateWsz(&pDesc, pwsz);
        v74 = v20;
        v149 = &v74;
        v150 = 4LL;
        v151 = &a9;
        v64 = v36;
        v153 = &v64;
        v65 = *((_DWORD *)a2 + 2);
        v155 = &v65;
        v152 = 8LL;
        v154 = 4LL;
        v156 = 4LL;
        Amount = ExecutionModel::_ResourceSetInfo::GetAmount((__int64)a2, 1);
        v158 = 8LL;
        p_Amount = &Amount;
        v82 = ExecutionModel::_ResourceSetInfo::GetAmount(v47, 2);
        v160 = 8LL;
        v159 = &v82;
        v161 = &a11;
        v66 = a10;
        v163 = &v66;
        v165 = (char *)a2 + 42;
        v167 = (char *)a2 + 24;
        v67 = *(_DWORD *)a2;
        v169 = &v67;
        v162 = 8LL;
        v68 = v48 != 0;
        v171 = &v68;
        v69 = a7;
        v173 = &v69;
        v164 = 4LL;
        v166 = 1LL;
        v168 = 8LL;
        v170 = 4LL;
        v172 = 4LL;
        v174 = 4LL;
        TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1800568F8, v49, v50, 0x12u, &pData);
      }
    }
    else if ( hProvider > 4u
           && (qword_1800670D0 & 0x400000000009LL) != 0
           && (qword_1800670D8 & 0x400000000009LL) == qword_1800670D8 )
    {
      v111 = 4LL;
      v110 = &MemoryRequirementEstimateFromRegistry;
      v112 = &a12;
      LODWORD(v38) = 0;
      v113 = 8LL;
      v39 = &::pwsz;
      if ( pwsz )
      {
        v39 = pwsz;
        v38 = -1LL;
        do
          ++v38;
        while ( pwsz[v38] );
      }
      v114 = v39;
      v116 = 0;
      v115 = 2 * v38 + 2;
      v117 = &v70;
      v70 = v20;
      v119 = &a9;
      v71 = v36;
      v121 = &v71;
      v72 = *((_DWORD *)a2 + 2);
      v123 = &v72;
      v118 = 4LL;
      v120 = 8LL;
      v122 = 4LL;
      v124 = 4LL;
      v83 = ExecutionModel::_ResourceSetInfo::GetAmount((__int64)a2, 1);
      v126 = 8LL;
      v125 = &v83;
      v84 = ExecutionModel::_ResourceSetInfo::GetAmount(v40, 2);
      v128 = 8LL;
      v127 = &v84;
      v129 = &a11;
      LODWORD(v73) = a10;
      v131 = &v73;
      v133 = (char *)a2 + 42;
      v135 = (char *)a2 + 24;
      LODWORD(v62) = *(_DWORD *)a2;
      v137 = &v62;
      v130 = 8LL;
      LODWORD(P) = v41 != 0;
      p_P = &P;
      LODWORD(v53) = a7;
      v141 = &v53;
      v132 = 4LL;
      v134 = 1LL;
      v136 = 8LL;
      v138 = 4LL;
      v140 = 4LL;
      v142 = 4LL;
      *(_DWORD *)&v87.Level = 516;
      v106.Ptr = (ULONGLONG)off_1800670C8;
      *(_DWORD *)&v87.Id = ((unsigned int)&unk_180056B0F - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
      v87.Keyword = v42;
      v106.Size = *(unsigned __int16 *)off_1800670C8;
      v107 = &unk_180056B1A;
      v106.Reserved = v43;
      v108 = 262;
      v109 = 1;
      EventWriteTransfer(RegHandle, &v87, 0LL, 0LL, 0x12u, &v106);
    }
  }
  if ( v59 )
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
