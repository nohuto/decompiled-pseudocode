/*
 * XREFs of IopParseDevice @ 0x1405B17F0
 * Callers:
 *     IopParseFile @ 0x140560200 (IopParseFile.c)
 * Callees:
 *     CmSiFreeMemory @ 0x140002440 (CmSiFreeMemory.c)
 *     IopVerifierExAllocatePool @ 0x140007BA0 (IopVerifierExAllocatePool.c)
 *     ObfReferenceObjectWithTag @ 0x140060520 (ObfReferenceObjectWithTag.c)
 *     IopDeleteFileObjectExtension @ 0x140062248 (IopDeleteFileObjectExtension.c)
 *     IopSymlinkGetMostRecentlyUsedName @ 0x140063334 (IopSymlinkGetMostRecentlyUsedName.c)
 *     IopGetDevicePDO @ 0x140065174 (IopGetDevicePDO.c)
 *     IopSymlinkGetECP @ 0x140065598 (IopSymlinkGetECP.c)
 *     IopSymlinkRemoveECP @ 0x14006626C (IopSymlinkRemoveECP.c)
 *     IopGetSetSpecificExtension @ 0x1400694F0 (IopGetSetSpecificExtension.c)
 *     IopGetFileObjectExtension @ 0x140069628 (IopGetFileObjectExtension.c)
 *     PsGetServerSiloServiceSessionId @ 0x14006D170 (PsGetServerSiloServiceSessionId.c)
 *     RtlGetActiveConsoleId @ 0x14006EAF0 (RtlGetActiveConsoleId.c)
 *     IoSetActivityIdThread @ 0x140075980 (IoSetActivityIdThread.c)
 *     PsGetCurrentProcessSessionId @ 0x1400767F0 (PsGetCurrentProcessSessionId.c)
 *     KiCheckForKernelApcDelivery @ 0x14007C0E0 (KiCheckForKernelApcDelivery.c)
 *     IopDereferenceVpbAndFree @ 0x140088C00 (IopDereferenceVpbAndFree.c)
 *     PsIsServerSilo @ 0x14008A910 (PsIsServerSilo.c)
 *     IopCreateSecurityCheck @ 0x14009EA00 (IopCreateSecurityCheck.c)
 *     IoGetSilo @ 0x1400ACAA0 (IoGetSilo.c)
 *     IopIncrementVpbRefCount @ 0x1400DC40C (IopIncrementVpbRefCount.c)
 *     PsGetCurrentServerSilo @ 0x1400F17B0 (PsGetCurrentServerSilo.c)
 *     KeWaitForSingleObject @ 0x1400F5B20 (KeWaitForSingleObject.c)
 *     IofCallDriver @ 0x1400FD990 (IofCallDriver.c)
 *     IopQueueThreadIrp @ 0x1400FDC10 (IopQueueThreadIrp.c)
 *     IopAllocateIrpExReturn @ 0x1400FDE40 (IopAllocateIrpExReturn.c)
 *     IoGetRelatedDeviceObject @ 0x1400FE1C0 (IoGetRelatedDeviceObject.c)
 *     ExAcquireResourceSharedLite @ 0x140100120 (ExAcquireResourceSharedLite.c)
 *     SeAccessCheck @ 0x140100B90 (SeAccessCheck.c)
 *     ExReleaseResourceLite @ 0x140102980 (ExReleaseResourceLite.c)
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x1401038E0 (ObfReferenceObject.c)
 *     RtlInitUnicodeString @ 0x1401054F0 (RtlInitUnicodeString.c)
 *     SepPrivilegeCheck @ 0x140105560 (SepPrivilegeCheck.c)
 *     IopDecrementDeviceObjectRef @ 0x140106AE0 (IopDecrementDeviceObjectRef.c)
 *     RtlCopyUnicodeString @ 0x140106C50 (RtlCopyUnicodeString.c)
 *     IopCheckDeviceAndDriver @ 0x140106CD0 (IopCheckDeviceAndDriver.c)
 *     IoFreeIrp @ 0x140106E30 (IoFreeIrp.c)
 *     IoGetAttachedDevice @ 0x140107050 (IoGetAttachedDevice.c)
 *     IopCheckVpbMounted @ 0x140107070 (IopCheckVpbMounted.c)
 *     IopDequeueIrpFromThread @ 0x140107260 (IopDequeueIrpFromThread.c)
 *     KeInitializeEvent @ 0x140107370 (KeInitializeEvent.c)
 *     PsIsHostSilo @ 0x140108640 (PsIsHostSilo.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     IopCheckSessionDeviceAccess @ 0x1402370D8 (IopCheckSessionDeviceAccess.c)
 *     IopAllowRemoteDASD @ 0x1402399C8 (IopAllowRemoteDASD.c)
 *     PsAcquireSiloHardReference @ 0x140283D50 (PsAcquireSiloHardReference.c)
 *     PsReleaseSiloHardReference @ 0x140283E10 (PsReleaseSiloHardReference.c)
 *     SeFastTraverseCheck @ 0x14029F854 (SeFastTraverseCheck.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     IopQueryXxxInformation @ 0x1404A51B8 (IopQueryXxxInformation.c)
 *     FsRtlFreeExtraCreateParameter @ 0x1404D1FD0 (FsRtlFreeExtraCreateParameter.c)
 *     SeTokenIsAdmin @ 0x1404DFBC0 (SeTokenIsAdmin.c)
 *     IopSymlinkCreateECP @ 0x1404E0DD0 (IopSymlinkCreateECP.c)
 *     IopSymlinkInitializeSymlinkInfo @ 0x1404E0ED8 (IopSymlinkInitializeSymlinkInfo.c)
 *     IopSymlinkProcessReparse @ 0x1404E1088 (IopSymlinkProcessReparse.c)
 *     IopCheckTopDeviceHint @ 0x1404E245C (IopCheckTopDeviceHint.c)
 *     IoGetIrpExtraCreateParameter @ 0x1404E2940 (IoGetIrpExtraCreateParameter.c)
 *     FsRtlAllocateExtraCreateParameterFromLookasideList @ 0x1404E4380 (FsRtlAllocateExtraCreateParameterFromLookasideList.c)
 *     SeIsAppContainerOrIdentifyLevelContext @ 0x140524180 (SeIsAppContainerOrIdentifyLevelContext.c)
 *     SeOpenObjectAuditAlarmWithTransaction @ 0x14053E640 (SeOpenObjectAuditAlarmWithTransaction.c)
 *     SeAppendPrivileges @ 0x14053E890 (SeAppendPrivileges.c)
 *     IopQueryInformation @ 0x1405540A0 (IopQueryInformation.c)
 *     IopSymlinkUpdateECP @ 0x140577744 (IopSymlinkUpdateECP.c)
 *     IopSymlinkFreeRelatedMountPointChain @ 0x1405778A4 (IopSymlinkFreeRelatedMountPointChain.c)
 *     IopSymlinkSetFoExtension @ 0x14057FB48 (IopSymlinkSetFoExtension.c)
 *     SeLockSubjectContext @ 0x1405A4DC0 (SeLockSubjectContext.c)
 *     SeUnlockSubjectContext @ 0x1405A5520 (SeUnlockSubjectContext.c)
 *     SePrivilegeCheck @ 0x1405B0D30 (SePrivilegeCheck.c)
 *     IopCloseFile @ 0x1405B12E0 (IopCloseFile.c)
 *     IopAllocRealFileObject @ 0x1405B3C40 (IopAllocRealFileObject.c)
 *     IopRetrieveTransactionParameters @ 0x1405B4060 (IopRetrieveTransactionParameters.c)
 *     IopSymlinkEnforceEnabledTypes @ 0x14065461C (IopSymlinkEnforceEnabledTypes.c)
 *     IopGetNetworkOpenInformation @ 0x1406552CC (IopGetNetworkOpenInformation.c)
 *     IopCancelAlertedRequest @ 0x14071957C (IopCancelAlertedRequest.c)
 *     IoCancelFileOpen @ 0x14071BC10 (IoCancelFileOpen.c)
 *     IopCheckAndUpdateStopOnSymlinkEcp @ 0x14071CB98 (IopCheckAndUpdateStopOnSymlinkEcp.c)
 *     PsGetParentSilo @ 0x1407788F0 (PsGetParentSilo.c)
 *     VfFastIoCheckState @ 0x140816D04 (VfFastIoCheckState.c)
 *     VfFastIoSnapState @ 0x140816DDC (VfFastIoSnapState.c)
 */

