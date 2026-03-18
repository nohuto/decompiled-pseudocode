/*
 * XREFs of FxIoTargetSendIoctl @ 0x1C0024710
 * Callers:
 *     imp_WdfIoTargetSendIoctlSynchronously @ 0x1C00364F0 (imp_WdfIoTargetSendIoctlSynchronously.c)
 *     imp_WdfIoTargetSendInternalIoctlSynchronously @ 0x1C0087770 (imp_WdfIoTargetSendInternalIoctlSynchronously.c)
 * Callees:
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C0002E5C (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0003A40 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C0003AD0 (-FxPoolFree@@YAXPEAX@Z.c)
 *     ?FormatIoctlRequest@FxIoTarget@@QEAAJPEAVFxRequestBase@@KEPEAUFxRequestBuffer@@1PEAVFxFileObject@@@Z @ 0x1C0006140 (-FormatIoctlRequest@FxIoTarget@@QEAAJPEAVFxRequestBase@@KEPEAUFxRequestBuffer@@1PEAVFxFileObject.c)
 *     ?FxIsPagedPoolType@@YAEW4_POOL_TYPE@@@Z @ 0x1C0012470 (-FxIsPagedPoolType@@YAEW4_POOL_TYPE@@@Z.c)
 *     WPP_IFR_SF_Dd @ 0x1C0012824 (WPP_IFR_SF_Dd.c)
 *     WPP_IFR_SF_qd @ 0x1C0012F30 (WPP_IFR_SF_qd.c)
 *     WPP_IFR_SF_qq @ 0x1C00140BC (WPP_IFR_SF_qq.c)
 *     ?SetObjectStateLocked@FxObject@@AEAAXW4FxObjectState@@@Z @ 0x1C001FE98 (-SetObjectStateLocked@FxObject@@AEAAXW4FxObjectState@@@Z.c)
 *     ?SubmitSync@FxIoTarget@@QEAAJPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAK@Z @ 0x1C00239F0 (-SubmitSync@FxIoTarget@@QEAAJPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAK@Z.c)
 *     ?ValidateMemoryDescriptor@FxRequestBuffer@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_MEMORY_DESCRIPTOR@@K@Z @ 0x1C0024520 (-ValidateMemoryDescriptor@FxRequestBuffer@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_MEMORY_DESCRIPT.c)
 *     WPP_IFR_SF_d @ 0x1C0025BA0 (WPP_IFR_SF_d.c)
 *     WPP_IFR_SF_qqLL @ 0x1C0027BC0 (WPP_IFR_SF_qqLL.c)
 *     ?SetContext@FxRequestBase@@QEAAXPEAUFxRequestContext@@@Z @ 0x1C0037920 (-SetContext@FxRequestBase@@QEAAXPEAUFxRequestContext@@@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C003C594 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ??_GFxVerifierLock@@QEAAPEAXI@Z @ 0x1C003C5E4 (--_GFxVerifierLock@@QEAAPEAXI@Z.c)
 *     ?FxPoolRemoveNonPagedAllocateTracker@@YAXPEAUFX_POOL_TRACKER@@@Z @ 0x1C003C78C (-FxPoolRemoveNonPagedAllocateTracker@@YAXPEAUFX_POOL_TRACKER@@@Z.c)
 *     ??_GFxRequestTimer@@QEAAPEAXI@Z @ 0x1C003C86C (--_GFxRequestTimer@@QEAAPEAXI@Z.c)
 *     ?FxPoolRemovePagedAllocateTracker@@YAXPEAUFX_POOL_TRACKER@@@Z @ 0x1C003C898 (-FxPoolRemovePagedAllocateTracker@@YAXPEAUFX_POOL_TRACKER@@@Z.c)
 *     ?Add@FxDisposeList@@QEAAXPEAVFxObject@@@Z @ 0x1C003C900 (-Add@FxDisposeList@@QEAAXPEAVFxObject@@@Z.c)
 *     ??_GFxTagTracker@@QEAAPEAXI@Z @ 0x1C003C970 (--_GFxTagTracker@@QEAAPEAXI@Z.c)
 *     ?CheckForAbandondedTags@FxTagTracker@@QEAAXXZ @ 0x1C003CF8C (-CheckForAbandondedTags@FxTagTracker@@QEAAXXZ.c)
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z @ 0x1C003D0A4 (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z.c)
 *     ?FxMdlFreeDebug@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAU_MDL@@@Z @ 0x1C003D2F4 (-FxMdlFreeDebug@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAU_MDL@@@Z.c)
 *     memset @ 0x1C003D9C0 (memset.c)
 *     WPP_IFR_SF_dd @ 0x1C0065BD8 (WPP_IFR_SF_dd.c)
 *     WPP_IFR_SF_qqDd @ 0x1C00666C4 (WPP_IFR_SF_qqDd.c)
 *     ?CreateAndInitialize@FxVerifierLock@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@@Z @ 0x1C0068068 (-CreateAndInitialize@FxVerifierLock@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@@Z.c)
 *     WPP_IFR_SF_qdd @ 0x1C00701C4 (WPP_IFR_SF_qdd.c)
 *     WPP_IFR_SF_qDd @ 0x1C0073AB8 (WPP_IFR_SF_qDd.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0081680 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     WPP_IFR_SF_sqq @ 0x1C0082134 (WPP_IFR_SF_sqq.c)
 *     ?Vf_VerifyConstruct@FxObject@@AEAAXPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C00D8B00 (-Vf_VerifyConstruct@FxObject@@AEAAXPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 */

