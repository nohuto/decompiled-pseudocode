/*
 * XREFs of IopParseDevice @ 0x1404B86A0
 * Callers:
 *     IopParseFile @ 0x140570560 (IopParseFile.c)
 * Callees:
 *     MiDeleteSubsection @ 0x14000DDD0 (MiDeleteSubsection.c)
 *     ObfReferenceObjectWithTag @ 0x140024260 (ObfReferenceObjectWithTag.c)
 *     IopVerifierExAllocatePool @ 0x140024538 (IopVerifierExAllocatePool.c)
 *     IopGetDevicePDO @ 0x14002459C (IopGetDevicePDO.c)
 *     IopGetFileObjectExtension @ 0x14002469C (IopGetFileObjectExtension.c)
 *     IopGetSetSpecificExtension @ 0x140024EE4 (IopGetSetSpecificExtension.c)
 *     KeWaitForSingleObject @ 0x14006D2F0 (KeWaitForSingleObject.c)
 *     SeAccessCheck @ 0x14007E440 (SeAccessCheck.c)
 *     ExAcquireResourceSharedLite @ 0x1400800D0 (ExAcquireResourceSharedLite.c)
 *     IopQueueThreadIrp @ 0x140082130 (IopQueueThreadIrp.c)
 *     IopAllocateIrpExReturn @ 0x1400821E0 (IopAllocateIrpExReturn.c)
 *     IofCallDriver @ 0x140082560 (IofCallDriver.c)
 *     IoGetRelatedDeviceObject @ 0x1400828F0 (IoGetRelatedDeviceObject.c)
 *     ExReleaseResourceLite @ 0x1400830F0 (ExReleaseResourceLite.c)
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x140084290 (ObfReferenceObject.c)
 *     RtlInitUnicodeString @ 0x140085150 (RtlInitUnicodeString.c)
 *     RtlCopyUnicodeString @ 0x140085200 (RtlCopyUnicodeString.c)
 *     IopCheckDeviceAndDriver @ 0x140085280 (IopCheckDeviceAndDriver.c)
 *     IoFreeIrp @ 0x1400853A0 (IoFreeIrp.c)
 *     IoGetAttachedDevice @ 0x1400855C0 (IoGetAttachedDevice.c)
 *     IopCheckVpbMounted @ 0x1400855E0 (IopCheckVpbMounted.c)
 *     IopDequeueIrpFromThread @ 0x1400857A0 (IopDequeueIrpFromThread.c)
 *     KeInitializeEvent @ 0x140085860 (KeInitializeEvent.c)
 *     IopDecrementDeviceObjectRef @ 0x1400858D0 (IopDecrementDeviceObjectRef.c)
 *     PsIsHostSilo @ 0x1400859F0 (PsIsHostSilo.c)
 *     IopSymlinkRemoveECP @ 0x140085BE8 (IopSymlinkRemoveECP.c)
 *     SepPrivilegeCheck @ 0x140087BC0 (SepPrivilegeCheck.c)
 *     IopIncrementVpbRefCount @ 0x1400A4DCC (IopIncrementVpbRefCount.c)
 *     PsGetCurrentProcessSessionId @ 0x1400B08F0 (PsGetCurrentProcessSessionId.c)
 *     RtlGetActiveConsoleId @ 0x1400B16C0 (RtlGetActiveConsoleId.c)
 *     PsIsServerSilo @ 0x1400D4250 (PsIsServerSilo.c)
 *     PsGetServerSiloServiceSessionId @ 0x1400DF800 (PsGetServerSiloServiceSessionId.c)
 *     IopDeleteFileObjectExtension @ 0x1400E5250 (IopDeleteFileObjectExtension.c)
 *     IopDereferenceVpbAndFree @ 0x1400F1CE0 (IopDereferenceVpbAndFree.c)
 *     IoSetActivityIdThread @ 0x1400FB290 (IoSetActivityIdThread.c)
 *     KiCheckForKernelApcDelivery @ 0x140101370 (KiCheckForKernelApcDelivery.c)
 *     IoGetSilo @ 0x140110140 (IoGetSilo.c)
 *     IopSymlinkGetECP @ 0x140122AF8 (IopSymlinkGetECP.c)
 *     IopCreateSecurityCheck @ 0x140129858 (IopCreateSecurityCheck.c)
 *     IopSymlinkGetMostRecentlyUsedName @ 0x14014B834 (IopSymlinkGetMostRecentlyUsedName.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     memset @ 0x140192F40 (memset.c)
 *     IopCheckSessionDeviceAccess @ 0x1401F9F58 (IopCheckSessionDeviceAccess.c)
 *     IopAllowRemoteDASD @ 0x1401FCC8C (IopAllowRemoteDASD.c)
 *     PsAcquireSiloHardReference @ 0x14024D970 (PsAcquireSiloHardReference.c)
 *     PsReleaseSiloHardReference @ 0x14024DA30 (PsReleaseSiloHardReference.c)
 *     SeFastTraverseCheck @ 0x14025DED0 (SeFastTraverseCheck.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     SeOpenObjectAuditAlarmWithTransaction @ 0x140487F80 (SeOpenObjectAuditAlarmWithTransaction.c)
 *     IopQueryXxxInformation @ 0x14048FF44 (IopQueryXxxInformation.c)
 *     FsRtlAllocateExtraCreateParameterFromLookasideList @ 0x140492980 (FsRtlAllocateExtraCreateParameterFromLookasideList.c)
 *     SeLockSubjectContext @ 0x1404A6DD0 (SeLockSubjectContext.c)
 *     SeUnlockSubjectContext @ 0x1404B2450 (SeUnlockSubjectContext.c)
 *     IopAllocRealFileObject @ 0x1404BA930 (IopAllocRealFileObject.c)
 *     IopCloseFile @ 0x1404BAD60 (IopCloseFile.c)
 *     IoGetIrpExtraCreateParameter @ 0x1404BB290 (IoGetIrpExtraCreateParameter.c)
 *     IopRetrieveTransactionParameters @ 0x1404BB400 (IopRetrieveTransactionParameters.c)
 *     SePrivilegeCheck @ 0x1404C45D0 (SePrivilegeCheck.c)
 *     IopCheckTopDeviceHint @ 0x1404D4AA0 (IopCheckTopDeviceHint.c)
 *     SeIsAppContainerOrIdentifyLevelContext @ 0x1404F1C68 (SeIsAppContainerOrIdentifyLevelContext.c)
 *     SeTokenIsAdmin @ 0x140513270 (SeTokenIsAdmin.c)
 *     FsRtlFreeExtraCreateParameter @ 0x14053D630 (FsRtlFreeExtraCreateParameter.c)
 *     IopQueryInformation @ 0x14056B730 (IopQueryInformation.c)
 *     SeAppendPrivileges @ 0x14056D5D0 (SeAppendPrivileges.c)
 *     IopSymlinkUpdateECP @ 0x1405CD968 (IopSymlinkUpdateECP.c)
 *     IopSymlinkFreeRelatedMountPointChain @ 0x1405CDAB4 (IopSymlinkFreeRelatedMountPointChain.c)
 *     IopSymlinkProcessReparse @ 0x1405CDAF8 (IopSymlinkProcessReparse.c)
 *     IopSymlinkCreateECP @ 0x1405CE268 (IopSymlinkCreateECP.c)
 *     IopSymlinkInitializeSymlinkInfo @ 0x1405CE368 (IopSymlinkInitializeSymlinkInfo.c)
 *     IopSymlinkSetFoExtension @ 0x1405E0514 (IopSymlinkSetFoExtension.c)
 *     IopCancelAlertedRequest @ 0x1405EF31C (IopCancelAlertedRequest.c)
 *     IopGetNetworkOpenInformation @ 0x1405F1B78 (IopGetNetworkOpenInformation.c)
 *     IoCancelFileOpen @ 0x1406B6F90 (IoCancelFileOpen.c)
 *     IopSymlinkEnforceEnabledTypes @ 0x1406B8EE0 (IopSymlinkEnforceEnabledTypes.c)
 *     PsGetParentSilo @ 0x1407146F0 (PsGetParentSilo.c)
 *     VfFastIoCheckState @ 0x1407A9C74 (VfFastIoCheckState.c)
 *     VfFastIoSnapState @ 0x1407A9D54 (VfFastIoSnapState.c)
 */

