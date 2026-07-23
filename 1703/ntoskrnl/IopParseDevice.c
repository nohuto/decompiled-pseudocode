/*
 * XREFs of IopParseDevice @ 0x1405385E0
 * Callers:
 *     IopParseFile @ 0x14043E730 (IopParseFile.c)
 * Callees:
 *     PsGetHostSilo @ 0x14001ED90 (PsGetHostSilo.c)
 *     MiDeleteSubsection @ 0x14002D920 (MiDeleteSubsection.c)
 *     IopVerifierExAllocatePool_0 @ 0x1400325BC (IopVerifierExAllocatePool_0.c)
 *     IopCreateSecurityCheck @ 0x140032804 (IopCreateSecurityCheck.c)
 *     ObfReferenceObjectWithTag @ 0x14004BBF0 (ObfReferenceObjectWithTag.c)
 *     PsIsHostSilo @ 0x140050C00 (PsIsHostSilo.c)
 *     IopGetSetSpecificExtension @ 0x140050EF0 (IopGetSetSpecificExtension.c)
 *     IopGetFileObjectExtension @ 0x1400511D0 (IopGetFileObjectExtension.c)
 *     PsGetServerSiloServiceSessionId @ 0x1400676A0 (PsGetServerSiloServiceSessionId.c)
 *     RtlGetActiveConsoleId @ 0x140071260 (RtlGetActiveConsoleId.c)
 *     PsGetCurrentProcessSessionId @ 0x1400714B0 (PsGetCurrentProcessSessionId.c)
 *     IopGetDevicePDO @ 0x14007207C (IopGetDevicePDO.c)
 *     EtwActivityIdControlKernel @ 0x1400802C0 (EtwActivityIdControlKernel.c)
 *     IoGetAttachedDevice @ 0x1400815B0 (IoGetAttachedDevice.c)
 *     SeAccessCheck @ 0x14008D750 (SeAccessCheck.c)
 *     ExAcquireResourceSharedLite @ 0x14008F530 (ExAcquireResourceSharedLite.c)
 *     IopIncrementVpbRefCount @ 0x1400A9314 (IopIncrementVpbRefCount.c)
 *     IopDecrementDeviceObjectRef @ 0x1400DBA60 (IopDecrementDeviceObjectRef.c)
 *     KeWaitForSingleObject @ 0x1400EA280 (KeWaitForSingleObject.c)
 *     IopDequeueIrpFromThread @ 0x1400ED860 (IopDequeueIrpFromThread.c)
 *     IopAllocateIrpExReturn @ 0x1400ED980 (IopAllocateIrpExReturn.c)
 *     SepPrivilegeCheck @ 0x1400EDD50 (SepPrivilegeCheck.c)
 *     IoGetRelatedDeviceObject @ 0x1400EDDF0 (IoGetRelatedDeviceObject.c)
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x1400EEA40 (ObfReferenceObject.c)
 *     ExReleaseResourceLite @ 0x1400EEB50 (ExReleaseResourceLite.c)
 *     RtlInitUnicodeString @ 0x1400F0F60 (RtlInitUnicodeString.c)
 *     IopCheckDeviceAndDriver @ 0x1400F0FF0 (IopCheckDeviceAndDriver.c)
 *     RtlCopyUnicodeString @ 0x1400F1110 (RtlCopyUnicodeString.c)
 *     IoFreeIrp @ 0x1400F1190 (IoFreeIrp.c)
 *     IofCallDriver @ 0x1400F1390 (IofCallDriver.c)
 *     IopQueueThreadIrp @ 0x1400F1410 (IopQueueThreadIrp.c)
 *     KeInitializeEvent @ 0x1400F14C0 (KeInitializeEvent.c)
 *     IopSymlinkRemoveECP @ 0x1400FE280 (IopSymlinkRemoveECP.c)
 *     IopSymlinkGetECP @ 0x140100CB0 (IopSymlinkGetECP.c)
 *     IopDeleteFileObjectExtension @ 0x140114990 (IopDeleteFileObjectExtension.c)
 *     KiCheckForKernelApcDelivery @ 0x14011C790 (KiCheckForKernelApcDelivery.c)
 *     IopCheckVpbMounted @ 0x14012B240 (IopCheckVpbMounted.c)
 *     IopDereferenceVpbAndFree @ 0x14012B810 (IopDereferenceVpbAndFree.c)
 *     IopSymlinkGetMostRecentlyUsedName @ 0x14013FF24 (IopSymlinkGetMostRecentlyUsedName.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     memset @ 0x140192D80 (memset.c)
 *     IopCheckSessionDeviceAccess @ 0x1401F43D0 (IopCheckSessionDeviceAccess.c)
 *     IopAllowRemoteDASD @ 0x1401F6E38 (IopAllowRemoteDASD.c)
 *     PsAcquireSiloHardReference @ 0x1402388B0 (PsAcquireSiloHardReference.c)
 *     PsReleaseSiloHardReference @ 0x140238950 (PsReleaseSiloHardReference.c)
 *     SeFastTraverseCheck @ 0x140246784 (SeFastTraverseCheck.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     IoGetIrpExtraCreateParameter @ 0x140428960 (IoGetIrpExtraCreateParameter.c)
 *     IopRetrieveTransactionParameters @ 0x140429360 (IopRetrieveTransactionParameters.c)
 *     IopQueryInformation @ 0x14042F520 (IopQueryInformation.c)
 *     IopCancelAlertedRequest @ 0x140430F4C (IopCancelAlertedRequest.c)
 *     SeAppendPrivileges @ 0x1404370B0 (SeAppendPrivileges.c)
 *     IopGetNetworkOpenInformation @ 0x14045EA38 (IopGetNetworkOpenInformation.c)
 *     FsRtlAllocateExtraCreateParameterFromLookasideList @ 0x14048E320 (FsRtlAllocateExtraCreateParameterFromLookasideList.c)
 *     SeIsAppContainerOrIdentifyLevelContext @ 0x1404C7614 (SeIsAppContainerOrIdentifyLevelContext.c)
 *     SeOpenObjectAuditAlarmWithTransaction @ 0x1404F61D0 (SeOpenObjectAuditAlarmWithTransaction.c)
 *     SeLockSubjectContext @ 0x1405086C0 (SeLockSubjectContext.c)
 *     IopCheckTopDeviceHint @ 0x140515C84 (IopCheckTopDeviceHint.c)
 *     IopCloseFile @ 0x140527CA0 (IopCloseFile.c)
 *     SePrivilegeCheck @ 0x140527F60 (SePrivilegeCheck.c)
 *     SeUnlockSubjectContext @ 0x140531170 (SeUnlockSubjectContext.c)
 *     IopAllocRealFileObject @ 0x14053AC70 (IopAllocRealFileObject.c)
 *     IopQueryXxxInformation @ 0x14053E758 (IopQueryXxxInformation.c)
 *     FsRtlFreeExtraCreateParameter @ 0x140542BD0 (FsRtlFreeExtraCreateParameter.c)
 *     SeTokenIsAdmin @ 0x140560050 (SeTokenIsAdmin.c)
 *     IopSymlinkSetFoExtension @ 0x140579944 (IopSymlinkSetFoExtension.c)
 *     IopSymlinkUpdateECP @ 0x14057BE7C (IopSymlinkUpdateECP.c)
 *     IopSymlinkFreeRelatedMountPointChain @ 0x14057BFC0 (IopSymlinkFreeRelatedMountPointChain.c)
 *     IopSymlinkCreateECP @ 0x14057C004 (IopSymlinkCreateECP.c)
 *     IopSymlinkInitializeSymlinkInfo @ 0x14057C104 (IopSymlinkInitializeSymlinkInfo.c)
 *     IopSymlinkProcessReparse @ 0x14057C25C (IopSymlinkProcessReparse.c)
 *     IopSymlinkEnforceEnabledTypes @ 0x1405DAB70 (IopSymlinkEnforceEnabledTypes.c)
 *     IoCancelFileOpen @ 0x14068B2F0 (IoCancelFileOpen.c)
 *     VfFastIoCheckState @ 0x14076804C (VfFastIoCheckState.c)
 *     VfFastIoSnapState @ 0x140768104 (VfFastIoSnapState.c)
 */