__int64 __fastcall IopParseDevice(
        unsigned int *BugCheckParameter2,
        POBJECT_TYPE *a2,
        __int64 a3,
        char a4,
        int a5,
        UNICODE_STRING *a6,
        const UNICODE_STRING *a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        _QWORD *a11)
{
  unsigned int *v11; // r15
  __int64 v12; // rsi
  unsigned __int8 v13; // bl
  __int64 v14; // r9
  __int64 v15; // rdx
  ULONG_PTR v16; // r14
  unsigned __int64 v17; // rcx
  __int64 result; // rax
  bool v19; // al
  __int64 v20; // rax
  __int64 CurrentServerSilo; // rax
  int ServerSiloServiceSessionId; // edi
  _DWORD *DevicePDO; // rax
  void *v24; // rsi
  bool v25; // di
  POBJECT_TYPE *v26; // rdx
  struct _ACCESS_STATE *v27; // r10
  int v28; // ecx
  POBJECT_TYPE *v29; // rdx
  int v30; // ecx
  ACCESS_MASK v31; // r14d
  char v32; // r9
  KPROCESSOR_MODE v33; // r15
  int v34; // edx
  char v35; // r13
  char v36; // r12
  int v37; // ecx
  int v38; // esi
  unsigned int v39; // edi
  __int64 v40; // rcx
  char v41; // al
  int v42; // edi
  char v43; // dl
  PCUNICODE_STRING v44; // r13
  __int64 v45; // rcx
  int v46; // r8d
  char v47; // bl
  PDEVICE_OBJECT AttachedDevice; // r12
  ULONG Characteristics; // eax
  ULONG ActiveConsoleId; // edi
  __int64 v51; // rax
  int v52; // edi
  bool v53; // di
  struct _ACCESS_STATE *v54; // r13
  char v55; // bl
  void *v56; // rcx
  int TransactionParameters; // r15d
  struct _DEVICE_OBJECT *v58; // rdi
  struct _KTHREAD *v59; // rcx
  bool v60; // zf
  char v61; // al
  struct _PRIVILEGE_SET *v62; // rsi
  ACCESS_MASK v63; // eax
  struct _SECURITY_SUBJECT_CONTEXT *p_SubjectSecurityContext; // rdi
  char v65; // al
  struct _PRIVILEGE_SET *v66; // rdi
  char v67; // bl
  unsigned __int16 Length; // r8
  __int64 v69; // rdx
  __int64 v70; // rdi
  ULONG_PTR v71; // r11
  __int64 v72; // rax
  ULONG v73; // ecx
  int v74; // eax
  __int64 v75; // rcx
  __int64 v76; // r13
  IRP *v77; // rax
  PIRP v78; // r14
  int v79; // edx
  __int64 v80; // r13
  int v81; // eax
  char v82; // al
  struct _FILE_OBJECT *v83; // r12
  _QWORD *v84; // rdi
  ULONG_PTR v85; // rdi
  unsigned __int64 DeviceType; // rax
  __int64 v87; // rdx
  __int64 RelatedFileObject; // rcx
  __int64 v89; // rax
  __int64 v90; // rsi
  __int64 v91; // rdx
  _DWORD *Silo; // rdi
  int SetSpecificExtension; // r15d
  unsigned __int16 v94; // ax
  wchar_t *PoolWithTag; // rax
  __int64 v96; // rdi
  int v97; // r15d
  int Information; // edi
  __int64 v99; // rcx
  PCUNICODE_STRING v100; // rdi
  wchar_t *Buffer; // rdx
  wchar_t *v102; // r8
  wchar_t *i; // r9
  signed __int64 v104; // r8
  wchar_t *v105; // rcx
  unsigned __int16 v106; // ax
  wchar_t *v107; // rax
  int v108; // ecx
  __int16 *MostRecentlyUsedName; // rax
  int updated; // eax
  __int64 v111; // rcx
  PVOID v112; // rdi
  unsigned __int8 CurrentIrql; // dl
  struct _ECP_LIST *v114; // rax
  __int64 v115; // r15
  int v116; // esi
  char v117; // r13
  int v118; // eax
  struct _ECP_LIST *v119; // rax
  PVOID v120; // rdi
  unsigned __int64 v121; // rdx
  __int64 v122; // rax
  PVOID v123; // r9
  int v124; // edx
  char v125; // cl
  int v126; // ecx
  int v127; // ecx
  _WORD *v128; // rdi
  __int64 v129; // rcx
  FSRTL_ALLOCATE_ECP_FLAGS v130; // r8d
  __int64 FileObjectExtension; // r14
  int v132; // ecx
  unsigned int v133; // r15d
  int v134; // esi
  PDEVICE_OBJECT v135; // r15
  NTSTATUS v136; // edi
  ULONG_PTR v137; // rax
  unsigned __int64 v138; // rcx
  __int64 v139; // rax
  unsigned __int16 v140; // ax
  PUNICODE_STRING v141; // r14
  wchar_t *v142; // rsi
  wchar_t *v143; // rcx
  __int64 v144; // rax
  ULONG_PTR v145; // rdx
  PVOID v146; // rcx
  _QWORD *v147; // rbx
  NTSTATUS Status; // ecx
  __int64 v149; // r13
  PCHAR AuxiliaryBuffer; // rcx
  __int64 v151; // r8
  int v152; // ecx
  unsigned __int64 v153; // rax
  __int64 v154; // r10
  unsigned int v156; // ecx
  __int64 v157; // rbx
  __int64 v158; // rdx
  __int64 v159; // r8
  PDEVICE_OBJECT RelatedDeviceObject; // r14
  ULONG_PTR Vpb; // rcx
  __int64 v162; // r13
  struct _FILE_OBJECT *v163; // rax
  unsigned __int64 v164; // rax
  __int64 v165; // rcx
  NTSTATUS XxxInformation; // eax
  char v167; // si
  PFAST_IO_DISPATCH FastIoDispatch; // rcx
  __int64 v169; // r13
  __int64 v170; // rdx
  __int64 (__fastcall *FastIoQueryBasicInfo)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD); // rbx
  void *v172; // rdi
  struct _IRP *Pool; // rbx
  __int64 (__fastcall *FastIoQueryNetworkOpenInfo)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD); // r15
  void *v175; // rbx
  NTSTATUS v176; // eax
  int v178; // [rsp+64h] [rbp-184h]
  int v179; // [rsp+64h] [rbp-184h]
  struct _DEVICE_OBJECT *Object; // [rsp+68h] [rbp-180h]
  NTSTATUS AccessStatus; // [rsp+78h] [rbp-170h] BYREF
  __int64 v183; // [rsp+80h] [rbp-168h]
  char v184; // [rsp+88h] [rbp-160h] BYREF
  char v185; // [rsp+89h] [rbp-15Fh] BYREF
  char v186[6]; // [rsp+8Ah] [rbp-15Eh] BYREF
  PCUNICODE_STRING SourceString; // [rsp+90h] [rbp-158h]
  int v188; // [rsp+98h] [rbp-150h]
  PVOID EcpContext; // [rsp+A0h] [rbp-148h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+A8h] [rbp-140h] BYREF
  ACCESS_MASK GrantedAccess; // [rsp+B0h] [rbp-138h] BYREF
  PVOID v192; // [rsp+B8h] [rbp-130h] BYREF
  __int64 v193; // [rsp+C0h] [rbp-128h]
  PUNICODE_STRING AbsoluteObjectName; // [rsp+C8h] [rbp-120h]
  PPRIVILEGE_SET v195; // [rsp+D0h] [rbp-118h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+D8h] [rbp-110h]
  struct _ECP_LIST *ExtraCreateParameter; // [rsp+E0h] [rbp-108h] BYREF
  char v198; // [rsp+E8h] [rbp-100h]
  PVOID P; // [rsp+F0h] [rbp-F8h]
  __int64 v200; // [rsp+F8h] [rbp-F0h]
  PVOID v201; // [rsp+100h] [rbp-E8h] BYREF
  int v202; // [rsp+108h] [rbp-E0h]
  _DWORD Size[3]; // [rsp+10Ch] [rbp-DCh] BYREF
  ULONG_PTR BugCheckParameter4[2]; // [rsp+118h] [rbp-D0h] BYREF
  __int64 v205; // [rsp+128h] [rbp-C0h] BYREF
  PIRP Irp; // [rsp+130h] [rbp-B8h]
  struct _DEVICE_OBJECT *v207; // [rsp+138h] [rbp-B0h]
  UNICODE_STRING DestinationString; // [rsp+140h] [rbp-A8h] BYREF
  struct _ECP_LIST *UserBuffer; // [rsp+150h] [rbp-98h]
  _BYTE *v210; // [rsp+158h] [rbp-90h]
  void *v211; // [rsp+160h] [rbp-88h]
  __int64 v212; // [rsp+168h] [rbp-80h]
  _QWORD v213[2]; // [rsp+170h] [rbp-78h] BYREF
  int v214; // [rsp+180h] [rbp-68h]
  int v215; // [rsp+184h] [rbp-64h]
  struct _PRIVILEGE_SET Privileges; // [rsp+188h] [rbp-60h] BYREF
  __int128 v217; // [rsp+1A0h] [rbp-48h] BYREF
  __int64 retaddr; // [rsp+1E8h] [rbp+0h]

  v11 = BugCheckParameter2;
  v207 = (struct _DEVICE_OBJECT *)BugCheckParameter2;
  v12 = a8;
  v183 = a8;
  AbsoluteObjectName = a6;
  SourceString = a7;
  v200 = a10;
  *(_QWORD *)&Size[1] = a11;
  v202 = 0;
  LOBYTE(v188) = 0;
  v195 = 0LL;
  P = 0LL;
  if ( a2 != IoFileObjectType )
    return 3221225508LL;
  CurrentThread = KeGetCurrentThread();
  v13 = v186[0] & 0xE9 | 4;
  RtlInitUnicodeString(&DestinationString, L"File");
  *a11 = 0LL;
  v192 = 0LL;
  v212 = a8;
  if ( !a8 )
    return 3221225508LL;
  while ( 1 )
  {
    v14 = 0x60010000110040LL;
    v15 = 0x1080020084LL;
    if ( *(_WORD *)v12 != 8 || *(_WORD *)(v12 + 2) != 216 )
      return 3221225508LL;
    v16 = (ULONG_PTR)v11;
    Object = (struct _DEVICE_OBJECT *)v11;
    if ( *(_DWORD *)(v12 + 32) == 1 )
    {
      *(_DWORD *)(v12 + 32) = -1096154543;
      *(_QWORD *)(v12 + 40) = v11;
      *(_DWORD *)(v12 + 16) = 0;
      ObfReferenceObject(v11);
      return 0LL;
    }
    if ( (*(_DWORD *)(v12 + 152) & 0x10) != 0 )
    {
      v17 = v11[18];
      if ( *(_QWORD *)(v12 + 24) == 2684354563LL )
      {
        if ( (unsigned int)v17 > 0x24 || !_bittest64(&v15, v17) )
          goto LABEL_10;
      }
      else
      {
        LOBYTE(v15) = (unsigned int)v17 <= 0x24 && _bittest64(&v15, v17);
        v19 = (unsigned int)v17 <= 0x36 && _bittest64(&v14, v17);
        if ( !(_BYTE)v15 && !v19 )
        {
LABEL_10:
          *(_DWORD *)(v12 + 16) = -1073741192;
          return 3221226104LL;
        }
        result = IopSymlinkEnforceEnabledTypes(*(_BYTE *)(v12 + 152) & 8, v15, *(_QWORD *)(v12 + 168));
        if ( (int)result < 0 )
          goto LABEL_460;
      }
    }
    v20 = *(_QWORD *)(v12 + 40);
    if ( v20 )
    {
      v16 = *(_QWORD *)(v20 + 8);
      Object = (struct _DEVICE_OBJECT *)v16;
    }
    result = IopCheckDeviceAndDriver(v12, v16);
    v178 = result;
    AccessStatus = result;
    if ( (int)result < 0 )
      goto LABEL_460;
    if ( (*(_DWORD *)(*(_QWORD *)(v16 + 312) + 32LL) & 0x400) != 0 && !*(_QWORD *)(v12 + 40) )
    {
      CurrentServerSilo = PsGetCurrentServerSilo();
      ServerSiloServiceSessionId = PsGetServerSiloServiceSessionId(CurrentServerSilo);
      if ( ServerSiloServiceSessionId != (unsigned int)PsGetCurrentProcessSessionId()
        || IopSessionZeroAccessCheckEnabled && (*(_DWORD *)(v12 + 64) & 0x40000) == 0 )
      {
        DevicePDO = IopGetDevicePDO(v16);
        v24 = DevicePDO;
        if ( DevicePDO )
        {
          v25 = IopCheckSessionDeviceAccess((__int64)DevicePDO);
          ObfDereferenceObject(v24);
          if ( !v25 )
          {
            IopDecrementDeviceObjectRef(v16, 0, 0);
            *(_DWORD *)(v183 + 16) = -1073741790;
            return 3221225506LL;
          }
        }
        v12 = v183;
      }
    }
    v26 = IoFileObjectType;
    v27 = (struct _ACCESS_STATE *)a3;
    v28 = *(_DWORD *)(a3 + 16);
    if ( v28 < 0 )
    {
      v28 |= *((_DWORD *)IoFileObjectType + 19);
      *(_DWORD *)(a3 + 16) = v28;
    }
    if ( (v28 & 0x40000000) != 0 )
    {
      v28 |= *((_DWORD *)v26 + 20);
      *(_DWORD *)(a3 + 16) = v28;
    }
    if ( (v28 & 0x20000000) != 0 )
    {
      v28 |= *((_DWORD *)v26 + 21);
      *(_DWORD *)(a3 + 16) = v28;
    }
    if ( (v28 & 0x10000000) != 0 )
    {
      v28 |= *((_DWORD *)v26 + 22);
      *(_DWORD *)(a3 + 16) = v28;
    }
    *(_DWORD *)(a3 + 16) = v28 & 0xFFFFFFF;
    v29 = IoFileObjectType;
    v30 = *(_DWORD *)(a3 + 24);
    if ( v30 < 0 )
    {
      v30 |= *((_DWORD *)IoFileObjectType + 19);
      *(_DWORD *)(a3 + 24) = v30;
    }
    if ( (v30 & 0x40000000) != 0 )
    {
      v30 |= *((_DWORD *)v29 + 20);
      *(_DWORD *)(a3 + 24) = v30;
    }
    if ( (v30 & 0x20000000) != 0 )
    {
      v30 |= *((_DWORD *)v29 + 21);
      *(_DWORD *)(a3 + 24) = v30;
    }
    if ( (v30 & 0x10000000) != 0 )
    {
      v30 |= *((_DWORD *)v29 + 22);
      *(_DWORD *)(a3 + 24) = v30;
    }
    *(_DWORD *)(a3 + 24) = v30 & 0xFFFFFFF;
    *(_OWORD *)(*(_QWORD *)(a3 + 72) + 8LL) = *(_OWORD *)((char *)IoFileObjectType + 76);
    v31 = *(_DWORD *)(a3 + 16);
    LODWORD(EcpContext) = v31;
    v32 = a4;
    v33 = a4 || (*(_DWORD *)(v12 + 84) & 1) != 0;
    v34 = *(_DWORD *)(v12 + 88);
    v35 = 0;
    v36 = 0;
    v37 = *(_DWORD *)(a3 + 12);
    if ( (v37 & 0x100) == 0 && (*(_DWORD *)(v12 + 64) & 0x4000) != 0 )
    {
      *(_DWORD *)(a3 + 12) = v37 | 0x100;
      v38 = v31 | 0x11F01BF;
      if ( (v31 & 0x2000000) == 0 )
        v38 = v31;
      if ( ((v34 - 1) & 0xFFFFFFF9) != 0 || v34 == 7 )
      {
        v36 = 1;
        v39 = v38;
LABEL_68:
        v42 = v39 & 0x11F0116;
        if ( v42 || v36 )
        {
          Privileges.PrivilegeCount = 1;
          Privileges.Control = 1;
          Privileges.Privilege[0].Luid = SeRestorePrivilege;
          Privileges.Privilege[0].Attributes = 0;
          if ( SePrivilegeCheck(&Privileges, &v27->SubjectSecurityContext, v33) )
          {
            v35 = 1;
            SeAppendPrivileges((PACCESS_STATE)a3, &Privileges);
            v27 = (struct _ACCESS_STATE *)a3;
            *(_DWORD *)(a3 + 20) |= v42;
            *(_DWORD *)(a3 + 16) &= 0xFEE0FEE9;
            *(_DWORD *)(a3 + 12) |= 4u;
          }
          else
          {
            v27 = (struct _ACCESS_STATE *)a3;
          }
        }
        v12 = v183;
        v32 = a4;
        if ( !v35 )
          *(_DWORD *)(v183 + 64) &= ~0x4000u;
        goto LABEL_76;
      }
      v39 = v38;
      if ( (v38 & 0x11200A9) != 0 )
      {
        Privileges.PrivilegeCount = 1;
        Privileges.Control = 1;
        Privileges.Privilege[0].Luid = SeBackupPrivilege;
        Privileges.Privilege[0].Attributes = 0;
        if ( !v33 )
        {
LABEL_66:
          v35 = 1;
          SeAppendPrivileges(v27, &Privileges);
          v27 = (struct _ACCESS_STATE *)a3;
          *(_DWORD *)(a3 + 20) |= v38 & 0x11200A9;
          *(_DWORD *)(a3 + 16) &= 0xFEEDFF56;
          v39 = v38 & 0xFEEDFF56;
          *(_DWORD *)(a3 + 12) |= 2u;
          goto LABEL_67;
        }
        v40 = *(_QWORD *)(a3 + 32);
        if ( v40 )
        {
          if ( *(int *)(a3 + 40) < 2 )
            goto LABEL_67;
        }
        else
        {
          v40 = *(_QWORD *)(a3 + 48);
        }
        v41 = SepPrivilegeCheck(v40, (__int64)Privileges.Privilege, 1u, 1, v33);
        v27 = (struct _ACCESS_STATE *)a3;
        if ( v41 )
          goto LABEL_66;
      }
LABEL_67:
      v31 = (unsigned int)EcpContext;
      goto LABEL_68;
    }
LABEL_76:
    v43 = *(_BYTE *)(v12 + 136);
    v44 = SourceString;
    if ( v43 && !SourceString->Length || (v27->Flags & 0x100) != 0 )
    {
      v31 |= v27->PreviouslyGrantedAccess;
      LODWORD(EcpContext) = v31;
    }
    v45 = *(_QWORD *)(v12 + 40);
    LOBYTE(v46) = v188;
    if ( v45 && (*(_DWORD *)(v45 + 80) & 0x400000) != 0 )
    {
      v46 = (unsigned __int8)v188;
      if ( !SourceString->Length )
        v46 = 1;
      v188 = v46;
    }
    if ( !v32 && (*(_DWORD *)(v12 + 84) & 1) == 0 || v45 && !(_BYTE)v46 || v43 )
    {
      TransactionParameters = v178;
      goto LABEL_114;
    }
    v47 = v13 & 0xDF;
    AttachedDevice = Object;
    Characteristics = Object->Characteristics;
    if ( !SourceString->Length )
    {
      v53 = 0;
      if ( (Characteristics & 0x40001) != 0 && (v31 & 0xFFEDFF7F) != 0 )
      {
        ActiveConsoleId = RtlGetActiveConsoleId();
        if ( ActiveConsoleId != (unsigned int)PsGetCurrentProcessSessionId() )
        {
          v51 = PsGetCurrentServerSilo();
          v52 = PsGetServerSiloServiceSessionId(v51);
          if ( v52 != (unsigned int)PsGetCurrentProcessSessionId() && !IopAllowRemoteDASD() )
            v53 = 1;
        }
      }
      v195 = 0LL;
      --CurrentThread->KernelApcDisable;
      ExAcquireResourceSharedLite((PERESOURCE)&IopSecurityResource, 1u);
      v54 = (struct _ACCESS_STATE *)a3;
      SeLockSubjectContext((PSECURITY_SUBJECT_CONTEXT)(a3 + 32));
      v55 = v47 | 0x20;
      if ( v53 )
      {
        v56 = *(void **)(a3 + 32);
        if ( !v56 )
          v56 = *(void **)(a3 + 48);
        if ( !SeTokenIsAdmin(v56) )
        {
          v13 = v55 & 0xFE;
          AccessStatus = -1073741790;
          TransactionParameters = -1073741790;
          v58 = Object;
          goto LABEL_103;
        }
      }
      v58 = Object;
      v13 = (v55 ^ SeAccessCheck(
                     Object->SecurityDescriptor,
                     (PSECURITY_SUBJECT_CONTEXT)(a3 + 32),
                     (v55 & 0x20) != 0,
                     v31,
                     0,
                     &v195,
                     (PGENERIC_MAPPING)((char *)IoFileObjectType + 76),
                     1,
                     &GrantedAccess,
                     &AccessStatus)) & 1 ^ v55;
      v62 = v195;
      if ( v195 )
      {
        SeAppendPrivileges((PACCESS_STATE)a3, v195);
        CmSiFreeMemory(v62);
      }
      TransactionParameters = AccessStatus;
      if ( (v13 & 1) != 0 )
      {
        v63 = GrantedAccess;
        *(_DWORD *)(a3 + 20) |= GrantedAccess;
        *(_DWORD *)(a3 + 16) &= ~(v63 | 0x2000000);
        v12 = v183;
        *(_BYTE *)(v183 + 136) = 1;
      }
      else
      {
LABEL_103:
        v12 = v183;
      }
      AttachedDevice = Object;
      SeOpenObjectAuditAlarmWithTransaction(
        &DestinationString,
        Object,
        AbsoluteObjectName,
        v58->SecurityDescriptor,
        (PACCESS_STATE)a3,
        0,
        v13 & 1,
        1,
        0LL,
        (PBOOLEAN)(a3 + 10));
LABEL_105:
      ExReleaseResourceLite((PERESOURCE)&IopSecurityResource);
      v59 = CurrentThread;
      v60 = CurrentThread->KernelApcDisable++ == -1;
      if ( v60
        && ($005F0E83B22994B61E86C72E0CE43C71 *)v59->ApcState.ApcListHead[0].Flink != &v59->152
        && !v59->SpecialApcDisable )
      {
        KiCheckForKernelApcDelivery();
      }
      v27 = v54;
      v44 = SourceString;
      goto LABEL_110;
    }
    if ( (Characteristics & 0x20100) == 0x20000 || !v32 )
    {
      v65 = 0;
      p_SubjectSecurityContext = &v27->SubjectSecurityContext;
    }
    else
    {
      v184 = 0;
      p_SubjectSecurityContext = &v27->SubjectSecurityContext;
      SeIsAppContainerOrIdentifyLevelContext(&v27->SubjectSecurityContext, &v184);
      v65 = v184;
      v27 = (struct _ACCESS_STATE *)a3;
    }
    if ( v65 )
    {
      v13 = (v47 ^ IopCreateSecurityCheck(
                     (__int64)Object,
                     0LL,
                     v27,
                     v31 | 0x20,
                     1,
                     v195,
                     &GrantedAccess,
                     AbsoluteObjectName,
                     &DestinationString,
                     (__int64)CurrentThread,
                     0)) & 1 ^ v47;
      TransactionParameters = v178;
      v27 = (struct _ACCESS_STATE *)a3;
    }
    else
    {
      if ( (v27->Flags & 1) == 0 )
      {
        --CurrentThread->KernelApcDisable;
        ExAcquireResourceSharedLite((PERESOURCE)&IopSecurityResource, 1u);
        v54 = (struct _ACCESS_STATE *)a3;
        v13 = (v47 ^ SeFastTraverseCheck((__int64)Object->SecurityDescriptor, a3, 32)) & 1 ^ v47;
        if ( (v13 & 1) != 0 )
        {
          TransactionParameters = v178;
        }
        else
        {
          v195 = 0LL;
          SeLockSubjectContext(p_SubjectSecurityContext);
          v13 = ((v13 | 0x20) ^ SeAccessCheck(
                                  Object->SecurityDescriptor,
                                  p_SubjectSecurityContext,
                                  1u,
                                  0x20u,
                                  0,
                                  &v195,
                                  (PGENERIC_MAPPING)((char *)IoFileObjectType + 76),
                                  1,
                                  &GrantedAccess,
                                  &AccessStatus)) & 1 ^ (v13 | 0x20);
          v66 = v195;
          if ( v195 )
          {
            SeAppendPrivileges((PACCESS_STATE)a3, v195);
            CmSiFreeMemory(v66);
          }
          TransactionParameters = AccessStatus;
        }
        goto LABEL_105;
      }
      v13 = v47 | 1;
      TransactionParameters = v178;
    }
LABEL_110:
    if ( (v13 & 0x20) != 0 )
      SeUnlockSubjectContext(&v27->SubjectSecurityContext);
    if ( (v13 & 1) == 0 )
    {
LABEL_380:
      IopDecrementDeviceObjectRef((ULONG_PTR)AttachedDevice, 0, 0);
      return 3221225506LL;
    }
    v27 = (struct _ACCESS_STATE *)a3;
    v32 = a4;
LABEL_114:
    if ( *(_BYTE *)(v12 + 137) || *(_BYTE *)(v12 + 138) )
      v61 = 64;
    else
      v61 = 0;
    v67 = v61 | v13 & 0xBF;
    Length = v44->Length;
    if ( v44->Length || *(_QWORD *)(v12 + 40) || (v31 & 0xFEE1FF7F) != 0 || (v67 & 0x40) != 0 )
    {
      v13 = v67 & 0xF7;
      v69 = *(_QWORD *)(v12 + 40);
    }
    else
    {
      v13 = v67 | 8;
      v69 = 0LL;
    }
    v70 = 0LL;
    v193 = 0LL;
    if ( !v69 || (*(_DWORD *)(v69 + 80) & 0x800) != 0 )
    {
      v71 = (ULONG_PTR)Object;
      AttachedDevice = Object;
      DeviceObject = Object;
      if ( Object->Vpb && (v13 & 8) == 0 )
      {
        if ( (Object->Characteristics & 0x100) != 0
          && (Object->DeviceObjectExtension->ExtensionFlags & 0x800) == 0
          && (v32 || (*(_DWORD *)(v12 + 84) & 1) != 0)
          && (v69 || Length)
          && !(_BYTE)v188 )
        {
          v195 = 0LL;
          if ( !IopCreateSecurityCheck(
                  (__int64)Object,
                  Object,
                  v27,
                  v31,
                  *(_DWORD *)(v12 + 88),
                  0LL,
                  &GrantedAccess,
                  AbsoluteObjectName,
                  &DestinationString,
                  (__int64)CurrentThread,
                  0) )
            goto LABEL_380;
          v71 = (ULONG_PTR)Object;
        }
        v72 = IopCheckVpbMounted(v12, v71, (__int64)SourceString, &AccessStatus);
        v70 = v72;
        v193 = v72;
        if ( !v72 )
          return (unsigned int)AccessStatus;
        AttachedDevice = *(PDEVICE_OBJECT *)(v72 + 8);
        DeviceObject = AttachedDevice;
        TransactionParameters = AccessStatus;
      }
      if ( (*(_DWORD *)(v12 + 152) & 1) != 0 )
      {
        v13 |= 2u;
      }
      else if ( AttachedDevice->AttachedDevice )
      {
        AttachedDevice = IoGetAttachedDevice(AttachedDevice);
        DeviceObject = AttachedDevice;
      }
    }
    else
    {
      AttachedDevice = v207;
      DeviceObject = v207;
      if ( *(_QWORD *)(v69 + 16) )
      {
        v70 = *(_QWORD *)(v69 + 16);
        v193 = v70;
        if ( (Object->Characteristics & 0x100) != 0
          && (Object->DeviceObjectExtension->ExtensionFlags & 0x800) == 0
          && (v32 || (*(_DWORD *)(v12 + 84) & 1) != 0)
          && !(_BYTE)v188 )
        {
          v195 = 0LL;
          if ( !IopCreateSecurityCheck(
                  (__int64)Object,
                  Object,
                  v27,
                  v31,
                  *(_DWORD *)(v12 + 88),
                  0LL,
                  &GrantedAccess,
                  AbsoluteObjectName,
                  &DestinationString,
                  (__int64)CurrentThread,
                  0) )
            goto LABEL_383;
        }
        IopIncrementVpbRefCount(v70, 1);
      }
      if ( (*(_DWORD *)(v12 + 152) & 1) != 0 )
      {
        if ( v70 )
        {
          AttachedDevice = *(PDEVICE_OBJECT *)(v70 + 8);
          DeviceObject = AttachedDevice;
        }
        v13 |= 2u;
      }
    }
    v73 = Object->Characteristics;
    if ( (v73 & 0x40001) != 0 && (Object->Flags & 0x600100) == 0 && (v73 & 0x100) == 0 )
    {
      v185 = 0;
      SeIsAppContainerOrIdentifyLevelContext((PSECURITY_SUBJECT_CONTEXT)(a3 + 32), &v185);
      if ( v185 )
      {
        if ( !v70 )
          goto LABEL_383;
        if ( (*(_DWORD *)(*(_QWORD *)(v70 + 8) + 48LL) & 0x20000) == 0 )
        {
          IopDereferenceVpbAndFree(v70);
LABEL_383:
          IopDecrementDeviceObjectRef((ULONG_PTR)Object, 0, 0);
          return 3221225506LL;
        }
      }
    }
    if ( (v13 & 2) != 0 )
    {
      TransactionParameters = IopCheckTopDeviceHint((unsigned int **)&DeviceObject, v12, (v13 & 8) != 0, SourceString);
      if ( TransactionParameters < 0 )
      {
        if ( v70 )
          IopDereferenceVpbAndFree(v70);
        IopDecrementDeviceObjectRef((ULONG_PTR)Object, 0, 0);
        return (unsigned int)TransactionParameters;
      }
      AttachedDevice = DeviceObject;
    }
    v74 = *(_DWORD *)(v12 + 152);
    if ( (v74 & 0x10) != 0 )
      *(_DWORD *)(v12 + 152) = v74 & 0xFFFFFFEF;
    if ( (AttachedDevice->Characteristics & 0x100) != 0 )
    {
      v75 = (__int64)Object;
    }
    else
    {
      if ( !IopRequireDeviceAccessCheck )
        goto LABEL_187;
      v75 = (__int64)Object;
      if ( (Object->Characteristics & 0x100000) == 0 )
        goto LABEL_187;
    }
    if ( !a4 && (*(_DWORD *)(v12 + 84) & 1) == 0 || !*(_QWORD *)(v12 + 40) && !SourceString->Length || (_BYTE)v188 )
    {
LABEL_187:
      v76 = a3;
      goto LABEL_188;
    }
    v195 = 0LL;
    v76 = a3;
    if ( !IopCreateSecurityCheck(
            v75,
            AttachedDevice,
            (struct _ACCESS_STATE *)a3,
            v31,
            *(_DWORD *)(v12 + 88),
            0LL,
            &GrantedAccess,
            AbsoluteObjectName,
            &DestinationString,
            (__int64)CurrentThread,
            1) )
    {
      IopDecrementDeviceObjectRef((ULONG_PTR)Object, 0, 0);
      if ( v70 )
        IopDereferenceVpbAndFree(v70);
      return 3221225506LL;
    }
LABEL_188:
    v77 = (IRP *)IopAllocateIrpExReturn(
                   (__int64)AttachedDevice,
                   (unsigned __int8)AttachedDevice->StackSize,
                   0LL,
                   retaddr);
    v78 = v77;
    Irp = v77;
    if ( !v77 )
    {
      IopDecrementDeviceObjectRef((ULONG_PTR)Object, 0, 0);
      if ( v70 )
        IopDereferenceVpbAndFree(v70);
      return 3221225626LL;
    }
    v77->Tail.Overlay.Thread = CurrentThread;
    v77->RequestorMode = a4;
    v77->Flags = 2180;
    v213[0] = a9;
    v213[1] = v76;
    v79 = (int)EcpContext;
    v214 = (int)EcpContext;
    v215 = *(_DWORD *)(v12 + 64);
    v80 = (__int64)&v77->Tail.Overlay.CurrentStackLocation[-1];
    v210 = (_BYTE *)v80;
    *(_BYTE *)(v80 + 3) = 0;
    v81 = *(_DWORD *)(v12 + 120);
    if ( v81 )
    {
      if ( v81 == 1 )
        *(_BYTE *)v80 = 1;
      else
        *(_BYTE *)v80 = 19;
      *(_QWORD *)(v80 + 32) = *(_QWORD *)(v12 + 128);
    }
    else
    {
      *(_BYTE *)v80 = 0;
      *(_DWORD *)(v80 + 32) = *(_DWORD *)(v12 + 80);
      v82 = *(_BYTE *)(v12 + 84);
      *(_BYTE *)(v80 + 2) = v82;
      if ( (a5 & 0x40) == 0 )
        *(_BYTE *)(v80 + 2) = v82 | 0x80;
    }
    v78->Overlay.AllocationSize.QuadPart = *(_QWORD *)(v12 + 56);
    v78->AssociatedIrp.MasterIrp = *(struct _IRP **)(v12 + 72);
    *(_DWORD *)(v80 + 16) = (*(_DWORD *)(v12 + 88) << 24) | *(_DWORD *)(v12 + 64) & 0xFFFFFF;
    *(_WORD *)(v80 + 24) = *(_WORD *)(v12 + 68);
    *(_WORD *)(v80 + 26) = *(_WORD *)(v12 + 70);
    *(_QWORD *)(v80 + 8) = v213;
    v78->UserBuffer = *(PVOID *)(v12 + 168);
    v78->UserIosb = (PIO_STATUS_BLOCK)BugCheckParameter4;
    v78->MdlAddress = 0LL;
    v78->PendingReturned = 0;
    v78->Cancel = 0;
    v78->UserEvent = 0LL;
    v78->CancelRoutine = 0LL;
    v78->Tail.Overlay.AuxiliaryBuffer = 0LL;
    if ( !*(_BYTE *)(v12 + 137) )
    {
      TransactionParameters = IopAllocRealFileObject(
                                (unsigned int)&v192,
                                (_DWORD)AttachedDevice,
                                (_DWORD)Object,
                                a5,
                                a4,
                                v12,
                                v200,
                                0,
                                v79);
      if ( TransactionParameters < 0 )
      {
        IoFreeIrp(v78);
        IopDecrementDeviceObjectRef((ULONG_PTR)Object, 0, 0);
        if ( v70 )
          IopDereferenceVpbAndFree(v70);
        v146 = v192;
        if ( v192 )
        {
          *((_QWORD *)v192 + 1) = 0LL;
          ObfDereferenceObject(v146);
        }
        goto LABEL_391;
      }
      v83 = (struct _FILE_OBJECT *)v192;
LABEL_232:
      v85 = (ULONG_PTR)Object;
      goto LABEL_233;
    }
    v84 = *(_QWORD **)(v12 + 144);
    memset(v84, 0, 0x110uLL);
    v83 = (struct _FILE_OBJECT *)(v84 + 6);
    v192 = v84 + 6;
    *((_BYTE *)v84 + 24) = ObHeaderCookie ^ *((_BYTE *)IoFileObjectType + 40) ^ BYTE1(v84);
    *v84 = 1LL;
    if ( (a5 & 0x40) == 0 )
      *((_DWORD *)v84 + 32) |= 0x20000u;
    *(_DWORD *)&v83->Type = 14155781;
    v84[14] = *(_QWORD *)(v12 + 40);
    v85 = (ULONG_PTR)Object;
    v83->DeviceObject = Object;
    if ( (*(_DWORD *)(v12 + 152) & 0x20) != 0 )
    {
      if ( a4 )
      {
        if ( (DeviceObject->Flags & 0x40000) != 0
          || (DeviceType = DeviceObject->DeviceType, (unsigned int)DeviceType <= 0x35)
          && (v87 = 0x20000100100108LL, _bittest64(&v87, DeviceType)) )
        {
          TransactionParameters = IopRetrieveTransactionParameters(DeviceObject, v12, (unsigned int)EcpContext, v83);
          if ( TransactionParameters < 0 )
          {
            IoFreeIrp(v78);
            IopDecrementDeviceObjectRef((ULONG_PTR)Object, 0, 0);
            if ( v193 )
            {
              IopDereferenceVpbAndFree(v193);
              *(_DWORD *)(v12 + 16) = TransactionParameters;
              return (unsigned int)TransactionParameters;
            }
LABEL_391:
            *(_DWORD *)(v12 + 16) = TransactionParameters;
            return (unsigned int)TransactionParameters;
          }
        }
      }
    }
    if ( !PsIsHostSilo(*(_QWORD *)(v200 + 8))
      || (RelatedFileObject = (__int64)v83->RelatedFileObject) != 0
      && (v89 = IoGetSilo(RelatedFileObject), !PsIsHostSilo(v89)) )
    {
      v90 = 0LL;
      v205 = 0LL;
      if ( v83->RelatedFileObject && PsIsServerSilo(*(_QWORD *)(v200 + 8)) )
        Silo = (_DWORD *)IoGetSilo(v91);
      else
        Silo = *(_DWORD **)(v200 + 8);
      if ( !PsIsHostSilo((__int64)Silo) )
      {
        SetSpecificExtension = PsAcquireSiloHardReference(Silo);
        v179 = SetSpecificExtension;
        if ( SetSpecificExtension >= 0 )
        {
          SetSpecificExtension = IopGetSetSpecificExtension((__int64)v83, 7u, 0x10u, 1, &v205, 0LL);
          v179 = SetSpecificExtension;
          if ( SetSpecificExtension < 0 )
            PsReleaseSiloHardReference(Silo);
          v90 = v205;
        }
        if ( SetSpecificExtension < 0 )
        {
          IoFreeIrp(v78);
          IopDecrementDeviceObjectRef((ULONG_PTR)Object, 0, 0);
          if ( v193 )
            IopDereferenceVpbAndFree(v193);
          *(_DWORD *)(v183 + 16) = SetSpecificExtension;
          return (unsigned int)SetSpecificExtension;
        }
        *(_DWORD *)v90 = 16;
        *(_QWORD *)(v90 + 8) = Silo;
        *(_DWORD *)(v90 + 4) |= 1u;
        ObfReferenceObjectWithTag(Silo, 0x70536F49u);
        TransactionParameters = v179;
      }
      v12 = v183;
      goto LABEL_232;
    }
LABEL_233:
    if ( (v13 & 8) != 0 )
      v83->Flags |= 0x800u;
    v78->Tail.Overlay.OriginalFileObject = v83;
    *(_QWORD *)(v80 + 48) = v83;
    v94 = SourceString->Length;
    if ( SourceString->Length )
    {
      if ( v94 >= 0x38u )
      {
        if ( v94 >= 0x78u )
        {
          if ( v94 < 0xF8u )
            v94 = 248;
        }
        else
        {
          v94 = 120;
        }
      }
      else
      {
        v94 = 56;
      }
      v83->FileName.MaximumLength = v94;
      PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v94, 0x6D4E6F49u);
      v83->FileName.Buffer = PoolWithTag;
      if ( !PoolWithTag )
      {
        IoFreeIrp(v78);
        IopDecrementDeviceObjectRef(v85, 0, 0);
        if ( v193 )
          IopDereferenceVpbAndFree(v193);
        v83->DeviceObject = 0LL;
        if ( !*(_BYTE *)(v12 + 137) )
        {
          ObfDereferenceObject(v83);
          return 3221225626LL;
        }
        return 3221225626LL;
      }
    }
    RtlCopyUnicodeString(&v83->FileName, SourceString);
    v96 = v183;
    if ( !*(_BYTE *)(v183 + 137) )
      goto LABEL_269;
    v97 = (int)DeviceObject;
    Information = IopQueryInformation(v183, (__int64)DeviceObject, (__int64)v78, v80, v186);
    if ( Information < 0 || v186[0] )
    {
      Status = v78->IoStatus.Status;
      v149 = v183;
      *(_DWORD *)(v183 + 16) = Status;
      *(_QWORD *)(v149 + 24) = v78->IoStatus.Information;
      if ( Status == 260 )
      {
        AuxiliaryBuffer = v78->Tail.Overlay.AuxiliaryBuffer;
        if ( AuxiliaryBuffer )
        {
          ExFreePoolWithTag(AuxiliaryBuffer, 0);
          v78->Tail.Overlay.AuxiliaryBuffer = 0LL;
          *(_QWORD *)(v149 + 40) = 0LL;
        }
      }
      if ( v83->FileName.Length )
        ExFreePoolWithTag(v83->FileName.Buffer, 0);
      if ( v83->FileObjectExtension )
        IopDeleteFileObjectExtension((__int64)v83);
      IopDecrementDeviceObjectRef((ULONG_PTR)Object, 0, 0);
      if ( v193 )
        IopDereferenceVpbAndFree(v193);
      IoFreeIrp(v78);
      return (unsigned int)Information;
    }
    v99 = v83->FileName.Length;
    v100 = SourceString;
    if ( (_DWORD)v99 != SourceString->Length )
      goto LABEL_256;
    Buffer = v83->FileName.Buffer;
    v102 = SourceString->Buffer;
    for ( i = (wchar_t *)((char *)Buffer + v99); (unsigned int)v99 >= 8; v102 += 4 )
    {
      if ( *(_QWORD *)Buffer != *(_QWORD *)v102 )
        break;
      LODWORD(v99) = v99 - 8;
      if ( !(_DWORD)v99 )
        goto LABEL_267;
      Buffer += 4;
    }
    if ( Buffer < i )
    {
      v104 = (char *)v102 - (char *)Buffer;
      while ( *Buffer == *(wchar_t *)((char *)Buffer + v104) )
      {
        if ( ++Buffer >= i )
          goto LABEL_267;
      }
LABEL_256:
      v105 = v83->FileName.Buffer;
      if ( v105 )
      {
        ExFreePoolWithTag(v105, 0);
        RtlInitUnicodeString(&v83->FileName, 0LL);
      }
      v106 = v100->Length;
      if ( v100->Length )
      {
        if ( v106 >= 0x38u )
        {
          if ( v106 >= 0x78u )
          {
            if ( v106 < 0xF8u )
              v106 = 248;
          }
          else
          {
            v106 = 120;
          }
        }
        else
        {
          v106 = 56;
        }
        v83->FileName.MaximumLength = v106;
        v107 = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v106, 0x6D4E6F49u);
        v83->FileName.Buffer = v107;
        if ( !v107 )
        {
          if ( v83->FileObjectExtension )
            IopDeleteFileObjectExtension((__int64)v83);
          IopDecrementDeviceObjectRef((ULONG_PTR)Object, 0, 0);
          if ( v193 )
            IopDereferenceVpbAndFree(v193);
          IoFreeIrp(v78);
          return 3221225626LL;
        }
        RtlCopyUnicodeString(&v83->FileName, v100);
      }
    }