__int64 __fastcall FxIoTargetSendIoctl(
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        unsigned __int64 IoTarget,
        WDFREQUEST__ *Request,
        unsigned int Ioctl,
        unsigned __int8 Internal,
        _WDF_MEMORY_DESCRIPTOR *InputBuffer,
        _WDF_MEMORY_DESCRIPTOR *OutputBuffer,
        _WDF_REQUEST_SEND_OPTIONS *RequestOptions,
        unsigned __int64 *BytesReturned)
{
  WDFIOTARGET__ *v11; // rdi
  FxIoTarget *v12; // rcx
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  _FX_DRIVER_GLOBALS *v14; // rdx
  unsigned __int8 v15; // r12
  _WDF_REQUEST_SEND_OPTIONS *v16; // r14
  _WDF_MEMORY_DESCRIPTOR *v17; // rsi
  int v18; // eax
  unsigned int v19; // r15d
  int v20; // eax
  unsigned int v21; // eax
  unsigned __int16 m_Type; // r9
  unsigned int v23; // edx
  signed __int32 v24; // ebx
  char m_ObjectFlags; // cl
  FxTagTracker *v26; // rdi
  FxObjectDebugLeakDetection *FxVerifyLeakDetection; // rdx
  _WDF_REQUEST_COMPLETION_PARAMS *v28; // r8
  _IRP *v29; // rcx
  PIRP v30; // rbx
  FX_POOL_TRACKER *v31; // rbx
  void *m_OriginalSystemBuffer; // rcx
  _MDL *m_OriginalMdl; // rcx
  FxRequestBase *v35; // rcx
  __int64 v36; // r8
  unsigned __int8 CurrentIrql; // al
  unsigned int Flags; // edx
  unsigned __int16 v39; // r9
  unsigned __int16 v40; // r9
  const void *v41; // rax
  _QWORD *v42; // r14
  void (__fastcall *v43)(unsigned __int64); // rax
  void (__fastcall *v44)(unsigned __int64); // rax
  char v45; // r8
  FxObjectDebugLeakDetection *v46; // r14
  const void *v47; // rax
  __int64 v48; // rax
  unsigned __int16 *p_ObjectType; // rcx
  const char *HandleName; // rdx
  unsigned __int64 v51; // rbx
  const void *v52; // rax
  __int64 v53; // [rsp+8h] [rbp-100h] BYREF
  FxTagRefType RefType[2]; // [rsp+28h] [rbp-E0h]
  FxRequestBuffer *v55; // [rsp+30h] [rbp-D8h]
  void *_a2; // [rsp+38h] [rbp-D0h]
  FxObject *_a3; // [rsp+40h] [rbp-C8h]
  unsigned int v58; // [rsp+48h] [rbp-C0h]
  FxObject ParentObject; // [rsp+58h] [rbp-B0h] BYREF
  char v60; // [rsp+C0h] [rbp-48h]
  __int64 v61; // [rsp+C8h] [rbp-40h]
  _QWORD v62[4]; // [rsp+D0h] [rbp-38h] BYREF
  PIRP Irp; // [rsp+F0h] [rbp-18h]
  __int64 v64; // [rsp+F8h] [rbp-10h]
  _WDF_REQUEST_COMPLETION_PARAMS *p_m_CompletionParams; // [rsp+100h] [rbp-8h]
  FxRequestTimer *v66; // [rsp+108h] [rbp+0h]
  __int64 v67; // [rsp+110h] [rbp+8h]
  __int64 v68; // [rsp+118h] [rbp+10h]
  __int64 v69; // [rsp+120h] [rbp+18h]
  int v70; // [rsp+128h] [rbp+20h]
  __int16 v71; // [rsp+12Ch] [rbp+24h]
  int v72; // [rsp+12Eh] [rbp+26h]
  __int16 v73; // [rsp+132h] [rbp+2Ah]
  int v74; // [rsp+134h] [rbp+2Ch]
  __int64 v75; // [rsp+138h] [rbp+30h]
  __int16 v76; // [rsp+140h] [rbp+38h]
  char v77; // [rsp+142h] [rbp+3Ah]
  int v78; // [rsp+143h] [rbp+3Bh]
  _MDL *Mdl; // [rsp+148h] [rbp+40h]
  _KEVENT Event; // [rsp+150h] [rbp+48h] BYREF
  char v81; // [rsp+168h] [rbp+60h]
  FxRequestBase *p_ParentObject; // [rsp+170h] [rbp+68h]
  char v83; // [rsp+178h] [rbp+70h]
  void *PPObject; // [rsp+188h] [rbp+80h] BYREF
  FxIoContext context; // [rsp+190h] [rbp+88h] BYREF
  FxRequestBuffer outputBuf; // [rsp+240h] [rbp+138h] BYREF
  FxRequestBuffer inputBuf; // [rsp+260h] [rbp+158h] BYREF
  __int64 v88; // [rsp+280h] [rbp+178h]
  FxIoTarget *pTarget; // [rsp+2D0h] [rbp+1C8h] BYREF

  LODWORD(inputBuf.u.Memory.Memory) = 0;
  *(_OWORD *)&inputBuf.u.RefMdl.Offsets = 0uLL;
  v11 = (WDFIOTARGET__ *)IoTarget;
  v88 = 0LL;
  LODWORD(outputBuf.u.Memory.Memory) = 0;
  *(_OWORD *)&outputBuf.u.RefMdl.Offsets = 0uLL;
  *(_QWORD *)&inputBuf.DataType = 0LL;
  if ( !IoTarget )
    FxVerifierBugCheckWorker(FxDriverGlobals, WDF_INVALID_HANDLE, 0LL, 0x1200uLL);
  v12 = (FxIoTarget *)(~IoTarget & 0xFFFFFFFFFFFFFFF8uLL);
  LOWORD(IoTarget) = 0;
  if ( ((unsigned __int8)v11 & 1) != 0 )
  {
    IoTarget = LOWORD(v12->__vftable);
    v12 = (FxIoTarget *)((char *)v12 - IoTarget);
  }
  if ( v12->m_Type == 4608 )
  {
    pTarget = v12;
  }
  else
  {
    FxObjectHandleGetPtrQI(v12, (void **)&pTarget, v11, 0x1200u, IoTarget);
    v12 = pTarget;
  }
  m_Globals = v12->m_Globals;
  memset(&context.m_CompletionParams.IoStatus.Information, 0, 72);
  v14 = m_Globals;
  *(_QWORD *)&context.m_CompletionParams.Size = FxIoContext::`vftable';
  ParentObject.__vftable = (FxObject_vtbl *)&FxObject::`vftable';
  ParentObject.m_ChildListHead.Blink = &ParentObject.m_ChildListHead;
  ParentObject.m_ChildListHead.Flink = &ParentObject.m_ChildListHead;
  ParentObject.m_ChildEntry.Blink = &ParentObject.m_ChildEntry;
  ParentObject.m_ChildEntry.Flink = &ParentObject.m_ChildEntry;
  LOBYTE(context.m_BufferToFree) = 1;
  context.m_CompletionParams.IoStatus.Pointer = (void *)0xFF00000048LL;
  memset(&context.m_OriginalSystemBuffer, 0, 40);
  memset(&context.m_MdlToFreeSize, 0, 19);
  *(_QWORD *)&outputBuf.DataType = 0LL;
  *(_DWORD *)&ParentObject.m_Type = 4104;
  ParentObject.m_Globals = m_Globals;
  ParentObject.m_SpinLock.m_Lock = 0LL;
  ParentObject.m_SpinLock.m_DbgFlagIsInitialized = 1;
  ParentObject.m_Refcnt = 1;
  *(_DWORD *)&ParentObject.m_ObjectFlags = 0x10000;
  ParentObject.m_ParentObject = 0LL;
  ParentObject.m_DisposeSingleEntry.Next = 0LL;
  ParentObject.m_DeviceBase = 0LL;
  if ( m_Globals->FxVerifierOn )
  {
    FxObject::Vf_VerifyConstruct(&ParentObject, m_Globals, 1u);
    v14 = ParentObject.m_Globals;
  }
  ParentObject.__vftable = (FxObject_vtbl *)FxNonPagedObject::`vftable';
  v61 = 0LL;
  v60 = 1;
  if ( SLOBYTE(ParentObject.m_ObjectFlags) < 0 && v14->FxVerifierLock )
  {
    context.__vftable = 0LL;
    FxVerifierLock::CreateAndInitialize((FxVerifierLock **)&context, v14, &ParentObject);
    v55 = (FxRequestBuffer *)context.__vftable;
  }
  Irp = 0LL;
  v62[1] = v62;
  v67 = 0LL;
  v62[0] = v62;
  v68 = 0LL;
  ParentObject.__vftable = (FxObject_vtbl *)FxSyncRequest::`vftable';
  v71 = 0;
  v78 = 0x1000000;
  v64 = 0LL;
  v69 = 0LL;
  v72 = 1;
  p_m_CompletionParams = 0LL;
  v66 = 0LL;
  v62[3] = 0LL;
  v74 = 0;
  v75 = 0LL;
  v76 = 0;
  v70 = 0;
  Mdl = 0LL;
  v73 = 0;
  v77 = 0;
  v81 = 0;
  KeInitializeEvent(&Event, SynchronizationEvent, 0);
  v81 = 1;
  p_m_CompletionParams = &context.m_CompletionParams;
  v83 = 1;
  if ( Request )
  {
    FxObjectHandleGetPtr(m_Globals, (unsigned __int64)Request, 0x1008u, &PPObject);
    v35 = (FxRequestBase *)PPObject;
    p_ParentObject = (FxRequestBase *)PPObject;
    v36 = *((_QWORD *)PPObject + 21);
    if ( v36 )
    {
      (*(void (__fastcall **)(_QWORD, void *))(*(_QWORD *)v36 + 24LL))(*((_QWORD *)PPObject + 21), PPObject);
      v35 = (FxRequestBase *)PPObject;
    }
    FxRequestBase::SetContext(v35, (FxRequestContext *)&context.m_CompletionParams);
    *((_BYTE *)PPObject + 234) |= 0x10u;
  }
  else
  {
    v77 |= 0x10u;
    p_ParentObject = (FxRequestBase *)&ParentObject;
  }
  ParentObject.m_ObjectSize = 0;
  v15 = Internal;
  if ( m_Globals->FxVerboseOn )
    WPP_IFR_SF_qqDd(m_Globals, 5u, 0xEu, 0x25u, WPP_FxIoTargetAPI_cpp_Traceguids, v11, Request, Ioctl, Internal);
  if ( m_Globals->FxVerifierOn )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql )
    {
      WPP_IFR_SF_dd(m_Globals, 2u, 0x12u, 0xAu, WPP_fxverifier_h_Traceguids, CurrentIrql, 0);
      FxVerifierDbgBreakPoint(m_Globals);
      v19 = -1073741808;
      goto LABEL_23;
    }
  }
  v16 = RequestOptions;
  if ( RequestOptions )
  {
    if ( RequestOptions->Size == 16 )
    {
      Flags = RequestOptions->Flags;
      if ( (Flags & 0xFFFFFFF0) != 0 )
      {
        LODWORD(_a3) = 15;
        v39 = 11;
        LODWORD(_a2) = Flags;
      }
      else
      {
        if ( (Flags & 0xFFFFFFF7) == 0 || (Flags & 8) == 0 )
          goto LABEL_15;
        LODWORD(_a3) = RequestOptions->Flags;
        v39 = 12;
        LODWORD(_a2) = 8;
      }
      WPP_IFR_SF_qDd(
        m_Globals,
        Flags,
        6u,
        v39,
        WPP_FxRequestValidateFunctions_hpp_Traceguids,
        RequestOptions,
        (unsigned int)_a2,
        (unsigned int)_a3);
      v19 = -1073741811;
    }
    else
    {
      WPP_IFR_SF_qdd(
        m_Globals,
        2u,
        6u,
        0xAu,
        WPP_FxRequestValidateFunctions_hpp_Traceguids,
        RequestOptions,
        16,
        RequestOptions->Size);
      v19 = -1073741820;
    }
    WPP_IFR_SF_d(m_Globals, 2u, 0xEu, 0x26u, WPP_FxIoTargetAPI_cpp_Traceguids, v19);
    goto LABEL_23;
  }