__int64 __fastcall IopParseDevice(
        unsigned int *BugCheckParameter2,
        POBJECT_TYPE *a2,
        struct _ACCESS_STATE *a3,
        char a4,
        int a5,
        UNICODE_STRING *a6,
        const UNICODE_STRING *a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        _QWORD *a11)
{
  PACCESS_STATE v11; // rsi
  unsigned int *v12; // r13
  __int64 v13; // r15
  unsigned __int8 v14; // bl
  __int64 v15; // r9
  __int64 v16; // rdx
  unsigned int *v17; // r14
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rcx
  bool v20; // al
  __int64 result; // rax
  __int64 v22; // rax
  int ServerSiloServiceSessionId; // edi
  _DWORD *DevicePDO; // rax
  void *v25; // rdi
  POBJECT_TYPE *v26; // rcx
  int RemainingDesiredAccess; // eax
  ACCESS_MASK v28; // edx
  ACCESS_MASK v29; // edx
  ACCESS_MASK v30; // edx
  POBJECT_TYPE *v31; // rcx
  int OriginalDesiredAccess; // eax
  ACCESS_MASK v33; // edx
  ACCESS_MASK v34; // edx
  ACCESS_MASK v35; // edx
  ACCESS_MASK v36; // r13d
  char v37; // r9
  char v38; // r14
  int v39; // edx
  char v40; // r12
  char v41; // r15
  ULONG Flags; // ecx
  int v43; // edi
  PACCESS_TOKEN ClientToken; // rcx
  PACCESS_STATE v45; // rax
  int v46; // edi
  char v47; // dl
  __int64 v48; // rcx
  int v49; // r10d
  char v50; // bl
  __int64 *v51; // r12
  ULONG ActiveConsoleId; // edi
  int v53; // edi
  bool v54; // di
  char v55; // bl
  PACCESS_TOKEN PrimaryToken; // rcx
  struct _PRIVILEGE_SET *v57; // rsi
  PACCESS_STATE v58; // rdi
  ACCESS_MASK v59; // eax
  struct _KTHREAD *v60; // rcx
  bool v61; // zf
  struct _PRIVILEGE_SET *v62; // rdi
  char v63; // al
  char v64; // bl
  unsigned __int16 Length; // r8
  __int64 v66; // rsi
  __int64 v67; // rdx
  struct _DEVICE_OBJECT *AttachedDevice; // rdi
  _DWORD *v69; // r14
  __int64 v70; // rax
  int v71; // ecx
  struct _ACCESS_STATE *v72; // r14
  int v73; // r13d
  int v74; // eax
  PVOID v75; // rcx
  __int64 Irp; // rax
  __int64 v77; // r13
  int v78; // edx
  __int64 v79; // r14
  int v80; // eax
  char v81; // al
  int TransactionParameters; // edi
  PFILE_OBJECT v83; // r12
  _QWORD *v84; // rdi
  unsigned __int64 DeviceType; // rax
  __int64 v86; // rdx
  __int64 v87; // rdi
  __int64 RelatedFileObject; // rcx
  __int64 v89; // rax
  __int64 v90; // rdx
  _DWORD *Silo; // rdi
  int SetSpecificExtension; // eax
  _DWORD *v93; // rsi
  const UNICODE_STRING *v94; // rdi
  unsigned __int16 v95; // ax
  wchar_t *PoolWithTag; // rax
  NTSTATUS Information; // edi
  __int64 v98; // rcx
  PCUNICODE_STRING v99; // rdi
  wchar_t *Buffer; // rdx
  wchar_t *v101; // r8
  wchar_t *i; // r9
  signed __int64 v103; // r8
  wchar_t *v104; // rcx
  unsigned __int16 v105; // ax
  wchar_t *v106; // rax
  PVOID v107; // rsi
  __int16 *MostRecentlyUsedName; // rax
  int updated; // eax
  __int64 v110; // rcx
  PVOID v111; // rdi
  unsigned __int8 CurrentIrql; // dl
  struct _ECP_LIST *v113; // rsi
  _WORD *v114; // rdi
  int ECP; // eax
  unsigned __int64 v116; // rcx
  __int64 v117; // rax
  char v118; // cl
  _WORD *v119; // rdi
  NTSTATUS v120; // esi
  __int64 v121; // rcx
  __int64 FileObjectExtension; // rax
  FSRTL_ALLOCATE_ECP_FLAGS v123; // r8d
  __int64 v124; // r14
  int v125; // ecx
  unsigned int v126; // r15d
  PDEVICE_OBJECT v127; // r14
  ULONG_PTR v128; // rax
  unsigned __int64 v129; // rcx
  __int64 v130; // rax
  unsigned __int16 v131; // ax
  PUNICODE_STRING v132; // r13
  wchar_t *v133; // rsi
  wchar_t *v134; // rcx
  __int64 v135; // rax
  _QWORD *v136; // r13
  ULONG_PTR v137; // rdx
  PFILE_OBJECT v138; // rcx
  PFILE_OBJECT v139; // rbx
  PVOID v140; // rcx
  int v141; // ecx
  void *v142; // rcx
  __int64 v143; // r8
  int v144; // ecx
  unsigned __int64 v145; // rax
  __int64 v146; // r10
  unsigned int v147; // ecx
  PACCESS_STATE v148; // rcx
  __int64 v149; // rbx
  __int64 v150; // rdx
  __int64 v151; // r8
  PDEVICE_OBJECT RelatedDeviceObject; // r14
  ULONG_PTR Vpb; // rcx
  __int64 v154; // rsi
  struct _FILE_OBJECT *v155; // rax
  unsigned __int64 v156; // rax
  __int64 v157; // rcx
  NTSTATUS XxxInformation; // eax
  char v159; // si
  PFAST_IO_DISPATCH FastIoDispatch; // rcx
  __int64 (__fastcall *FastIoQueryBasicInfo)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD); // rbx
  void *v162; // rdi
  PVOID Pool; // rbx
  __int64 (__fastcall *FastIoQueryNetworkOpenInfo)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD); // r15
  void *v165; // rbx
  NTSTATUS v166; // eax
  int PreviouslyGrantedAccess; // [rsp+20h] [rbp-1A8h]
  int GenericMapping; // [rsp+30h] [rbp-198h]
  int AccessMode; // [rsp+38h] [rbp-190h]
  int GrantedAccess; // [rsp+40h] [rbp-188h]
  int v172; // [rsp+64h] [rbp-164h]
  NTSTATUS AccessStatus; // [rsp+68h] [rbp-160h] BYREF
  char v174; // [rsp+6Ch] [rbp-15Ch]
  char v175; // [rsp+6Dh] [rbp-15Bh]
  char v176[2]; // [rsp+6Eh] [rbp-15Ah] BYREF
  PVOID Object; // [rsp+70h] [rbp-158h]
  PACCESS_STATE AccessState; // [rsp+78h] [rbp-150h]
  PDEVICE_OBJECT DeviceObject; // [rsp+80h] [rbp-148h] BYREF
  int v180; // [rsp+88h] [rbp-140h]
  ACCESS_MASK v181; // [rsp+8Ch] [rbp-13Ch] BYREF
  PFILE_OBJECT FileObject; // [rsp+90h] [rbp-138h] BYREF
  PVOID EcpContext; // [rsp+98h] [rbp-130h] BYREF
  PUNICODE_STRING AbsoluteObjectName; // [rsp+A0h] [rbp-128h]
  __int64 v185; // [rsp+A8h] [rbp-120h]
  PCUNICODE_STRING SourceString; // [rsp+B0h] [rbp-118h]
  struct _KTHREAD *CurrentThread; // [rsp+B8h] [rbp-110h]
  __int64 v188; // [rsp+C0h] [rbp-108h]
  PPRIVILEGE_SET v189; // [rsp+C8h] [rbp-100h] BYREF
  char v190; // [rsp+D0h] [rbp-F8h]
  PVOID P; // [rsp+D8h] [rbp-F0h] BYREF
  int v192; // [rsp+E0h] [rbp-E8h]
  _DWORD Size[3]; // [rsp+E4h] [rbp-E4h] BYREF
  struct _ECP_LIST *ExtraCreateParameter; // [rsp+F0h] [rbp-D8h] BYREF
  __int64 v195; // [rsp+F8h] [rbp-D0h]
  ULONG_PTR BugCheckParameter4[2]; // [rsp+100h] [rbp-C8h] BYREF
  _DWORD *v197; // [rsp+110h] [rbp-B8h] BYREF
  _WORD *v198; // [rsp+118h] [rbp-B0h]
  struct _DEVICE_OBJECT *v199; // [rsp+120h] [rbp-A8h]
  UNICODE_STRING DestinationString; // [rsp+128h] [rbp-A0h] BYREF
  struct _ECP_LIST *v201; // [rsp+138h] [rbp-90h]
  void *v202; // [rsp+140h] [rbp-88h]
  __int64 v203; // [rsp+148h] [rbp-80h]
  _QWORD v204[2]; // [rsp+150h] [rbp-78h] BYREF
  int v205; // [rsp+160h] [rbp-68h]
  int v206; // [rsp+164h] [rbp-64h]
  struct _PRIVILEGE_SET Privileges; // [rsp+168h] [rbp-60h] BYREF
  __int128 v208; // [rsp+180h] [rbp-48h] BYREF

  v11 = a3;
  AccessState = a3;
  v12 = BugCheckParameter2;
  v199 = (struct _DEVICE_OBJECT *)BugCheckParameter2;
  v13 = a8;
  v185 = a8;
  v203 = a8;
  AbsoluteObjectName = a6;
  SourceString = a7;
  v195 = a10;
  *(_QWORD *)&Size[1] = a11;
  v192 = 0;
  LOBYTE(v180) = 0;
  v189 = 0LL;
  v198 = 0LL;
  if ( a2 != IoFileObjectType )
    return 3221225508LL;
  CurrentThread = KeGetCurrentThread();
  v14 = v176[0] & 0xE9 | 4;
  RtlInitUnicodeString(&DestinationString, L"File");
  *a11 = 0LL;
  FileObject = 0LL;
  if ( !a8 )
    return 3221225508LL;
  while ( 1 )
  {
    v15 = 0x60010000110040LL;
    v16 = 0x1080020084LL;
    if ( *(_WORD *)v13 != 8 || *(_WORD *)(v13 + 2) != 216 )
      return 3221225508LL;
    v17 = v12;
    Object = v12;
    if ( *(_DWORD *)(v13 + 32) == 1 )
    {
      *(_DWORD *)(v13 + 32) = -1096154543;
      *(_QWORD *)(v13 + 40) = v12;
      *(_DWORD *)(v13 + 16) = 0;
      ObfReferenceObject(v12);
      return 0LL;
    }
    if ( (*(_DWORD *)(v13 + 152) & 0x10) != 0 )
    {
      if ( *(_QWORD *)(v13 + 24) == 2684354563LL )
      {
        v18 = v12[18];
        if ( (unsigned int)v18 > 0x24 || !_bittest64(&v16, v18) )
          goto LABEL_359;
      }
      else
      {
        v19 = v12[18];
        LOBYTE(v16) = (unsigned int)v19 <= 0x24 && _bittest64(&v16, v19);
        v20 = (unsigned int)v19 <= 0x36 && _bittest64(&v15, v19);
        if ( !(_BYTE)v16 && !v20 )
        {
LABEL_359:
          *(_DWORD *)(v13 + 16) = -1073741192;
          return 3221226104LL;
        }
        result = IopSymlinkEnforceEnabledTypes(*(_BYTE *)(v13 + 152) & 8, v16, *(_QWORD *)(v13 + 168));
        if ( (int)result < 0 )
          goto LABEL_382;
      }
    }
    v22 = *(_QWORD *)(v13 + 40);
    if ( v22 )
    {
      v17 = *(unsigned int **)(v22 + 8);
      Object = v17;
    }
    result = IopCheckDeviceAndDriver(v13, (ULONG_PTR)v17);
    v172 = result;
    AccessStatus = result;
    if ( (int)result < 0 )
      goto LABEL_382;
    if ( (*(_DWORD *)(*((_QWORD *)v17 + 39) + 32LL) & 0x400) != 0 && !*(_QWORD *)(v13 + 40) )
    {
      ServerSiloServiceSessionId = PsGetServerSiloServiceSessionId(-1LL);
      if ( ServerSiloServiceSessionId != (unsigned int)PsGetCurrentProcessSessionId()
        || IopSessionZeroAccessCheckEnabled && (*(_DWORD *)(v13 + 64) & 0x40000) == 0 )
      {
        DevicePDO = IopGetDevicePDO((__int64)v17);
        v25 = DevicePDO;
        if ( DevicePDO )
        {
          if ( !IopCheckSessionDeviceAccess((__int64)DevicePDO) )
          {
            ObfDereferenceObject(v25);
            IopDecrementDeviceObjectRef((ULONG_PTR)v17, 0);
            *(_DWORD *)(v13 + 16) = -1073741790;
            return 3221225506LL;
          }
          ObfDereferenceObject(v25);
        }
      }
    }
    v26 = IoFileObjectType;
    RemainingDesiredAccess = v11->RemainingDesiredAccess;
    if ( RemainingDesiredAccess < 0 )
      v11->RemainingDesiredAccess = *((_DWORD *)IoFileObjectType + 19) | RemainingDesiredAccess;
    v28 = v11->RemainingDesiredAccess;
    if ( (v28 & 0x40000000) != 0 )
      v11->RemainingDesiredAccess = v28 | *((_DWORD *)v26 + 20);
    v29 = v11->RemainingDesiredAccess;
    if ( (v29 & 0x20000000) != 0 )
      v11->RemainingDesiredAccess = v29 | *((_DWORD *)v26 + 21);
    v30 = v11->RemainingDesiredAccess;
    if ( (v30 & 0x10000000) != 0 )
      v11->RemainingDesiredAccess = v30 | *((_DWORD *)v26 + 22);
    v11->RemainingDesiredAccess &= 0xFFFFFFFu;
    v31 = IoFileObjectType;
    OriginalDesiredAccess = v11->OriginalDesiredAccess;
    if ( OriginalDesiredAccess < 0 )
      v11->OriginalDesiredAccess = *((_DWORD *)IoFileObjectType + 19) | OriginalDesiredAccess;
    v33 = v11->OriginalDesiredAccess;
    if ( (v33 & 0x40000000) != 0 )
      v11->OriginalDesiredAccess = v33 | *((_DWORD *)v31 + 20);
    v34 = v11->OriginalDesiredAccess;
    if ( (v34 & 0x20000000) != 0 )
      v11->OriginalDesiredAccess = v34 | *((_DWORD *)v31 + 21);
    v35 = v11->OriginalDesiredAccess;
    if ( (v35 & 0x10000000) != 0 )
      v11->OriginalDesiredAccess = v35 | *((_DWORD *)v31 + 22);
    v11->OriginalDesiredAccess &= 0xFFFFFFFu;
    *(_OWORD *)((char *)v11->AuxData + 8) = *(_OWORD *)((char *)IoFileObjectType + 76);
    v36 = v11->RemainingDesiredAccess;
    LODWORD(EcpContext) = v36;
    v37 = a4;
    v38 = a4 || (*(_DWORD *)(v13 + 84) & 1) != 0;
    v39 = *(_DWORD *)(v13 + 88);
    v40 = 0;
    v41 = 0;
    Flags = v11->Flags;
    if ( (Flags & 0x100) != 0 )
    {
      v13 = v185;
      goto LABEL_79;
    }
    if ( (*(_DWORD *)(v185 + 64) & 0x4000) == 0 )
    {
      v13 = v185;
      goto LABEL_79;
    }
    v11->Flags = Flags | 0x100;
    v43 = v36;
    if ( (v36 & 0x2000000) != 0 )
      v43 = v36 | 0x11F01BF;
    if ( ((v39 - 1) & 0xFFFFFFF9) != 0 || v39 == 7 )
    {
      v41 = 1;
    }
    else
    {
      if ( (v43 & 0x11200A9) == 0 )
      {
        v11 = AccessState;
        goto LABEL_71;
      }
      Privileges.PrivilegeCount = 1;
      Privileges.Control = 1;
      Privileges.Privilege[0].Luid = SeBackupPrivilege;
      Privileges.Privilege[0].Attributes = 0;
      if ( v38 )
      {
        ClientToken = AccessState->SubjectSecurityContext.ClientToken;
        if ( ClientToken )
        {
          if ( AccessState->SubjectSecurityContext.ImpersonationLevel < SecurityImpersonation )
          {
            v11 = AccessState;
            goto LABEL_71;
          }
        }
        else
        {
          ClientToken = AccessState->SubjectSecurityContext.PrimaryToken;
        }
        if ( !SepPrivilegeCheck((__int64)ClientToken, (__int64)Privileges.Privilege, 1u, 1, v38) )
        {
          v11 = AccessState;
          goto LABEL_71;
        }
      }
      v40 = 1;
      SeAppendPrivileges(AccessState, &Privileges);
      v45 = AccessState;
      AccessState->PreviouslyGrantedAccess |= v43 & 0x11200A9;
      v11 = v45;
      v45->RemainingDesiredAccess &= 0xFEEDFF56;
      v43 &= 0xFEEDFF56;
      v45->Flags |= 2u;
    }
LABEL_71:
    v46 = v43 & 0x11F0116;
    if ( v46 || v41 )
    {
      Privileges.PrivilegeCount = 1;
      Privileges.Control = 1;
      Privileges.Privilege[0].Luid = SeRestorePrivilege;
      Privileges.Privilege[0].Attributes = 0;
      if ( SePrivilegeCheck(&Privileges, &v11->SubjectSecurityContext, v38) )
      {
        v40 = 1;
        SeAppendPrivileges(v11, &Privileges);
        v11->PreviouslyGrantedAccess |= v46;
        v11->RemainingDesiredAccess &= 0xFEE0FEE9;
        v11->Flags |= 4u;
      }
    }
    v13 = v185;
    v37 = a4;
    if ( !v40 )
      *(_DWORD *)(v185 + 64) &= ~0x4000u;
LABEL_79:
    v47 = *(_BYTE *)(v13 + 136);
    if ( v47 && !SourceString->Length || (v11->Flags & 0x100) != 0 )
    {
      v36 |= v11->PreviouslyGrantedAccess;
      LODWORD(EcpContext) = v36;
    }
    v48 = *(_QWORD *)(v13 + 40);
    LOBYTE(v49) = v180;
    if ( v48 && (*(_DWORD *)(v48 + 80) & 0x400000) != 0 )
    {
      v49 = (unsigned __int8)v180;
      if ( !SourceString->Length )
        v49 = 1;
      v180 = v49;
    }
    if ( !v37 && (*(_DWORD *)(v13 + 84) & 1) == 0 || v48 && !(_BYTE)v49 || v47 )
      goto LABEL_135;
    v50 = v14 & 0xDF;
    v51 = (__int64 *)Object;
    if ( SourceString->Length )
    {
      if ( (*((_DWORD *)Object + 13) & 0x20100) != 0x20000 )
      {
        if ( v37 )
        {
          v174 = 0;
          SeIsAppContainerOrIdentifyLevelContext(&v11->SubjectSecurityContext);
          if ( v174 )
          {
            v14 = (v50 ^ IopCreateSecurityCheck(
                           (__int64)v51,
                           0LL,
                           v11,
                           v36 | 0x20,
                           1,
                           v189,
                           &v181,
                           AbsoluteObjectName,
                           &DestinationString,
                           (__int64)CurrentThread,
                           0)) & 1 ^ v50;
            goto LABEL_131;
          }
        }
      }
      if ( (v11->Flags & 1) != 0 )
      {
        v14 = v50 | 1;
        goto LABEL_131;
      }
      --CurrentThread->KernelApcDisable;
      ExAcquireResourceSharedLite(&IopSecurityResource, 1u);
      v14 = (v50 ^ SeFastTraverseCheck(v51[34], (__int64)v11, 32)) & 1 ^ v50;
      if ( (v14 & 1) == 0 )
      {
        v189 = 0LL;
        SeLockSubjectContext(&v11->SubjectSecurityContext);
        v14 = ((v14 | 0x20) ^ SeAccessCheck(
                                (PSECURITY_DESCRIPTOR)v51[34],
                                &v11->SubjectSecurityContext,
                                1u,
                                0x20u,
                                0,
                                &v189,
                                (PGENERIC_MAPPING)((char *)IoFileObjectType + 76),
                                1,
                                &v181,
                                &AccessStatus)) & 1 ^ (v14 | 0x20);
        v62 = v189;
        if ( v189 )
        {
          SeAppendPrivileges(v11, v189);
          MiDeleteSubsection(v62);
        }
        v172 = AccessStatus;
      }
      ExReleaseResourceLite(&IopSecurityResource);
      v60 = CurrentThread;
      v61 = CurrentThread->KernelApcDisable++ == -1;
      if ( !v61
        || ($B476B70DB57F76B110DA5B9238C3E934 *)v60->ApcState.ApcListHead[0].Flink == &v60->152
        || v60->SpecialApcDisable )
      {
        goto LABEL_131;
      }
    }
    else
    {
      v54 = 0;
      if ( (*((_DWORD *)Object + 13) & 0x40001) != 0 && (v36 & 0xFFEDFF7F) != 0 )
      {
        ActiveConsoleId = RtlGetActiveConsoleId();
        if ( ActiveConsoleId != (unsigned int)PsGetCurrentProcessSessionId() )
        {
          v53 = PsGetServerSiloServiceSessionId(-1LL);
          if ( v53 != (unsigned int)PsGetCurrentProcessSessionId() && !IopAllowRemoteDASD() )
            v54 = 1;
        }
      }
      v189 = 0LL;
      --CurrentThread->KernelApcDisable;
      ExAcquireResourceSharedLite(&IopSecurityResource, 1u);
      SeLockSubjectContext(&v11->SubjectSecurityContext);
      v55 = v50 | 0x20;
      if ( !v54 )
        goto LABEL_106;
      PrimaryToken = v11->SubjectSecurityContext.ClientToken;
      if ( !PrimaryToken )
        PrimaryToken = AccessState->SubjectSecurityContext.PrimaryToken;
      if ( SeTokenIsAdmin(PrimaryToken) )
      {
LABEL_106:
        v14 = (v55 ^ SeAccessCheck(
                       (PSECURITY_DESCRIPTOR)v51[34],
                       &v11->SubjectSecurityContext,
                       (v55 & 0x20) != 0,
                       v36,
                       0,
                       &v189,
                       (PGENERIC_MAPPING)((char *)IoFileObjectType + 76),
                       1,
                       &v181,
                       &AccessStatus)) & 1 ^ v55;
        v57 = v189;
        v58 = AccessState;
        if ( v189 )
        {
          SeAppendPrivileges(AccessState, v189);
          MiDeleteSubsection(v57);
        }
        if ( (v14 & 1) != 0 )
        {
          v59 = v181;
          v58->PreviouslyGrantedAccess |= v181;
          v58->RemainingDesiredAccess &= ~(v59 | 0x2000000);
          *(_BYTE *)(v13 + 136) = 1;
        }
        v172 = AccessStatus;
      }
      else
      {
        v14 = v55 & 0xFE;
        v172 = -1073741790;
        AccessStatus = -1073741790;
      }
      v11 = AccessState;
      SeOpenObjectAuditAlarmWithTransaction(
        &DestinationString,
        v51,
        AbsoluteObjectName,
        (PSECURITY_DESCRIPTOR)v51[34],
        AccessState,
        0,
        v14 & 1,
        1,
        0LL,
        &AccessState->GenerateOnClose);
      ExReleaseResourceLite(&IopSecurityResource);
      v60 = CurrentThread;
      v61 = CurrentThread->KernelApcDisable++ == -1;
      if ( !v61
        || ($B476B70DB57F76B110DA5B9238C3E934 *)v60->ApcState.ApcListHead[0].Flink == &v60->152
        || v60->SpecialApcDisable )
      {
        goto LABEL_131;
      }
    }
    KiCheckForKernelApcDelivery((__int64)v60);
LABEL_131:
    if ( (v14 & 0x20) != 0 )
      SeUnlockSubjectContext(&v11->SubjectSecurityContext);
    if ( (v14 & 1) == 0 )
    {
      IopDecrementDeviceObjectRef((ULONG_PTR)v51, 0);
      return 3221225506LL;
    }
    v37 = a4;
LABEL_135:
    v63 = *(_BYTE *)(v13 + 137) || *(_BYTE *)(v13 + 138) ? 64 : 0;
    v64 = v63 | v14 & 0xBF;
    Length = SourceString->Length;
    if ( SourceString->Length || *(_QWORD *)(v13 + 40) || (v36 & 0xFEE1FF7F) != 0 || (v64 & 0x40) != 0 )
      v14 = v64 & 0xF7;
    else
      v14 = v64 | 8;
    v66 = 0LL;
    v188 = 0LL;
    v67 = *(_QWORD *)(v13 + 40);
    if ( !v67 || (*(_DWORD *)(v67 + 80) & 0x800) != 0 )
    {
      v69 = Object;
      AttachedDevice = (struct _DEVICE_OBJECT *)Object;
      DeviceObject = (PDEVICE_OBJECT)Object;
      if ( *((_QWORD *)Object + 7) && (v14 & 8) == 0 )
      {
        if ( (*((_DWORD *)Object + 13) & 0x100) != 0
          && (*(_DWORD *)(*((_QWORD *)Object + 39) + 32LL) & 0x800) == 0
          && (v37 || (*(_DWORD *)(v13 + 84) & 1) != 0)
          && (v67 || Length)
          && !(_BYTE)v180 )
        {
          v189 = 0LL;
          if ( !IopCreateSecurityCheck(
                  (__int64)Object,
                  Object,
                  AccessState,
                  v36,
                  *(_DWORD *)(v13 + 88),
                  0LL,
                  &v181,
                  AbsoluteObjectName,
                  &DestinationString,
                  (__int64)CurrentThread,
                  0) )
          {
LABEL_362:
            IopDecrementDeviceObjectRef((ULONG_PTR)v69, 0);
            return 3221225506LL;
          }
        }
        v70 = IopCheckVpbMounted(v13, (ULONG_PTR)v69, (__int64)SourceString, &AccessStatus);
        v66 = v70;
        v188 = v70;
        if ( !v70 )
          return (unsigned int)AccessStatus;
        AttachedDevice = *(struct _DEVICE_OBJECT **)(v70 + 8);
        DeviceObject = AttachedDevice;
        v172 = AccessStatus;
      }
      if ( (*(_DWORD *)(v13 + 152) & 1) != 0 )
      {
        v14 |= 2u;
      }
      else if ( AttachedDevice->AttachedDevice )
      {
        AttachedDevice = IoGetAttachedDevice(AttachedDevice);
        DeviceObject = AttachedDevice;
      }
    }
    else
    {
      AttachedDevice = v199;
      DeviceObject = v199;
      v69 = Object;
      if ( *(_QWORD *)(v67 + 16) )
      {
        v66 = *(_QWORD *)(v67 + 16);
        v188 = v66;
        if ( (*((_DWORD *)Object + 13) & 0x100) != 0
          && (*(_DWORD *)(*((_QWORD *)Object + 39) + 32LL) & 0x800) == 0
          && (v37 || (*(_DWORD *)(v13 + 84) & 1) != 0)
          && !(_BYTE)v180 )
        {
          v189 = 0LL;
          if ( !IopCreateSecurityCheck(
                  (__int64)Object,
                  Object,
                  AccessState,
                  v36,
                  *(_DWORD *)(v13 + 88),
                  0LL,
                  &v181,
                  AbsoluteObjectName,
                  &DestinationString,
                  (__int64)CurrentThread,
                  0) )
            goto LABEL_362;
        }
        IopIncrementVpbRefCount(v66, 1);
      }
      if ( (*(_DWORD *)(v13 + 152) & 1) != 0 )
      {
        if ( v66 )
        {
          AttachedDevice = *(struct _DEVICE_OBJECT **)(v66 + 8);
          DeviceObject = AttachedDevice;
        }
        v14 |= 2u;
      }
    }
    v71 = v69[13];
    if ( (v71 & 0x40001) == 0 || (v69[12] & 0x600100) != 0 )
    {
      v72 = AccessState;
    }
    else
    {
      v72 = AccessState;
      if ( (v71 & 0x100) == 0 )
      {
        v175 = 0;
        SeIsAppContainerOrIdentifyLevelContext(&AccessState->SubjectSecurityContext);
        if ( v175 )
        {
          if ( !v66 )
            goto LABEL_365;
          if ( (*(_DWORD *)(*(_QWORD *)(v66 + 8) + 48LL) & 0x20000) == 0 )
          {
            IopDereferenceVpbAndFree(v66);
LABEL_365:
            IopDecrementDeviceObjectRef((ULONG_PTR)Object, 0);
            return 3221225506LL;
          }
        }
      }
    }
    if ( (v14 & 2) != 0 )
    {
      v73 = IopCheckTopDeviceHint(&DeviceObject, v13, (v14 & 8) != 0, SourceString);
      v172 = v73;
      if ( v73 < 0 )
      {
        if ( v66 )
          IopDereferenceVpbAndFree(v66);
        IopDecrementDeviceObjectRef((ULONG_PTR)Object, 0);
        return (unsigned int)v73;
      }
      AttachedDevice = DeviceObject;
      v36 = (unsigned int)EcpContext;
    }
    v74 = *(_DWORD *)(v13 + 152);
    if ( (v74 & 0x10) != 0 )
      *(_DWORD *)(v13 + 152) = v74 & 0xFFFFFFEF;
    if ( (AttachedDevice->Characteristics & 0x100) != 0 )
    {
      v75 = Object;
    }
    else
    {
      if ( !IopRequireDeviceAccessCheck )
        goto LABEL_199;
      v75 = Object;
      if ( (*((_DWORD *)Object + 13) & 0x100000) == 0 )
        goto LABEL_199;
    }
    if ( (a4 || (*(_DWORD *)(v13 + 84) & 1) != 0) && (*(_QWORD *)(v13 + 40) || SourceString->Length) && !(_BYTE)v180 )
    {
      v189 = 0LL;
      if ( !IopCreateSecurityCheck(
              (__int64)v75,
              AttachedDevice,
              v72,
              v36,
              *(_DWORD *)(v13 + 88),
              0LL,
              &v181,
              AbsoluteObjectName,
              &DestinationString,
              (__int64)CurrentThread,
              1) )
      {
        IopDecrementDeviceObjectRef((ULONG_PTR)Object, 0);
        if ( v66 )
          IopDereferenceVpbAndFree(v66);
        return 3221225506LL;
      }
    }
LABEL_199:
    Irp = IopAllocateIrpExReturn();
    v77 = Irp;
    if ( !Irp )
    {
      IopDecrementDeviceObjectRef((ULONG_PTR)Object, 0);
      if ( v66 )
        IopDereferenceVpbAndFree(v66);
      return 3221225626LL;
    }
    *(_QWORD *)(Irp + 152) = CurrentThread;
    *(_BYTE *)(Irp + 64) = a4;
    *(_DWORD *)(Irp + 16) = 2180;
    v204[0] = a9;
    v204[1] = v72;
    v78 = (int)EcpContext;
    v205 = (int)EcpContext;
    v206 = *(_DWORD *)(v13 + 64);
    v79 = *(_QWORD *)(Irp + 184);
    *(_BYTE *)(v79 - 69) = 0;
    v80 = *(_DWORD *)(v13 + 120);
    if ( v80 )
    {
      if ( v80 == 1 )
        *(_BYTE *)(v79 - 72) = 1;
      else
        *(_BYTE *)(v79 - 72) = 19;
      *(_QWORD *)(v79 - 40) = *(_QWORD *)(v13 + 128);
    }
    else
    {
      *(_BYTE *)(v79 - 72) = 0;
      *(_DWORD *)(v79 - 40) = *(_DWORD *)(v13 + 80);
      v81 = *(_BYTE *)(v13 + 84);
      *(_BYTE *)(v79 - 70) = v81;
      if ( (a5 & 0x40) == 0 )
        *(_BYTE *)(v79 - 70) = v81 | 0x80;
    }
    *(_QWORD *)(v77 + 88) = *(_QWORD *)(v13 + 56);
    *(_QWORD *)(v77 + 24) = *(_QWORD *)(v13 + 72);
    *(_DWORD *)(v79 - 56) = (*(_DWORD *)(v13 + 88) << 24) | *(_DWORD *)(v13 + 64) & 0xFFFFFF;
    *(_WORD *)(v79 - 48) = *(_WORD *)(v13 + 68);
    *(_WORD *)(v79 - 46) = *(_WORD *)(v13 + 70);
    *(_QWORD *)(v79 - 64) = v204;
    *(_QWORD *)(v77 + 112) = *(_QWORD *)(v13 + 168);
    *(_QWORD *)(v77 + 72) = BugCheckParameter4;
    *(_QWORD *)(v77 + 8) = 0LL;
    *(_BYTE *)(v77 + 65) = 0;
    *(_BYTE *)(v77 + 68) = 0;
    *(_QWORD *)(v77 + 80) = 0LL;
    *(_QWORD *)(v77 + 104) = 0LL;
    *(_QWORD *)(v77 + 160) = 0LL;
    if ( !*(_BYTE *)(v13 + 137) )
    {
      TransactionParameters = IopAllocRealFileObject(
                                (unsigned int)&FileObject,
                                (_DWORD)AttachedDevice,
                                (_DWORD)Object,
                                a5,
                                a4,
                                v13,
                                v195,
                                0,
                                v78);
      v172 = TransactionParameters;
      if ( TransactionParameters < 0 )
      {
        IoFreeIrp((PIRP)v77);
        IopDecrementDeviceObjectRef((ULONG_PTR)Object, 0);
        if ( v66 )
          IopDereferenceVpbAndFree(v66);
        v138 = FileObject;
        if ( FileObject )
        {
          FileObject->DeviceObject = 0LL;
          ObfDereferenceObject(v138);
        }
        goto LABEL_376;
      }
      v83 = FileObject;
      goto LABEL_231;
    }
    v84 = *(_QWORD **)(v13 + 144);
    memset(v84, 0, 0x110uLL);
    v83 = (PFILE_OBJECT)(v84 + 6);
    FileObject = (PFILE_OBJECT)(v84 + 6);
    *((_BYTE *)v84 + 24) = ObHeaderCookie ^ *((_BYTE *)IoFileObjectType + 40) ^ BYTE1(v84);
    *v84 = 1LL;
    if ( (a5 & 0x40) == 0 )
      *((_DWORD *)v84 + 32) |= 0x20000u;
    *(_DWORD *)&v83->Type = 14155781;
    v84[14] = *(_QWORD *)(v13 + 40);
    v84[7] = Object;
    if ( (*(_DWORD *)(v13 + 152) & 0x20) != 0 )
    {
      if ( a4 )
      {
        if ( (DeviceObject->Flags & 0x40000) != 0
          || (DeviceType = DeviceObject->DeviceType, (unsigned int)DeviceType <= 0x35)
          && (v86 = 0x20000100100108LL, _bittest64(&v86, DeviceType)) )
        {
          TransactionParameters = IopRetrieveTransactionParameters(DeviceObject, v13, (unsigned int)EcpContext, v84 + 6);
          v172 = TransactionParameters;
          if ( TransactionParameters < 0 )
          {
            IoFreeIrp((PIRP)v77);
            IopDecrementDeviceObjectRef((ULONG_PTR)Object, 0);
            if ( v66 )
            {
              IopDereferenceVpbAndFree(v66);
              *(_DWORD *)(v13 + 16) = TransactionParameters;
              return (unsigned int)TransactionParameters;
            }
LABEL_376:
            *(_DWORD *)(v13 + 16) = TransactionParameters;
            return (unsigned int)TransactionParameters;
          }
        }
      }
    }
    v87 = v195;
    if ( !PsIsHostSilo(*(_QWORD *)(v195 + 8))
      || (RelatedFileObject = (__int64)v83->RelatedFileObject) != 0
      && (v89 = IoGetSilo(RelatedFileObject), !PsIsHostSilo(v89)) )
    {
      v197 = 0LL;
      if ( v83->RelatedFileObject && PsIsServerSilo(*(_QWORD *)(v87 + 8)) )
        Silo = (_DWORD *)IoGetSilo(v90);
      else
        Silo = *(_DWORD **)(v87 + 8);
      if ( !PsIsHostSilo((__int64)Silo) )
        break;
    }
LABEL_231:
    if ( (v14 & 8) != 0 )
      v83->Flags |= 0x800u;
    *(_QWORD *)(v77 + 192) = v83;
    *(_QWORD *)(v79 - 24) = v83;
    v94 = SourceString;
    v95 = SourceString->Length;
    if ( SourceString->Length )
    {
      if ( v95 >= 0x38u )
      {
        if ( v95 >= 0x78u )
        {
          if ( v95 < 0xF8u )
            v95 = 248;
        }
        else
        {
          v95 = 120;
        }
      }
      else
      {
        v95 = 56;
      }
      v83->FileName.MaximumLength = v95;
      PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v95, 0x6D4E6F49u);
      v83->FileName.Buffer = PoolWithTag;
      if ( !PoolWithTag )
      {
        IoFreeIrp((PIRP)v77);
        IopDecrementDeviceObjectRef((ULONG_PTR)Object, 0);
        if ( v188 )
          IopDereferenceVpbAndFree(v188);
        v83->DeviceObject = 0LL;
        if ( !*(_BYTE *)(v13 + 137) )
        {
          ObfDereferenceObject(v83);
          return 3221225626LL;
        }
        return 3221225626LL;
      }
    }
    RtlCopyUnicodeString(&v83->FileName, v94);
    if ( *(_BYTE *)(v13 + 137) )
    {
      Information = IopQueryInformation(v13, (_DWORD)DeviceObject, v77, (int)v79 - 72, (__int64)v176);
      if ( Information < 0 || v176[0] )
      {
        v141 = *(_DWORD *)(v77 + 48);
        *(_DWORD *)(v13 + 16) = v141;
        *(_QWORD *)(v13 + 24) = *(_QWORD *)(v77 + 56);
        if ( v141 == 260 )
        {
          v142 = *(void **)(v77 + 160);
          if ( v142 )
          {
            ExFreePoolWithTag(v142, 0);
            *(_QWORD *)(v77 + 160) = 0LL;
            *(_QWORD *)(v13 + 40) = 0LL;
          }
        }
        if ( v83->FileName.Length )
          ExFreePoolWithTag(v83->FileName.Buffer, 0);
        if ( v83->FileObjectExtension )
          IopDeleteFileObjectExtension(v83);
        v140 = Object;
        goto LABEL_405;
      }
      v98 = v83->FileName.Length;
      v99 = SourceString;
      if ( (_DWORD)v98 == SourceString->Length )
      {
        Buffer = v83->FileName.Buffer;
        v101 = SourceString->Buffer;
        for ( i = (wchar_t *)((char *)Buffer + v98); (unsigned int)v98 >= 8; v101 += 4 )
        {
          if ( *(_QWORD *)Buffer != *(_QWORD *)v101 )
            break;
          LODWORD(v98) = v98 - 8;
          if ( !(_DWORD)v98 )
            goto LABEL_265;
          Buffer += 4;
        }
        if ( Buffer >= i )
        {
LABEL_265:
          v107 = Object;
          Information = IopAllocRealFileObject(
                          (unsigned int)&FileObject,
                          (_DWORD)DeviceObject,
                          (_DWORD)Object,
                          a5,
                          a4,
                          v13,
                          v195,
                          1,
                          (_DWORD)EcpContext);
          v172 = Information;
          if ( Information >= 0 )
          {
            v83 = FileObject;
            *(_QWORD *)(v79 - 24) = FileObject;
            *(_QWORD *)(v77 + 192) = v83;
            v94 = SourceString;
            goto LABEL_267;
          }
          v139 = FileObject;
          if ( FileObject->FileName.Length )
            ExFreePoolWithTag(FileObject->FileName.Buffer, 0);
          if ( v139->FileObjectExtension )
            IopDeleteFileObjectExtension(v139);
          v140 = v107;
LABEL_405:
          IopDecrementDeviceObjectRef((ULONG_PTR)v140, 0);
          if ( v188 )
            IopDereferenceVpbAndFree(v188);
          IoFreeIrp((PIRP)v77);
          return (unsigned int)Information;
        }
        v103 = (char *)v101 - (char *)Buffer;
        while ( *Buffer == *(wchar_t *)((char *)Buffer + v103) )
        {
          if ( ++Buffer >= i )
            goto LABEL_265;
        }
      }
      v104 = v83->FileName.Buffer;
      if ( v104 )
      {
        ExFreePoolWithTag(v104, 0);
        RtlInitUnicodeString(&v83->FileName, 0LL);
      }
      v105 = v99->Length;
      if ( v99->Length )
      {
        if ( v105 >= 0x38u )
        {
          if ( v105 >= 0x78u )
          {
            if ( v105 < 0xF8u )
              v105 = 248;
          }
          else
          {
            v105 = 120;
          }
        }
        else
        {
          v105 = 56;
        }
        v83->FileName.MaximumLength = v105;
        v106 = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v105, 0x6D4E6F49u);
        v83->FileName.Buffer = v106;
        if ( !v106 )
        {
          if ( v83->FileObjectExtension )
            IopDeleteFileObjectExtension(v83);
          IopDecrementDeviceObjectRef((ULONG_PTR)Object, 0);
          if ( v188 )
            IopDereferenceVpbAndFree(v188);
          IoFreeIrp((PIRP)v77);
          return 3221225626LL;
        }
        RtlCopyUnicodeString(&v83->FileName, v99);
      }
      goto LABEL_265;
    }