LABEL_267:
    v96 = v183;
    TransactionParameters = IopAllocRealFileObject(
                              (unsigned int)&v192,
                              v97,
                              (_DWORD)Object,
                              a5,
                              a4,
                              v183,
                              v200,
                              1,
                              (_DWORD)EcpContext);
    if ( TransactionParameters < 0 )
    {
      v147 = v192;
      if ( *((_WORD *)v192 + 44) )
        ExFreePoolWithTag(*((PVOID *)v192 + 12), 0);
      if ( v147[26] )
        IopDeleteFileObjectExtension((__int64)v147);
      IopDecrementDeviceObjectRef((ULONG_PTR)Object, 0, 0);
      if ( v193 )
        IopDereferenceVpbAndFree(v193);
      IoFreeIrp(v78);
      return (unsigned int)TransactionParameters;
    }
    v83 = (struct _FILE_OBJECT *)v192;
    *(_QWORD *)(v80 + 48) = v192;
    v78->Tail.Overlay.OriginalFileObject = v83;
LABEL_269:
    if ( !*(_DWORD *)(v96 + 120) )
    {
      v108 = v78->Flags & 0x80;
      if ( v108 )
        UserBuffer = (struct _ECP_LIST *)v78->UserBuffer;
      TransactionParameters = -1073741811;
      if ( v108 )
        TransactionParameters = 0;
      if ( UserBuffer )
      {
        if ( IopSymlinkGetECP(UserBuffer, &v201) != -1073741275 )
        {
          MostRecentlyUsedName = (__int16 *)IopSymlinkGetMostRecentlyUsedName((__int64)v201);
          if ( !MostRecentlyUsedName[2] )
          {
            updated = IopSymlinkUpdateECP(
                        v78,
                        MostRecentlyUsedName,
                        *MostRecentlyUsedName,
                        AbsoluteObjectName,
                        AbsoluteObjectName->Length - SourceString->Length,
                        MostRecentlyUsedName[1]);
            TransactionParameters = updated;
            if ( updated < 0 )
            {
              v78->IoStatus.Status = updated;
              v78->IoStatus.Information = 0LL;
              v13 &= ~4u;
            }
          }
        }
      }
    }
    KeInitializeEvent(&v83->Event, NotificationEvent, 0);
    *(_QWORD *)(v96 + 8) = v83;
    if ( (v13 & 4) != 0 )
    {
      IopQueueThreadIrp((__int64)v78);
      if ( (v78->AllocationFlags & 0x80u) == 0
        && (v111 = *((_QWORD *)&v78->Tail.CompletionKey + 10)) != 0
        && (*(_BYTE *)v111 & 2) != 0 )
      {
        v217 = *(_OWORD *)(v111 + 24);
        v112 = IoSetActivityIdThread(&v217);
        TransactionParameters = IofCallDriver(DeviceObject, v78);
        IoSetActivityIdThread(v112);
      }
      else
      {
        TransactionParameters = IofCallDriver(DeviceObject, v78);
      }
    }
    if ( TransactionParameters == 259 )
    {
      if ( (KeGetCurrentThread()->MiscFlags & 0x400) != 0 )
        v13 &= ~0x80u;
      else
        v13 |= 0x80u;
      if ( KeWaitForSingleObject(&v83->Event, Executive, 0, v13 >> 7, 0LL) == 257 )
      {
        while ( 1 )
        {
          CurrentIrql = KeGetCurrentIrql();
          __writecr8(1uLL);
          if ( (*(_DWORD *)(&KeGetCurrentThread()[1].SwapListEntry + 1) & 1) != 0
            || !v83->Event.Header.SignalState && v78->Cancel )
          {
            break;
          }
          __writecr8(CurrentIrql);
          if ( KeWaitForSingleObject(&v83->Event, Executive, 0, v13 >> 7, 0LL) != 257 )
            goto LABEL_296;
        }
        __writecr8(CurrentIrql);
        IopCancelAlertedRequest(&v83->Event, v78);
      }
LABEL_296:
      v83 = (struct _FILE_OBJECT *)v192;
    }
    if ( (v78->Flags & 0x80u) == 0 )
    {
      v114 = ExtraCreateParameter;
    }
    else
    {
      v114 = (struct _ECP_LIST *)v78->UserBuffer;
      ExtraCreateParameter = v114;
    }
    v115 = v183;
    v116 = *(_DWORD *)(v183 + 84) & 8;
    v117 = v116 != 0;
    if ( v78->IoStatus.Status != 260 )
      goto LABEL_330;
    P = v78->Tail.Overlay.AuxiliaryBuffer;
    if ( v114 && IopSymlinkGetECP(v114, &v201) != -1073741275 )
      goto LABEL_307;
    v118 = IopSymlinkCreateECP(
             v78,
             (__int64)v83,
             &AbsoluteObjectName->Length,
             AbsoluteObjectName->Length - SourceString->Length,
             &v201);
    if ( v118 < 0 )
    {
      v78->IoStatus.Information = 0LL;
      v78->IoStatus.Status = v118;
LABEL_307:
      v119 = ExtraCreateParameter;
      goto LABEL_308;
    }
    v119 = ExtraCreateParameter;
    if ( !ExtraCreateParameter )
    {
      IoGetIrpExtraCreateParameter(v78, &ExtraCreateParameter);
      goto LABEL_307;
    }
