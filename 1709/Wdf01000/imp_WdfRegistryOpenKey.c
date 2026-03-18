/*
 * XREFs of imp_WdfRegistryOpenKey @ 0x1C0024DB0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0003A40 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C0003AD0 (-FxPoolFree@@YAXPEAX@Z.c)
 *     ?FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x1C00044B0 (-FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z.c)
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C0006850 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     ?DestroyChildren@FxObject@@IEAAXXZ @ 0x1C000A490 (-DestroyChildren@FxObject@@IEAAXXZ.c)
 *     ??1FxObject@@UEAA@XZ @ 0x1C000B110 (--1FxObject@@UEAA@XZ.c)
 *     ?DisposeChildrenWorker@FxObject@@AEAAEW4FxObjectState@@EE@Z @ 0x1C000B190 (-DisposeChildrenWorker@FxObject@@AEAAEW4FxObjectState@@EE@Z.c)
 *     ?ProcessDestroy@FxObject@@AEAAXXZ @ 0x1C000B2A0 (-ProcessDestroy@FxObject@@AEAAXXZ.c)
 *     ?DeletedAndDisposedWorkerLocked@FxObject@@AEAAXEE@Z @ 0x1C000E9E8 (-DeletedAndDisposedWorkerLocked@FxObject@@AEAAXEE@Z.c)
 *     ?FxIsPagedPoolType@@YAEW4_POOL_TYPE@@@Z @ 0x1C0012470 (-FxIsPagedPoolType@@YAEW4_POOL_TYPE@@@Z.c)
 *     ?PerformDisposingDisposeChildrenLocked@FxObject@@AEAAEEE@Z @ 0x1C001FDCC (-PerformDisposingDisposeChildrenLocked@FxObject@@AEAAEEE@Z.c)
 *     ?SetObjectStateLocked@FxObject@@AEAAXW4FxObjectState@@@Z @ 0x1C001FE98 (-SetObjectStateLocked@FxObject@@AEAAXW4FxObjectState@@@Z.c)
 *     ?MarkPassiveCallbacks@FxObject@@QEAAXW4FxObjectLockState@@@Z @ 0x1C0020140 (-MarkPassiveCallbacks@FxObject@@QEAAXW4FxObjectLockState@@@Z.c)
 *     WPP_IFR_SF_d @ 0x1C0025BA0 (WPP_IFR_SF_d.c)
 *     WPP_IFR_SF_qqLL @ 0x1C0027BC0 (WPP_IFR_SF_qqLL.c)
 *     ?PerformEarlyDisposeWorkerAndUnlock@FxObject@@AEAAEEE@Z @ 0x1C003B710 (-PerformEarlyDisposeWorkerAndUnlock@FxObject@@AEAAEEE@Z.c)
 *     ?RemoveChildObjectInternal@FxObject@@AEAAJPEAV1@@Z @ 0x1C003B78C (-RemoveChildObjectInternal@FxObject@@AEAAJPEAV1@@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C003C594 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ??_GFxVerifierLock@@QEAAPEAXI@Z @ 0x1C003C5E4 (--_GFxVerifierLock@@QEAAPEAXI@Z.c)
 *     ?FxPoolRemoveNonPagedAllocateTracker@@YAXPEAUFX_POOL_TRACKER@@@Z @ 0x1C003C78C (-FxPoolRemoveNonPagedAllocateTracker@@YAXPEAUFX_POOL_TRACKER@@@Z.c)
 *     ?PostRequestCompletedCallback@FxIoQueue@@QEAAXPEAVFxRequest@@@Z @ 0x1C003C7FC (-PostRequestCompletedCallback@FxIoQueue@@QEAAXPEAVFxRequest@@@Z.c)
 *     ?_CleanupPointer@FxObject@@SAPEAUFX_POOL_HEADER@@PEAU_FX_DRIVER_GLOBALS@@PEAV1@@Z @ 0x1C003C838 (-_CleanupPointer@FxObject@@SAPEAUFX_POOL_HEADER@@PEAU_FX_DRIVER_GLOBALS@@PEAV1@@Z.c)
 *     ??_GFxRequestTimer@@QEAAPEAXI@Z @ 0x1C003C86C (--_GFxRequestTimer@@QEAAPEAXI@Z.c)
 *     ?FxPoolRemovePagedAllocateTracker@@YAXPEAUFX_POOL_TRACKER@@@Z @ 0x1C003C898 (-FxPoolRemovePagedAllocateTracker@@YAXPEAUFX_POOL_TRACKER@@@Z.c)
 *     ?Add@FxDisposeList@@QEAAXPEAVFxObject@@@Z @ 0x1C003C900 (-Add@FxDisposeList@@QEAAXPEAVFxObject@@@Z.c)
 *     ??_GFxTagTracker@@QEAAPEAXI@Z @ 0x1C003C970 (--_GFxTagTracker@@QEAAPEAXI@Z.c)
 *     ?TraceDroppedEvent@FxObject@@QEAAXW4FxObjectDroppedEvent@@@Z @ 0x1C003C99C (-TraceDroppedEvent@FxObject@@QEAAXW4FxObjectDroppedEvent@@@Z.c)
 *     ?QueueDeferredDisposeLocked@FxObject@@AEAAXW4FxObjectState@@@Z @ 0x1C003CF48 (-QueueDeferredDisposeLocked@FxObject@@AEAAXW4FxObjectState@@@Z.c)
 *     ?CheckForAbandondedTags@FxTagTracker@@QEAAXXZ @ 0x1C003CF8C (-CheckForAbandondedTags@FxTagTracker@@QEAAXXZ.c)
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z @ 0x1C003D0A4 (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z.c)
 *     ?FxMdlFreeDebug@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAU_MDL@@@Z @ 0x1C003D2F4 (-FxMdlFreeDebug@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAU_MDL@@@Z.c)
 *     ?ReturnReservedRequest@FxIoQueue@@QEAAXPEAVFxRequest@@@Z @ 0x1C003D3F8 (-ReturnReservedRequest@FxIoQueue@@QEAAXPEAVFxRequest@@@Z.c)
 *     memset @ 0x1C003D9C0 (memset.c)
 *     WPP_IFR_SF_dd @ 0x1C0065BD8 (WPP_IFR_SF_dd.c)
 *     WPP_IFR_SF_qddd @ 0x1C0066444 (WPP_IFR_SF_qddd.c)
 *     WPP_IFR_SF_qdd @ 0x1C00701C4 (WPP_IFR_SF_qdd.c)
 *     WPP_IFR_SF_DDxd @ 0x1C0080350 (WPP_IFR_SF_DDxd.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C00816D8 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     ?Vf_VerifyConstruct@FxObject@@AEAAXPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C00D8B00 (-Vf_VerifyConstruct@FxObject@@AEAAXPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     ?Vf_VerifyLeakDetectionConsiderObject@FxObject@@AEAAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00D8B40 (-Vf_VerifyLeakDetectionConsiderObject@FxObject@@AEAAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

__int64 __fastcall imp_WdfRegistryOpenKey(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFKEY__ *ParentKey,
        _UNICODE_STRING *KeyName,
        ACCESS_MASK DesiredAccess,
        _WDF_OBJECT_ATTRIBUTES *KeyAttributes,
        WDFKEY__ **Key)
{
  _WDF_OBJECT_ATTRIBUTES *v6; // r14
  _FX_DRIVER_GLOBALS *DriverName; // rdi
  __int64 result; // rax
  unsigned __int16 v10; // r9
  unsigned __int16 Length; // dx
  int v12; // eax
  _POOL_TYPE v13; // esi
  unsigned __int64 ContextSizeOverride; // r8
  ULONG v15; // ebp
  unsigned __int64 v16; // r13
  signed int v17; // ebx
  void *Caller; // rax
  void (__fastcall ***v19)(FxObject *); // rax
  _FX_DRIVER_GLOBALS *v20; // rdx
  void (__fastcall ***v21)(FxObject *); // rbx
  FxObject *v22; // rsi
  _LIST_ENTRY *v23; // r12
  void (__fastcall **v24)(FxObject *); // rax
  void **v25; // rbp
  void (__fastcall **v26)(FxObject *); // rax
  KIRQL v27; // bp
  KIRQL v28; // dl
  _LIST_ENTRY *Blink; // rcx
  unsigned int v30; // ebp
  WDFKEY__ *v31; // rsi
  NTSTATUS v32; // eax
  unsigned __int16 v33; // ax
  _QWORD *i; // rax
  void (__fastcall *v35)(FxObject *); // rax
  KIRQL v36; // al
  int v37; // edx
  KIRQL v38; // r15
  FxObject *v39; // rdi
  KIRQL v40; // r14
  _LIST_ENTRY *Flink; // rcx
  void (__fastcall **v42)(FxObject *); // rax
  __int16 v43; // ax
  char v44; // al
  void (__fastcall ***v45)(FxObject *); // rcx
  void (__fastcall ****v46)(FxObject *); // r14
  void (__fastcall ***v47)(FxObject *); // rdi
  __int16 v48; // ax
  FxObjectDebugLeakDetection *v49; // rdx
  unsigned int v50; // r8d
  __int64 (__fastcall *v51)(FxObject *, volatile signed __int32 *, __int64, const char *); // rax
  __int16 v52; // cx
  FxTagTracker *v53; // r14
  unsigned __int16 v54; // cx
  _QWORD *k; // rdi
  void (__fastcall *v56)(unsigned __int64); // rax
  void (__fastcall *v57)(unsigned __int64); // rax
  unsigned __int16 v58; // ax
  _QWORD *v59; // rcx
  _QWORD *v60; // rdi
  void (__fastcall *v61)(FxObject *, unsigned int); // rdx
  FxRegKey *(__fastcall *v62)(FxRegKey *, char, unsigned int); // rax
  void (__fastcall **v63)(FxObject *); // rcx
  void (__fastcall **v64)(FxObject *); // rcx
  FX_POOL_TRACKER *v65; // rdi
  char v66; // r15
  char v67; // r14
  char v68; // r13
  __int64 v69; // rdx
  signed __int32 v70; // edi
  __int16 v71; // ax
  _MDL *v72; // rcx
  void (__fastcall **v73)(FxObject *); // rcx
  void (__fastcall **v74)(FxObject *); // rdi
  FxRequestTimer *v75; // rcx
  __int16 v76; // cx
  FxTagTracker *v77; // r8
  unsigned __int16 v78; // cx
  _QWORD *v79; // rsi
  void (__fastcall *v80)(unsigned __int64, __int64, FxTagTracker *); // rax
  void (__fastcall *v81)(unsigned __int64, __int64, FxTagTracker *); // rax
  unsigned __int16 v82; // ax
  char v83; // dl
  _QWORD *v84; // rcx
  _QWORD *v85; // rsi
  __int64 v86; // rdx
  void (__fastcall *v87)(FxRequestFromLookaside *, unsigned int); // rax
  _MDL *v88; // rcx
  void (__fastcall **v89)(FxObject *); // rsi
  void (__fastcall **v90)(FxObject *); // rcx
  void (__fastcall **v91)(FxObject *); // r12
  FxRequestTimer *v92; // rcx
  void (__fastcall ***v93)(FxObject *); // r12
  void (__fastcall *v94)(FxObject *); // rax
  _SLIST_ENTRY *v95; // r12
  void (__fastcall **v96)(FxObject *); // rsi
  void (__fastcall ***v97)(FxObject *); // r14
  KIRQL v98; // r15
  __int16 v99; // cx
  unsigned __int8 v100; // al
  FxRequest *(__fastcall *v101)(FxRequest *, char); // rax
  void (__fastcall **v102)(FxObject *); // rcx
  void (__fastcall **v103)(FxObject *); // rcx
  void (__fastcall ***v104)(FxObject *); // rax
  FX_POOL_TRACKER *v105; // rsi
  _SLIST_ENTRY *v106; // r12
  FxObject *v107; // rcx
  _MDL *v108; // rcx
  void (__fastcall **v109)(FxObject *); // rcx
  void (__fastcall **v110)(FxObject *); // rsi
  FxRequestTimer *v111; // rcx
  void (__fastcall ***v112)(FxObject *); // rcx
  void *ParentObject; // rdx
  unsigned __int8 CurrentIrql; // al
  unsigned __int16 v115; // r9
  const _WDF_OBJECT_CONTEXT_TYPE_INFO *ContextTypeInfo; // rax
  unsigned __int64 v117; // rax
  unsigned __int64 v118; // rax
  __int64 v119; // rax
  bool v120; // cf
  const _WDF_OBJECT_CONTEXT_TYPE_INFO *v121; // rax
  unsigned __int64 ContextSize; // r8
  unsigned __int64 v123; // rdx
  unsigned __int16 v124; // ax
  char *v125; // rax
  void (__fastcall *EvtDestroyCallback)(void *); // rcx
  void (__fastcall *EvtCleanupCallback)(void *); // rcx
  _FX_DRIVER_GLOBALS *v128; // rcx
  const void *v129; // rdx
  _FX_DRIVER_GLOBALS *v130; // rcx
  const void *v131; // rdx
  _FX_DRIVER_GLOBALS *v132; // rcx
  const void *v133; // rdx
  _FX_DRIVER_GLOBALS *v134; // rcx
  const void *v135; // rdx
  KIRQL v136; // di
  unsigned __int16 v137; // ax
  char *j; // rdi
  void (__fastcall *v139)(unsigned __int64); // rax
  _FX_DRIVER_GLOBALS *v140; // rcx
  const void *v141; // rdx
  FxTagTracker *v142; // rcx
  void (__fastcall **v143)(FxObject *); // rcx
  FxVerifierLock *v144; // rcx
  FxTagTracker *v145; // rcx
  void (__fastcall **v146)(FxObject *); // rcx
  FxVerifierLock *v147; // rcx
  FX_POOL_HEADER *v148; // rax
  void (__fastcall **v149)(FxObject *); // rcx
  FxVerifierLock *v150; // rcx
  char v151; // di
  FxIoQueue *v152; // rsi
  _IRP *v153; // rcx
  CCHAR v154; // dl
  FxRequest *v155; // rdx
  FxTagTracker *v156; // rcx
  const _GUID *Tag; // [rsp+20h] [rbp-C8h]
  void *m_Key; // [rsp+50h] [rbp-98h]
  FxRegKey *pParent; // [rsp+58h] [rbp-90h] BYREF
  void *PPObject; // [rsp+60h] [rbp-88h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+68h] [rbp-80h] BYREF
  void *retaddr; // [rsp+E8h] [rbp+0h]
  KIRQL v163; // [rsp+F0h] [rbp+8h]
  KIRQL v164; // [rsp+F8h] [rbp+10h]
  FxTagTracker *v165; // [rsp+F8h] [rbp+10h]
  void *v166; // [rsp+100h] [rbp+18h] BYREF
  ACCESS_MASK v167; // [rsp+108h] [rbp+20h]

  v167 = DesiredAccess;
  v6 = KeyAttributes;
  DriverName = (_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName;
  if ( ParentKey )
  {
    FxObjectHandleGetPtr(
      (_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName,
      (unsigned __int64)ParentKey,
      0x1006u,
      (void **)&pParent);
    DriverName = pParent->FxPagedObject::FxObject::m_Globals;
    m_Key = pParent->m_Key;
  }
  else
  {
    m_Key = 0LL;
    if ( KeyAttributes )
    {
      if ( KeyAttributes->Size == 56 )
      {
        ParentObject = KeyAttributes->ParentObject;
        if ( ParentObject )
        {
          FxObjectHandleGetPtr(
            (_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName,
            (unsigned __int64)ParentObject,
            0x1000u,
            &PPObject);
          DriverName = (_FX_DRIVER_GLOBALS *)*((_QWORD *)PPObject + 2);
        }
      }
      else
      {
        WPP_IFR_SF_qddd(
          (_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName,
          0,
          6u,
          0xBu,
          WPP_FxValidateFunctions_hpp_Traceguids,
          KeyAttributes,
          56,
          KeyAttributes->Size,
          -1073741820);
      }
    }
  }
  if ( !KeyName )
    FxVerifierNullBugCheck(DriverName, retaddr);
  if ( !Key )
    FxVerifierNullBugCheck(DriverName, retaddr);
  *Key = 0LL;
  if ( DriverName->FxVerifierOn )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql )
    {
      WPP_IFR_SF_dd(DriverName, 2u, 0x12u, 0xAu, WPP_fxverifier_h_Traceguids, CurrentIrql, 0);
      FxVerifierDbgBreakPoint(DriverName);
      return 3221225488LL;
    }
  }
  result = FxValidateObjectAttributes(DriverName, v6, 0, DesiredAccess);
  if ( (int)result >= 0 )
  {
    Length = KeyName->Length;
    if ( (KeyName->Length & 1) != 0 )
    {
      v12 = Length;
      v115 = 13;
    }
    else
    {
      LOWORD(v12) = KeyName->MaximumLength;
      if ( (v12 & 1) != 0 )
      {
        v12 = (unsigned __int16)v12;
        v115 = 14;
      }
      else
      {
        if ( !(_WORD)v12 || KeyName->Buffer )
        {
          if ( Length <= (unsigned __int16)v12 )
          {
            v13 = ExDefaultNonPagedPoolType;
            ContextSizeOverride = 0LL;
            v15 = DriverName->Tag;
            if ( v6 )
            {
              ContextTypeInfo = v6->ContextTypeInfo;
              if ( ContextTypeInfo )
              {
                ContextSizeOverride = v6->ContextSizeOverride;
                if ( !ContextSizeOverride )
                  ContextSizeOverride = ContextTypeInfo->ContextSize;
              }
            }
            v16 = 176LL;
            v17 = 0;
            if ( ContextSizeOverride )
            {
              v117 = (ContextSizeOverride + 7) & 0xFFFFFFFFFFFFFFF8uLL;
              if ( v117 < ContextSizeOverride )
                goto LABEL_255;
              v118 = v117 + 176;
              v16 = -1LL;
              if ( v118 >= 0xB0 )
                v16 = v118;
              v17 = v118 < 0xB0 ? 0xC0000095 : 0;
              if ( v118 < 0xB0 )
                goto LABEL_254;
            }
            if ( DriverName->FxVerifierHandle )
            {
              v119 = -1LL;
              LOBYTE(Length) = v16;
              if ( v16 + 48 >= v16 )
                v119 = v16 + 48;
              v120 = v16 + 48 < v16;
              v16 = v119;
              v17 = v120 ? 0xC0000095 : 0;
            }
            if ( v17 < 0 )
            {
LABEL_254:
              WPP_IFR_SF_DDxd(DriverName, Length, ContextSizeOverride, v10, Tag, 0x80u, 0, ContextSizeOverride, v17);
              if ( v17 < 0 )
                goto LABEL_255;
            }
            if ( DriverName->FxPoolTrackingOn )
              Caller = retaddr;
            else
              Caller = 0LL;
            v19 = (void (__fastcall ***)(FxObject *))FxPoolAllocator(
                                                       DriverName,
                                                       &DriverName->FxPoolFrameworks,
                                                       v13,
                                                       v16,
                                                       v15,
                                                       Caller);
            v21 = v19;
            if ( v19 )
            {
              if ( DriverName->FxVerifierHandle )
              {
                memset(v19, 0, 0x30uLL);
                *((_DWORD *)v21 + 8) = 1146058822;
                v21 += 6;
              }
              v21[17] = 0LL;
              v21[18] = 0LL;
              v21[19] = 0LL;
              v21[20] = 0LL;
              v21[21] = 0LL;
              v21[16] = (void (__fastcall **)(FxObject *))v21;
              if ( v6 )
              {
                v121 = v6->ContextTypeInfo;
                if ( v121 )
                {
                  ContextSize = v6->ContextSizeOverride;
                  if ( !ContextSize )
                    ContextSize = v121->ContextSize;
                  memset(v21 + 22, 0, (ContextSize + 7) & 0xFFFFFFFFFFFFFFF8uLL);
                }
                v21[20] = (void (__fastcall **)(FxObject *))v6->ContextTypeInfo;
              }
            }
            if ( v21 )
            {
              v21[2] = (void (__fastcall **)(FxObject *))DriverName;
              *v21 = (void (__fastcall **)(FxObject *))&FxObject::`vftable';
              v22 = 0LL;
              *((_DWORD *)v21 + 2) = 8392710;
              v21[7] = 0LL;
              *((_BYTE *)v21 + 48) = 1;
              v21[8] = 0LL;
              v23 = (_LIST_ENTRY *)(v21 + 9);
              *((_DWORD *)v21 + 3) = 1;
              *((_DWORD *)v21 + 6) = 0x10000;
              v21[5] = (void (__fastcall **)(FxObject *))(v21 + 4);
              v21[4] = (void (__fastcall **)(FxObject *))(v21 + 4);
              v21[10] = (void (__fastcall **)(FxObject *))(v21 + 9);
              v21[9] = (void (__fastcall **)(FxObject *))(v21 + 9);
              v24 = v21[2];
              v21[11] = 0LL;
              v21[12] = 0LL;
              if ( *((_BYTE *)v24 + 316) )
                FxObject::Vf_VerifyConstruct((FxObject *)v21, v20, 0);
              *((_WORD *)v21 + 12) |= 0x11u;
              v25 = (void **)(v21 + 14);
              *v21 = (void (__fastcall **)(FxObject *))FxRegKey::`vftable';
              v21[14] = 0LL;
              v21[13] = 0LL;
              v21[15] = (void (__fastcall **)(FxObject *))DriverName;
              v166 = 0LL;
              if ( !*((_WORD *)v21 + 5) )
              {
                v30 = -1073741816;
                goto LABEL_48;
              }
              if ( !v6 )
                goto LABEL_421;
              if ( v6->ExecutionLevel == WdfExecutionLevelPassive )
              {
                FxObject::MarkPassiveCallbacks((FxObject *)v21, ObjectLock);
                v22 = (FxObject *)v166;
              }
              v123 = (unsigned __int64)v6->ParentObject;
              if ( v123 )
              {
                FxObjectHandleGetPtr((_FX_DRIVER_GLOBALS *)v21[2], v123, 0x1000u, &v166);
                v22 = (FxObject *)v166;
              }
              else
              {
LABEL_421:
                if ( !v21[8] )
                {
                  v26 = v21[2];
                  if ( (char *)v26[9] != (char *)v21 )
                  {
                    v22 = (FxObject *)v26[9];
                    v166 = v22;
                  }
                }
              }
              if ( v22 )
              {
                v27 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v21 + 7);
                v164 = v27;
                if ( *((_WORD *)v21 + 13) != 1 )
                {
                  FxObject::TraceDroppedEvent((FxObject *)v21, FxObjectDroppedEventAssignParentObject);
                  KeReleaseSpinLock((PKSPIN_LOCK)v21 + 7, v27);
                  v30 = -1073741738;
                  goto LABEL_48;
                }
                if ( v21[8] )
                {
                  KeReleaseSpinLock((PKSPIN_LOCK)v21 + 7, v27);
                  v30 = -1071644147;
                  goto LABEL_48;
                }
                v28 = KeAcquireSpinLockRaiseToDpc(&v22->m_SpinLock.m_Lock);
                v163 = v28;
                if ( v22->m_ObjectState == 1 )
                {
                  Blink = v22->m_ChildListHead.Blink;
                  if ( Blink->Flink != &v22->m_ChildListHead )
                    __fastfail(3u);
                  v23->Flink = &v22->m_ChildListHead;
                  v21[10] = (void (__fastcall **)(FxObject *))Blink;
                  Blink->Flink = v23;
                  v22->m_ChildListHead.Blink = v23;
                  if ( !v21[12] )
                    v21[12] = (void (__fastcall **)(FxObject *))v22->m_DeviceBase;
                  KeReleaseSpinLock(&v22->m_SpinLock.m_Lock, v28);
                  v30 = 0;
                  v21[8] = (void (__fastcall **)(FxObject *))v22;
                }
                else
                {
                  FxObject::TraceDroppedEvent(v22, FxObjectDroppedEventAddChildObjectInternal);
                  KeReleaseSpinLock(&v22->m_SpinLock.m_Lock, v163);
                  v30 = -1073741738;
                }
                KeReleaseSpinLock((PKSPIN_LOCK)v21 + 7, v164);
                if ( (v30 & 0x80000000) != 0 )
                {
LABEL_48:
                  v33 = *((_WORD *)v21 + 5);
                  if ( v33 )
                  {
                    for ( i = (void (__fastcall ***)(FxObject *))((char *)v21 + v33); i; i = (_QWORD *)i[1] )
                    {
                      i[3] = 0LL;
                      i[2] = 0LL;
                    }
                  }
                  *((_WORD *)v21 + 12) &= ~0x400u;
                  v35 = (*v21)[6];
                  if ( v35 != FxObject::DeleteObject )
                    goto LABEL_362;
                  v36 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v21 + 7);
                  v37 = *((unsigned __int16 *)v21 + 13);
                  v38 = v36;
                  *((_WORD *)v21 + 12) |= 4u;
                  if ( v37 != 1 )
                  {
                    if ( v37 == 2 )
                    {
                      v107 = (FxObject *)v21[8];
                      if ( v107 )
                      {
                        if ( FxObject::RemoveChildObjectInternal(v107, (FxObject *)v21) == -1073741738 )
                        {
                          FxObject::SetObjectStateLocked((FxObject *)v21, 8u);
                          KeReleaseSpinLock((PKSPIN_LOCK)v21 + 7, v38);
                          return v30;
                        }
                        v21[8] = 0LL;
                      }
                      FxObject::DeletedAndDisposedWorkerLocked((FxObject *)v21, v38, 1u);
                    }
                    else
                    {
                      FxObject::TraceDroppedEvent((FxObject *)v21, FxObjectDroppedEventDeleteObject);
                      KeReleaseSpinLock((PKSPIN_LOCK)v21 + 7, v38);
                    }
                    return v30;
                  }
                  v39 = (FxObject *)v21[8];
                  if ( v39 )
                  {
                    v40 = KeAcquireSpinLockRaiseToDpc(&v39->m_SpinLock.m_Lock);
                    if ( v39->m_ObjectState != 1 )
                    {
                      FxObject::TraceDroppedEvent(v39, FxObjectDroppedEventRemoveChildObjectInternal);
                      KeReleaseSpinLock(&v39->m_SpinLock.m_Lock, v40);
                      FxObject::SetObjectStateLocked((FxObject *)v21, 7u);
                      KeReleaseSpinLock((PKSPIN_LOCK)v21 + 7, v38);
                      return v30;
                    }
                    Flink = v23->Flink;
                    if ( v23->Flink->Blink != v23 || (v42 = v21[10], (char *)*v42 != (char *)v23) )
                      __fastfail(3u);
                    *v42 = (void (__fastcall *)(FxObject *))Flink;
                    Flink->Blink = (_LIST_ENTRY *)v42;
                    v21[10] = (void (__fastcall **)(FxObject *))(v21 + 9);
                    v23->Flink = v23;
                    KeReleaseSpinLock(&v39->m_SpinLock.m_Lock, v40);
                    v21[8] = 0LL;
                  }
                  v43 = *((_WORD *)v21 + 12);
                  if ( (v43 & 0x20) != 0 || (v43 & 0x10) != 0 && v38 )
                    goto LABEL_297;
                  if ( (v43 & 0x200) != 0 )
                  {
                    v128 = (_FX_DRIVER_GLOBALS *)v21[2];
                    if ( v128->FxVerboseOn )
                    {
                      v129 = (const void *)((unsigned __int64)v21 ^ 0xFFFFFFFFFFFFFFF8uLL);
                      if ( !*((_WORD *)v21 + 5) )
                        v129 = 0LL;
                      WPP_IFR_SF_qqLL(
                        v128,
                        5u,
                        0x14u,
                        0xAu,
                        WPP_FxObject_hpp_Traceguids,
                        v21,
                        v129,
                        *((unsigned __int16 *)v21 + 13),
                        9u);
                    }
                    if ( *((char *)v21 + 24) < 0 )
                      *((_BYTE *)v21 + _InterlockedIncrement((volatile signed __int32 *)v21 - 6) - 32) = 9;
                  }
                  v44 = *((_BYTE *)v21 + 24);
                  *((_WORD *)v21 + 13) = 9;
                  if ( (v44 & 0x20) != 0 )
                  {
                    if ( v38 )
                    {
LABEL_297:
                      FxObject::QueueDeferredDisposeLocked((FxObject *)v21, FxObjectStateDeferedDeleting);
                      KeReleaseSpinLock((PKSPIN_LOCK)v21 + 7, v38);
                      return v30;
                    }
                  }
                  v45 = (void (__fastcall ***)(FxObject *))v21[4];
                  v46 = (void (__fastcall ****)(FxObject *))(v21 + 4);
                  if ( v45 != v21 + 4 )
                  {
                    while ( !v38 || (*(_BYTE *)(v45 - 6) & 0x10) == 0 )
                    {
                      v45 = (void (__fastcall ***)(FxObject *))*v45;
                      if ( v45 == (void (__fastcall ***)(FxObject *))v46 )
                        goto LABEL_64;
                    }
                    goto LABEL_297;
                  }
LABEL_64:
                  KeReleaseSpinLock((PKSPIN_LOCK)v21 + 7, v38);
                  v47 = *v46;
                  if ( *v46 != (void (__fastcall ***)(FxObject *))v46 )
                  {
                    while ( 1 )
                    {
                      v97 = v47 - 9;
                      v98 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v47 - 2);
                      if ( *((_WORD *)v47 - 23) != 1 )
                      {
                        switch ( *((_WORD *)v47 - 23) )
                        {
                          case 5:
                            v100 = FxObject::PerformDisposingDisposeChildrenLocked((FxObject *)(v47 - 9), v98, 0);
                            goto LABEL_192;
                          case 7:
                            v100 = FxObject::PerformEarlyDisposeWorkerAndUnlock((FxObject *)(v47 - 9), v98, 0);
                            goto LABEL_192;
                          default:
                            FxObject::TraceDroppedEvent((FxObject *)(v47 - 9), FxObjectDroppedEventPerformEarlyDispose);
                            KeReleaseSpinLock((PKSPIN_LOCK)v97 + 7, v98);
                            goto LABEL_193;
                        }
                      }
                      if ( ((_WORD)v97[3] & 0x200) != 0 )
                      {
                        v130 = (_FX_DRIVER_GLOBALS *)v97[2];
                        if ( v130->FxVerboseOn )
                        {
                          v131 = (const void *)((unsigned __int64)v97 ^ 0xFFFFFFFFFFFFFFF8uLL);
                          if ( !*((_WORD *)v97 + 5) )
                            v131 = 0LL;
                          WPP_IFR_SF_qqLL(v130, 5u, 0x14u, 0xAu, WPP_FxObject_hpp_Traceguids, v47 - 9, v131, 1u, 3u);
                        }
                        if ( *((char *)v97 + 24) < 0 )
                          *((_BYTE *)v97 + _InterlockedIncrement((volatile signed __int32 *)v47 - 24) - 32) = 3;
                      }
                      *((_WORD *)v97 + 13) = 3;
                      if ( ((_WORD)v97[3] & 0x200) != 0 )
                      {
                        v132 = (_FX_DRIVER_GLOBALS *)v97[2];
                        if ( v132->FxVerboseOn )
                        {
                          v133 = (const void *)((unsigned __int64)v97 ^ 0xFFFFFFFFFFFFFFF8uLL);
                          if ( !*((_WORD *)v97 + 5) )
                            v133 = 0LL;
                          WPP_IFR_SF_qqLL(v132, 5u, 0x14u, 0xAu, WPP_FxObject_hpp_Traceguids, v47 - 9, v133, 3u, 4u);
                        }
                        if ( *((char *)v97 + 24) < 0 )
                          *((_BYTE *)v97 + _InterlockedIncrement((volatile signed __int32 *)v47 - 24) - 32) = 4;
                      }
                      *((_WORD *)v97 + 13) = 4;
                      if ( FxObject::DisposeChildrenWorker((FxObject *)(v47 - 9), FxObjectStateDeferedDisposing, v98, 0) )
                      {
                        v99 = *((_WORD *)v97 + 12);
                        if ( (v99 & 0x104) == 0x104 )
                        {
                          FxObject::DeletedAndDisposedWorkerLocked((FxObject *)(v47 - 9), v98, 0);
                        }
                        else
                        {
                          if ( (v99 & 0x200) != 0 )
                          {
                            v134 = (_FX_DRIVER_GLOBALS *)v97[2];
                            if ( v134->FxVerboseOn )
                            {
                              v135 = (const void *)((unsigned __int64)v97 ^ 0xFFFFFFFFFFFFFFF8uLL);
                              if ( !*((_WORD *)v97 + 5) )
                                v135 = 0LL;
                              WPP_IFR_SF_qqLL(
                                v134,
                                5u,
                                0x14u,
                                0xAu,
                                WPP_FxObject_hpp_Traceguids,
                                v47 - 9,
                                v135,
                                *((unsigned __int16 *)v97 + 13),
                                2u);
                            }
                            if ( *((char *)v97 + 24) < 0 )
                              *((_BYTE *)v97 + _InterlockedIncrement((volatile signed __int32 *)v47 - 24) - 32) = 2;
                          }
                          *((_WORD *)v97 + 13) = 2;
                        }
                        v100 = 1;
                      }
                      else
                      {
                        v100 = 0;
                      }
LABEL_192:
                      if ( !v100 )
                        break;
LABEL_193:
                      v47 = (void (__fastcall ***)(FxObject *))*v47;
                      if ( v47 == v21 + 4 )
                        goto LABEL_65;
                    }
                    v136 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v21 + 7);
                    FxObject::QueueDeferredDisposeLocked((FxObject *)v21, FxObjectStateDeferedDeleting);
                    KeReleaseSpinLock((PKSPIN_LOCK)v21 + 7, v136);
                    return v30;
                  }
LABEL_65:
                  if ( ((_WORD)v21[3] & 0x800) == 0 || ((unsigned __int8 (__fastcall *)(_QWORD))(*v21)[7])(v21) )
                  {
                    v48 = *((_WORD *)v21 + 12);
                    if ( (v48 & 0x400) != 0 && (v48 & 8) != 0 )
                    {
                      v137 = *((_WORD *)v21 + 5);
                      if ( v137 )
                      {
                        for ( j = (char *)v21 + v137; j; j = (char *)*((_QWORD *)j + 1) )
                        {
                          v139 = (void (__fastcall *)(unsigned __int64))*((_QWORD *)j + 2);
                          if ( v139 )
                          {
                            v139((unsigned __int64)v21 ^ 0xFFFFFFFFFFFFFFF8uLL);
                            *((_QWORD *)j + 2) = 0LL;
                          }
                        }
                      }
                      *((_WORD *)v21 + 12) &= ~0x400u;
                    }
                  }
                  if ( ((_WORD)v21[3] & 0x200) != 0 )
                  {
                    v140 = (_FX_DRIVER_GLOBALS *)v21[2];
                    if ( v140->FxVerboseOn )
                    {
                      v141 = (const void *)((unsigned __int64)v21 ^ 0xFFFFFFFFFFFFFFF8uLL);
                      if ( !*((_WORD *)v21 + 5) )
                        v141 = 0LL;
                      WPP_IFR_SF_qqLL(
                        v140,
                        5u,
                        0x14u,
                        0xAu,
                        WPP_FxObject_hpp_Traceguids,
                        v21,
                        v141,
                        *((unsigned __int16 *)v21 + 13),
                        0xAu);
                    }
                    if ( *((char *)v21 + 24) < 0 )
                      *((_BYTE *)v21 + _InterlockedIncrement((volatile signed __int32 *)v21 - 6) - 32) = 10;
                  }
                  *((_WORD *)v21 + 13) = 10;
                  FxObject::DestroyChildren((FxObject *)v21);
                  v51 = (__int64 (__fastcall *)(FxObject *, volatile signed __int32 *, __int64, const char *))(*v21)[2];
                  if ( v51 == FxObject::Release )
                  {
                    if ( *((char *)v21 + 24) < 0 )
                    {
                      v142 = (FxTagTracker *)*(v21 - 6);
                      if ( v142 )
                        FxTagTracker::UpdateTagHistory(
                          v142,
                          0LL,
                          1246,
                          "minkernel\\wdf\\framework\\shared\\object\\fxobjectstatemachine.cpp",
                          TagRelease,
                          *((_DWORD *)v21 + 3) - 1);
                    }
                    if ( _InterlockedDecrement((volatile signed __int32 *)v21 + 3) )
                      return v30;
                    v52 = *((_WORD *)v21 + 12);
                    if ( (v52 & 0x20) == 0 && ((v52 & 0x10) == 0 || !KeGetCurrentIrql()) )
                    {
                      if ( (v52 & 0x80u) != 0 )
                      {
                        v53 = (FxTagTracker *)*(v21 - 6);
                        if ( v53 )
                          FxTagTracker::CheckForAbandondedTags((FxTagTracker *)*(v21 - 6));
                      }
                      else
                      {
                        v53 = 0LL;
                      }
                      v54 = *((_WORD *)v21 + 5);
                      if ( v54 && ((_BYTE)v21[3] & 8) != 0 )
                      {
                        for ( k = (void (__fastcall ***)(FxObject *))((char *)v21 + v54); k; k = (_QWORD *)k[1] )
                        {
                          v56 = (void (__fastcall *)(unsigned __int64))k[2];
                          if ( v56 )
                          {
                            v56((unsigned __int64)v21 ^ 0xFFFFFFFFFFFFFFF8uLL);
                            k[2] = 0LL;
                          }
                          v57 = (void (__fastcall *)(unsigned __int64))k[3];
                          if ( v57 )
                          {
                            v57((unsigned __int64)v21 ^ 0xFFFFFFFFFFFFFFF8uLL);
                            k[3] = 0LL;
                          }
                        }
                        v58 = *((_WORD *)v21 + 5);
                        LOBYTE(v49) = 1;
                        if ( v58 )
                        {
                          v59 = (void (__fastcall ***)(FxObject *))((char *)v21 + v58);
                          if ( v59 )
                          {
                            do
                            {
                              v60 = (_QWORD *)v59[1];
                              if ( !(_BYTE)v49 )
                                FxPoolFree(v59);
                              LOBYTE(v49) = 0;
                              v59 = v60;
                            }
                            while ( v60 );
                          }
                        }
                      }
                      if ( *((char *)v21 + 24) < 0 )
                      {
                        if ( *((_BYTE *)v21 - 20) )
                        {
                          _InterlockedDecrement((volatile signed __int32 *)v21[2][41] + 3);
                          if ( *((_WORD *)v21 + 4) == 4098
                            && _InterlockedExchangeAdd((volatile signed __int32 *)v21[2][41] + 4, 0xFFFFFFFF) != 1 )
                          {
                            v49 = (FxObjectDebugLeakDetection *)v21[2][41];
                            _InterlockedExchangeAdd(&v49->LimitScaled, -v49->Limit);
                          }
                        }
                      }
                      if ( v53 )
                      {
                        *(v21 - 6) = 0LL;
                        FxTagTracker::`scalar deleting destructor'(v53, (unsigned int)v49);
                      }
                      v61 = (void (__fastcall *)(FxObject *, unsigned int))**v21;
                      if ( v61 == FxObject::SelfDestruct )
                      {
                        v62 = (FxRegKey *(__fastcall *)(FxRegKey *, char, unsigned int))(*v21)[1];
                        if ( v62 == FxRegKey::`scalar deleting destructor' )
                        {
                          *v21 = (void (__fastcall **)(FxObject *))FxRegKey::`vftable';
                          v63 = v21[14];
                          if ( v63 )
                          {
                            ZwClose(v63);
                            v21[14] = 0LL;
                          }
                          v64 = v21[13];
                          *v21 = (void (__fastcall **)(FxObject *))FxPagedObject::`vftable';
                          if ( v64 )
                          {
                            FxPoolFree(v64);
                            v21[13] = 0LL;
                          }
                          FxObject::~FxObject((FxObject *)v21, (unsigned int)v61, v50);
                          if ( *((char *)v21 + 24) < 0 )
                            v21 -= 6;
                          if ( !v21 )
                            KeBugCheckEx(0x10Du, 4uLL, 0LL, (ULONG_PTR)retaddr, 0LL);
                          if ( ((unsigned __int16)v21 & 0xFFF) != 0 )
                          {
LABEL_105:
                            v65 = (FX_POOL_TRACKER *)*(v21 - 2);
                            if ( *((_BYTE *)*(v21 - 1) + 264) )
                            {
                              if ( FxIsPagedPoolType(v65->PoolType) )
                                FxPoolRemovePagedAllocateTracker(v65);
                              else
                                FxPoolRemoveNonPagedAllocateTracker(v65);
                              memset(v65, 0, v65->Size + 64);
                            }
                            ExFreePoolWithTag(v65, 0);
                            return v30;
                          }
LABEL_346:
                          ExFreePoolWithTag(v21, 0);
                          return v30;
                        }
                        if ( (char *)v62 == (char *)FxRequest::`scalar deleting destructor' )
                        {
                          *v21 = (void (__fastcall **)(FxObject *))FxRequestBase::`vftable';
                          v72 = (_MDL *)v21[30];
                          if ( v72 )
                          {
                            if ( *((_BYTE *)v21[2] + 316) )
                              FxMdlFreeDebug((_FX_DRIVER_GLOBALS *)v21[2], (_MDL *)v21[30]);
                            else
                              IoFreeMdl(v72);
                          }
                          v73 = v21[21];
                          v74 = v21[19];
                          if ( v73 )
                          {
                            if ( v74 )
                              (*((void (__fastcall **)(void (__fastcall **)(FxObject *), void (__fastcall ***)(FxObject *)))*v73
                               + 3))(
                                v73,
                                v21);
                            v143 = v21[21];
                            if ( v143 )
                              (*(void (__fastcall **)(void (__fastcall **)(FxObject *), __int64))*v143)(v143, 1LL);
                          }
                          if ( v74 && *((_BYTE *)v21 + 213) == 1 )
                            IoFreeIrp((PIRP)v21[19]);
                          v75 = (FxRequestTimer *)v21[22];
                          if ( v75 )
                            FxRequestTimer::`scalar deleting destructor'(v75, (unsigned int)v61);
                          *v21 = (void (__fastcall **)(FxObject *))FxNonPagedObject::`vftable';
                          if ( *((char *)v21 + 24) < 0 )
                          {
                            v144 = (FxVerifierLock *)*(v21 - 5);
                            if ( v144 )
                            {
                              FxVerifierLock::`scalar deleting destructor'(v144, (unsigned int)v61);
                              *(v21 - 5) = 0LL;
                            }
                          }
                          *((_BYTE *)v21 + 104) = 0;
                          FxObject::~FxObject((FxObject *)v21, (unsigned int)v61, v50);
                          if ( *((char *)v21 + 24) < 0 )
                            v21 -= 6;
                          FxPoolFree(v21);
                          return v30;
                        }
                        if ( (char *)v62 == (char *)FxMemoryBuffer::`scalar deleting destructor' )
                        {
                          *v21 = (void (__fastcall **)(FxObject *))FxMemoryBuffer::`vftable'{for `FxObject'};
                          v21[13] = (void (__fastcall **)(FxObject *))FxMemoryBufferFromLookaside::`vftable'{for `IFxMemory'};
                          FxObject::~FxObject((FxObject *)v21, (unsigned int)v61, v50);
                          if ( *((char *)v21 + 24) < 0 )
                            v21 -= 6;
                          if ( !v21 )
                            KeBugCheckEx(0x10Du, 4uLL, 0LL, (ULONG_PTR)retaddr, 0LL);
                          if ( ((unsigned __int16)v21 & 0xFFF) != 0 )
                            goto LABEL_105;
                          goto LABEL_346;
                        }
                        ((void (__fastcall *)(void (__fastcall ***)(FxObject *), __int64))v62)(v21, 1LL);
                        return v30;
                      }
                      v35 = **v21;
LABEL_362:
                      v35((FxObject *)v21);
                      return v30;
                    }
LABEL_363:
                    FxObject::SetObjectStateLocked((FxObject *)v21, 0xBu);
                    FxDisposeList::Add(*((FxDisposeList **)v21[2][9] + 43), (FxObject *)v21);
                    return v30;
                  }
                  if ( (char *)v51 != (char *)FxRequest::Release )
                  {
                    if ( (char *)v51 != (char *)FxMemoryObject::Release )
                    {
                      v51(
                        (FxObject *)v21,
                        0LL,
                        1246LL,
                        "minkernel\\wdf\\framework\\shared\\object\\fxobjectstatemachine.cpp");
                      return v30;
                    }
                    if ( *((char *)v21 + 24) < 0 )
                    {
                      v156 = (FxTagTracker *)*(v21 - 6);
                      if ( v156 )
                        FxTagTracker::UpdateTagHistory(
                          v156,
                          0LL,
                          1246,
                          "minkernel\\wdf\\framework\\shared\\object\\fxobjectstatemachine.cpp",
                          TagRelease,
                          *((_DWORD *)v21 + 3) - 1);
                    }
                    if ( _InterlockedDecrement((volatile signed __int32 *)v21 + 3) )
                      return v30;
                    v71 = *((_WORD *)v21 + 12);
                    if ( (v71 & 0x20) == 0 && ((v71 & 0x10) == 0 || !KeGetCurrentIrql()) )
                    {
                      FxObject::ProcessDestroy((FxObject *)v21, v49, v50);
                      return v30;
                    }
                    goto LABEL_363;
                  }
                  v66 = *((_BYTE *)v21 + 354);
                  v67 = *((_BYTE *)v21 + 213);
                  v68 = *((_BYTE *)v21 + 238);
                  if ( *((char *)v21 + 24) < 0 )
                  {
                    v145 = (FxTagTracker *)*(v21 - 6);
                    if ( v145 )
                      FxTagTracker::UpdateTagHistory(
                        v145,
                        0LL,
                        1246,
                        "minkernel\\wdf\\framework\\shared\\object\\fxobjectstatemachine.cpp",
                        TagRelease,
                        *((_DWORD *)v21 + 3) - 1);
                  }
                  v69 = -1LL;
                  v70 = _InterlockedDecrement((volatile signed __int32 *)v21 + 3);
                  if ( v70 )
                  {
LABEL_110:
                    if ( v66 && v70 == 1 && *((_BYTE *)v21 + 214) )
                    {
                      FxIoQueue::ReturnReservedRequest((FxIoQueue *)v21[42], (FxRequest *)v21);
                    }
                    else if ( v67 )
                    {
                      if ( v68 )
                      {
                        if ( v70 == 1 )
                        {
                          if ( *((_BYTE *)v21 + 214) )
                          {
                            v151 = *((_BYTE *)v21 + 237);
                            v152 = (FxIoQueue *)v21[31];
                            v153 = (_IRP *)v21[19];
                            v154 = *((_BYTE *)v21 + 236);
                            v21[31] = 0LL;
                            v21[19] = 0LL;
                            *((_BYTE *)v21 + 237) = 0;
                            IofCompleteRequest(v153, v154);
                            if ( v151 == 1 )
                              FxIoQueue::PostRequestCompletedCallback(v152, v155);
                          }
                        }
                      }
                    }
                    return v30;
                  }
                  v76 = *((_WORD *)v21 + 12);
                  if ( (v76 & 0x20) != 0 || (v76 & 0x10) != 0 && KeGetCurrentIrql() )
                  {
                    FxObject::SetObjectStateLocked((FxObject *)v21, 0xBu);
                    FxDisposeList::Add(*((FxDisposeList **)v21[2][9] + 43), (FxObject *)v21);
                    goto LABEL_110;
                  }
                  if ( (v76 & 0x80u) != 0 )
                  {
                    v77 = (FxTagTracker *)*(v21 - 6);
                    v165 = v77;
                    if ( v77 )
                    {
                      FxTagTracker::CheckForAbandondedTags(v77);
                      v77 = v165;
                      v69 = -1LL;
                    }
                  }
                  else
                  {
                    v77 = 0LL;
                    v165 = 0LL;
                  }
                  v78 = *((_WORD *)v21 + 5);
                  if ( v78 && ((_BYTE)v21[3] & 8) != 0 )
                  {
                    v79 = (void (__fastcall ***)(FxObject *))((char *)v21 + v78);
                    if ( v79 )
                    {
                      do
                      {
                        v80 = (void (__fastcall *)(unsigned __int64, __int64, FxTagTracker *))v79[2];
                        if ( v80 )
                        {
                          v80((unsigned __int64)v21 ^ 0xFFFFFFFFFFFFFFF8uLL, v69, v77);
                          v79[2] = 0LL;
                        }
                        v81 = (void (__fastcall *)(unsigned __int64, __int64, FxTagTracker *))v79[3];
                        if ( v81 )
                        {
                          v81((unsigned __int64)v21 ^ 0xFFFFFFFFFFFFFFF8uLL, v69, v77);
                          v79[3] = 0LL;
                        }
                        v79 = (_QWORD *)v79[1];
                      }
                      while ( v79 );
                      v77 = v165;
                    }
                    v82 = *((_WORD *)v21 + 5);
                    v83 = 1;
                    if ( v82 )
                    {
                      v84 = (void (__fastcall ***)(FxObject *))((char *)v21 + v82);
                      if ( v84 )
                      {
                        do
                        {
                          v85 = (_QWORD *)v84[1];
                          if ( !v83 )
                            FxPoolFree(v84);
                          v83 = 0;
                          v84 = v85;
                        }
                        while ( v85 );
                        v77 = v165;
                      }
                    }
                    LODWORD(v69) = -1;
                  }
                  if ( *((char *)v21 + 24) < 0 )
                  {
                    if ( *((_BYTE *)v21 - 20) )
                    {
                      _InterlockedDecrement((volatile signed __int32 *)v21[2][41] + 3);
                      if ( *((_WORD *)v21 + 4) == 4098 )
                      {
                        LODWORD(v69) = _InterlockedExchangeAdd((volatile signed __int32 *)v21[2][41] + 4, 0xFFFFFFFF);
                        if ( (_DWORD)v69 != 1 )
                        {
                          v69 = (__int64)v21[2][41];
                          _InterlockedExchangeAdd((volatile signed __int32 *)(v69 + 8), -*(_DWORD *)(v69 + 4));
                        }
                      }
                    }
                  }
                  if ( v77 )
                  {
                    *(v21 - 6) = 0LL;
                    FxTagTracker::`scalar deleting destructor'(v77, v69);
                  }
                  v86 = (__int64)*v21;
                  v87 = (void (__fastcall *)(FxRequestFromLookaside *, unsigned int))**v21;
                  if ( v87 == FxRequestFromLookaside::SelfDestruct )
                  {
                    v88 = (_MDL *)v21[30];
                    v89 = v21[12];
                    *v21 = (void (__fastcall **)(FxObject *))FxRequestBase::`vftable';
                    if ( v88 )
                    {
                      if ( *((_BYTE *)v21[2] + 316) )
                        FxMdlFreeDebug((_FX_DRIVER_GLOBALS *)v21[2], v88);
                      else
                        IoFreeMdl(v88);
                    }
                    v90 = v21[21];
                    v91 = v21[19];
                    if ( v90 )
                    {
                      if ( v91 )
                        (*((void (__fastcall **)(void (__fastcall **)(FxObject *), void (__fastcall ***)(FxObject *)))*v90
                         + 3))(
                          v90,
                          v21);
                      v146 = v21[21];
                      if ( v146 )
                        (*(void (__fastcall **)(void (__fastcall **)(FxObject *), __int64))*v146)(v146, 1LL);
                    }
                    if ( v91 && *((_BYTE *)v21 + 213) == 1 )
                      IoFreeIrp((PIRP)v21[19]);
                    v92 = (FxRequestTimer *)v21[22];
                    if ( v92 )
                      FxRequestTimer::`scalar deleting destructor'(v92, v86);
                    *v21 = (void (__fastcall **)(FxObject *))FxNonPagedObject::`vftable';
                    if ( *((char *)v21 + 24) < 0 )
                    {
                      v147 = (FxVerifierLock *)*(v21 - 5);
                      if ( v147 )
                      {
                        FxVerifierLock::`scalar deleting destructor'(v147, v86);
                        *(v21 - 5) = 0LL;
                      }
                    }
                    *((_BYTE *)v21 + 104) = 0;
                    FxObject::~FxObject((FxObject *)v21, v86, (unsigned int)v77);
                    if ( *((_BYTE *)v21 + 355) )
                    {
                      v148 = FxObject::_CleanupPointer((_FX_DRIVER_GLOBALS *)v21[2], (FxObject *)v21);
                      ExFreePoolWithTag(v148->Base, 0);
                    }
                    else
                    {
                      if ( *((char *)v21 + 24) < 0 )
                        v93 = v21 - 6;
                      else
                        v93 = v21;
                      if ( *((_BYTE *)v89[2] + 264) )
                        FxPoolRemoveNonPagedAllocateTracker((FX_POOL_TRACKER *)*(v93 - 2));
                      v94 = v89[81];
                      if ( v94 && *((_WORD *)v94 + 4) == 4354 && *((_BYTE *)v94 + 1683) )
                      {
                        v106 = (_SLIST_ENTRY *)*(v93 - 2);
                        if ( ExQueryDepthSList((PSLIST_HEADER)v89 + 28) >= *((_WORD *)v89 + 232) )
                          v89[63]((FxObject *)v106);
                        else
                          ExpInterlockedPushEntrySList((PSLIST_HEADER)v89 + 28, v106);
                      }
                      else
                      {
                        v95 = (_SLIST_ENTRY *)*(v93 - 2);
                        v96 = v89 + 56;
                        ++*((_DWORD *)v96 + 7);
                        if ( ExQueryDepthSList((PSLIST_HEADER)v96) >= *((_WORD *)v96 + 8) )
                        {
                          ++*((_DWORD *)v96 + 8);
                          v96[7]((FxObject *)v95);
                        }
                        else
                        {
                          ExpInterlockedPushEntrySList((PSLIST_HEADER)v96, v95);
                        }
                      }
                    }
                    goto LABEL_110;
                  }
                  if ( (char *)v87 != (char *)FxObject::SelfDestruct )
                  {
                    ((void (__fastcall *)(_QWORD))v87)(v21);
                    goto LABEL_110;
                  }
                  v101 = *(FxRequest *(__fastcall **)(FxRequest *, char))(v86 + 8);
                  if ( (char *)v101 == (char *)FxRegKey::`scalar deleting destructor' )
                  {
                    *v21 = (void (__fastcall **)(FxObject *))FxRegKey::`vftable';
                    v102 = v21[14];
                    if ( v102 )
                    {
                      ZwClose(v102);
                      v21[14] = 0LL;
                    }
                    v103 = v21[13];
                    *v21 = (void (__fastcall **)(FxObject *))FxPagedObject::`vftable';
                    if ( v103 )
                    {
                      FxPoolFree(v103);
                      v21[13] = 0LL;
                    }
                    FxObject::~FxObject((FxObject *)v21, v86, (unsigned int)v77);
                    if ( *((char *)v21 + 24) < 0 )
                      v104 = v21 - 6;
                    else
                      v104 = v21;
                    if ( !v104 )
                      KeBugCheckEx(0x10Du, 4uLL, 0LL, (ULONG_PTR)retaddr, 0LL);
                  }
                  else
                  {
                    if ( v101 == FxRequest::`scalar deleting destructor' )
                    {
                      *v21 = (void (__fastcall **)(FxObject *))FxRequestBase::`vftable';
                      v108 = (_MDL *)v21[30];
                      if ( v108 )
                      {
                        if ( *((_BYTE *)v21[2] + 316) )
                          FxMdlFreeDebug((_FX_DRIVER_GLOBALS *)v21[2], (_MDL *)v21[30]);
                        else
                          IoFreeMdl(v108);
                      }
                      v109 = v21[21];
                      v110 = v21[19];
                      if ( v109 )
                      {
                        if ( v110 )
                          (*((void (__fastcall **)(void (__fastcall **)(FxObject *), void (__fastcall ***)(FxObject *)))*v109
                           + 3))(
                            v109,
                            v21);
                        v149 = v21[21];
                        if ( v149 )
                          (*(void (__fastcall **)(void (__fastcall **)(FxObject *), __int64))*v149)(v149, 1LL);
                      }
                      if ( v110 && *((_BYTE *)v21 + 213) == 1 )
                        IoFreeIrp((PIRP)v21[19]);
                      v111 = (FxRequestTimer *)v21[22];
                      if ( v111 )
                        FxRequestTimer::`scalar deleting destructor'(v111, v86);
                      *v21 = (void (__fastcall **)(FxObject *))FxNonPagedObject::`vftable';
                      if ( *((char *)v21 + 24) < 0 )
                      {
                        v150 = (FxVerifierLock *)*(v21 - 5);
                        if ( v150 )
                        {
                          FxVerifierLock::`scalar deleting destructor'(v150, v86);
                          *(v21 - 5) = 0LL;
                        }
                      }
                      *((_BYTE *)v21 + 104) = 0;
                      FxObject::~FxObject((FxObject *)v21, v86, (unsigned int)v77);
                      if ( *((char *)v21 + 24) < 0 )
                        v112 = v21 - 6;
                      else
                        v112 = v21;
                      FxPoolFree(v112);
                      goto LABEL_110;
                    }
                    if ( (char *)v101 != (char *)FxMemoryBuffer::`scalar deleting destructor' )
                    {
                      v101((FxRequest *)v21, 1);
                      goto LABEL_110;
                    }
                    *v21 = (void (__fastcall **)(FxObject *))FxMemoryBuffer::`vftable'{for `FxObject'};
                    v21[13] = (void (__fastcall **)(FxObject *))FxMemoryBufferFromLookaside::`vftable'{for `IFxMemory'};
                    FxObject::~FxObject((FxObject *)v21, v86, (unsigned int)v77);
                    if ( *((char *)v21 + 24) < 0 )
                      v104 = v21 - 6;
                    else
                      v104 = v21;
                    if ( !v104 )
                      KeBugCheckEx(0x10Du, 4uLL, 0LL, (ULONG_PTR)retaddr, 0LL);
                  }
                  if ( ((unsigned __int16)v104 & 0xFFF) != 0 )
                  {
                    v105 = (FX_POOL_TRACKER *)*(v104 - 2);
                    if ( *((_BYTE *)*(v104 - 1) + 264) )
                    {
                      if ( FxIsPagedPoolType(v105->PoolType) )
                        FxPoolRemovePagedAllocateTracker(v105);
                      else
                        FxPoolRemoveNonPagedAllocateTracker(v105);
                      memset(v105, 0, v105->Size + 64);
                    }
                    ExFreePoolWithTag(v105, 0);
                  }
                  else
                  {
                    ExFreePoolWithTag(v104, 0);
                  }
                  goto LABEL_110;
                }
                v25 = (void **)(v21 + 14);
              }
              if ( v6 )
              {
                v124 = *((_WORD *)v21 + 5);
                if ( v124 )
                  v125 = (char *)v21 + v124;
                else
                  v125 = 0LL;
                EvtDestroyCallback = v6->EvtDestroyCallback;
                if ( EvtDestroyCallback )
                  *((_QWORD *)v125 + 3) = EvtDestroyCallback;
                EvtCleanupCallback = v6->EvtCleanupCallback;
                if ( EvtCleanupCallback )
                {
                  *((_QWORD *)v125 + 2) = EvtCleanupCallback;
                  *((_WORD *)v21 + 12) |= 0x400u;
                }
              }
              *((_WORD *)v21 + 12) |= 8u;
              if ( *((_WORD *)v21 + 5) )
                v31 = (WDFKEY__ *)((unsigned __int64)v21 ^ 0xFFFFFFFFFFFFFFF8uLL);
              else
                v31 = 0LL;
              if ( *((_BYTE *)v21[2] + 316) )
                FxObject::Vf_VerifyLeakDetectionConsiderObject((FxObject *)v21, (_FX_DRIVER_GLOBALS *)0x400);
              ObjectAttributes.RootDirectory = m_Key;
              *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
              ObjectAttributes.Length = 48;
              ObjectAttributes.Attributes = 576;
              ObjectAttributes.ObjectName = KeyName;
              v32 = ZwOpenKey(v25, v167, &ObjectAttributes);
              v30 = v32;
              if ( v32 >= 0 )
                *Key = v31;
              else
                WPP_IFR_SF_d(DriverName, 2u, 2u, 0xBu, WPP_FxRegistryAPI_cpp_Traceguids, v32);
              if ( (v30 & 0x80000000) == 0 )
                return v30;
              goto LABEL_48;
            }
LABEL_255:
            WPP_IFR_SF_d(DriverName, 2u, 2u, 0xAu, WPP_FxRegistryAPI_cpp_Traceguids, -1073741670);
            return 3221225626LL;
          }
          WPP_IFR_SF_qddd(
            DriverName,
            Length,
            6u,
            0x10u,
            WPP_FxValidateFunctions_hpp_Traceguids_0,
            KeyName,
            Length,
            (unsigned __int16)v12,
            -1073741811);
          return 3221225485LL;
        }
        v12 = (unsigned __int16)v12;
        v115 = 15;
      }
    }
    WPP_IFR_SF_qdd(DriverName, 2u, 6u, v115, WPP_FxValidateFunctions_hpp_Traceguids_0, KeyName, v12, -1073741811);
    return 3221225485LL;
  }
  return result;
}