LABEL_15:
  v17 = InputBuffer;
  if ( InputBuffer )
  {
    v18 = FxRequestBuffer::ValidateMemoryDescriptor((FxRequestBuffer *)&inputBuf.u, m_Globals, InputBuffer, 0);
    v19 = v18;
    if ( v18 < 0 )
    {
      v40 = 39;
LABEL_81:
      WPP_IFR_SF_qd(m_Globals, 2u, 0xEu, v40, WPP_FxIoTargetAPI_cpp_Traceguids, v17, v18);
      goto LABEL_23;
    }
  }
  v17 = OutputBuffer;
  if ( OutputBuffer )
  {
    v18 = FxRequestBuffer::ValidateMemoryDescriptor((FxRequestBuffer *)&outputBuf.u, m_Globals, OutputBuffer, 0);
    v19 = v18;
    if ( v18 < 0 )
    {
      v40 = 40;
      goto LABEL_81;
    }
  }
  v20 = FxIoTarget::FormatIoctlRequest(
          pTarget,
          p_ParentObject,
          Ioctl,
          v15,
          (FxRequestBuffer *)&inputBuf.u,
          (FxRequestBuffer *)&outputBuf.u);
  v19 = v20;
  if ( v20 < 0 )
  {
    WPP_IFR_SF_Dd(m_Globals, 2u, 0xEu, 0x2Au, WPP_FxIoTargetAPI_cpp_Traceguids, Ioctl, v20);
  }
  else
  {
    if ( m_Globals->FxVerboseOn )
    {
      if ( !p_ParentObject->m_ObjectSize
        || (v41 = (const void *)((unsigned __int64)p_ParentObject ^ 0xFFFFFFFFFFFFFFF8uLL)) == 0LL )
      {
        v41 = p_ParentObject;
      }
      WPP_IFR_SF_qq(m_Globals, 5u, 0xEu, 0x29u, WPP_FxIoTargetAPI_cpp_Traceguids, v11, v41);
    }
    v21 = FxIoTarget::SubmitSync(pTarget, (FxRequest *)p_ParentObject, v16, 0LL);
    v23 = (unsigned int)BytesReturned;
    v19 = v21;
    if ( BytesReturned )
      *BytesReturned = p_ParentObject->m_Irp.m_Irp->IoStatus.Information;
  }