LABEL_308:
    v117 = v116 != 0;
    if ( v78->IoStatus.Status == 260 )
    {
      if ( v116 )
      {
        v120 = P;
        if ( v119 )
          v117 = IopCheckAndUpdateStopOnSymlinkEcp(v119, LODWORD(v78->IoStatus.Information), P);
      }
      else
      {
        v120 = P;
      }
      IopSymlinkProcessReparse((__int64)v78, (__int64)v83, (__int64)v120, v117);
      v121 = v78->IoStatus.Information - 2684354563u;
      if ( v121 <= 0x16 )
      {
        v122 = 4194817LL;
        if ( _bittest64(&v122, v121) )
        {
          v123 = P;
          v124 = *((unsigned __int16 *)P + 3);
          v125 = 0;
          if ( !(_WORD)v124 )
            v125 = 16;
          v13 = v13 & 0xEF | v125;
          if ( (v13 & 0x10) == 0 && *(wchar_t *)((char *)SourceString->Buffer + SourceString->Length - v124) != 58 )
            goto LABEL_328;
          v126 = *(_DWORD *)(v115 + 64);
          if ( (v126 & 0x41) != 0 || *v210 )
            goto LABEL_328;
          if ( *(_DWORD *)P == -1610612733 )
            goto LABEL_326;
          if ( *(_DWORD *)P != -1610612724 )
            goto LABEL_328;
          if ( *((int *)P + 4) < 0 )
          {
LABEL_326:
            v127 = v126 | 1;
          }
          else
          {
            if ( (*((_DWORD *)P + 4) & 0x40000000) == 0 )
              goto LABEL_328;
            v127 = v126 | 0x40;
          }
          *(_DWORD *)(v115 + 64) = v127;
LABEL_328:
          if ( !v117 )
          {
            ExFreePoolWithTag(v123, 0);
            P = 0LL;
          }
        }
      }
    }