__int64 __fastcall IopParseDevice(
        struct _DEVICE_OBJECT *BugCheckParameter2,
        POBJECT_TYPE *a2,
        struct _ACCESS_STATE *a3,
        char a4,
        int a5,
        UNICODE_STRING *a6,
        const UNICODE_STRING *a7,
        _DWORD *a8,
        __int64 a9,
        __int64 a10,
        _QWORD *a11)
{
  PDEVICE_OBJECT v11; // rdi
  __int64 v12; // r12
  __int64 v13; // rsi
  unsigned __int8 v14; // bl
  __int64 v15; // r9
  __int64 v16; // rdx
  _QWORD *p_Type; // r14
  unsigned __int64 DeviceType; // rax
  unsigned __int64 v19; // rcx
  bool v20; // al
  __int64 result; // rax
  __int64 v22; // rax
  int ServerSiloServiceSessionId; // edi
  _DWORD *DevicePDO; // rax
  void *v25; // rdi
  POBJECT_TYPE *v26; // rcx
  PACCESS_STATE v27; // r13
  signed int RemainingDesiredAccess; // eax
  ACCESS_MASK v29; // edx
  ACCESS_MASK v30; // edx
  ACCESS_MASK v31; // edx
  POBJECT_TYPE *v32; // rcx
  int OriginalDesiredAccess; // edx
  ACCESS_MASK v34; // edx
  ACCESS_MASK v35; // edx
  ACCESS_MASK v36; // edx
  ACCESS_MASK v37; // r9d
  char v38; // r10
  char v39; // r14
  int v40; // edx
  char v41; // r12
  char v42; // r15
  ULONG Flags; // ecx
  int v44; // edi
  __int64 ClientToken; // rcx
  int v46; // edi
  bool v47; // zf
  char v48; // dl
  unsigned int v49; // r14d
  __int64 v50; // rcx
  int v51; // r9d
  char v52; // bl
  _QWORD *v53; // r15
  ULONG ActiveConsoleId; // edi
  int v55; // edi
  bool v56; // di
  char v57; // bl
  PACCESS_TOKEN PrimaryToken; // rcx
  struct _PRIVILEGE_SET *v59; // rdi
  ACCESS_MASK v60; // eax
  struct _KTHREAD *v61; // rcx
  __int16 v62; // ax
  struct _PRIVILEGE_SET *v63; // rdi
  __int16 v64; // ax
  char v65; // al
  char v66; // bl
  unsigned __int16 Length; // r8
  __int64 v68; // rdx
  struct _DEVICE_OBJECT *AttachedDevice; // rdi
  __int64 v70; // rax
  int v71; // ecx
  int v72; // r13d
  int v73; // eax
  __int64 Irp; // rax
  __int64 v75; // r13
  __int64 v76; // r15
  int v77; // eax
  char v78; // al
  int TransactionParameters; // r14d
  PFILE_OBJECT v80; // rsi
  _QWORD *v81; // rdi
  unsigned __int64 v82; // rax
  __int64 v83; // rcx
  _DWORD *v84; // r14
  int SetSpecificExtension; // eax
  _DWORD *v86; // rdi
  const UNICODE_STRING *v87; // r14
  unsigned __int16 v88; // ax
  wchar_t *PoolWithTag; // rax
  int Information; // edi
  PVOID v91; // rsi
  int v92; // r14d
  __int16 *MostRecentlyUsedName; // rax
  int updated; // eax
  _BYTE *v95; // rax
  unsigned __int8 CurrentIrql; // dl
  struct _ECP_LIST *v98; // r14
  _WORD *v99; // rdi
  int ECP; // eax
  unsigned __int64 v101; // rcx
  __int64 v102; // rax
  char v103; // cl
  _WORD *v104; // rdi
  NTSTATUS v105; // r14d
  __int64 RelatedFileObject; // rcx
  FSRTL_ALLOCATE_ECP_FLAGS v107; // r8d
  __int64 FileObjectExtension; // r15
  int v109; // ecx
  unsigned int v110; // r12d
  PDEVICE_OBJECT v111; // r15
  NTSTATUS v112; // edi
  ULONG_PTR v113; // rax
  unsigned __int64 v114; // rcx
  __int64 v115; // rax
  unsigned __int16 v116; // ax
  PUNICODE_STRING v117; // r13
  wchar_t *v118; // r14
  wchar_t *Buffer; // rcx
  __int64 v120; // r14
  _QWORD *v121; // rdi
  ULONG_PTR v122; // rdx
  PFILE_OBJECT v123; // rcx
  PFILE_OBJECT v124; // rbx
  int v125; // ecx
  void *v126; // rcx
  int v127; // ecx
  unsigned __int64 v128; // rax
  __int64 v129; // r9
  unsigned int v130; // ecx
  PACCESS_STATE v131; // rcx
  __int64 v132; // rdx
  PDEVICE_OBJECT RelatedDeviceObject; // r15
  ULONG_PTR Vpb; // rcx
  __int64 v135; // r14
  struct _FILE_OBJECT *v136; // rax
  unsigned __int64 v137; // rax
  __int64 v138; // rcx
  NTSTATUS XxxInformation; // eax
  char v140; // r14
  PFAST_IO_DISPATCH FastIoDispatch; // rcx
  __int64 (__fastcall *FastIoQueryBasicInfo)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD); // rbx
  void *v143; // rdi
  PVOID Pool_0; // rbx
  __int64 (__fastcall *FastIoQueryNetworkOpenInfo)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD); // r12
  void *v146; // rbx
  NTSTATUS v147; // eax
  int PreviouslyGrantedAccess; // [rsp+20h] [rbp-1B8h]
  int GenericMapping; // [rsp+30h] [rbp-1A8h]
  int AccessMode; // [rsp+38h] [rbp-1A0h]
  int GrantedAccess; // [rsp+40h] [rbp-198h]
  NTSTATUS AccessStatus; // [rsp+64h] [rbp-174h] BYREF
  char v154; // [rsp+68h] [rbp-170h] BYREF
  char v155; // [rsp+69h] [rbp-16Fh] BYREF
  char v156[6]; // [rsp+6Ah] [rbp-16Eh] BYREF
  __int128 *v157; // [rsp+70h] [rbp-168h] BYREF
  PVOID Object; // [rsp+78h] [rbp-160h]
  PDEVICE_OBJECT v159; // [rsp+80h] [rbp-158h] BYREF
  int v160; // [rsp+88h] [rbp-150h]
  ACCESS_MASK v161; // [rsp+8Ch] [rbp-14Ch] BYREF
  PUNICODE_STRING AbsoluteObjectName; // [rsp+90h] [rbp-148h]
  PFILE_OBJECT FileObject; // [rsp+98h] [rbp-140h] BYREF
  _DWORD *v164; // [rsp+A0h] [rbp-138h]
  PPRIVILEGE_SET v165; // [rsp+A8h] [rbp-130h] BYREF
  PVOID EcpContext; // [rsp+B0h] [rbp-128h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+B8h] [rbp-120h]
  __int64 v168; // [rsp+C0h] [rbp-118h]
  PCUNICODE_STRING SourceString; // [rsp+C8h] [rbp-110h]
  char v170; // [rsp+D0h] [rbp-108h]
  PVOID P; // [rsp+D8h] [rbp-100h] BYREF
  int v172; // [rsp+E0h] [rbp-F8h]
  _DWORD Size[3]; // [rsp+E4h] [rbp-F4h] BYREF
  struct _ECP_LIST *ExtraCreateParameter; // [rsp+F0h] [rbp-E8h] BYREF
  PACCESS_STATE AccessState; // [rsp+F8h] [rbp-E0h]
  __int64 v176; // [rsp+100h] [rbp-D8h]
  ULONG_PTR BugCheckParameter4[2]; // [rsp+108h] [rbp-D0h] BYREF
  _DWORD *v178; // [rsp+118h] [rbp-C0h] BYREF
  _WORD *v179; // [rsp+120h] [rbp-B8h]
  PDEVICE_OBJECT DeviceObject; // [rsp+128h] [rbp-B0h]
  UNICODE_STRING DestinationString; // [rsp+130h] [rbp-A8h] BYREF
  struct _ECP_LIST *v182; // [rsp+140h] [rbp-98h]
  PVOID v183; // [rsp+148h] [rbp-90h] BYREF
  PVOID v184[3]; // [rsp+150h] [rbp-88h] BYREF
  _QWORD v185[2]; // [rsp+168h] [rbp-70h] BYREF
  unsigned int v186; // [rsp+178h] [rbp-60h]
  int v187; // [rsp+17Ch] [rbp-5Ch]
  struct _PRIVILEGE_SET Privileges; // [rsp+180h] [rbp-58h] BYREF
  __int128 v189; // [rsp+198h] [rbp-40h] BYREF
  __int64 retaddr; // [rsp+1D8h] [rbp+0h]

  AccessState = a3;
  v11 = BugCheckParameter2;
  DeviceObject = BugCheckParameter2;
  v12 = (__int64)a8;
  v164 = a8;
  v184[2] = a8;
  AbsoluteObjectName = a6;
  SourceString = a7;
  v176 = a10;
  *(_QWORD *)&Size[1] = a11;
  v13 = 0LL;
  v172 = 0;
  LOBYTE(v160) = 0;
  v165 = 0LL;
  v179 = 0LL;
  if ( a2 != IoFileObjectType )
    return 3221225508LL;
  CurrentThread = KeGetCurrentThread();
  v14 = v156[0] & 0xE9 | 4;
  RtlInitUnicodeString(&DestinationString, L"File");
  *a11 = 0LL;
  FileObject = 0LL;
  if ( !a8 )
    return 3221225508LL;
  while ( 1 )
  {
    v15 = 0x60010000110040LL;
    v16 = 0x1080000084LL;
    if ( *(_WORD *)v12 != 8 || *(_WORD *)(v12 + 2) != 216 )
      return 3221225508LL;
    p_Type = &v11->Type;
    Object = v11;
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
      if ( *(_QWORD *)(v12 + 24) == 2684354563LL )
      {
        DeviceType = v11->DeviceType;
        if ( (unsigned int)DeviceType > 0x24 || !_bittest64(&v16, DeviceType) )
          goto LABEL_332;
      }
      else
      {
        v19 = v11->DeviceType;
        LOBYTE(v16) = (unsigned int)v19 <= 0x24 && _bittest64(&v16, v19);
        v20 = (unsigned int)v19 <= 0x36 && _bittest64(&v15, v19);
        if ( !(_BYTE)v16 && !v20 )
        {
LABEL_332:
          *(_DWORD *)(v12 + 16) = -1073741192;
          return 3221226104LL;
        }
        result = IopSymlinkEnforceEnabledTypes(*(_BYTE *)(v12 + 152) & 8, v16, *(_QWORD *)(v12 + 168));
        if ( (int)result < 0 )
          goto LABEL_353;
      }
    }
    v22 = *(_QWORD *)(v12 + 40);
    if ( v22 )
    {
      p_Type = *(_QWORD **)(v22 + 8);
      Object = p_Type;
    }
    result = IopCheckDeviceAndDriver(v12, (ULONG_PTR)p_Type);
    LODWORD(v157) = result;
    AccessStatus = result;
    if ( (int)result < 0 )
      goto LABEL_353;
    if ( (*(_DWORD *)(p_Type[39] + 32LL) & 0x400) != 0 && !*(_QWORD *)(v12 + 40) )
    {
      ServerSiloServiceSessionId = PsGetServerSiloServiceSessionId(-1LL);
      if ( ServerSiloServiceSessionId != (unsigned int)PsGetCurrentProcessSessionId()
        || IopSessionZeroAccessCheckEnabled && (*(_DWORD *)(v12 + 64) & 0x40000) == 0 )
      {
        DevicePDO = IopGetDevicePDO((__int64)p_Type);
        v25 = DevicePDO;
        if ( DevicePDO )
        {
          if ( !IopCheckSessionDeviceAccess((__int64)DevicePDO) )
          {
            ObfDereferenceObject(v25);
            IopDecrementDeviceObjectRef((ULONG_PTR)p_Type, 0, 0);
            *(_DWORD *)(v12 + 16) = -1073741790;
            return 3221225506LL;
          }
          ObfDereferenceObject(v25);
        }
      }
    }
    v26 = IoFileObjectType;
    v27 = AccessState;
    RemainingDesiredAccess = AccessState->RemainingDesiredAccess;
    if ( RemainingDesiredAccess < 0 )
      AccessState->RemainingDesiredAccess = *((_DWORD *)IoFileObjectType + 19) | RemainingDesiredAccess;
    v29 = v27->RemainingDesiredAccess;
    if ( (v29 & 0x40000000) != 0 )
      v27->RemainingDesiredAccess = v29 | *((_DWORD *)v26 + 20);
    v30 = v27->RemainingDesiredAccess;
    if ( (v30 & 0x20000000) != 0 )
      v27->RemainingDesiredAccess = v30 | *((_DWORD *)v26 + 21);
    v31 = v27->RemainingDesiredAccess;
    if ( (v31 & 0x10000000) != 0 )
      v27->RemainingDesiredAccess = v31 | *((_DWORD *)v26 + 22);
    v27->RemainingDesiredAccess &= 0xFFFFFFFu;
    v32 = IoFileObjectType;
    OriginalDesiredAccess = v27->OriginalDesiredAccess;
    if ( OriginalDesiredAccess < 0 )
      v27->OriginalDesiredAccess = OriginalDesiredAccess | *((_DWORD *)IoFileObjectType + 19);
    v34 = v27->OriginalDesiredAccess;
    if ( (v34 & 0x40000000) != 0 )
      v27->OriginalDesiredAccess = v34 | *((_DWORD *)v32 + 20);
    v35 = v27->OriginalDesiredAccess;
    if ( (v35 & 0x20000000) != 0 )
      v27->OriginalDesiredAccess = v35 | *((_DWORD *)v32 + 21);
    v36 = v27->OriginalDesiredAccess;
    if ( (v36 & 0x10000000) != 0 )
      v27->OriginalDesiredAccess = v36 | *((_DWORD *)v32 + 22);
    v27->OriginalDesiredAccess &= 0xFFFFFFFu;
    *(_OWORD *)((char *)v27->AuxData + 8) = *(_OWORD *)((char *)IoFileObjectType + 76);
    v37 = v27->RemainingDesiredAccess;
    LODWORD(EcpContext) = v37;
    v38 = a4;
    v39 = a4 || (*(_DWORD *)(v12 + 84) & 1) != 0;
    v40 = *(_DWORD *)(v12 + 88);
    v41 = 0;
    v42 = 0;
    Flags = v27->Flags;
    if ( (Flags & 0x100) != 0 )
    {
      v12 = (__int64)v164;
      goto LABEL_78;
    }
    if ( (v164[16] & 0x4000) == 0 )
    {
      v12 = (__int64)v164;
      goto LABEL_78;
    }
    v27->Flags = Flags | 0x100;
    v44 = v37;
    if ( (v37 & 0x2000000) != 0 )
      v44 = v37 | 0x11F01BF;
    if ( ((v40 - 1) & 0xFFFFFFF9) != 0 || v40 == 7 )
    {
      v42 = 1;
    }
    else
    {
      if ( (v44 & 0x11200A9) != 0 )
      {
        Privileges.PrivilegeCount = 1;
        Privileges.Control = 1;
        Privileges.Privilege[0].Luid = SeBackupPrivilege;
        Privileges.Privilege[0].Attributes = 0;
        if ( !v39 )
          goto LABEL_66;
        ClientToken = (__int64)v27->SubjectSecurityContext.ClientToken;
        if ( !ClientToken )
        {
          ClientToken = (__int64)v27->SubjectSecurityContext.PrimaryToken;
LABEL_65:
          if ( SepPrivilegeCheck(ClientToken, (__int64)Privileges.Privilege, 1u, 1, v39) )
          {
LABEL_66:
            v41 = 1;
            SeAppendPrivileges(v27, &Privileges);
            v27->PreviouslyGrantedAccess |= v44 & 0x11200A9;
            v27->RemainingDesiredAccess &= 0xFEEDFF56;
            v44 &= 0xFEEDFF56;
            v27->Flags |= 2u;
          }
          v13 = 0LL;
          goto LABEL_70;
        }
        if ( v27->SubjectSecurityContext.ImpersonationLevel >= SecurityImpersonation )
          goto LABEL_65;
      }
      v13 = 0LL;
    }