LABEL_267:
    if ( !*(_DWORD *)(v13 + 120) )
    {
      if ( (*(_DWORD *)(v77 + 16) & 0x80u) != 0 )
      {
        v201 = *(struct _ECP_LIST **)(v77 + 112);
        v172 = 0;
      }
      else
      {
        v172 = -1073741811;
      }
      if ( v201 )
      {
        if ( IopSymlinkGetECP(v201, &P) != -1073741275 )
        {
          MostRecentlyUsedName = (__int16 *)IopSymlinkGetMostRecentlyUsedName((__int64)P);
          if ( !MostRecentlyUsedName[2] )
          {
            updated = IopSymlinkUpdateECP(
                        (PIRP)v77,
                        MostRecentlyUsedName,
                        AbsoluteObjectName->Length - v94->Length,
                        MostRecentlyUsedName[1]);
            v172 = updated;
            if ( updated < 0 )
            {
              *(_DWORD *)(v77 + 48) = updated;
              *(_QWORD *)(v77 + 56) = 0LL;
              v14 &= ~4u;
            }
          }
        }
      }
    }
    KeInitializeEvent(&v83->Event, NotificationEvent, 0);
    *(_QWORD *)(v13 + 8) = v83;
    if ( (v14 & 4) != 0 )
    {
      IopQueueThreadIrp(v77);
      if ( *(char *)(v77 + 71) >= 0 && (v110 = *(_QWORD *)(v77 + 200)) != 0 && (*(_BYTE *)v110 & 2) != 0 )
      {
        v208 = *(_OWORD *)(v110 + 24);
        v111 = IoSetActivityIdThread(&v208);
        v172 = IofCallDriver(DeviceObject, (PIRP)v77);
        IoSetActivityIdThread(v111);
      }
      else
      {
        v172 = IofCallDriver(DeviceObject, (PIRP)v77);
      }
    }
    if ( v172 == 259 )
    {
      if ( (KeGetCurrentThread()->MiscFlags & 0x400) != 0 )
        v14 &= ~0x80u;
      else
        v14 |= 0x80u;
      if ( KeWaitForSingleObject(&v83->Event, Executive, 0, v14 >> 7, 0LL) == 257 )
      {
        while ( 1 )
        {
          CurrentIrql = KeGetCurrentIrql();
          __writecr8(1uLL);
          if ( (*(_DWORD *)(&KeGetCurrentThread()[1].SwapListEntry + 1) & 1) != 0
            || !v83->Event.Header.SignalState && *(_BYTE *)(v77 + 68) )
          {
            break;
          }
          __writecr8(CurrentIrql);
          if ( KeWaitForSingleObject(&v83->Event, Executive, 0, v14 >> 7, 0LL) != 257 )
            goto LABEL_291;
        }
        __writecr8(CurrentIrql);
        IopCancelAlertedRequest(&v83->Event, (PIRP)v77);
        v83 = FileObject;
      }
      else
      {
LABEL_291:
        v83 = FileObject;
      }
    }
    if ( (*(_DWORD *)(v77 + 16) & 0x80u) == 0 )
    {
      v113 = ExtraCreateParameter;
    }
    else
    {
      v113 = *(struct _ECP_LIST **)(v77 + 112);
      ExtraCreateParameter = v113;
    }
    if ( *(_DWORD *)(v77 + 48) == 260 )
    {
      v114 = *(_WORD **)(v77 + 160);
      v198 = v114;
      if ( !v113 || IopSymlinkGetECP(v113, &P) == -1073741275 )
      {
        ECP = IopSymlinkCreateECP((PIRP)v77, (__int64)&P);
        if ( ECP >= 0 )
        {
          if ( !v113 )
          {
            IoGetIrpExtraCreateParameter((PIRP)v77, &ExtraCreateParameter);
            v113 = ExtraCreateParameter;
          }
        }
        else
        {
          *(_QWORD *)(v77 + 56) = 0LL;
          *(_DWORD *)(v77 + 48) = ECP;
        }
      }
      if ( *(_DWORD *)(v77 + 48) == 260 )
      {
        IopSymlinkProcessReparse(v77, v83, v114, *(_BYTE *)(v13 + 84) & 8);
        v116 = *(_QWORD *)(v77 + 56) - 2684354563LL;
        if ( v116 <= 0x16 )
        {
          v117 = 4194817LL;
          if ( _bittest64(&v117, v116) )
          {
            v118 = 0;
            if ( !v114[3] )
              v118 = 16;
            v14 = v14 & 0xEF | v118;
            if ( (*(_DWORD *)(v13 + 84) & 8) == 0 )
            {
              ExFreePoolWithTag(v114, 0);
              v198 = 0LL;
            }
          }
        }
      }
    }
    if ( *(_DWORD *)(v77 + 48) || *(_DWORD *)(v13 + 120) )
    {
      v127 = DeviceObject;
      goto LABEL_332;
    }
    v119 = 0LL;
    EcpContext = 0LL;
    if ( !v113 )
      goto LABEL_316;
    IopSymlinkRemoveECP(v113, &EcpContext);
    v119 = EcpContext;
    if ( EcpContext )
    {
      if ( (*((_BYTE *)EcpContext + 2) & 1) == 0 )
        goto LABEL_315;
LABEL_316:
      if ( v119 )
        goto LABEL_324;
    }
    v121 = (__int64)v83->RelatedFileObject;
    if ( !v121 )
    {
LABEL_315:
      v120 = 0;
      goto LABEL_326;
    }
    FileObjectExtension = IopGetFileObjectExtension(v121, 5, 0LL);
    v124 = FileObjectExtension;
    if ( !FileObjectExtension )
    {
      v120 = 0;
      goto LABEL_326;
    }
    v125 = *(unsigned __int16 *)(FileObjectExtension + 16);
    v126 = v125 + AbsoluteObjectName->Length + 2;
    if ( v126 >= 0xFFFF )
    {
      v120 = -1073741562;
LABEL_326:
      if ( v119 )
      {
        IopSymlinkFreeRelatedMountPointChain(v119);
        FsRtlFreeExtraCreateParameter(v119);
      }
      goto LABEL_328;
    }
    v120 = FsRtlAllocateExtraCreateParameterFromLookasideList(
             &IopSymlinkECPGuid,
             (unsigned __int16)(v125 + AbsoluteObjectName->Length + 2) + 32,
             v123,
             IopSymlinkCleanupECP,
             &IopSymlinkInfoLookasideList,
             &EcpContext);
    v119 = EcpContext;
    if ( v120 < 0 )
      goto LABEL_326;
    LOWORD(GrantedAccess) = *(_WORD *)(v124 + 2);
    LOWORD(AccessMode) = *(_WORD *)(v124 + 4);
    LOWORD(GenericMapping) = *(_WORD *)(v124 + 16);
    LOWORD(PreviouslyGrantedAccess) = 0;
    IopSymlinkInitializeSymlinkInfo(
      EcpContext,
      v126 + 32,
      AbsoluteObjectName->Buffer,
      AbsoluteObjectName->Length,
      PreviouslyGrantedAccess,
      *(_QWORD *)(v124 + 24),
      GenericMapping,
      AccessMode,
      GrantedAccess,
      0LL);
    *v119 = *(_WORD *)v124 + v119[8] - *(_WORD *)(v124 + 16);