LABEL_330:
    v12 = v183;
    if ( v78->IoStatus.Status || *(_DWORD *)(v183 + 120) )
    {
      v135 = DeviceObject;
      goto LABEL_352;
    }
    v128 = 0LL;
    EcpContext = 0LL;
    if ( !ExtraCreateParameter )
      goto LABEL_335;
    IopSymlinkRemoveECP(ExtraCreateParameter, &EcpContext);
    v128 = EcpContext;
    if ( EcpContext )
    {
      if ( (*((_BYTE *)EcpContext + 2) & 1) == 0 )
        goto LABEL_344;
LABEL_335:
      if ( v128 )
        goto LABEL_342;
    }
    v129 = (__int64)v83->RelatedFileObject;
    if ( !v129 || (FileObjectExtension = IopGetFileObjectExtension(v129, 5, 0LL)) == 0 )
    {
LABEL_344:
      v134 = 0;
LABEL_345:
      if ( v128 )
      {
        IopSymlinkFreeRelatedMountPointChain((__int64)v128);
        FsRtlFreeExtraCreateParameter(v128);
      }
      goto LABEL_347;
    }
    v132 = AbsoluteObjectName->Length + 2;
    v133 = v132 + *(unsigned __int16 *)(FileObjectExtension + 16);
    if ( v133 >= 0xFFFF )
    {
      v134 = -1073741562;
      goto LABEL_345;
    }
    v134 = FsRtlAllocateExtraCreateParameterFromLookasideList(
             &IopSymlinkECPGuid,
             (unsigned __int16)(v132 + *(_WORD *)(FileObjectExtension + 16)) + 32,
             v130,
             (PFSRTL_EXTRA_CREATE_PARAMETER_CLEANUP_CALLBACK)IopSymlinkCleanupECP,
             &IopSymlinkInfoLookasideList,
             &EcpContext);
    v128 = EcpContext;
    if ( v134 < 0 )
      goto LABEL_345;
    IopSymlinkInitializeSymlinkInfo(
      (__int64)EcpContext,
      v133 + 32,
      AbsoluteObjectName->Buffer,
      AbsoluteObjectName->Length,
      0,
      *(void **)(FileObjectExtension + 24),
      *(_WORD *)(FileObjectExtension + 16),
      *(_WORD *)(FileObjectExtension + 4),
      *(_WORD *)(FileObjectExtension + 2),
      0LL);
    *v128 = *(_WORD *)FileObjectExtension + v128[8] - *(_WORD *)(FileObjectExtension + 16);