LABEL_70:
    v46 = v44 & 0x11F0116;
    if ( v46 || v42 )
    {
      Privileges.PrivilegeCount = 1;
      Privileges.Control = 1;
      Privileges.Privilege[0].Luid = SeRestorePrivilege;
      Privileges.Privilege[0].Attributes = 0;
      if ( SePrivilegeCheck(&Privileges, &v27->SubjectSecurityContext, v39) )
      {
        v41 = 1;
        SeAppendPrivileges(v27, &Privileges);
        v27->PreviouslyGrantedAccess |= v46;
        v27->RemainingDesiredAccess &= 0xFEE0FEE9;
        v27->Flags |= 4u;
      }
    }
    v38 = a4;
    v47 = v41 == 0;
    v12 = (__int64)v164;
    if ( v47 )
      v164[16] &= ~0x4000u;
LABEL_78:
    v48 = *(_BYTE *)(v12 + 136);
    if ( v48 && !SourceString->Length || (v27->Flags & 0x100) != 0 )
    {
      v49 = v27->PreviouslyGrantedAccess | (unsigned int)EcpContext;
      LODWORD(EcpContext) = v49;
    }
    else
    {
      v49 = (unsigned int)EcpContext;
    }
    v50 = *(_QWORD *)(v12 + 40);
    LOBYTE(v51) = v160;
    if ( v50 && (*(_DWORD *)(v50 + 80) & 0x400000) != 0 )
    {
      v51 = (unsigned __int8)v160;
      if ( !SourceString->Length )
        v51 = 1;
      v160 = v51;
    }
    if ( !v38 && (*(_DWORD *)(v12 + 84) & 1) == 0 || v50 && !(_BYTE)v51 || v48 )
      goto LABEL_135;
    v52 = v14 & 0xDF;
    v53 = Object;
    if ( SourceString->Length )
    {
      if ( (*((_DWORD *)Object + 13) & 0x20100) != 0x20000 )
      {
        if ( v38 )
        {
          v154 = 0;
          SeIsAppContainerOrIdentifyLevelContext(&v27->SubjectSecurityContext, &v154);
          if ( v154 )
          {
            v14 = (v52 ^ IopCreateSecurityCheck(
                           (__int64)v53,
                           0LL,
                           v27,
                           v49 | 0x20,
                           1,
                           v165,
                           &v161,
                           AbsoluteObjectName,
                           &DestinationString,
                           (__int64)CurrentThread,
                           0)) & 1 ^ v52;
            goto LABEL_131;
          }
        }
      }
      if ( (v27->Flags & 1) != 0 )
      {
        v14 = v52 | 1;
        goto LABEL_131;
      }
      --CurrentThread->KernelApcDisable;
      ExAcquireResourceSharedLite((PERESOURCE)&IopSecurityResource, 1u);
      v14 = (v52 ^ SeFastTraverseCheck(v53[34], (__int64)v27, 32)) & 1 ^ v52;
      if ( (v14 & 1) == 0 )
      {
        v165 = 0LL;
        SeLockSubjectContext(&v27->SubjectSecurityContext);
        v14 = ((v14 | 0x20) ^ SeAccessCheck(
                                (PSECURITY_DESCRIPTOR)v53[34],
                                &v27->SubjectSecurityContext,
                                1u,
                                0x20u,
                                0,
                                &v165,
                                (PGENERIC_MAPPING)((char *)IoFileObjectType + 76),
                                1,
                                &v161,
                                &AccessStatus)) & 1 ^ (v14 | 0x20);
        v63 = v165;
        if ( v165 )
        {
          SeAppendPrivileges(v27, v165);
          MiDeleteSubsection(v63);
        }
        LODWORD(v157) = AccessStatus;
      }
      ExReleaseResourceLite((PERESOURCE)&IopSecurityResource);
      v61 = CurrentThread;
      v64 = CurrentThread->KernelApcDisable + 1;
      CurrentThread->KernelApcDisable = v64;
      if ( v64
        || ($69CD3F157F9F39B6F7113F2231989901 *)v61->ApcState.ApcListHead[0].Flink == &v61->152
        || v61->SpecialApcDisable )
      {
        goto LABEL_131;
      }
    }
    else
    {
      v56 = 0;
      if ( (*((_DWORD *)Object + 13) & 0x40001) != 0 && (v49 & 0xFFEDFF7F) != 0 )
      {
        ActiveConsoleId = RtlGetActiveConsoleId();
        if ( ActiveConsoleId != (unsigned int)PsGetCurrentProcessSessionId() )
        {
          v55 = PsGetServerSiloServiceSessionId(-1LL);
          if ( v55 != (unsigned int)PsGetCurrentProcessSessionId() && !IopAllowRemoteDASD() )
            v56 = 1;
        }
      }
      v165 = 0LL;
      --CurrentThread->KernelApcDisable;
      ExAcquireResourceSharedLite((PERESOURCE)&IopSecurityResource, 1u);
      SeLockSubjectContext(&v27->SubjectSecurityContext);
      v57 = v52 | 0x20;
      if ( !v56 )
        goto LABEL_106;
      PrimaryToken = v27->SubjectSecurityContext.ClientToken;
      if ( !PrimaryToken )
        PrimaryToken = v27->SubjectSecurityContext.PrimaryToken;
      if ( SeTokenIsAdmin(PrimaryToken) )
      {
LABEL_106:
        v14 = (v57 ^ SeAccessCheck(
                       (PSECURITY_DESCRIPTOR)v53[34],
                       &v27->SubjectSecurityContext,
                       (v57 & 0x20) != 0,
                       v49,
                       0,
                       &v165,
                       (PGENERIC_MAPPING)((char *)IoFileObjectType + 76),
                       1,
                       &v161,
                       &AccessStatus)) & 1 ^ v57;
        v59 = v165;
        if ( v165 )
        {
          SeAppendPrivileges(v27, v165);
          MiDeleteSubsection(v59);
        }
        if ( (v14 & 1) != 0 )
        {
          v60 = v161;
          v27->PreviouslyGrantedAccess |= v161;
          v27->RemainingDesiredAccess &= ~(v60 | 0x2000000);
          *(_BYTE *)(v12 + 136) = 1;
        }
        LODWORD(v157) = AccessStatus;
      }
      else
      {
        v14 = v57 & 0xFE;
        LODWORD(v157) = -1073741790;
        AccessStatus = -1073741790;
      }
      v13 = 0LL;
      SeOpenObjectAuditAlarmWithTransaction(
        &DestinationString,
        v53,
        AbsoluteObjectName,
        (PSECURITY_DESCRIPTOR)v53[34],
        v27,
        0,
        v14 & 1,
        1,
        0LL,
        &v27->GenerateOnClose);
      ExReleaseResourceLite((PERESOURCE)&IopSecurityResource);
      v61 = CurrentThread;
      v62 = CurrentThread->KernelApcDisable + 1;
      CurrentThread->KernelApcDisable = v62;
      if ( v62
        || ($69CD3F157F9F39B6F7113F2231989901 *)v61->ApcState.ApcListHead[0].Flink == &v61->152
        || v61->SpecialApcDisable )
      {
        goto LABEL_131;
      }
    }
    KiCheckForKernelApcDelivery((__int64)v61);