LABEL_324:
    v120 = IopSymlinkSetFoExtension(v83, v119);
    if ( v120 < 0 )
      goto LABEL_326;
    IopSymlinkFreeRelatedMountPointChain(v119);
LABEL_328:
    v127 = DeviceObject;
    if ( v120 < 0 )
    {
      IoCancelFileOpen(DeviceObject, v83);
      *(_QWORD *)(v77 + 56) = 0LL;
      *(_DWORD *)(v77 + 48) = v120;
    }
    v13 = v185;
LABEL_332:
    if ( ExtraCreateParameter )
      *(_QWORD *)(v13 + 168) = ExtraCreateParameter;
    *(_OWORD *)BugCheckParameter4 = *(_OWORD *)(v77 + 48);
    Information = _mm_cvtsi128_si32(*(__m128i *)BugCheckParameter4);
    v83->Event.Header.SignalState = 1;
    if ( (v14 & 4) != 0 )
    {
      *(_QWORD *)(v77 + 152) = CurrentThread;
      IopDequeueIrpFromThread((_QWORD *)v77);
    }
    if ( (*(_BYTE *)(v77 + 16) & 0x30) == 0x30 )
      ExFreePoolWithTag(*(PVOID *)(v77 + 24), 0);
    IoFreeIrp((PIRP)v77);
    v128 = BugCheckParameter4[1];
    *(_QWORD *)(v13 + 24) = BugCheckParameter4[1];
    if ( Information < 0 )
    {
      if ( (v83->Flags & 0x200000) != 0 )
      {
        ObfDereferenceObject(v83);
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
        IopDecrementDeviceObjectRef((ULONG_PTR)Object, 0);
        if ( v188 )
          IopDereferenceVpbAndFree(v188);
      }
      *(_QWORD *)(v13 + 8) = 0LL;
      *(_DWORD *)(v13 + 16) = Information;
      return (unsigned int)Information;
    }
    if ( Information != 260 )
    {
      RelatedDeviceObject = IoGetRelatedDeviceObject(v83);
      if ( DeviceObject != RelatedDeviceObject )
      {
        Vpb = (ULONG_PTR)v83->Vpb;
        v154 = v188;
        if ( Vpb != v188 )
        {
          if ( Vpb )
            IopIncrementVpbRefCount(Vpb, 1);
          if ( v154 )
            IopDereferenceVpbAndFree(v154);
        }
      }
      if ( (v14 & 0x40) == 0 )
      {
        **(_QWORD **)&Size[1] = v83;
        *(_DWORD *)(v13 + 32) = -1096154543;
        ObfReferenceObject(v83);
        v155 = v83->RelatedFileObject;
        if ( (!v155 || (v155->Flags & 0x400000) != 0) && !v83->FileName.Length )
        {
          v156 = RelatedDeviceObject->DeviceType;
          if ( (unsigned int)v156 <= 0x20 )
          {
            v157 = 0x100000308LL;
            if ( _bittest64(&v157, v156) )
              v83->Flags |= 0x400000u;
          }
        }
        result = LODWORD(BugCheckParameter4[0]);
        *(_DWORD *)(v13 + 16) = BugCheckParameter4[0];
        return result;
      }
      if ( *(_BYTE *)(v13 + 137) )
      {
        if ( *(_BYTE *)(v13 + 208) )
        {
          XxxInformation = IopQueryXxxInformation(
                             v83,
                             *(_DWORD *)(v13 + 200),
                             *(_DWORD *)(v13 + 204),
                             0,
                             *(_QWORD *)(v13 + 112),
                             (_DWORD *)(v13 + 204),
                             1);
          goto LABEL_478;
        }
        v159 = 0;
        FastIoDispatch = RelatedDeviceObject->DriverObject->FastIoDispatch;
        if ( !*(_BYTE *)(v13 + 139) )
        {
          P = 0LL;
          if ( FastIoDispatch )
            FastIoQueryBasicInfo = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))FastIoDispatch->FastIoQueryBasicInfo;
          else
            FastIoQueryBasicInfo = 0LL;
          *(_QWORD *)&Size[1] = FastIoQueryBasicInfo;
          if ( FastIoQueryBasicInfo )
          {
            v162 = (MmVerifierData & 0x10) != 0 ? (void *)VfFastIoSnapState(FastIoDispatch, v150, v151) : 0LL;
            v202 = v162;
            LOBYTE(v150) = 1;
            v159 = FastIoQueryBasicInfo(v83, v150, *(_QWORD *)(v13 + 96), BugCheckParameter4, RelatedDeviceObject);
            v190 = v159;
            if ( v162 )
              VfFastIoCheckState(v162, (ULONG_PTR)FastIoQueryBasicInfo);
          }
          if ( v159 )
          {
            Information = BugCheckParameter4[0];
          }
          else
          {
            Pool = IopVerifierExAllocatePool(NonPagedPoolNx, 0x28uLL);
            P = Pool;
            if ( Pool )
            {
              Information = IopQueryXxxInformation(v83, 4, 40, 0, (__int64)Pool, Size, 1);
              AccessStatus = Information;
              if ( Information >= 0 )
                memmove(*(void **)(v13 + 96), Pool, Size[0]);
              ExFreePoolWithTag(Pool, 0);
              goto LABEL_479;
            }
            Information = -1073741670;
          }
          AccessStatus = Information;
          goto LABEL_479;
        }
        if ( FastIoDispatch && FastIoDispatch->SizeOfFastIoDispatch > 0x70 )
        {
          FastIoQueryNetworkOpenInfo = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))FastIoDispatch->FastIoQueryNetworkOpenInfo;
          if ( FastIoQueryNetworkOpenInfo )
          {
            v165 = (MmVerifierData & 0x10) != 0 ? (void *)VfFastIoSnapState(FastIoDispatch, v150, v151) : 0LL;
            LOBYTE(v150) = 1;
            v159 = FastIoQueryNetworkOpenInfo(
                     v83,
                     v150,
                     *(_QWORD *)(v185 + 104),
                     BugCheckParameter4,
                     RelatedDeviceObject);
            if ( v165 )
              VfFastIoCheckState(v165, (ULONG_PTR)FastIoQueryNetworkOpenInfo);
          }
          v13 = v185;
        }
        if ( !v159 )
        {
          v166 = IopQueryXxxInformation(v83, 34, 56, 0, *(_QWORD *)(v13 + 104), Size, 1);
          Information = v166;
          if ( v166 == -1073741811 || v166 == -1073741822 )
          {
            XxxInformation = IopGetNetworkOpenInformation(v83);
LABEL_478:
            Information = XxxInformation;
          }
        }
      }
