/*
 * XREFs of ?DispatchStep1@FxPkgIo@@QEAAJPEAU_IRP@@PEAX@Z @ 0x1C0008210
 * Callers:
 *     ?DispatchWithLock@FxDevice@@SAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x1C00072B0 (-DispatchWithLock@FxDevice@@SAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z.c)
 *     ?Dispatch@FxPkgIo@@UEAAJPEAU_IRP@@@Z @ 0x1C00081A0 (-Dispatch@FxPkgIo@@UEAAJPEAU_IRP@@@Z.c)
 *     imp_WdfDeviceWdmDispatchIrp @ 0x1C0077BD0 (imp_WdfDeviceWdmDispatchIrp.c)
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0003A40 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C0005060 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0005090 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z @ 0x1C000B530 (-DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z.c)
 *     ?Complete@FxRequest@@QEAAJJ@Z @ 0x1C000D7C8 (-Complete@FxRequest@@QEAAJJ@Z.c)
 *     WPP_IFR_SF_qq @ 0x1C00140BC (WPP_IFR_SF_qq.c)
 *     WPP_IFR_SF_q @ 0x1C001A480 (WPP_IFR_SF_q.c)
 *     ?IsIoEventHandlerRegistered@FxIoQueue@@QEAAEW4_WDF_REQUEST_TYPE@@@Z @ 0x1C001A584 (-IsIoEventHandlerRegistered@FxIoQueue@@QEAAEW4_WDF_REQUEST_TYPE@@@Z.c)
 *     ?AddRef@FxObject@@QEAAKPEAXJPEBD@Z @ 0x1C001FD44 (-AddRef@FxObject@@QEAAKPEAXJPEBD@Z.c)
 *     ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x1C001FEF0 (-Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z.c)
 *     ?MarkPassiveCallbacks@FxObject@@QEAAXW4FxObjectLockState@@@Z @ 0x1C0020140 (-MarkPassiveCallbacks@FxObject@@QEAAXW4FxObjectLockState@@@Z.c)
 *     ?AssignParentObject@FxObject@@QEAAJPEAV1@@Z @ 0x1C0020188 (-AssignParentObject@FxObject@@QEAAJPEAV1@@Z.c)
 *     WPP_IFR_SF_d @ 0x1C0025BA0 (WPP_IFR_SF_d.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C003C594 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x1C003CA08 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z @ 0x1C003D0A4 (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z.c)
 *     memset @ 0x1C003D9C0 (memset.c)
 *     ?InsertNewRequestLocked@FxIoQueue@@AEAAJPEAPEAVFxRequest@@E@Z @ 0x1C0064458 (-InsertNewRequestLocked@FxIoQueue@@AEAAJPEAPEAVFxRequest@@E@Z.c)
 *     ?DeleteFromFailedCreate@FxObject@@QEAAXXZ @ 0x1C0065088 (-DeleteFromFailedCreate@FxObject@@QEAAXXZ.c)
 *     WPP_IFR_SF_qid @ 0x1C0066834 (WPP_IFR_SF_qid.c)
 *     ?CreateAndInitialize@FxVerifierLock@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@@Z @ 0x1C0068068 (-CreateAndInitialize@FxVerifierLock@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@@Z.c)
 *     ?SetVerifierFlags@FxRequestBase@@QEAAXF@Z @ 0x1C007818C (-SetVerifierFlags@FxRequestBase@@QEAAXF@Z.c)
 *     ?FreeRequest@FxRequest@@QEAAXXZ @ 0x1C007C0AC (-FreeRequest@FxRequest@@QEAAXXZ.c)
 *     ?FxPoolInsertNonPagedAllocateTracker@@YAXPEAUFX_POOL@@PEAUFX_POOL_TRACKER@@_KKPEAX@Z @ 0x1C007D9DC (-FxPoolInsertNonPagedAllocateTracker@@YAXPEAUFX_POOL@@PEAUFX_POOL_TRACKER@@_KKPEAX@Z.c)
 *     WPP_IFR_SF_qcDqd @ 0x1C008925C (WPP_IFR_SF_qcDqd.c)
 *     ?Mj2Index@FxIrpDynamicDispatchInfo@@SAHE@Z @ 0x1C0095A10 (-Mj2Index@FxIrpDynamicDispatchInfo@@SAHE@Z.c)
 *     ?VerifierFreeRequestToTestForwardProgess@FxPkgIo@@AEAAJPEAVFxRequest@@@Z @ 0x1C0095B7C (-VerifierFreeRequestToTestForwardProgess@FxPkgIo@@AEAAJPEAVFxRequest@@@Z.c)
 *     WPP_IFR_SF_qLsqd @ 0x1C00973D0 (WPP_IFR_SF_qLsqd.c)
 *     ?GetReservedRequest@FxIoQueue@@QEAAJPEAU_IRP@@PEAPEAVFxRequest@@@Z @ 0x1C0097760 (-GetReservedRequest@FxIoQueue@@QEAAJPEAU_IRP@@PEAPEAVFxRequest@@@Z.c)
 *     ?Vf_VerifyRequestIsNotCompleted@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00D8810 (-Vf_VerifyRequestIsNotCompleted@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?Vf_VerifyConstruct@FxObject@@AEAAXPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C00D8B00 (-Vf_VerifyConstruct@FxObject@@AEAAXPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     ?Vf_VerifyLeakDetectionConsiderObject@FxObject@@AEAAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00D8B40 (-Vf_VerifyLeakDetectionConsiderObject@FxObject@@AEAAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?Vf_VerifyDispatchContext@FxPkgIo@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C00D8DFC (-Vf_VerifyDispatchContext@FxPkgIo@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

NTSTATUS __fastcall FxPkgIo::DispatchStep1(FxPkgIo *this, _IRP *Irp, _LIST_ENTRY *DispatchContext)
{
  _LIST_ENTRY *p_m_DynamicDispatchInfoListHead; // rdi
  _LIST_ENTRY *v4; // rbx
  _IO_STACK_LOCATION *CurrentStackLocation; // r9
  __int64 MajorFunction; // rcx
  FxIoQueue *v9; // rdi
  FxCxDeviceInfo *m_CxDeviceInfo; // rax
  FxIoInCallerContext *p_IoInCallerContextCallback; // rax
  FxCxDeviceInfo *v12; // r15
  _WDF_EXECUTION_LEVEL *p_RequestAttributes; // r15
  FxDeviceBase *m_DeviceBase; // rcx
  const void *v15; // r14
  FxRequest *v16; // rsi
  __int64 v17; // rax
  _BYTE *m_Globals; // r12
  MxLock *p_m_SpinLock; // r12
  FX_POOL_TRACKER *v20; // rbx
  _QWORD *p_Flink; // r12
  _BYTE *v22; // rax
  FxRequest *v23; // rbx
  char *p_m_ParentObject; // r12
  __int64 v25; // rax
  FxObject *v26; // rcx
  _FX_DRIVER_GLOBALS *v27; // rax
  PIRP v28; // r10
  _IRP *m_Irp; // rdx
  _IO_STACK_LOCATION *v30; // r8
  unsigned __int8 v31; // r9
  void *MasterIrp; // rax
  _FX_DRIVER_GLOBALS *v33; // rdx
  unsigned __int16 v34; // ax
  char *v35; // rax
  __int64 v36; // rcx
  __int64 v37; // rcx
  _FX_DRIVER_GLOBALS *v38; // rax
  int v39; // r12d
  unsigned __int8 v40; // al
  FxRequest *v41; // rbx
  char m_ObjectFlags; // al
  KIRQL v43; // bl
  unsigned __int8 v44; // r8
  unsigned int m_QueueState; // ecx
  _FX_DRIVER_GLOBALS *v46; // rcx
  __int64 v48; // r8
  _FX_DRIVER_GLOBALS *v49; // rcx
  unsigned __int8 m_CompletionState; // al
  signed __int32 v51; // r11d
  unsigned int v52; // r11d
  unsigned __int64 v53; // rsi
  FxDeviceBase *v54; // rcx
  unsigned __int64 v55; // rcx
  int v56; // eax
  unsigned __int8 v57; // dl
  __int64 v58; // r8
  char _a3; // r10
  __int64 v60; // r14
  int v61; // esi
  FxDeviceBase *v62; // rcx
  unsigned __int16 v63; // ax
  const void *globals; // rcx
  _FX_DRIVER_GLOBALS *v65; // rdx
  _LIST_ENTRY *Flink; // rsi
  _LIST_ENTRY *v67; // r15
  FxDeviceBase *v68; // rcx
  unsigned __int16 v69; // r10
  unsigned __int64 v70; // rcx
  bool v71; // zf
  FxDeviceBase *v72; // rcx
  unsigned __int16 v73; // ax
  const void *v74; // rcx
  _FX_DRIVER_GLOBALS *v75; // rdx
  int v76; // eax
  int v77; // eax
  unsigned __int16 m_ObjectSize; // ax
  unsigned __int64 v79; // rdx
  unsigned __int64 v80; // rcx
  int v81; // eax
  const void *v82; // rcx
  _LIST_ENTRY *Blink; // rcx
  FxVerifierLock *v84; // rcx
  _FX_DRIVER_GLOBALS *v85; // r11
  const char *v86; // r10
  const void *v87; // r8
  const void *v88; // rdx
  const void *v89; // rdx
  unsigned __int8 v90; // r8
  _FX_DRIVER_GLOBALS *v91; // rdx
  unsigned __int8 v92; // r8
  const _GUID *_a1; // [rsp+20h] [rbp-58h]
  int level; // [rsp+48h] [rbp-30h]
  FxObject *Parent; // [rsp+50h] [rbp-28h]
  void *PPObject; // [rsp+58h] [rbp-20h] BYREF
  FxRequest *Request; // [rsp+60h] [rbp-18h] BYREF
  FxVerifierLock *VerifierLock; // [rsp+68h] [rbp-10h] BYREF
  void *retaddr; // [rsp+B8h] [rbp+40h]
  unsigned __int8 PreviousIrql; // [rsp+C0h] [rbp+48h] BYREF
  PIRP v101; // [rsp+C8h] [rbp+50h] BYREF
  char v102; // [rsp+D0h] [rbp+58h]
  FxRequest *ReservedRequest; // [rsp+D8h] [rbp+60h] BYREF

  v101 = Irp;
  p_m_DynamicDispatchInfoListHead = &this->m_DynamicDispatchInfoListHead;
  v4 = DispatchContext;
  if ( DispatchContext == &this->m_DynamicDispatchInfoListHead )
  {
LABEL_2:
    CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
    MajorFunction = CurrentStackLocation->MajorFunction;
    v9 = this->m_DispatchTable[MajorFunction];
    if ( v9 )
    {
      m_CxDeviceInfo = v9->m_CxDeviceInfo;
      if ( m_CxDeviceInfo )
        p_IoInCallerContextCallback = &m_CxDeviceInfo->IoInCallerContextCallback;
      else
        p_IoInCallerContextCallback = &this->m_InCallerContextCallback;
      Request = (FxRequest *)p_IoInCallerContextCallback;
LABEL_6:
      if ( this->m_Filter
        && !p_IoInCallerContextCallback->m_Method
        && v9 == this->m_DefaultQueue
        && !FxIoQueue::IsIoEventHandlerRegistered(v9, (_WDF_REQUEST_TYPE)MajorFunction) )
      {
        goto LABEL_130;
      }
      v102 = 0;
      PreviousIrql = v9 && v9->m_SupportForwardProgress;
      if ( KeGetCurrentIrql() <= 1u )
      {
        KeEnterCriticalRegion();
        v102 = 1;
      }
      if ( v9 && (v12 = v9->m_CxDeviceInfo) != 0LL )
        p_RequestAttributes = (_WDF_EXECUTION_LEVEL *)&v12->RequestAttributes;
      else
        p_RequestAttributes = &this->m_DeviceBase[2].m_ExecutionLevel;
      m_DeviceBase = this->m_DeviceBase;
      v15 = 0LL;
      Parent = m_DeviceBase;
      v16 = 0LL;
      ReservedRequest = 0LL;
      v17 = *(_QWORD *)&m_DeviceBase[3].m_SpinLock.m_DbgFlagIsInitialized;
      m_Globals = m_DeviceBase->m_Globals;
      PPObject = m_Globals;
      if ( v17 && *(_WORD *)(v17 + 8) == 4354 && *(_BYTE *)(v17 + 1683) )
      {
        VerifierLock = (FxVerifierLock *)&m_DeviceBase[2].m_SpinLock;
        v20 = (FX_POOL_TRACKER *)ExpInterlockedPopEntrySList((PSLIST_HEADER)&m_DeviceBase[2].m_SpinLock);
        if ( !v20 )
          v20 = (FX_POOL_TRACKER *)(*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))&VerifierLock->m_Mutex.m_Lock.Count)(
                                     *((unsigned int *)&VerifierLock->m_OldIrql + 1),
                                     *((unsigned int *)&VerifierLock->m_Mutex.m_DbgFlagIsInitialized + 1),
                                     *(unsigned int *)&VerifierLock->m_Mutex.m_DbgFlagIsInitialized);
      }
      else
      {
        p_m_SpinLock = &m_DeviceBase[2].m_SpinLock;
        ++HIDWORD(m_DeviceBase[2].m_ParentObject);
        v20 = (FX_POOL_TRACKER *)ExpInterlockedPopEntrySList((PSLIST_HEADER)&m_DeviceBase[2].m_SpinLock);
        if ( !v20 )
        {
          ++LODWORD(p_m_SpinLock[1].m_Lock);
          v20 = (FX_POOL_TRACKER *)(*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))&p_m_SpinLock[3].m_DbgFlagIsInitialized)(
                                     *((unsigned int *)&p_m_SpinLock[2].m_DbgFlagIsInitialized + 1),
                                     HIDWORD(p_m_SpinLock[2].m_Lock),
                                     LODWORD(p_m_SpinLock[2].m_Lock));
        }
        m_Globals = PPObject;
      }
      if ( !v20 )
        goto LABEL_151;
      if ( m_Globals[264] )
      {
        p_Flink = &v20[1].Link.Flink;
        FxPoolInsertNonPagedAllocateTracker(
          (FX_POOL *)((char *)PPObject + 104),
          v20,
          Parent[5].m_SpinLock.m_Lock,
          *((_DWORD *)PPObject + 17),
          retaddr);
      }
      else
      {
        p_Flink = &v20->Link.Flink;
      }
      v22 = PPObject;
      *p_Flink = v20;
      v23 = (FxRequest *)(p_Flink + 2);
      p_Flink[1] = v22;
      if ( p_RequestAttributes )
        p_m_ParentObject = (char *)p_RequestAttributes;
      else
        p_m_ParentObject = (char *)&Parent[5].m_ParentObject;
      if ( v22[320] )
      {
        memset(v23, 0, 0x30uLL);
        LODWORD(v23->m_ChildListHead.Flink) = 1146058822;
        v23 = (FxRequest *)((char *)v23 + 48);
      }
      v23[1].m_Globals = 0LL;
      *(_QWORD *)&v23[1].m_ObjectFlags = 0LL;
      v23[1].m_ChildListHead.Flink = 0LL;
      v23[1].m_ChildListHead.Blink = 0LL;
      *(_QWORD *)&v23[1].m_SpinLock.m_DbgFlagIsInitialized = 0LL;
      *(_QWORD *)&v23[1].m_Type = v23;
      if ( p_m_ParentObject )
      {
        v25 = *((_QWORD *)p_m_ParentObject + 6);
        if ( v25 )
        {
          v48 = *((_QWORD *)p_m_ParentObject + 5);
          if ( !v48 )
            v48 = *(_QWORD *)(v25 + 16);
          memset(&v23[1].m_SpinLock.m_Lock, 0, (v48 + 7) & 0xFFFFFFFFFFFFFFF8uLL);
        }
        v23[1].m_ChildListHead.Blink = (_LIST_ENTRY *)*((_QWORD *)p_m_ParentObject + 6);
      }
      if ( !v23 )
      {
LABEL_151:
        v39 = -1073741670;
        WPP_IFR_SF_d(Parent->m_Globals, 2u, 0x10u, 0xAu, WPP_FxRequest_cpp_Traceguids, -1073741670);
        goto LABEL_152;
      }
      v26 = Parent;
      v23->m_Globals = Parent->m_Globals;
      v23->__vftable = (FxRequest_vtbl *)&FxObject::`vftable';
      *(_DWORD *)&v23->m_Type = 24121352;
      v23->m_SpinLock.m_Lock = 0LL;
      v23->m_SpinLock.m_DbgFlagIsInitialized = 1;
      v23->m_Refcnt = 1;
      *(_DWORD *)&v23->m_ObjectFlags = 0x10000;
      v23->m_ParentObject = 0LL;
      v23->m_ChildListHead.Blink = &v23->m_ChildListHead;
      v23->m_ChildListHead.Flink = &v23->m_ChildListHead;
      v23->m_ChildEntry.Blink = &v23->m_ChildEntry;
      v23->m_ChildEntry.Flink = &v23->m_ChildEntry;
      v27 = v23->m_Globals;
      v23->m_DisposeSingleEntry.Next = 0LL;
      v23->m_DeviceBase = 0LL;
      if ( v27->FxVerifierOn )
      {
        FxObject::Vf_VerifyConstruct(v23, (_FX_DRIVER_GLOBALS *)&FxObject::`vftable', 0);
        v26 = Parent;
      }
      v23->__vftable = (FxRequest_vtbl *)FxNonPagedObject::`vftable';
      v23->m_NPLock.m_Lock = 0LL;
      v23->m_NPLock.m_DbgFlagIsInitialized = 1;
      if ( SLOBYTE(v23->m_ObjectFlags) < 0 )
      {
        v75 = v23->m_Globals;
        if ( v75->FxVerifierLock )
        {
          VerifierLock = 0LL;
          FxVerifierLock::CreateAndInitialize(&VerifierLock, v75, v23);
          v26 = Parent;
          v23[-1].m_ForwardProgressList.Flink = (_LIST_ENTRY *)VerifierLock;
        }
      }
      v28 = v101;
      v23->__vftable = (FxRequest_vtbl *)FxRequestBase::`vftable';
      v23->m_Irp.m_Irp = v28;
      v23->m_CancelRoutine.m_Cancel = 0LL;
      v23->m_CompletionRoutine.m_Completion = 0LL;
      *(_WORD *)&v23->m_TargetFlags = 0;
      v23->m_CanComplete = 1;
      v23->m_Target = 0LL;
      v23->m_TargetCompletionContext = 0LL;
      v23->m_Completed = v23->m_Irp.m_Irp == 0LL;
      v23->m_Canceled = 0;
      v23->m_PriorityBoost = 0;
      v23->m_RequestContext = 0LL;
      v23->m_Timer = 0LL;
      v23->m_CsqContext.Irp = (_IRP *)&v23->120;
      v23->m_ListEntry.Flink = (_LIST_ENTRY *)&v23->120;
      v23->m_DrainSingleEntry.Next = 0LL;
      *(_QWORD *)&v23->m_SystemBufferOffset = 216LL;
      v23->m_IrpQueue = 0LL;
      v23->m_IrpCompletionReferenceCount = 0;
      v23->m_AllocatedMdl = 0LL;
      *(_DWORD *)&v23->m_OutputBufferOffset = 232;
      v23->m_CompletionState = 0;
      v23->m_SystemBuffer.__vftable = (FxRequestSystemBuffer_vtbl *)FxRequestSystemBuffer::`vftable';
      v23->m_SystemBuffer.m_Buffer = 0LL;
      v23->m_OutputBuffer.__vftable = (FxRequestOutputBuffer_vtbl *)FxRequestOutputBuffer::`vftable';
      v23->m_OutputBuffer.m_Buffer = 0LL;
      v23->m_IoQueue = 0LL;
      v23->m_PowerStopState = 0;
      v23->m_OwnerListEntry.Blink = &v23->m_OwnerListEntry;
      v23->m_OwnerListEntry.Flink = &v23->m_OwnerListEntry;
      v23->m_OwnerListEntry2.Blink = &v23->m_OwnerListEntry2;
      v23->m_OwnerListEntry2.Flink = &v23->m_OwnerListEntry2;
      v23->m_ForwardProgressList.Blink = &v23->m_ForwardProgressList;
      v23->m_ForwardProgressList.Flink = &v23->m_ForwardProgressList;
      v23->__vftable = (FxRequest_vtbl *)FxRequestFromLookaside::`vftable';
      v23->m_Presented = 0;
      *(_WORD *)&v23->m_Reserved = 0;
      v23->m_ForwardProgressQueue = 0LL;
      v23->m_InternalContext = 0LL;
      v23->m_DeviceBase = v26->m_DeviceBase;
      m_Irp = v23->m_Irp.m_Irp;
      v30 = m_Irp->Tail.Overlay.CurrentStackLocation;
      v31 = v30->MajorFunction;
      if ( v30->MajorFunction != 14 )
      {
        if ( v31 < 3u )
          goto LABEL_42;
        if ( v31 <= 4u )
        {
          if ( HIDWORD(v26[2].__vftable) == 1 )
          {
            if ( m_Irp->RequestorMode )
              goto LABEL_42;
            v23->m_SystemBuffer.m_Buffer = m_Irp->UserBuffer;
            goto LABEL_38;
          }
          if ( HIDWORD(v26[2].__vftable) != 2 )
            goto LABEL_42;
          goto LABEL_107;
        }
        if ( v31 != 15 )
          goto LABEL_42;
      }
      if ( (v30->Parameters.Read.ByteOffset.LowPart & 3) == 0 )
      {
        v23->m_SystemBuffer.m_Buffer = m_Irp->AssociatedIrp.MasterIrp;
        MasterIrp = m_Irp->AssociatedIrp.MasterIrp;
        goto LABEL_37;
      }
      if ( (v30->Parameters.Read.ByteOffset.LowPart & 3) != 1 && (v30->Parameters.Read.ByteOffset.LowPart & 3) != 2 )
      {
        if ( (v30->Parameters.Read.ByteOffset.LowPart & 3) != 3 )
          goto LABEL_38;
        if ( v31 != 15 && m_Irp->RequestorMode )
          goto LABEL_42;
        v23->m_SystemBuffer.m_Buffer = v30->Parameters.CreatePipe.Parameters;
        MasterIrp = m_Irp->UserBuffer;
LABEL_37:
        v23->m_OutputBuffer.m_Buffer = MasterIrp;
LABEL_38:
        if ( v23->m_SystemBuffer.m_Buffer )
          v23->m_RequestBaseStaticFlags |= 1u;
        if ( v23->m_OutputBuffer.m_Buffer )
          v23->m_RequestBaseStaticFlags |= 2u;
LABEL_42:
        if ( v26->m_Globals->FxRequestParentOptimizationOn )
        {
          v33 = 0LL;
          PPObject = 0LL;
          if ( !v23->m_ObjectSize )
          {
            v39 = -1073741816;
LABEL_150:
            WPP_IFR_SF_d(v26->m_Globals, 2u, 0x10u, 0xBu, WPP_FxRequest_cpp_Traceguids, v39);
            FxObject::DeleteFromFailedCreate(v23);
LABEL_152:
            v28 = v101;
LABEL_60:
            v40 = PreviousIrql;
            if ( PreviousIrql )
            {
              if ( v39 < 0 )
                goto LABEL_157;
              if ( (this->m_Globals->FxEnhancedVerifierOptions & 0xF0000) != 0 )
              {
                v76 = FxPkgIo::VerifierFreeRequestToTestForwardProgess(this, v16);
                v28 = v101;
                v39 = v76;
              }
              v40 = PreviousIrql;
            }
            if ( v39 >= 0 )
            {
              if ( !v40 || !v9->m_FwdProgContext->m_IoResourcesAllocate.Method )
              {
LABEL_63:
                v41 = Request;
                if ( Request && Request->__vftable && !v16->m_Reserved )
                {
                  v16->m_InternalContext = v9;
                  v49 = this->m_Globals;
                  v28->Tail.Overlay.CurrentStackLocation->Control |= 1u;
                  if ( v49->FxVerifierOn )
                    FxRequestBase::SetVerifierFlags(v16, 33);
                  if ( v16->m_Completed )
                  {
                    v82 = (const void *)((unsigned __int64)v16 ^ 0xFFFFFFFFFFFFFFF8uLL);
                    if ( !v16->m_ObjectSize )
                      v82 = 0LL;
                    WPP_IFR_SF_q(v16->m_Globals, 2u, 0x10u, 0x27u, WPP_FxRequest_cpp_Traceguids, v82);
                    FxVerifierDbgBreakPoint(v16->m_Globals);
                  }
                  else
                  {
                    m_CompletionState = v16->m_CompletionState;
                    v16->m_CompletionState = -126;
                    if ( !m_CompletionState )
                    {
                      v51 = _InterlockedExchangeAdd(&v16->m_Refcnt, 1u);
                      v16 = ReservedRequest;
                      v52 = v51 + 1;
                      if ( SLOBYTE(ReservedRequest->m_ObjectFlags) < 0 )
                      {
                        Blink = ReservedRequest[-1].m_OwnerListEntry2.Blink;
                        if ( Blink )
                          FxTagTracker::UpdateTagHistory(
                            (FxTagTracker *)Blink,
                            (void *)0x74617453,
                            1820,
                            "minkernel\\wdf\\framework\\shared\\core\\fxrequest.cpp",
                            TagAddRef,
                            v52);
                      }
                    }
                  }
                  v16->Release(
                    v16,
                    (void *)1952543827,
                    1740,
                    "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxpkgio.cpp");
                  v16->m_Presented = 1;
                  if ( v16->m_ObjectSize )
                    v53 = (unsigned __int64)v16 ^ 0xFFFFFFFFFFFFFFF8uLL;
                  else
                    v53 = 0LL;
                  v54 = this->m_DeviceBase;
                  if ( v54->m_ObjectSize )
                    v55 = (unsigned __int64)v54 ^ 0xFFFFFFFFFFFFFFF8uLL;
                  else
                    v55 = 0LL;
                  if ( v41->__vftable )
                    ((void (__fastcall *)(unsigned __int64, unsigned __int64))v41->__vftable)(v55, v53);
                  goto LABEL_74;
                }
                m_ObjectFlags = v9->m_ObjectFlags;
                Request = v16;
                if ( m_ObjectFlags < 0 && (v84 = *(FxVerifierLock **)&v9[-1].m_PowerIdle.m_DbgFlagIsInitialized) != 0LL )
                {
                  FxVerifierLock::Lock(v84, (unsigned __int8 *)&v101, (unsigned __int8)WPP_FxRequest_cpp_Traceguids);
                  v43 = (unsigned __int8)v101;
                }
                else
                {
                  v43 = KeAcquireSpinLockRaiseToDpc(&v9->m_NPLock.m_Lock);
                  LOBYTE(v101) = v43;
                }
                if ( v16->m_Reserved )
                  FxObject::AddRef(
                    v16,
                    (void *)0x50647746,
                    2311,
                    "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp");
                m_QueueState = v9->m_QueueState;
                if ( (m_QueueState & 1) == 0 )
                {
                  v85 = v9->m_Globals;
                  v39 = -1073741436;
                  if ( v85->FxVerboseOn )
                  {
                    v86 = "power stopping (Drain) in progress,";
                    if ( (m_QueueState & 0x10000) == 0 )
                      v86 = a5;
                    if ( v16->m_ObjectSize )
                      v87 = (const void *)((unsigned __int64)v16 ^ 0xFFFFFFFFFFFFFFF8uLL);
                    else
                      v87 = 0LL;
                    v88 = (const void *)((unsigned __int64)v9 ^ 0xFFFFFFFFFFFFFFF8uLL);
                    if ( !v9->m_ObjectSize )
                      v88 = 0LL;
                    WPP_IFR_SF_qLsqd(v85, 5u, (unsigned int)v87, 0x29u, _a1, v88, m_QueueState, v86, v87, -1073741436);
                  }
                  FxNonPagedObject::Unlock(v9, v43, v44);
                  v16->m_Irp.m_Irp->IoStatus.Information = 0LL;
                  FxRequest::Complete(v16, -1073741436);
                  v16->Release(
                    v16,
                    (void *)1886220099,
                    2338,
                    "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp");
                  goto LABEL_75;
                }
                v46 = v9->m_Globals;
                if ( v46->FxVerboseOn )
                {
                  v89 = (const void *)((unsigned __int64)v9 ^ 0xFFFFFFFFFFFFFFF8uLL);
                  if ( !v9->m_ObjectSize )
                    v89 = 0LL;
                  if ( v16->m_ObjectSize )
                    v15 = (const void *)((unsigned __int64)v16 ^ 0xFFFFFFFFFFFFFFF8uLL);
                  WPP_IFR_SF_qq(v46, 5u, 0xDu, 0x2Au, WPP_FxIoQueue_cpp_Traceguids, v15, v89);
                }
                if ( v16->m_Globals->FxVerifierIO )
                {
                  FxNonPagedObject::Lock(v16, &PreviousIrql, v44);
                  v91 = v16->m_Globals;
                  if ( v91->FxVerifierOn )
                    FxRequest::Vf_VerifyRequestIsNotCompleted(v16, v91);
                  FxNonPagedObject::Unlock(v16, PreviousIrql, v90);
                }
                v16->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation->Control |= 1u;
                if ( v16->m_Reserved )
                {
                  if ( v9->m_Dispatching )
                  {
                    FxIoQueue::InsertNewRequestLocked(v9, &Request, (unsigned __int8)v101);
                    FxNonPagedObject::Unlock(v9, (unsigned __int8)v101, v92);
                    goto LABEL_74;
                  }
                  v16 = ReservedRequest;
                  v43 = (unsigned __int8)v101;
                }
                FxIoQueue::DispatchEvents(v9, v43, v16);
LABEL_74:
                v39 = 259;
LABEL_75:
                if ( v102 )
                  KeLeaveCriticalRegion();
                return v39;
              }
              m_ObjectSize = v16->m_ObjectSize;
              v79 = (unsigned __int64)v16 ^ 0xFFFFFFFFFFFFFFF8uLL;
              v16->m_Presented = 1;
              if ( !m_ObjectSize )
                v79 = 0LL;
              v80 = (unsigned __int64)v9 ^ 0xFFFFFFFFFFFFFFF8uLL;
              if ( !v9->m_ObjectSize )
                v80 = 0LL;
              if ( ((int (__fastcall *)(unsigned __int64, unsigned __int64, _FXIO_FORWARD_PROGRESS_CONTEXT *))v9->m_FwdProgContext->m_IoResourcesAllocate.Method)(
                     v80,
                     v79,
                     v9->m_FwdProgContext) >= 0 )
              {
                v28 = v101;
                goto LABEL_63;
              }
              FxRequest::FreeRequest(v16);
              ReservedRequest = 0LL;
              v81 = FxIoQueue::GetReservedRequest(v9, v101, &ReservedRequest);
              v39 = v81;
              if ( v81 == 259 )
                goto LABEL_75;
              v28 = v101;
              if ( v81 < 0 )
                goto LABEL_172;
LABEL_162:
              v16 = ReservedRequest;
              goto LABEL_63;
            }
LABEL_157:
            if ( this->m_Filter && !v9 )
              goto LABEL_172;
            if ( v40 )
            {
              v77 = FxIoQueue::GetReservedRequest(v9, v28, &ReservedRequest);
              v39 = v77;
              if ( v77 == 259 )
                goto LABEL_75;
              v28 = v101;
              if ( v77 >= 0 )
                goto LABEL_162;
            }
            else
            {
              WPP_IFR_SF_d(this->m_Globals, 2u, 0xDu, 0x10u, WPP_FxPkgIo_cpp_Traceguids, v39);
              v28 = v101;
            }
LABEL_172:
            v28->IoStatus.Status = v39;
            v28->IoStatus.Information = 0LL;
            IofCompleteRequest(v28, 0);
            goto LABEL_75;
          }
          if ( !p_RequestAttributes )
          {
LABEL_56:
            v38 = v23->m_Globals;
            v23->m_ObjectFlags |= 8u;
            if ( v38->FxVerifierOn )
            {
              FxObject::Vf_VerifyLeakDetectionConsiderObject(v23, v33);
              v28 = v101;
            }
            v39 = 0;
            goto LABEL_59;
          }
          if ( *((_DWORD *)p_RequestAttributes + 6) == 2 )
          {
            FxObject::MarkPassiveCallbacks(v23, ObjectLock);
            v33 = (_FX_DRIVER_GLOBALS *)PPObject;
            v28 = v101;
          }
          if ( *((_QWORD *)p_RequestAttributes + 4) )
          {
            FxObjectHandleGetPtr(v23->m_Globals, *((_QWORD *)p_RequestAttributes + 4), 0x1000u, &PPObject);
            v33 = (_FX_DRIVER_GLOBALS *)PPObject;
            v28 = v101;
          }
          if ( !v33 )
          {
LABEL_50:
            v34 = v23->m_ObjectSize;
            if ( v34 )
              v35 = (char *)v23 + v34;
            else
              v35 = 0LL;
            v36 = *((_QWORD *)p_RequestAttributes + 2);
            if ( v36 )
              *((_QWORD *)v35 + 3) = v36;
            v37 = *((_QWORD *)p_RequestAttributes + 1);
            if ( v37 )
            {
              *((_QWORD *)v35 + 2) = v37;
              v23->m_ObjectFlags |= 0x400u;
            }
            goto LABEL_56;
          }
          v39 = FxObject::AssignParentObject(v23, (FxObject *)v33);
          if ( v39 >= 0 )
          {
            v28 = v101;
            goto LABEL_50;
          }
        }
        else
        {
          v39 = FxObject::Commit(v23, (_WDF_OBJECT_ATTRIBUTES *)p_RequestAttributes, 0LL, v26, 0);
        }
        if ( v39 >= 0 )
        {
          v28 = v101;
LABEL_59:
          v16 = v23;
          ReservedRequest = v23;
          goto LABEL_60;
        }
        v26 = Parent;
        goto LABEL_150;
      }
LABEL_107:
      v23->m_SystemBuffer.m_Buffer = m_Irp->AssociatedIrp.MasterIrp;
      goto LABEL_38;
    }
    p_IoInCallerContextCallback = &this->m_InCallerContextCallback;
    v71 = this->m_InCallerContextCallback.m_Method == 0LL;
    Request = (FxRequest *)&this->m_InCallerContextCallback;
    if ( !v71 )
      goto LABEL_6;
    if ( this->m_Filter )
    {
LABEL_130:
      ++Irp->CurrentLocation;
      Irp->Tail.Overlay.CurrentStackLocation = CurrentStackLocation + 1;
      return IofCallDriver(this->m_DeviceBase->m_AttachedDevice.m_DeviceObject, Irp);
    }
    v61 = -1073741808;
    v72 = this->m_DeviceBase;
    v73 = v72->m_ObjectSize;
    v74 = (const void *)((unsigned __int64)v72 ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !v73 )
      v74 = 0LL;
    WPP_IFR_SF_qid(this->m_Globals, 2u, 0xDu, 0xFu, WPP_FxPkgIo_cpp_Traceguids, v74, (__int64)Irp, -1073741808);
    goto LABEL_128;
  }
  v56 = FxIrpDynamicDispatchInfo::Mj2Index(Irp->Tail.Overlay.CurrentStackLocation->MajorFunction);
  v60 = v56;
  if ( v56 >= 4 )
  {
    v61 = -1073741811;
    v62 = this->m_DeviceBase;
    v63 = v62->m_ObjectSize;
    globals = (const void *)((unsigned __int64)v62 ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !v63 )
      globals = 0LL;
    WPP_IFR_SF_qcDqd(
      this->m_Globals,
      v57,
      0xDu,
      0xEu,
      WPP_FxPkgIo_cpp_Traceguids,
      Irp,
      _a3,
      *(unsigned __int8 *)(v58 + 1),
      globals,
      level);
    FxVerifierDbgBreakPoint(this->m_Globals);
    goto LABEL_128;
  }
  v65 = this->m_Globals;
  if ( v65->FxVerifierOn )
  {
    v61 = FxPkgIo::Vf_VerifyDispatchContext(this, v65, v4);
    if ( v61 < 0 )
    {
LABEL_128:
      Irp->IoStatus.Status = v61;
      Irp->IoStatus.Information = 0LL;
      IofCompleteRequest(Irp, 0);
      return v61;
    }
  }
  while ( 1 )
  {
    Flink = v4[v60 + 1].Flink;
    v67 = v4;
    v4 = v4->Flink;
    if ( Flink )
      break;
    if ( v4 == p_m_DynamicDispatchInfoListHead )
      goto LABEL_2;
  }
  v68 = this->m_DeviceBase;
  v69 = v68->m_ObjectSize;
  v70 = (unsigned __int64)v68 ^ 0xFFFFFFFFFFFFFFF8uLL;
  if ( !v69 )
    v70 = 0LL;
  return ((__int64 (__fastcall *)(unsigned __int64, _QWORD, _QWORD, _QWORD, _LIST_ENTRY *, _IRP *, unsigned __int64))Flink)(
           v70,
           Irp->Tail.Overlay.CurrentStackLocation->MajorFunction,
           Irp->Tail.Overlay.CurrentStackLocation->MinorFunction,
           Irp->Tail.Overlay.CurrentStackLocation->Parameters.Read.ByteOffset.LowPart,
           v67[v60 + 1].Blink,
           Irp,
           (unsigned __int64)v4 | 1);
}