LABEL_131:
    if ( (v14 & 0x20) != 0 )
      SeUnlockSubjectContext(&v27->SubjectSecurityContext);
    if ( (v14 & 1) == 0 )
      goto LABEL_336;
    v38 = a4;
LABEL_135:
    if ( *(_BYTE *)(v12 + 137) || (v65 = 0, *(_BYTE *)(v12 + 138)) )
      v65 = 1;
    v66 = (v14 ^ (v65 << 6)) & 0x40 ^ v14;
    Length = SourceString->Length;
    if ( SourceString->Length || *(_QWORD *)(v12 + 40) || (v49 & 0xFEE1FF7F) != 0 || (v66 & 0x40) != 0 )
      v14 = v66 & 0xF7;
    else
      v14 = v66 | 8;
    v168 = 0LL;
    v68 = *(_QWORD *)(v12 + 40);
    if ( !v68 || (*(_DWORD *)(v68 + 80) & 0x800) != 0 )
    {
      v53 = Object;
      AttachedDevice = (struct _DEVICE_OBJECT *)Object;
      v159 = (PDEVICE_OBJECT)Object;
      if ( *((_QWORD *)Object + 7) && (v14 & 8) == 0 )
      {
        if ( (*((_DWORD *)Object + 13) & 0x100) != 0
          && (*(_DWORD *)(*((_QWORD *)Object + 39) + 32LL) & 0x800) == 0
          && (v38 || (*(_DWORD *)(v12 + 84) & 1) != 0)
          && (v68 || Length)
          && !(_BYTE)v160 )
        {
          v165 = 0LL;
          if ( !IopCreateSecurityCheck(
                  (__int64)Object,
                  Object,
                  v27,
                  v49,
                  *(_DWORD *)(v12 + 88),
                  0LL,
                  &v161,
                  AbsoluteObjectName,
                  &DestinationString,
                  (__int64)CurrentThread,
                  0) )
            goto LABEL_336;
        }
        v70 = IopCheckVpbMounted(v12, (ULONG_PTR)v53, (__int64)SourceString, &AccessStatus);
        v13 = v70;
        v168 = v70;
        if ( !v70 )
          return (unsigned int)AccessStatus;
        AttachedDevice = *(struct _DEVICE_OBJECT **)(v70 + 8);
        v159 = AttachedDevice;
        LODWORD(v157) = AccessStatus;
      }
      if ( (*(_DWORD *)(v12 + 152) & 1) != 0 )
      {
        v14 |= 2u;
      }
      else if ( AttachedDevice->AttachedDevice )
      {
        AttachedDevice = IoGetAttachedDevice(AttachedDevice);
        v159 = AttachedDevice;
      }
    }
    else
    {
      AttachedDevice = DeviceObject;
      v159 = DeviceObject;
      v53 = Object;
      if ( *(_QWORD *)(v68 + 16) )
      {
        v13 = *(_QWORD *)(v68 + 16);
        v168 = v13;
        if ( (*((_DWORD *)Object + 13) & 0x100) != 0
          && (*(_DWORD *)(*((_QWORD *)Object + 39) + 32LL) & 0x800) == 0
          && (v38 || (*(_DWORD *)(v12 + 84) & 1) != 0)
          && !(_BYTE)v160 )
        {
          v165 = 0LL;
          if ( !IopCreateSecurityCheck(
                  (__int64)Object,
                  Object,
                  v27,
                  v49,
                  *(_DWORD *)(v12 + 88),
                  0LL,
                  &v161,
                  AbsoluteObjectName,
                  &DestinationString,
                  (__int64)CurrentThread,
                  0) )
            goto LABEL_336;
        }
        IopIncrementVpbRefCount(v13, 1);
      }
      if ( (*(_DWORD *)(v12 + 152) & 1) != 0 )
      {
        if ( v13 )
        {
          AttachedDevice = *(struct _DEVICE_OBJECT **)(v13 + 8);
          v159 = AttachedDevice;
        }
        v14 |= 2u;
      }
    }
    v71 = *((_DWORD *)v53 + 13);
    if ( (v71 & 0x40001) != 0 && (v53[6] & 0x600100) == 0 && (v71 & 0x100) == 0 )
    {
      v155 = 0;
      SeIsAppContainerOrIdentifyLevelContext(&v27->SubjectSecurityContext, &v155);
      if ( v155 )
      {
        if ( !v13 )
          goto LABEL_336;
        if ( (*(_DWORD *)(*(_QWORD *)(v13 + 8) + 48LL) & 0x20000) == 0 )
        {
          IopDereferenceVpbAndFree(v13);
LABEL_336:
          IopDecrementDeviceObjectRef((ULONG_PTR)v53, 0, 0);
          return 3221225506LL;
        }
      }
    }
    if ( (v14 & 2) != 0 )
    {
      v72 = IopCheckTopDeviceHint((unsigned int **)&v159, v12, (v14 & 8) != 0, SourceString);
      LODWORD(v157) = v72;
      if ( v72 < 0 )
      {
        if ( v13 )
          IopDereferenceVpbAndFree(v13);
        IopDecrementDeviceObjectRef((ULONG_PTR)v53, 0, 0);
        return (unsigned int)v72;
      }
      AttachedDevice = v159;
      v27 = AccessState;
    }
    v73 = *(_DWORD *)(v12 + 152);
    if ( (v73 & 0x10) != 0 )
      *(_DWORD *)(v12 + 152) = v73 & 0xFFFFFFEF;
    if ( ((AttachedDevice->Characteristics & 0x100) != 0
       || IopRequireDeviceAccessCheck && (*((_DWORD *)v53 + 13) & 0x100000) != 0)
      && (a4 || (*(_DWORD *)(v12 + 84) & 1) != 0)
      && (*(_QWORD *)(v12 + 40) || SourceString->Length)
      && !(_BYTE)v160 )
    {
      v165 = 0LL;
      if ( !IopCreateSecurityCheck(
              (__int64)v53,
              AttachedDevice,
              v27,
              v49,
              *(_DWORD *)(v12 + 88),
              0LL,
              &v161,
              AbsoluteObjectName,
              &DestinationString,
              (__int64)CurrentThread,
              1) )
      {
        IopDecrementDeviceObjectRef((ULONG_PTR)v53, 0, 0);
        if ( v13 )
          IopDereferenceVpbAndFree(v13);
        return 3221225506LL;
      }
    }
    Irp = IopAllocateIrpExReturn((__int64)AttachedDevice, (unsigned __int8)AttachedDevice->StackSize, 0LL, retaddr);
    v75 = Irp;
    if ( !Irp )
    {
      IopDecrementDeviceObjectRef((ULONG_PTR)v53, 0, 0);
      if ( v13 )
        IopDereferenceVpbAndFree(v13);
      return 3221225626LL;
    }
    *(_QWORD *)(Irp + 152) = CurrentThread;
    *(_BYTE *)(Irp + 64) = a4;
    *(_DWORD *)(Irp + 16) = 2180;
    v185[0] = a9;
    v185[1] = AccessState;
    v186 = v49;
    v187 = *(_DWORD *)(v12 + 64);
    v76 = *(_QWORD *)(Irp + 184);
    *(_BYTE *)(v76 - 69) = 0;
    v77 = *(_DWORD *)(v12 + 120);
    if ( v77 )
    {
      if ( v77 == 1 )
        *(_BYTE *)(v76 - 72) = 1;
      else
        *(_BYTE *)(v76 - 72) = 19;
      *(_QWORD *)(v76 - 40) = *(_QWORD *)(v12 + 128);
    }
    else
    {
      *(_BYTE *)(v76 - 72) = 0;
      *(_DWORD *)(v76 - 40) = *(_DWORD *)(v12 + 80);
      v78 = *(_BYTE *)(v12 + 84);
      *(_BYTE *)(v76 - 70) = v78;
      if ( (a5 & 0x40) == 0 )
        *(_BYTE *)(v76 - 70) = v78 | 0x80;
    }
    *(_QWORD *)(v75 + 88) = *(_QWORD *)(v12 + 56);
    *(_QWORD *)(v75 + 24) = *(_QWORD *)(v12 + 72);
    *(_DWORD *)(v76 - 56) = (*(_DWORD *)(v12 + 88) << 24) | *(_DWORD *)(v12 + 64) & 0xFFFFFF;
    *(_WORD *)(v76 - 48) = *(_WORD *)(v12 + 68);
    *(_WORD *)(v76 - 46) = *(_WORD *)(v12 + 70);
    *(_QWORD *)(v76 - 64) = v185;
    *(_QWORD *)(v75 + 112) = *(_QWORD *)(v12 + 168);
    *(_QWORD *)(v75 + 72) = BugCheckParameter4;
    *(_QWORD *)(v75 + 8) = 0LL;
    *(_BYTE *)(v75 + 65) = 0;
    *(_BYTE *)(v75 + 68) = 0;
    *(_QWORD *)(v75 + 80) = 0LL;
    *(_QWORD *)(v75 + 104) = 0LL;
    *(_QWORD *)(v75 + 160) = 0LL;
    if ( !*(_BYTE *)(v12 + 137) )
    {
      TransactionParameters = IopAllocRealFileObject(
                                (unsigned int)&FileObject,
                                (_DWORD)AttachedDevice,
                                (_DWORD)Object,
                                a5,
                                a4,
                                v12,
                                v176,
                                0,
                                v49);
      LODWORD(v157) = TransactionParameters;
      if ( TransactionParameters < 0 )
      {
        IoFreeIrp((PIRP)v75);
        IopDecrementDeviceObjectRef((ULONG_PTR)Object, 0, 0);
        if ( v13 )
          IopDereferenceVpbAndFree(v13);
        v123 = FileObject;
        if ( FileObject )
        {
          FileObject->DeviceObject = 0LL;
          ObfDereferenceObject(v123);
        }
        goto LABEL_347;
      }
      v80 = FileObject;
      goto LABEL_219;
    }
    v81 = *(_QWORD **)(v12 + 144);
    memset(v81, 0, 0x110uLL);
    v80 = (PFILE_OBJECT)(v81 + 6);
    FileObject = (PFILE_OBJECT)(v81 + 6);
    *((_BYTE *)v81 + 24) = ObHeaderCookie ^ *((_BYTE *)IoFileObjectType + 40) ^ BYTE1(v81);
    *v81 = 1LL;
    if ( (a5 & 0x40) == 0 )
      *((_DWORD *)v81 + 32) |= 0x20000u;
    *(_DWORD *)&v80->Type = 14155781;
    v81[14] = *(_QWORD *)(v12 + 40);
    v81[7] = Object;
    AttachedDevice = v159;
    if ( (*(_DWORD *)(v12 + 152) & 0x20) != 0 )
    {
      if ( a4 )
      {
        if ( (v159->Flags & 0x40000) != 0
          || (v82 = v159->DeviceType, (unsigned int)v82 <= 0x35) && (v83 = 0x20000100100108LL, _bittest64(&v83, v82)) )
        {
          TransactionParameters = IopRetrieveTransactionParameters((__int64)v159, v12, v49, (__int64)v80);
          LODWORD(v157) = TransactionParameters;
          if ( TransactionParameters < 0 )
          {
            IoFreeIrp((PIRP)v75);
            IopDecrementDeviceObjectRef((ULONG_PTR)Object, 0, 0);
            if ( v168 )
            {
              IopDereferenceVpbAndFree(v168);
              *(_DWORD *)(v12 + 16) = TransactionParameters;
              return (unsigned int)TransactionParameters;
            }
LABEL_347:
            *(_DWORD *)(v12 + 16) = TransactionParameters;
            return (unsigned int)TransactionParameters;
          }
        }
      }
    }
    v84 = *(_DWORD **)(v176 + 8);
    if ( !PsIsHostSilo((__int64)v84) )
      break;