LABEL_23:
  ParentObject.__vftable = (FxObject_vtbl *)FxSyncRequest::`vftable';
  if ( SLOBYTE(ParentObject.m_ObjectFlags) < 0 && *(_QWORD *)RefType )
    FxTagTracker::UpdateTagHistory(
      *(FxTagTracker **)RefType,
      0LL,
      129,
      "minkernel\\wdf\\framework\\shared\\core\\fxsyncrequest.cpp",
      TagRelease,
      ParentObject.m_Refcnt - 1);
  v24 = _InterlockedDecrement(&ParentObject.m_Refcnt);
  if ( !v24 )
  {
    m_ObjectFlags = ParentObject.m_ObjectFlags;
    if ( (ParentObject.m_ObjectFlags & 0x20) != 0 || (ParentObject.m_ObjectFlags & 0x10) != 0 && KeGetCurrentIrql() )
    {
      FxObject::SetObjectStateLocked(&ParentObject, 0xBu);
      FxDisposeList::Add(ParentObject.m_Globals->Driver->m_DisposeList, &ParentObject);
    }
    else
    {
      if ( SLOBYTE(ParentObject.m_ObjectFlags) < 0 )
      {
        v26 = *(FxTagTracker **)RefType;
        if ( *(_QWORD *)RefType )
        {
          FxTagTracker::CheckForAbandondedTags(*(FxTagTracker **)RefType);
          m_ObjectFlags = ParentObject.m_ObjectFlags;
        }
      }
      else
      {
        v26 = 0LL;
      }
      LODWORD(FxVerifyLeakDetection) = ParentObject.m_ObjectSize;
      if ( ParentObject.m_ObjectSize && (m_ObjectFlags & 8) != 0 )
      {
        v42 = (FxObject_vtbl **)((char *)&ParentObject.__vftable + ParentObject.m_ObjectSize);
        if ( v42 )
        {
          do
          {
            v43 = (void (__fastcall *)(unsigned __int64))v42[2];
            if ( v43 )
            {
              v43((unsigned __int64)&ParentObject ^ 0xFFFFFFFFFFFFFFF8uLL);
              v42[2] = 0LL;
            }
            v44 = (void (__fastcall *)(unsigned __int64))v42[3];
            if ( v44 )
            {
              v44((unsigned __int64)&ParentObject ^ 0xFFFFFFFFFFFFFFF8uLL);
              v42[3] = 0LL;
            }
            v42 = (_QWORD *)v42[1];
          }
          while ( v42 );
          m_ObjectFlags = ParentObject.m_ObjectFlags;
          LODWORD(FxVerifyLeakDetection) = ParentObject.m_ObjectSize;
        }
        v45 = 1;
        if ( (_WORD)FxVerifyLeakDetection )
        {
          FxVerifyLeakDetection = (FxObjectDebugLeakDetection *)((char *)&ParentObject
                                                               + (unsigned __int16)FxVerifyLeakDetection);
          if ( FxVerifyLeakDetection )
          {
            do
            {
              v46 = *(FxObjectDebugLeakDetection **)&FxVerifyLeakDetection->LimitScaled;
              if ( !v45 )
                FxPoolFree(FxVerifyLeakDetection);
              v45 = 0;
              FxVerifyLeakDetection = v46;
            }
            while ( v46 );
            m_ObjectFlags = ParentObject.m_ObjectFlags;
          }
        }
      }
      if ( m_ObjectFlags < 0 )
      {
        if ( BYTE4(_a3) )
        {
          _InterlockedDecrement(&ParentObject.m_Globals->FxVerifyLeakDetection->ObjectCnt);
          if ( ParentObject.m_Type == 4098
            && _InterlockedExchangeAdd(&ParentObject.m_Globals->FxVerifyLeakDetection->DeviceCnt, 0xFFFFFFFF) != 1 )
          {
            FxVerifyLeakDetection = ParentObject.m_Globals->FxVerifyLeakDetection;
            _InterlockedExchangeAdd(&FxVerifyLeakDetection->LimitScaled, -FxVerifyLeakDetection->Limit);
          }
        }
      }
      if ( v26 )
      {
        *(_QWORD *)RefType = 0LL;
        FxTagTracker::`scalar deleting destructor'(v26, (unsigned int)FxVerifyLeakDetection);
      }
      if ( (char *)ParentObject.SelfDestruct == (char *)FxSyncRequest::SelfDestruct )
      {
        if ( ParentObject.m_Globals->FxVerboseOn )
          WPP_IFR_SF_qq(
            ParentObject.m_Globals,
            5u,
            0xDu,
            0xCu,
            (const _GUID *)&WPP_FxSyncRequest_cpp_Traceguids,
            &ParentObject,
            &Event);
        KeSetEvent(&Event, 0, 0);
      }
      else
      {
        ParentObject.SelfDestruct(&ParentObject);
      }
    }
  }
  if ( p_ParentObject != &ParentObject )
  {
    if ( !v83 )
      goto LABEL_117;
    p_ParentObject->m_RequestContext = 0LL;
    p_ParentObject->m_RequestBaseFlags &= ~0x10u;
  }
  if ( v83 )
  {
    v28 = 0LL;
    p_m_CompletionParams = 0LL;
    goto LABEL_40;
  }