LABEL_479:
      *(_DWORD *)(v13 + 32) = -1096154543;
      IopCloseFile(0LL, v83, 1LL, 1LL);
      ObfDereferenceObject(v83);
      *(_QWORD *)(v13 + 8) = 0LL;
      *(_DWORD *)(v13 + 16) = Information;
      return (unsigned int)Information;
    }
    if ( (v128 & 0xFFFFFFFFFFFFFFFDuLL) != 0 )
    {
      v129 = v128 - 2684354563u;
      if ( v128 - 2684354563u > 0x16 )
        goto LABEL_352;
      v130 = 4194817LL;
      if ( !_bittest64(&v130, v129) || (*(_DWORD *)(v13 + 84) & 8) != 0 )
        goto LABEL_352;
    }
    v131 = v83->FileName.Length;
    v132 = AbsoluteObjectName;
    if ( AbsoluteObjectName->MaximumLength < v131 )
    {
      v133 = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v131, 0x63466F49u);
      if ( v133 )
      {
        v134 = v132->Buffer;
        if ( v134 )
          ExFreePoolWithTag(v134, 0);
        v132->Buffer = v133;
        v132->MaximumLength = v83->FileName.Length;
        goto LABEL_349;
      }
      Information = -1073741670;
      *(_DWORD *)(v13 + 16) = -1073741670;
      return (unsigned int)Information;
    }