LABEL_219:
    if ( (v14 & 8) != 0 )
      v80->Flags |= 0x800u;
    *(_QWORD *)(v75 + 192) = v80;
    *(_QWORD *)(v76 - 24) = v80;
    v87 = SourceString;
    v88 = SourceString->Length;
    if ( SourceString->Length )
    {
      if ( v88 >= 0x38u )
      {
        if ( v88 >= 0x78u )
        {
          if ( v88 < 0xF8u )
            v88 = 248;
        }
        else
        {
          v88 = 120;
        }
      }
      else
      {
        v88 = 56;
      }
      v80->FileName.MaximumLength = v88;
      PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v88, 0x6D4E6F49u);
      v80->FileName.Buffer = PoolWithTag;
      if ( !PoolWithTag )
      {
        IoFreeIrp((PIRP)v75);
        IopDecrementDeviceObjectRef((ULONG_PTR)Object, 0, 0);
        if ( v168 )
          IopDereferenceVpbAndFree(v168);
        v80->DeviceObject = 0LL;
        if ( !*(_BYTE *)(v12 + 137) )
        {
          ObfDereferenceObject(v80);
          return 3221225626LL;
        }
        return 3221225626LL;
      }
    }
    RtlCopyUnicodeString(&v80->FileName, v87);
    if ( *(_BYTE *)(v12 + 137) )
    {
      Information = IopQueryInformation(v12, (__int64)AttachedDevice, v75, v76 - 72, v156);
      if ( Information < 0 || v156[0] )
      {
        v125 = *(_DWORD *)(v75 + 48);
        *(_DWORD *)(v12 + 16) = v125;
        *(_QWORD *)(v12 + 24) = *(_QWORD *)(v75 + 56);
        if ( v125 == 260 )
        {
          v126 = *(void **)(v75 + 160);
          if ( v126 )
          {
            ExFreePoolWithTag(v126, 0);
            *(_QWORD *)(v75 + 160) = 0LL;
            *(_QWORD *)(v12 + 40) = 0LL;
          }
        }
        if ( v80->FileName.Length )
          ExFreePoolWithTag(v80->FileName.Buffer, 0);
        if ( v80->FileObjectExtension )
          IopDeleteFileObjectExtension((__int64)v80);
        IopDecrementDeviceObjectRef((ULONG_PTR)Object, 0, 0);
        if ( v168 )
          IopDereferenceVpbAndFree(v168);
        IoFreeIrp((PIRP)v75);
        return (unsigned int)Information;
      }
      v91 = Object;
      AttachedDevice = v159;
      v92 = IopAllocRealFileObject(
              (unsigned int)&FileObject,
              (_DWORD)v159,
              (_DWORD)Object,
              a5,
              a4,
              v12,
              v176,
              1,
              (_DWORD)EcpContext);
      LODWORD(v157) = v92;
      if ( v92 < 0 )
      {
        v124 = FileObject;
        if ( FileObject->FileName.Length )
          ExFreePoolWithTag(FileObject->FileName.Buffer, 0);
        if ( v124->FileObjectExtension )
          IopDeleteFileObjectExtension((__int64)v124);
        IopDecrementDeviceObjectRef((ULONG_PTR)v91, 0, 0);
        if ( v168 )
          IopDereferenceVpbAndFree(v168);
        IoFreeIrp((PIRP)v75);
        return (unsigned int)v92;
      }
      v80 = FileObject;
      *(_QWORD *)(v76 - 24) = FileObject;
      *(_QWORD *)(v75 + 192) = v80;
      v87 = SourceString;
    }
    if ( !*(_DWORD *)(v12 + 120) )
    {
      if ( (*(_DWORD *)(v75 + 16) & 0x80u) != 0 )
      {
        v182 = *(struct _ECP_LIST **)(v75 + 112);
        LODWORD(v157) = 0;
      }
      else
      {
        LODWORD(v157) = -1073741811;
      }
      if ( v182 )
      {
        if ( IopSymlinkGetECP(v182, &P) != -1073741275 )
        {
          MostRecentlyUsedName = (__int16 *)IopSymlinkGetMostRecentlyUsedName((__int64)P);
          if ( !MostRecentlyUsedName[2] )
          {
            updated = IopSymlinkUpdateECP(
                        (PIRP)v75,
                        MostRecentlyUsedName,
                        AbsoluteObjectName->Length - v87->Length,
                        MostRecentlyUsedName[1]);
            LODWORD(v157) = updated;
            if ( updated < 0 )
            {
              *(_DWORD *)(v75 + 48) = updated;
              *(_QWORD *)(v75 + 56) = 0LL;
              v14 &= ~4u;
            }
          }
        }
      }
    }
    KeInitializeEvent(&v80->Event, NotificationEvent, 0);
    *(_QWORD *)(v12 + 8) = v80;
    if ( (v14 & 4) != 0 )
    {
      IopQueueThreadIrp(v75);
      if ( *(char *)(v75 + 71) >= 0 && (v95 = *(_BYTE **)(v75 + 200)) != 0LL && (*v95 & 2) != 0 )
      {
        EtwActivityIdControlKernel(1, &v183);
        v189 = *(_OWORD *)(*(_QWORD *)(v75 + 200) + 24LL);
        v157 = &v189;
        EtwActivityIdControlKernel(2, (PVOID *)&v157);
        LODWORD(v157) = IofCallDriver(AttachedDevice, (PIRP)v75);
        v184[0] = v183;
        EtwActivityIdControlKernel(2, v184);
      }
      else
      {
        LODWORD(v157) = IofCallDriver(AttachedDevice, (PIRP)v75);
      }
    }
    if ( (_DWORD)v157 == 259 )
    {
      if ( (KeGetCurrentThread()->MiscFlags & 0x400) != 0 )
        v14 &= ~0x80u;
      else
        v14 |= 0x80u;
      if ( KeWaitForSingleObject(&v80->Event, Executive, 0, v14 >> 7, 0LL) == 257 )
      {
        while ( 1 )
        {
          CurrentIrql = KeGetCurrentIrql();
          __writecr8(1uLL);
          if ( (*(_DWORD *)(&KeGetCurrentThread()[1].SwapListEntry + 1) & 1) != 0
            || !v80->Event.Header.SignalState && *(_BYTE *)(v75 + 68) )
          {
            break;
          }
          __writecr8(CurrentIrql);
          if ( KeWaitForSingleObject(&v80->Event, Executive, 0, v14 >> 7, 0LL) != 257 )
            goto LABEL_261;
        }
        __writecr8(CurrentIrql);
        IopCancelAlertedRequest(&v80->Event.Header.LockNV, (PIRP)v75);
        v80 = FileObject;
      }
      else
      {
LABEL_261:
        v80 = FileObject;
      }
    }
    if ( (*(_DWORD *)(v75 + 16) & 0x80u) == 0 )
    {
      v98 = ExtraCreateParameter;
    }
    else
    {
      v98 = *(struct _ECP_LIST **)(v75 + 112);
      ExtraCreateParameter = v98;
    }
    if ( *(_DWORD *)(v75 + 48) == 260 )
    {
      v99 = *(_WORD **)(v75 + 160);
      v179 = v99;
      if ( !v98 || IopSymlinkGetECP(v98, &P) == -1073741275 )
      {
        ECP = IopSymlinkCreateECP((PIRP)v75, (__int64)&P);
        if ( ECP >= 0 )
        {
          if ( !v98 )
          {
            IoGetIrpExtraCreateParameter((PIRP)v75, &ExtraCreateParameter);
            v98 = ExtraCreateParameter;
          }
        }
        else
        {
          *(_QWORD *)(v75 + 56) = 0LL;
          *(_DWORD *)(v75 + 48) = ECP;
        }
      }
      if ( *(_DWORD *)(v75 + 48) == 260 )
      {
        IopSymlinkProcessReparse(v75, v80, v99, *(_BYTE *)(v12 + 84) & 8);
        v101 = *(_QWORD *)(v75 + 56) - 2684354563LL;
        if ( v101 <= 0x16 )
        {
          v102 = 4194817LL;
          if ( _bittest64(&v102, v101) )
          {
            v103 = 0;
            if ( !v99[3] )
              v103 = 16;
            v14 = v14 & 0xEF | v103;
            if ( (*(_DWORD *)(v12 + 84) & 8) == 0 )
            {
              ExFreePoolWithTag(v99, 0);
              v179 = 0LL;
            }
          }
        }
      }
    }
    if ( *(_DWORD *)(v75 + 48) || *(_DWORD *)(v12 + 120) )
    {
      v111 = v159;
      goto LABEL_302;
    }
    v104 = 0LL;
    EcpContext = 0LL;
    if ( !v98 )
      goto LABEL_286;
    IopSymlinkRemoveECP(v98, &EcpContext);
    v104 = EcpContext;
    if ( EcpContext )
    {
      if ( (*((_BYTE *)EcpContext + 2) & 1) == 0 )
        goto LABEL_285;
LABEL_286:
      if ( v104 )
        goto LABEL_294;
    }
    RelatedFileObject = (__int64)v80->RelatedFileObject;
    if ( !RelatedFileObject )
    {
LABEL_285:
      v105 = 0;
      goto LABEL_296;
    }
    FileObjectExtension = IopGetFileObjectExtension(RelatedFileObject, 5, 0LL);
    if ( !FileObjectExtension )
    {
      v105 = 0;
      goto LABEL_296;
    }
    v109 = AbsoluteObjectName->Length + 2;
    v110 = v109 + *(unsigned __int16 *)(FileObjectExtension + 16);
    if ( v110 >= 0xFFFF )
    {
      v105 = -1073741562;
LABEL_296:
      if ( v104 )
      {
        IopSymlinkFreeRelatedMountPointChain(v104);
        FsRtlFreeExtraCreateParameter(v104);
      }
      goto LABEL_298;
    }
    v105 = FsRtlAllocateExtraCreateParameterFromLookasideList(
             &IopSymlinkECPGuid,
             (unsigned __int16)(v109 + *(_WORD *)(FileObjectExtension + 16)) + 32,
             v107,
             IopSymlinkCleanupECP,
             &IopSymlinkInfoLookasideList,
             &EcpContext);
    v104 = EcpContext;
    if ( v105 < 0 )
      goto LABEL_296;
    LOWORD(GrantedAccess) = *(_WORD *)(FileObjectExtension + 2);
    LOWORD(AccessMode) = *(_WORD *)(FileObjectExtension + 4);
    LOWORD(GenericMapping) = *(_WORD *)(FileObjectExtension + 16);
    LOWORD(PreviouslyGrantedAccess) = 0;
    IopSymlinkInitializeSymlinkInfo(
      EcpContext,
      v110 + 32,
      AbsoluteObjectName->Buffer,
      AbsoluteObjectName->Length,
      PreviouslyGrantedAccess,
      *(_QWORD *)(FileObjectExtension + 24),
      GenericMapping,
      AccessMode,
      GrantedAccess,
      0LL);
    *v104 = *(_WORD *)FileObjectExtension + v104[8] - *(_WORD *)(FileObjectExtension + 16);