LABEL_117:
  v28 = p_m_CompletionParams;
LABEL_40:
  if ( v24 )
  {
    if ( ParentObject.m_Globals->FxVerboseOn )
      WPP_IFR_SF_qq(
        ParentObject.m_Globals,
        5u,
        0xDu,
        0xAu,
        (const _GUID *)&WPP_FxSyncRequest_cpp_Traceguids,
        &ParentObject,
        &Event);
    KeEnterCriticalRegion();
    KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
    KeLeaveCriticalRegion();
    if ( ParentObject.m_Globals->FxVerboseOn )
      WPP_IFR_SF_qq(
        ParentObject.m_Globals,
        5u,
        0xDu,
        0xBu,
        (const _GUID *)&WPP_FxSyncRequest_cpp_Traceguids,
        &ParentObject,
        &Event);
    v28 = p_m_CompletionParams;
  }
  ParentObject.__vftable = (FxObject_vtbl *)FxRequestBase::`vftable';
  if ( Mdl )
  {
    if ( ParentObject.m_Globals->FxVerifierOn )
      FxMdlFreeDebug(ParentObject.m_Globals, Mdl);
    else
      IoFreeMdl(Mdl);
    v28 = p_m_CompletionParams;
  }
  v29 = Irp;
  v30 = Irp;
  if ( v28 )
  {
    if ( Irp )
    {
      (*(void (__fastcall **)(_WDF_REQUEST_COMPLETION_PARAMS *, FxObject *))(*(_QWORD *)&v28->Size + 24LL))(
        v28,
        &ParentObject);
      v28 = p_m_CompletionParams;
      v29 = Irp;
    }
    if ( v28 )
    {
      (**(void (__fastcall ***)(_WDF_REQUEST_COMPLETION_PARAMS *, __int64))&v28->Size)(v28, 1LL);
      v29 = Irp;
    }
  }
  if ( v30 && HIBYTE(v71) == 1 )
    IoFreeIrp(v29);
  if ( v66 )
    FxRequestTimer::`scalar deleting destructor'(v66, v23);
  ParentObject.__vftable = (FxObject_vtbl *)FxNonPagedObject::`vftable';
  if ( SLOBYTE(ParentObject.m_ObjectFlags) < 0 && v55 )
  {
    FxVerifierLock::`scalar deleting destructor'((FxVerifierLock *)v55, v23);
    v55 = 0LL;
  }
  ParentObject.__vftable = (FxObject_vtbl *)&FxObject::`vftable';
  v60 = 0;
  if ( SLOBYTE(ParentObject.m_ObjectFlags) < 0 && *(_QWORD *)RefType )
    FxTagTracker::`scalar deleting destructor'(*(FxTagTracker **)RefType, v23);
  if ( ParentObject.m_ParentObject
    || ParentObject.m_ChildListHead.Flink != &ParentObject.m_ChildListHead
    || ParentObject.m_ChildEntry.Flink != &ParentObject.m_ChildEntry )
  {
    v48 = 0LL;
    if ( !FxObjectsInfoCount )
      goto LABEL_157;
    m_Type = ParentObject.m_Type;
    p_ObjectType = &FxObjectsInfo[0].ObjectType;
    while ( 1 )
    {
      LODWORD(v28) = *p_ObjectType;
      if ( ParentObject.m_Type == (_WORD)v28 )
        break;
      if ( ParentObject.m_Type > (unsigned __int16)v28 )
      {
        v48 = (unsigned int)(v48 + 1);
        p_ObjectType += 12;
        if ( (unsigned int)v48 < FxObjectsInfoCount )
          continue;
      }
      goto LABEL_157;
    }
    HandleName = FxObjectsInfo[v48].HandleName;
    if ( !HandleName )
LABEL_157:
      HandleName = "WDFOBJECT";
    _a3 = &ParentObject;
    v51 = (unsigned __int64)&ParentObject ^ 0xFFFFFFFFFFFFFFF8uLL;
    v52 = (const void *)((unsigned __int64)&ParentObject ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !ParentObject.m_ObjectSize )
      v52 = 0LL;
    WPP_IFR_SF_sqq(
      ParentObject.m_Globals,
      (unsigned __int8)HandleName,
      (unsigned int)v28,
      m_Type,
      *(const _GUID **)RefType,
      HandleName,
      v52,
      _a3);
    if ( !ParentObject.m_ObjectSize )
      v51 = 0LL;
    FxVerifierBugCheckWorker(ParentObject.m_Globals, WDF_OBJECT_ERROR, v51, (unsigned __int64)&ParentObject);
  }
  if ( (ParentObject.m_ObjectFlags & 0x200) != 0 )
  {
    if ( ParentObject.m_Globals->FxVerboseOn )
    {
      v47 = (const void *)((unsigned __int64)&ParentObject ^ 0xFFFFFFFFFFFFFFF8uLL);
      v58 = 12;
      LODWORD(_a3) = ParentObject.m_ObjectState;
      if ( !ParentObject.m_ObjectSize )
        v47 = 0LL;
      WPP_IFR_SF_qqLL(
        ParentObject.m_Globals,
        5u,
        0x14u,
        0xAu,
        WPP_FxObject_hpp_Traceguids,
        &ParentObject,
        v47,
        (unsigned int)_a3,
        v58);
    }
    if ( SLOBYTE(ParentObject.m_ObjectFlags) < 0 )
      *((_BYTE *)&ParentObject + _InterlockedIncrement((volatile signed __int32 *)&v53 + 14) - 32) = 12;
  }
  ParentObject.m_ObjectState = 12;
  *(_QWORD *)&context.m_CompletionParams.Size = FxIoContext::`vftable';
  ParentObject.m_SpinLock.m_DbgFlagIsInitialized = 0;
  if ( context.m_OriginalSystemBuffer )
  {
    if ( ((__int64)context.m_OriginalSystemBuffer & 0xFFF) != 0 )
    {
      v31 = (FX_POOL_TRACKER *)*((_QWORD *)context.m_OriginalSystemBuffer - 2);
      if ( *(_BYTE *)(*((_QWORD *)context.m_OriginalSystemBuffer - 1) + 264LL) )
      {
        if ( FxIsPagedPoolType(v31->PoolType) )
          FxPoolRemovePagedAllocateTracker(v31);
        else
          FxPoolRemoveNonPagedAllocateTracker(v31);
        memset(v31, 0, v31->Size + 64);
      }
      m_OriginalSystemBuffer = v31;
    }
    else
    {
      m_OriginalSystemBuffer = context.m_OriginalSystemBuffer;
    }
    ExFreePoolWithTag(m_OriginalSystemBuffer, 0);
    context.m_OriginalSystemBuffer = 0LL;
  }
  m_OriginalMdl = context.m_OriginalMdl;
  context.m_MdlToFreeSize = 0LL;
  LOBYTE(context.m_OtherMemory) = 0;
  if ( context.m_OriginalMdl )
  {
    if ( BYTE1(context.m_OtherMemory) )
    {
      MmUnlockPages(context.m_OriginalMdl);
      m_OriginalMdl = context.m_OriginalMdl;
      BYTE1(context.m_OtherMemory) = 0;
    }
    if ( *(_BYTE *)(*(_QWORD *)&context.m_OriginalFlags + 316LL) )
      FxMdlFreeDebug(*(_FX_DRIVER_GLOBALS **)&context.m_OriginalFlags, m_OriginalMdl);
    else
      IoFreeMdl(m_OriginalMdl);
  }
  return v19;
}