LABEL_349:
    RtlCopyUnicodeString(v132, &v83->FileName);
    if ( BugCheckParameter4[1] - 2684354563u <= 0x16 )
    {
      v135 = 4194817LL;
      if ( _bittest64(&v135, BugCheckParameter4[1] - 2684354563u) )
        *(_QWORD *)(v13 + 40) = 0LL;
    }
LABEL_352:
    if ( v83->FileName.Length )
    {
      ExFreePoolWithTag(v83->FileName.Buffer, 0);
      v83->FileName.Length = 0;
    }
    v83->DeviceObject = 0LL;
    ObfDereferenceObject(v83);
    *(_QWORD *)(v13 + 8) = 0LL;
    v136 = Object;
    IopDecrementDeviceObjectRef((ULONG_PTR)Object, 0);
    if ( v188 )
      IopDereferenceVpbAndFree(v188);
    v137 = BugCheckParameter4[1];
    if ( BugCheckParameter4[1] != 1 )
    {
      *(_QWORD *)(v13 + 40) = 0LL;
      v143 = 4194817LL;
      if ( v137 - 2684354563u <= 0x16 && _bittest64(&v143, v137 - 2684354563u) )
      {
        *(_DWORD *)(v13 + 152) |= 0x10u;
        v144 = *(_DWORD *)(v13 + 152);
        v145 = *((unsigned int *)v136 + 18);
        if ( (unsigned int)v145 <= 0x24 && (v146 = 0x1080020084LL, _bittest64(&v146, v145)) )
          v147 = v144 | 8;
        else
          v147 = v144 & 0xFFFFFFF7;
        *(_DWORD *)(v13 + 152) = v147;
      }
      if ( *(_BYTE *)(v13 + 136) )
        KeBugCheckEx(0xF9u, (ULONG_PTR)v136, (ULONG_PTR)v127, (ULONG_PTR)AbsoluteObjectName, v137);
      if ( (*(_DWORD *)(v136[39] + 32LL) & 0x800) == 0 )
      {
        v148 = AccessState;
        *(_QWORD *)&AccessState->RemainingDesiredAccess = AccessState->OriginalDesiredAccess;
        v148->Flags &= ~0x100u;
      }
      if ( v137 - 2684354563u <= 0x16 && _bittest64(&v143, v137 - 2684354563u) && (*(_DWORD *)(v13 + 84) & 8) != 0 )
      {
        *(_QWORD *)(v13 + 24) = v198;
        *(_DWORD *)(v13 + 16) = -2147483603;
        return 2147483693LL;
      }
      else if ( v137 == 2684354585 || v137 == 2 )
      {
        v149 = v195;
        *(_QWORD *)(v149 + 8) = PsGetParentSilo(*(_QWORD *)(v195 + 8));
        return 872LL;
      }
      else
      {
        return 260LL;
      }
    }
    if ( (unsigned int)++v192 > 0x20 )
      return 3221225473LL;
    **(_QWORD **)&Size[1] = 0LL;
    FileObject = 0LL;
    v11 = AccessState;
    v12 = (unsigned int *)v199;
  }
  v172 = PsAcquireSiloHardReference(Silo);
  if ( v172 >= 0 )
  {
    SetSpecificExtension = IopGetSetSpecificExtension((__int64)v83, 7, 0x10u, 1, &v197, 0LL);
    v172 = SetSpecificExtension;
    if ( SetSpecificExtension < 0 )
    {
      PsReleaseSiloHardReference(Silo);
      SetSpecificExtension = v172;
    }
    v93 = v197;
    if ( SetSpecificExtension >= 0 )
    {
      *v197 = 16;
      *((_QWORD *)v93 + 1) = Silo;
      v93[1] |= 1u;
      ObfReferenceObjectWithTag(Silo, 0x70536F49u);
      goto LABEL_231;
    }
  }
  IoFreeIrp((PIRP)v77);
  IopDecrementDeviceObjectRef((ULONG_PTR)Object, 0);
  if ( v188 )
    IopDereferenceVpbAndFree(v188);
  result = (unsigned int)v172;
LABEL_382:
  *(_DWORD *)(v13 + 16) = result;
  return result;
}