LABEL_294:
    v105 = IopSymlinkSetFoExtension(v80, v104);
    if ( v105 < 0 )
      goto LABEL_296;
    IopSymlinkFreeRelatedMountPointChain(v104);
LABEL_298:
    v111 = v159;
    if ( v105 < 0 )
    {
      IoCancelFileOpen(v159, v80);
      *(_QWORD *)(v75 + 56) = 0LL;
      *(_DWORD *)(v75 + 48) = v105;
    }
    v12 = (__int64)v164;
LABEL_302:
    if ( ExtraCreateParameter )
      *(_QWORD *)(v12 + 168) = ExtraCreateParameter;
    *(_OWORD *)BugCheckParameter4 = *(_OWORD *)(v75 + 48);
    v112 = _mm_cvtsi128_si32(*(__m128i *)BugCheckParameter4);
    v80->Event.Header.SignalState = 1;
    if ( (v14 & 4) != 0 )
    {
      *(_QWORD *)(v75 + 152) = CurrentThread;
      IopDequeueIrpFromThread((_QWORD *)v75);
    }
    if ( (*(_BYTE *)(v75 + 16) & 0x30) == 0x30 )
      ExFreePoolWithTag(*(PVOID *)(v75 + 24), 0);
    IoFreeIrp((PIRP)v75);
    v113 = BugCheckParameter4[1];
    *(_QWORD *)(v12 + 24) = BugCheckParameter4[1];
    if ( v112 < 0 )
    {
      if ( (v80->Flags & 0x200000) == 0 )
      {
        if ( v80->FileName.Length )
        {
          ExFreePoolWithTag(v80->FileName.Buffer, 0);
          v80->FileName.Length = 0;
        }
        v80->DeviceObject = 0LL;
        ObfDereferenceObject(v80);
        IopDecrementDeviceObjectRef((ULONG_PTR)Object, 0, 0);
        if ( v168 )
          IopDereferenceVpbAndFree(v168);
        goto LABEL_452;
      }
LABEL_446:
      ObfDereferenceObject(v80);
LABEL_452:
      *(_QWORD *)(v12 + 8) = 0LL;
      *(_DWORD *)(v12 + 16) = v112;
      return (unsigned int)v112;
    }
    if ( v112 != 260 )
    {
      RelatedDeviceObject = IoGetRelatedDeviceObject(v80);
      if ( v159 != RelatedDeviceObject )
      {
        Vpb = (ULONG_PTR)v80->Vpb;
        v135 = v168;
        if ( Vpb != v168 )
        {
          if ( Vpb )
            IopIncrementVpbRefCount(Vpb, 1);
          if ( v135 )
            IopDereferenceVpbAndFree(v135);
        }
      }
      if ( (v14 & 0x40) == 0 )
      {
        **(_QWORD **)&Size[1] = v80;
        *(_DWORD *)(v12 + 32) = -1096154543;
        ObfReferenceObject(v80);
        v136 = v80->RelatedFileObject;
        if ( (!v136 || (v136->Flags & 0x400000) != 0) && !v80->FileName.Length )
        {
          v137 = RelatedDeviceObject->DeviceType;
          if ( (unsigned int)v137 <= 0x20 )
          {
            v138 = 0x100000308LL;
            if ( _bittest64(&v138, v137) )
              v80->Flags |= 0x400000u;
          }
        }
        result = LODWORD(BugCheckParameter4[0]);
        *(_DWORD *)(v12 + 16) = BugCheckParameter4[0];
        return result;
      }
      if ( !*(_BYTE *)(v12 + 137) )
        goto LABEL_445;
      if ( *(_BYTE *)(v12 + 208) )
      {
        XxxInformation = IopQueryXxxInformation(v80, *(_QWORD *)(v12 + 112), v12 + 204, 1);
        goto LABEL_444;
      }
      v140 = 0;
      FastIoDispatch = RelatedDeviceObject->DriverObject->FastIoDispatch;
      if ( *(_BYTE *)(v12 + 139) )
      {
        if ( FastIoDispatch && FastIoDispatch->SizeOfFastIoDispatch > 0x70 )
        {
          FastIoQueryNetworkOpenInfo = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))FastIoDispatch->FastIoQueryNetworkOpenInfo;
          if ( FastIoQueryNetworkOpenInfo )
          {
            v146 = (MmVerifierData & 0x10) != 0 ? (void *)VfFastIoSnapState() : 0LL;
            LOBYTE(v132) = 1;
            v140 = FastIoQueryNetworkOpenInfo(
                     v80,
                     v132,
                     *((_QWORD *)v164 + 13),
                     BugCheckParameter4,
                     RelatedDeviceObject);
            if ( v146 )
              VfFastIoCheckState(v146);
          }
          v12 = (__int64)v164;
        }
        if ( !v140 )
        {
          v147 = IopQueryXxxInformation(v80, *(_QWORD *)(v12 + 104), (__int64)Size, 1);
          v112 = v147;
          if ( v147 == -1073741811 || v147 == -1073741822 )
          {
            XxxInformation = IopGetNetworkOpenInformation(v80, v12);
LABEL_444:
            v112 = XxxInformation;
          }
        }
      }
      else
      {
        P = 0LL;
        if ( FastIoDispatch )
          FastIoQueryBasicInfo = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))FastIoDispatch->FastIoQueryBasicInfo;
        else
          FastIoQueryBasicInfo = 0LL;
        *(_QWORD *)&Size[1] = FastIoQueryBasicInfo;
        if ( FastIoQueryBasicInfo )
        {
          v143 = (MmVerifierData & 0x10) != 0 ? (void *)VfFastIoSnapState() : 0LL;
          v184[1] = v143;
          LOBYTE(v132) = 1;
          v140 = FastIoQueryBasicInfo(v80, v132, *(_QWORD *)(v12 + 96), BugCheckParameter4, RelatedDeviceObject);
          v170 = v140;
          if ( v143 )
            VfFastIoCheckState(v143);
        }
        if ( v140 )
        {
          v112 = BugCheckParameter4[0];
        }
        else
        {
          Pool_0 = IopVerifierExAllocatePool_0(NonPagedPoolNx, 0x28uLL);
          P = Pool_0;
          if ( Pool_0 )
          {
            v112 = IopQueryXxxInformation(v80, (__int64)Pool_0, (__int64)Size, 1);
            AccessStatus = v112;
            if ( v112 >= 0 )
              memmove(*(void **)(v12 + 96), Pool_0, Size[0]);
            ExFreePoolWithTag(Pool_0, 0);
            goto LABEL_445;
          }
          v112 = -1073741670;
        }
        AccessStatus = v112;
      }