LABEL_342:
    v134 = IopSymlinkSetFoExtension((__int64)v83, (signed __int64)v128);
    if ( v134 < 0 )
      goto LABEL_345;
    IopSymlinkFreeRelatedMountPointChain((__int64)v128);
LABEL_347:
    v135 = DeviceObject;
    if ( v134 >= 0 )
    {
      v78 = Irp;
    }
    else
    {
      IoCancelFileOpen(DeviceObject, v83);
      v78 = Irp;
      Irp->IoStatus.Information = 0LL;
      v78->IoStatus.Status = v134;
    }
    v12 = v183;
LABEL_352:
    if ( ExtraCreateParameter )
      *(_QWORD *)(v12 + 168) = ExtraCreateParameter;
    *(_OWORD *)BugCheckParameter4 = *(_OWORD *)&v78->IoStatus.Status;
    v136 = _mm_cvtsi128_si32(*(__m128i *)BugCheckParameter4);
    v83->Event.Header.SignalState = 1;
    if ( (v13 & 4) != 0 )
    {
      v78->Tail.Overlay.Thread = CurrentThread;
      IopDequeueIrpFromThread(v78);
    }
    if ( (v78->Flags & 0x30) == 0x30 )
      ExFreePoolWithTag(v78->AssociatedIrp.MasterIrp, 0);
    IoFreeIrp(v78);
    v137 = BugCheckParameter4[1];
    *(_QWORD *)(v12 + 24) = BugCheckParameter4[1];
    if ( v136 < 0 )
    {
      if ( (v83->Flags & 0x200000) != 0 )
      {
        ObfDereferenceObject(v83);
        *(_QWORD *)(v12 + 8) = 0LL;
        *(_DWORD *)(v12 + 16) = v136;
        return (unsigned int)v136;
      }
      else
      {
        if ( v83->FileName.Length )
        {
          ExFreePoolWithTag(v83->FileName.Buffer, 0);
          v83->FileName.Length = 0;
        }
        v83->DeviceObject = 0LL;
        ObfDereferenceObject(v83);
        IopDecrementDeviceObjectRef((ULONG_PTR)Object, 0, 0);
        if ( v193 )
          IopDereferenceVpbAndFree(v193);
        *(_QWORD *)(v12 + 8) = 0LL;
        *(_DWORD *)(v12 + 16) = v136;
        return (unsigned int)v136;
      }
    }
    if ( v136 != 260 )
      break;
    if ( (v137 & 0xFFFFFFFFFFFFFFFDuLL) == 0
      || (v138 = v137 - 2684354563u, v137 - 2684354563u <= 0x16) && (v139 = 4194817LL, _bittest64(&v139, v138)) && !v117 )
    {
      v140 = v83->FileName.Length;
      v141 = AbsoluteObjectName;
      if ( AbsoluteObjectName->MaximumLength < v140 )
      {
        v142 = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v140, 0x63466F49u);
        if ( !v142 )
        {
          *(_DWORD *)(v183 + 16) = -1073741670;
          return 3221225626LL;
        }
        v143 = v141->Buffer;
        if ( v143 )
          ExFreePoolWithTag(v143, 0);
        v141->Buffer = v142;
        v141->MaximumLength = v83->FileName.Length;
        v12 = v183;
      }
      RtlCopyUnicodeString(v141, &v83->FileName);
      if ( BugCheckParameter4[1] - 2684354563u <= 0x16 )
      {
        v144 = 4194817LL;
        if ( _bittest64(&v144, BugCheckParameter4[1] - 2684354563u) )
          *(_QWORD *)(v12 + 40) = 0LL;
      }
    }
    if ( v83->FileName.Length )
    {
      ExFreePoolWithTag(v83->FileName.Buffer, 0);
      v83->FileName.Length = 0;
    }
    v83->DeviceObject = 0LL;
    ObfDereferenceObject(v83);
    *(_QWORD *)(v12 + 8) = 0LL;
    IopDecrementDeviceObjectRef((ULONG_PTR)Object, 0, 0);
    if ( v193 )
      IopDereferenceVpbAndFree(v193);
    v145 = BugCheckParameter4[1];
    if ( BugCheckParameter4[1] != 1 )
    {
      *(_QWORD *)(v12 + 40) = 0LL;
      v151 = 4194817LL;
      if ( v145 - 2684354563u <= 0x16 && _bittest64(&v151, v145 - 2684354563u) )
      {
        v152 = *(_DWORD *)(v12 + 152) | 0x10;
        *(_DWORD *)(v12 + 152) = v152;
        v153 = Object->DeviceType;
        if ( (unsigned int)v153 <= 0x24 && (v154 = 0x1080020084LL, _bittest64(&v154, v153)) )
          v156 = v152 | 8;
        else
          v156 = v152 & 0xFFFFFFF7;
        *(_DWORD *)(v12 + 152) = v156;
      }
      if ( *(_BYTE *)(v12 + 136) )
        KeBugCheckEx(0xF9u, (ULONG_PTR)Object, (ULONG_PTR)v135, (ULONG_PTR)AbsoluteObjectName, v145);
      if ( (Object->DeviceObjectExtension->ExtensionFlags & 0x800) == 0 )
      {
        *(_QWORD *)(a3 + 16) = *(unsigned int *)(a3 + 24);
        *(_DWORD *)(a3 + 12) &= ~0x100u;
      }
      if ( v145 - 2684354563u <= 0x16 && _bittest64(&v151, v145 - 2684354563u) && v117 )
      {
        *(_QWORD *)(v12 + 24) = P;
        *(_DWORD *)(v12 + 16) = -2147483603;
        return 2147483693LL;
      }
      else if ( v145 == 2684354585 || v145 == 2 )
      {
        v157 = v200;
        *(_QWORD *)(v157 + 8) = PsGetParentSilo(*(_QWORD *)(v200 + 8), v145, 4194817LL, -2684354563LL);
        return 872LL;
      }
      else
      {
        return 260LL;
      }
    }
    if ( (unsigned int)++v202 > 0x20 )
      return 3221225473LL;
    **(_QWORD **)&Size[1] = 0LL;
    v192 = 0LL;
    v11 = (unsigned int *)v207;
  }
  RelatedDeviceObject = IoGetRelatedDeviceObject(v83);
  if ( v135 != RelatedDeviceObject )
  {
    Vpb = (ULONG_PTR)v83->Vpb;
    v162 = v193;
    if ( Vpb != v193 )
    {
      if ( Vpb )
        IopIncrementVpbRefCount(Vpb, 1);
      if ( v162 )
        IopDereferenceVpbAndFree(v162);
    }
  }
  if ( (v13 & 0x40) != 0 )
  {
    if ( !*(_BYTE *)(v12 + 137) )
    {
LABEL_496:
      *(_DWORD *)(v12 + 32) = -1096154543;
      IopCloseFile(0LL, v83, 1LL, 1LL);
      ObfDereferenceObject(v83);
      *(_QWORD *)(v12 + 8) = 0LL;
      *(_DWORD *)(v12 + 16) = v136;
      return (unsigned int)v136;
    }
    if ( *(_BYTE *)(v12 + 208) )
    {
      XxxInformation = IopQueryXxxInformation(
                         v83,
                         *(_DWORD *)(v12 + 200),
                         *(_DWORD *)(v12 + 204),
                         0,
                         *(struct _IRP **)(v12 + 112),
                         (_DWORD *)(v12 + 204),
                         1);
LABEL_495:
      v136 = XxxInformation;
      goto LABEL_496;
    }
    v167 = 0;
    FastIoDispatch = RelatedDeviceObject->DriverObject->FastIoDispatch;
    v169 = v183;
    if ( *(_BYTE *)(v183 + 139) )
    {
      if ( FastIoDispatch )
      {
        if ( FastIoDispatch->SizeOfFastIoDispatch > 0x70 )
        {
          FastIoQueryNetworkOpenInfo = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))FastIoDispatch->FastIoQueryNetworkOpenInfo;
          if ( FastIoQueryNetworkOpenInfo )
          {
            v175 = (MmVerifierData & 0x10) != 0 ? (void *)VfFastIoSnapState(FastIoDispatch, v158, v159) : 0LL;
            LOBYTE(v158) = 1;
            v167 = FastIoQueryNetworkOpenInfo(
                     v83,
                     v158,
                     *(_QWORD *)(v169 + 104),
                     BugCheckParameter4,
                     RelatedDeviceObject);
            if ( v175 )
              VfFastIoCheckState(v175, (ULONG_PTR)FastIoQueryNetworkOpenInfo);
          }
        }
      }
      v60 = v167 == 0;
      v12 = v169;
      if ( !v60 )
        goto LABEL_496;
      v176 = IopQueryXxxInformation(v83, 0x22u, 0x38u, 0, *(struct _IRP **)(v169 + 104), Size, 1);
      v136 = v176;
      if ( v176 != -1073741811 && v176 != -1073741822 )
        goto LABEL_496;
      XxxInformation = IopGetNetworkOpenInformation(v83);
      goto LABEL_495;
    }
    v170 = 0LL;
    v201 = 0LL;
    if ( FastIoDispatch )
      FastIoQueryBasicInfo = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))FastIoDispatch->FastIoQueryBasicInfo;
    else
      FastIoQueryBasicInfo = 0LL;
    *(_QWORD *)&Size[1] = FastIoQueryBasicInfo;
    if ( FastIoQueryBasicInfo )
    {
      v172 = (MmVerifierData & 0x10) != 0 ? (void *)VfFastIoSnapState(FastIoDispatch, 0LL, v159) : 0LL;
      v211 = v172;
      LOBYTE(v170) = 1;
      v167 = FastIoQueryBasicInfo(v83, v170, *(_QWORD *)(v169 + 96), BugCheckParameter4, RelatedDeviceObject);
      v198 = v167;
      if ( v172 )
        VfFastIoCheckState(v172, (ULONG_PTR)FastIoQueryBasicInfo);
    }
    if ( v167 )
    {
      v136 = BugCheckParameter4[0];
    }
    else
    {
      Pool = (struct _IRP *)IopVerifierExAllocatePool(NonPagedPoolNx, 0x28uLL);
      v201 = Pool;
      if ( Pool )
      {
        v136 = IopQueryXxxInformation(v83, 4u, 0x28u, 0, Pool, Size, 1);
        AccessStatus = v136;
        if ( v136 >= 0 )
          memmove(*(void **)(v169 + 96), Pool, Size[0]);
        ExFreePoolWithTag(Pool, 0);
        goto LABEL_482;
      }
      v136 = -1073741670;
    }
    AccessStatus = v136;
LABEL_482:
    v12 = v183;
    goto LABEL_496;
  }
  **(_QWORD **)&Size[1] = v83;
  *(_DWORD *)(v12 + 32) = -1096154543;
  ObfReferenceObject(v83);
  v163 = v83->RelatedFileObject;
  if ( (!v163 || (v163->Flags & 0x400000) != 0) && !v83->FileName.Length )
  {
    v164 = RelatedDeviceObject->DeviceType;
    if ( (unsigned int)v164 <= 0x20 )
    {
      v165 = 0x100000308LL;
      if ( _bittest64(&v165, v164) )
        v83->Flags |= 0x400000u;
    }
  }
  result = LODWORD(BugCheckParameter4[0]);
LABEL_460:
  *(_DWORD *)(v12 + 16) = result;
  return result;
}