LABEL_445:
      *(_DWORD *)(v12 + 32) = -1096154543;
      IopCloseFile(0LL, v80, 1LL, 1LL);
      goto LABEL_446;
    }
    if ( (v113 & 0xFFFFFFFFFFFFFFFDuLL) != 0 )
    {
      v114 = v113 - 2684354563u;
      if ( v113 - 2684354563u > 0x16 )
        goto LABEL_323;
      v115 = 4194817LL;
      if ( !_bittest64(&v115, v114) )
      {
        v120 = 4194817LL;
LABEL_324:
        v117 = AbsoluteObjectName;
        goto LABEL_325;
      }
      if ( (*(_DWORD *)(v12 + 84) & 8) != 0 )
      {
LABEL_323:
        v120 = 4194817LL;
        goto LABEL_324;
      }
    }
    v116 = v80->FileName.Length;
    v117 = AbsoluteObjectName;
    if ( AbsoluteObjectName->MaximumLength < v116 )
    {
      v118 = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v116, 0x63466F49u);
      if ( !v118 )
      {
        *(_DWORD *)(v12 + 16) = -1073741670;
        return 3221225626LL;
      }
      Buffer = v117->Buffer;
      if ( Buffer )
        ExFreePoolWithTag(Buffer, 0);
      v117->Buffer = v118;
      v117->MaximumLength = v80->FileName.Length;
    }
    RtlCopyUnicodeString(v117, &v80->FileName);
    v120 = 4194817LL;
    if ( BugCheckParameter4[1] - 2684354563u <= 0x16 && _bittest64(&v120, BugCheckParameter4[1] - 2684354563u) )
      *(_QWORD *)(v12 + 40) = 0LL;
LABEL_325:
    if ( v80->FileName.Length )
    {
      ExFreePoolWithTag(v80->FileName.Buffer, 0);
      v80->FileName.Length = 0;
    }
    v80->DeviceObject = 0LL;
    ObfDereferenceObject(v80);
    v13 = 0LL;
    *(_QWORD *)(v12 + 8) = 0LL;
    v121 = Object;
    IopDecrementDeviceObjectRef((ULONG_PTR)Object, 0, 0);
    if ( v168 )
      IopDereferenceVpbAndFree(v168);
    v122 = BugCheckParameter4[1];
    if ( BugCheckParameter4[1] != 1 )
    {
      *(_QWORD *)(v12 + 40) = 0LL;
      if ( v122 - 2684354563u <= 0x16 && _bittest64(&v120, v122 - 2684354563u) )
      {
        *(_DWORD *)(v12 + 152) |= 0x10u;
        v127 = *(_DWORD *)(v12 + 152);
        v128 = *((unsigned int *)v121 + 18);
        if ( (unsigned int)v128 <= 0x24 && (v129 = 0x1080000084LL, _bittest64(&v129, v128)) )
          v130 = v127 | 8;
        else
          v130 = v127 & 0xFFFFFFF7;
        *(_DWORD *)(v12 + 152) = v130;
      }
      if ( *(_BYTE *)(v12 + 136) )
        KeBugCheckEx(0xF9u, (ULONG_PTR)v121, (ULONG_PTR)v111, (ULONG_PTR)v117, v122);
      if ( (*(_DWORD *)(v121[39] + 32LL) & 0x800) == 0 )
      {
        v131 = AccessState;
        *(_QWORD *)&AccessState->RemainingDesiredAccess = AccessState->OriginalDesiredAccess;
        v131->Flags &= ~0x100u;
      }
      if ( v122 - 2684354563u <= 0x16 && _bittest64(&v120, v122 - 2684354563u) && (*(_DWORD *)(v12 + 84) & 8) != 0 )
      {
        *(_QWORD *)(v12 + 24) = v179;
        *(_DWORD *)(v12 + 16) = -2147483603;
        return 2147483693LL;
      }
      else if ( v122 == 2684354585 || v122 == 2 )
      {
        *(_QWORD *)(v176 + 8) = PsGetHostSilo();
        return 872LL;
      }
      else
      {
        return 260LL;
      }
    }
    if ( (unsigned int)++v172 > 0x20 )
      return 3221225473LL;
    **(_QWORD **)&Size[1] = 0LL;
    FileObject = 0LL;
    v11 = DeviceObject;
  }
  v178 = 0LL;
  LODWORD(v157) = PsAcquireSiloHardReference(v84);
  if ( (int)v157 >= 0 )
  {
    SetSpecificExtension = IopGetSetSpecificExtension((__int64)v80, 7u, 0x10u, 1, &v178, 0LL);
    LODWORD(v157) = SetSpecificExtension;
    if ( SetSpecificExtension < 0 )
    {
      PsReleaseSiloHardReference(v84);
      SetSpecificExtension = (int)v157;
    }
    v86 = v178;
    if ( SetSpecificExtension >= 0 )
    {
      *v178 = 16;
      *((_QWORD *)v86 + 1) = v84;
      v86[1] |= 1u;
      ObfReferenceObjectWithTag(v84, 0x70536F49u);
      AttachedDevice = v159;
      goto LABEL_219;
    }
  }
  IoFreeIrp((PIRP)v75);
  IopDecrementDeviceObjectRef((ULONG_PTR)Object, 0, 0);
  if ( v168 )
    IopDereferenceVpbAndFree(v168);
  result = (unsigned int)v157;
LABEL_353:
  *(_DWORD *)(v12 + 16) = result;
  return result;
}
