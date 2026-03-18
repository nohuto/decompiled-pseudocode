/*
 * XREFs of ?Dispatch@FxPkgGeneral@@UEAAJPEAU_IRP@@@Z @ 0x1C00272F0
 * Callers:
 *     <none>
 * Callees:
 *     ?_GetFileObjectFromWdm@FxFileObject@@SAJPEAVFxDevice@@W4_WDF_FILEOBJECT_CLASS@@PEAU_FILE_OBJECT@@PEAPEAV1@@Z @ 0x1C0001450 (-_GetFileObjectFromWdm@FxFileObject@@SAJPEAVFxDevice@@W4_WDF_FILEOBJECT_CLASS@@PEAU_FILE_OBJECT@.c)
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C0003AD0 (-FxPoolFree@@YAXPEAX@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0005090 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ??1FxObject@@UEAA@XZ @ 0x1C000B110 (--1FxObject@@UEAA@XZ.c)
 *     ?DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z @ 0x1C000B530 (-DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z.c)
 *     ?CancelForQueue@FxIoQueue@@QEAAXPEAVFxRequest@@E@Z @ 0x1C000DA0C (-CancelForQueue@FxIoQueue@@QEAAXPEAVFxRequest@@E@Z.c)
 *     ?RemoveIrpFromListEntry@FxIrpQueue@@AEAAXPEAVFxIrp@@@Z @ 0x1C000FF74 (-RemoveIrpFromListEntry@FxIrpQueue@@AEAAXPEAVFxIrp@@@Z.c)
 *     ?FxIsPagedPoolType@@YAEW4_POOL_TYPE@@@Z @ 0x1C0012470 (-FxIsPagedPoolType@@YAEW4_POOL_TYPE@@@Z.c)
 *     WPP_IFR_SF_ @ 0x1C0015D18 (WPP_IFR_SF_.c)
 *     ?PurgeForwardProgressIrps@FxIoQueue@@AEAAXPEAU_FILE_OBJECT@@@Z @ 0x1C001A640 (-PurgeForwardProgressIrps@FxIoQueue@@AEAAXPEAU_FILE_OBJECT@@@Z.c)
 *     ?AddRef@FxObject@@QEAAKPEAXJPEBD@Z @ 0x1C001FD44 (-AddRef@FxObject@@QEAAKPEAXJPEBD@Z.c)
 *     ?SetObjectStateLocked@FxObject@@AEAAXW4FxObjectState@@@Z @ 0x1C001FE98 (-SetObjectStateLocked@FxObject@@AEAAXW4FxObjectState@@@Z.c)
 *     ?OnClose@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z @ 0x1C00263F0 (-OnClose@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z.c)
 *     ?OnCreate@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z @ 0x1C0026700 (-OnCreate@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z.c)
 *     WPP_IFR_SF_qqcq @ 0x1C0035FC0 (WPP_IFR_SF_qqcq.c)
 *     ?CallbackEnd@FxLockedCallback@@IEAAXE@Z @ 0x1C003B27C (-CallbackEnd@FxLockedCallback@@IEAAXE@Z.c)
 *     ?CallbackStart@FxLockedCallback@@IEAAXPEAE@Z @ 0x1C003B2A4 (-CallbackStart@FxLockedCallback@@IEAAXPEAE@Z.c)
 *     ?PeekNextIrpFromQueue@FxIrpQueue@@AEAAPEAU_IRP@@PEAU2@PEAX@Z @ 0x1C003B834 (-PeekNextIrpFromQueue@FxIrpQueue@@AEAAPEAU_IRP@@PEAU2@PEAX@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C003C594 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ??_GFxVerifierLock@@QEAAPEAXI@Z @ 0x1C003C5E4 (--_GFxVerifierLock@@QEAAPEAXI@Z.c)
 *     ?FxPoolRemoveNonPagedAllocateTracker@@YAXPEAUFX_POOL_TRACKER@@@Z @ 0x1C003C78C (-FxPoolRemoveNonPagedAllocateTracker@@YAXPEAUFX_POOL_TRACKER@@@Z.c)
 *     ??_GFxRequestTimer@@QEAAPEAXI@Z @ 0x1C003C86C (--_GFxRequestTimer@@QEAAPEAXI@Z.c)
 *     ?FxPoolRemovePagedAllocateTracker@@YAXPEAUFX_POOL_TRACKER@@@Z @ 0x1C003C898 (-FxPoolRemovePagedAllocateTracker@@YAXPEAUFX_POOL_TRACKER@@@Z.c)
 *     ?Add@FxDisposeList@@QEAAXPEAVFxObject@@@Z @ 0x1C003C900 (-Add@FxDisposeList@@QEAAXPEAVFxObject@@@Z.c)
 *     ??_GFxTagTracker@@QEAAPEAXI@Z @ 0x1C003C970 (--_GFxTagTracker@@QEAAPEAXI@Z.c)
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x1C003CA08 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x1C003CBC0 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 *     ?CheckForAbandondedTags@FxTagTracker@@QEAAXXZ @ 0x1C003CF8C (-CheckForAbandondedTags@FxTagTracker@@QEAAXXZ.c)
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z @ 0x1C003D0A4 (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z.c)
 *     ?FxMdlFreeDebug@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAU_MDL@@@Z @ 0x1C003D2F4 (-FxMdlFreeDebug@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAU_MDL@@@Z.c)
 *     ?OnShutdown@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z @ 0x1C003D4E0 (-OnShutdown@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z.c)
 *     memset @ 0x1C003D9C0 (memset.c)
 */

__int64 __fastcall FxPkgGeneral::Dispatch(FxPkgGeneral *this, _IRP *Irp)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  _IO_STACK_LOCATION *v5; // rcx
  unsigned __int8 MajorFunction; // al
  _FILE_OBJECT *v7; // r8
  unsigned __int64 v8; // rdi
  unsigned __int8 v9; // r8
  int FileObjectFromWdm; // r15d
  _LIST_ENTRY *m_PkgContext; // rbx
  _LIST_ENTRY *i; // rbx
  FxDeviceBase *v13; // rax
  _LIST_ENTRY *Blink; // r13
  _FX_DRIVER_GLOBALS *Flink; // rbx
  unsigned __int8 v16; // dl
  unsigned __int8 v17; // r8
  _LIST_ENTRY *v18; // r12
  _LIST_ENTRY *v19; // rcx
  void (__fastcall ***p_Blink)(FxObject *, unsigned int); // rdi
  _LIST_ENTRY *v21; // rbx
  _LIST_ENTRY *v22; // rax
  unsigned int v23; // edx
  _LIST_ENTRY *v24; // rax
  unsigned __int8 v25; // r8
  unsigned __int16 v26; // r9
  _QWORD **v27; // r12
  _QWORD *v28; // rdx
  _IRP *j; // rax
  void (__fastcall *v30)(FxObject *, unsigned int); // rdx
  unsigned __int8 v31; // r8
  __int64 (__fastcall *v32)(FxObject *, volatile signed __int32 *, __int64, const char *); // rax
  unsigned __int8 v33; // dl
  unsigned __int8 v34; // r8
  _LIST_ENTRY *v35; // rbx
  _LIST_ENTRY *v36; // rcx
  unsigned int v39; // edx
  _LIST_ENTRY *v40; // rax
  __int16 v41; // cx
  FxTagTracker *v42; // r8
  unsigned __int16 v43; // cx
  _QWORD *v44; // rbx
  void (__fastcall *v45)(unsigned __int64); // rax
  void (__fastcall *v46)(unsigned __int64); // rax
  unsigned __int16 v47; // ax
  _QWORD *v48; // rcx
  _QWORD *v49; // rbx
  void (__fastcall *v50)(FxObject *, unsigned int); // rdx
  FxRegKey *(__fastcall *v51)(FxRegKey *, char, unsigned int); // rax
  void (__fastcall **v52)(FxObject *, unsigned int); // rcx
  void (__fastcall **v53)(FxObject *, unsigned int); // rcx
  FX_POOL_TRACKER *v54; // rbx
  _MDL *v55; // rcx
  void (__fastcall **v56)(FxObject *, unsigned int); // rcx
  void (__fastcall **v57)(FxObject *, unsigned int); // rbx
  FxRequestTimer *v58; // rcx
  FxDeviceBase *m_DeviceBase; // r10
  _IO_STACK_LOCATION *CurrentStackLocation; // rdx
  const void *_a1; // r8
  unsigned __int16 m_ObjectSize; // ax
  FxVerifierLock *v63; // rcx
  FxTagTracker *v64; // rcx
  FxVerifierLock *v65; // rcx
  FxVerifierLock *v66; // rcx
  FxIrpQueue *v67; // rcx
  _IRP *m_Irp; // r9
  _QWORD *v69; // rbx
  FxRequest *v70; // rbx
  FxRequest_vtbl *v71; // rax
  unsigned __int8 v72; // r8
  FxTagTracker *v73; // rcx
  void (__fastcall **v74)(FxObject *, unsigned int); // rcx
  FxVerifierLock *v75; // rcx
  FxVerifierLock *v76; // rcx
  FxTagTracker *v77; // rcx
  FxVerifierLock *v78; // rcx
  char _a3; // [rsp+38h] [rbp-41h]
  void *_a4; // [rsp+40h] [rbp-39h]
  FxIrp v81; // [rsp+50h] [rbp-29h] BYREF
  _FILE_OBJECT *FileObject; // [rsp+58h] [rbp-21h]
  FxIrp fxIrp; // [rsp+60h] [rbp-19h] BYREF
  FxFileObject *ppFxFileObject; // [rsp+68h] [rbp-11h] BYREF
  _LIST_ENTRY *v85; // [rsp+70h] [rbp-9h] BYREF
  _LIST_ENTRY *v86; // [rsp+78h] [rbp-1h]
  int v87; // [rsp+80h] [rbp+7h]
  ULONG_PTR retaddr; // [rsp+D8h] [rbp+5Fh]
  unsigned __int8 v89; // [rsp+E0h] [rbp+67h] BYREF
  unsigned __int8 v90; // [rsp+E8h] [rbp+6Fh] BYREF
  unsigned __int8 PreviousIrql; // [rsp+F0h] [rbp+77h] BYREF
  FxTagTracker *v92; // [rsp+F8h] [rbp+7Fh]

  fxIrp.m_Irp = Irp;
  m_Globals = this->m_Globals;
  if ( m_Globals->FxTrackDriverForMiniDumpLog )
    *(_FX_DRIVER_GLOBALS *volatile *)((char *)&FxLibraryGlobals.DriverTracker.m_DriverUsage->FxDriverGlobals
                                    + FxLibraryGlobals.DriverTracker.m_EntrySize * HIDWORD(KeGetPcr()[1].LockArray)) = m_Globals;
  if ( m_Globals->FxVerboseOn )
  {
    m_DeviceBase = this->m_DeviceBase;
    CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
    _a1 = (const void *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
    _a4 = Irp;
    m_ObjectSize = m_DeviceBase->m_ObjectSize;
    _a3 = CurrentStackLocation->MajorFunction;
    if ( !m_ObjectSize )
      _a1 = 0LL;
    WPP_IFR_SF_qqcq(
      m_Globals,
      5u,
      0xDu,
      0x14u,
      WPP_FxPkgGeneral_cpp_Traceguids,
      _a1,
      m_DeviceBase->m_DeviceObject.m_DeviceObject,
      _a3,
      _a4);
  }
  v5 = Irp->Tail.Overlay.CurrentStackLocation;
  MajorFunction = v5->MajorFunction;
  if ( !v5->MajorFunction )
    return (unsigned int)FxPkgGeneral::OnCreate(this, &fxIrp);
  if ( MajorFunction != 18 )
  {
    if ( MajorFunction == 2 )
    {
      return (unsigned int)FxPkgGeneral::OnClose(this, &fxIrp);
    }
    else
    {
      if ( MajorFunction != 16 )
      {
        FileObjectFromWdm = -1073741637;
        Irp->IoStatus.Status = -1073741637;
        IofCompleteRequest(Irp, 0);
        return (unsigned int)FileObjectFromWdm;
      }
      return (unsigned int)FxPkgGeneral::OnShutdown(this, &fxIrp);
    }
  }
  v7 = v5->FileObject;
  v8 = 0LL;
  ppFxFileObject = 0LL;
  if ( v7 && (v7->Flags & 0x100) != 0 )
  {
    FileObjectFromWdm = 0;
  }
  else
  {
    FileObjectFromWdm = FxFileObject::_GetFileObjectFromWdm(
                          this->m_Device,
                          (_WDF_FILEOBJECT_CLASS)LODWORD(this->m_DeviceBase[1].m_DisposeSingleEntry.Next),
                          v7,
                          &ppFxFileObject);
    if ( ppFxFileObject )
    {
      if ( FileObjectFromWdm >= 0 && ppFxFileObject->m_ObjectSize )
        v8 = (unsigned __int64)ppFxFileObject ^ 0xFFFFFFFFFFFFFFF8uLL;
      m_PkgContext = (_LIST_ENTRY *)ppFxFileObject->m_PkgContext;
      if ( !m_PkgContext )
        m_PkgContext = &this->m_FileObjectInfoHeadList;
    }
    else
    {
      m_PkgContext = this->m_FileObjectInfoHeadList.Blink;
      if ( m_PkgContext != &this->m_FileObjectInfoHeadList )
      {
        while ( LODWORD(m_PkgContext[9].Flink) || !m_PkgContext[2].Blink )
        {
          m_PkgContext = m_PkgContext->Blink;
          if ( m_PkgContext == &this->m_FileObjectInfoHeadList )
            goto LABEL_14;
        }
        m_PkgContext = m_PkgContext->Blink;
      }
    }
LABEL_14:
    for ( i = m_PkgContext->Flink; i != &this->m_FileObjectInfoHeadList; i = i->Flink )
    {
      if ( i[3].Blink )
      {
        PreviousIrql = 0;
        FxLockedCallback::CallbackStart((FxLockedCallback *)&i[3], &PreviousIrql);
        ((void (__fastcall *)(unsigned __int64))i[3].Blink)(v8);
        FxLockedCallback::CallbackEnd((FxLockedCallback *)&i[3], PreviousIrql);
      }
    }
    FileObject = Irp->Tail.Overlay.CurrentStackLocation->FileObject;
    if ( FileObject )
    {
      v13 = this->m_DeviceBase;
      v87 = 2;
      Blink = v13[3].m_ChildListHead.Blink;
      v86 = (_LIST_ENTRY *)&v85;
      v85 = (_LIST_ENTRY *)&v85;
      Flink = (_FX_DRIVER_GLOBALS *)Blink[1].Flink;
      if ( KeGetCurrentIrql() )
      {
        WPP_IFR_SF_(Flink, 2u, 0xDu, 0x21u, WPP_FxPkgIo_cpp_Traceguids);
        FxVerifierDbgBreakPoint(Flink);
      }
      else
      {
        if ( SLOBYTE(Blink[1].Blink) < 0 && (v63 = (FxVerifierLock *)Blink[-3].Blink) != 0LL )
        {
          FxVerifierLock::Lock(v63, &v89, v9);
          v16 = v89;
        }
        else
        {
          v16 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&Blink[7]);
          v89 = v16;
        }
        v18 = Blink + 8;
        v19 = Blink[8].Flink;
        if ( v19->Blink != &Blink[8] )
          __fastfail(3u);
        v85 = Blink[8].Flink;
        v86 = Blink + 8;
        p_Blink = 0LL;
        v19->Blink = (_LIST_ENTRY *)&v85;
        v21 = v85;
        v18->Flink = (_LIST_ENTRY *)&v85;
        v22 = v86;
        if ( (_LIST_ENTRY **)v21->Blink != &v85 || (_LIST_ENTRY **)v86->Flink != &v85 )
          __fastfail(3u);
        v86->Flink = v21;
        v21->Blink = v22;
        v86 = (_LIST_ENTRY *)&v85;
        v85 = (_LIST_ENTRY *)&v85;
        if ( v21 != v18 )
        {
          while ( LODWORD(v21[1].Flink) != 1 )
          {
            v21 = v21->Flink;
            if ( v21 == v18 )
              goto LABEL_30;
          }
          p_Blink = (void (__fastcall ***)(FxObject *, unsigned int))&v21[-57].Blink;
          v23 = _InterlockedIncrement((volatile signed __int32 *)&v21[-56].Flink + 1);
          if ( SLOBYTE(v21[-55].Flink) < 0 )
          {
            v64 = (FxTagTracker *)v21[-60].Blink;
            if ( v64 )
              FxTagTracker::UpdateTagHistory(
                v64,
                (void *)0x73756C66,
                1686,
                "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxpkgio.cpp",
                TagAddRef,
                v23);
          }
          v24 = v21->Flink;
          if ( v21->Flink->Blink != v21 )
            __fastfail(3u);
          v16 = v89;
          v85 = v21->Flink;
          v86 = v21;
          v24->Blink = (_LIST_ENTRY *)&v85;
          v21->Flink = (_LIST_ENTRY *)&v85;
        }
LABEL_30:
        if ( SLOBYTE(Blink[1].Blink) < 0 && (v65 = (FxVerifierLock *)Blink[-3].Blink) != 0LL )
          FxVerifierLock::Unlock(v65, v16, v17);
        else
          KeReleaseSpinLock((PKSPIN_LOCK)&Blink[7], v16);
        while ( p_Blink )
        {
          if ( *((_BYTE *)p_Blink + 136) )
            FxIoQueue::PurgeForwardProgressIrps((FxIoQueue *)p_Blink, FileObject);
          if ( *((char *)p_Blink + 24) < 0 && (v66 = (FxVerifierLock *)*(p_Blink - 5)) != 0LL )
            FxVerifierLock::Lock(v66, &v90, v25);
          else
            v90 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)p_Blink + 14);
          v27 = p_Blink + 24;
          while ( 1 )
          {
            v28 = *v27;
            for ( j = 0LL; v28 != v27; j = 0LL )
            {
              j = (_IRP *)(v28 - 21);
              if ( !FileObject )
                break;
              if ( j->Tail.Overlay.CurrentStackLocation->FileObject == FileObject )
                break;
              v28 = (_QWORD *)*v28;
            }
            v81.m_Irp = j;
            if ( !j )
              break;
            while ( 1 )
            {
              v67 = (FxIrpQueue *)(p_Blink + 24);
              if ( _InterlockedExchange64((volatile __int64 *)&j->CancelRoutine, 0LL) )
                break;
              j = FxIrpQueue::PeekNextIrpFromQueue(v67, v81.m_Irp, FileObject);
              v81.m_Irp = j;
              if ( !j )
                goto LABEL_40;
            }
            FxIrpQueue::RemoveIrpFromListEntry(v67, &v81);
            m_Irp = v81.m_Irp;
            v69 = v81.m_Irp->Tail.Overlay.DriverContext[3];
            if ( *(_DWORD *)v69 == 1 )
              v69[1] = 0LL;
            m_Irp->Tail.Overlay.DriverContext[3] = 0LL;
            v70 = (FxRequest *)(v69 - 15);
            v71 = v70->__vftable;
            v70->m_IrpQueue = 0LL;
            v71->Release(v70, (void *)1969583441, 2102, "minkernel\\wdf\\framework\\shared\\core\\fxrequest.cpp");
            FxObject::AddRef(
              v70,
              (void *)0x75657551,
              4331,
              "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp");
            FxIoQueue::CancelForQueue((FxIoQueue *)p_Blink, v70, v90);
            FxNonPagedObject::Lock((FxNonPagedObject *)p_Blink, &v90, v72);
          }
LABEL_40:
          FxIoQueue::DispatchEvents((FxIoQueue *)p_Blink, v90, 0LL, v26);
          v32 = (__int64 (__fastcall *)(FxObject *, volatile signed __int32 *, __int64, const char *))(*p_Blink)[2];
          if ( v32 == FxObject::Release )
          {
            if ( *((char *)p_Blink + 24) < 0 )
            {
              v73 = (FxTagTracker *)*(p_Blink - 6);
              if ( v73 )
                FxTagTracker::UpdateTagHistory(
                  v73,
                  (void *)0x73756C66,
                  1441,
                  "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxpkgio.cpp",
                  TagRelease,
                  *((_DWORD *)p_Blink + 3) - 1);
            }
            if ( _InterlockedDecrement((volatile signed __int32 *)p_Blink + 3) )
              goto LABEL_43;
            v41 = *((_WORD *)p_Blink + 12);
            if ( (v41 & 0x20) != 0 || (v41 & 0x10) != 0 && KeGetCurrentIrql() )
            {
              FxObject::SetObjectStateLocked((FxObject *)p_Blink, 0xBu);
              FxDisposeList::Add(*((FxDisposeList **)p_Blink[2][9] + 43), (FxObject *)p_Blink);
            }
            else
            {
              if ( (v41 & 0x80u) != 0 )
              {
                v42 = (FxTagTracker *)*(p_Blink - 6);
                v92 = v42;
                if ( v42 )
                {
                  FxTagTracker::CheckForAbandondedTags(v42);
                  v42 = v92;
                }
              }
              else
              {
                v42 = 0LL;
                v92 = 0LL;
              }
              v43 = *((_WORD *)p_Blink + 5);
              if ( v43 && ((_BYTE)p_Blink[3] & 8) != 0 )
              {
                v44 = (void (__fastcall ***)(FxObject *, unsigned int))((char *)p_Blink + v43);
                if ( v44 )
                {
                  do
                  {
                    v45 = (void (__fastcall *)(unsigned __int64))v44[2];
                    if ( v45 )
                    {
                      v45((unsigned __int64)p_Blink ^ 0xFFFFFFFFFFFFFFF8uLL);
                      v44[2] = 0LL;
                    }
                    v46 = (void (__fastcall *)(unsigned __int64))v44[3];
                    if ( v46 )
                    {
                      v46((unsigned __int64)p_Blink ^ 0xFFFFFFFFFFFFFFF8uLL);
                      v44[3] = 0LL;
                    }
                    v44 = (_QWORD *)v44[1];
                  }
                  while ( v44 );
                  v42 = v92;
                }
                v47 = *((_WORD *)p_Blink + 5);
                LOBYTE(v30) = 1;
                if ( v47 )
                {
                  v48 = (void (__fastcall ***)(FxObject *, unsigned int))((char *)p_Blink + v47);
                  if ( v48 )
                  {
                    do
                    {
                      v49 = (_QWORD *)v48[1];
                      if ( !(_BYTE)v30 )
                        FxPoolFree(v48);
                      LOBYTE(v30) = 0;
                      v48 = v49;
                    }
                    while ( v49 );
                    v42 = v92;
                  }
                }
              }
              if ( *((char *)p_Blink + 24) < 0 )
              {
                if ( *((_BYTE *)p_Blink - 20) )
                {
                  _InterlockedDecrement((volatile signed __int32 *)p_Blink[2][41] + 3);
                  if ( *((_WORD *)p_Blink + 4) == 4098
                    && _InterlockedExchangeAdd((volatile signed __int32 *)p_Blink[2][41] + 4, 0xFFFFFFFF) != 1 )
                  {
                    v30 = p_Blink[2][41];
                    _InterlockedExchangeAdd((volatile signed __int32 *)v30 + 2, -*((_DWORD *)v30 + 1));
                  }
                }
              }
              if ( v42 )
              {
                *(p_Blink - 6) = 0LL;
                FxTagTracker::`scalar deleting destructor'(v42, (unsigned int)v30);
              }
              v50 = **p_Blink;
              if ( v50 == FxObject::SelfDestruct )
              {
                v51 = (FxRegKey *(__fastcall *)(FxRegKey *, char, unsigned int))(*p_Blink)[1];
                if ( v51 == FxRegKey::`scalar deleting destructor' )
                {
                  *p_Blink = (void (__fastcall **)(FxObject *, unsigned int))FxRegKey::`vftable';
                  v52 = p_Blink[14];
                  if ( v52 )
                  {
                    ZwClose(v52);
                    p_Blink[14] = 0LL;
                  }
                  v53 = p_Blink[13];
                  *p_Blink = (void (__fastcall **)(FxObject *, unsigned int))FxPagedObject::`vftable';
                  if ( v53 )
                  {
                    FxPoolFree(v53);
                    p_Blink[13] = 0LL;
                  }
                  FxObject::~FxObject((FxObject *)p_Blink, (unsigned int)v50, (unsigned int)v42);
                  if ( *((char *)p_Blink + 24) < 0 )
                    p_Blink -= 6;
                  if ( !p_Blink )
                    KeBugCheckEx(0x10Du, 4uLL, 0LL, retaddr, 0LL);
LABEL_94:
                  if ( ((unsigned __int16)p_Blink & 0xFFF) != 0 )
                  {
                    v54 = (FX_POOL_TRACKER *)*(p_Blink - 2);
                    if ( *((_BYTE *)*(p_Blink - 1) + 264) )
                    {
                      if ( FxIsPagedPoolType(v54->PoolType) )
                        FxPoolRemovePagedAllocateTracker(v54);
                      else
                        FxPoolRemoveNonPagedAllocateTracker(v54);
                      memset(v54, 0, v54->Size + 64);
                    }
                    ExFreePoolWithTag(v54, 0);
                  }
                  else
                  {
                    ExFreePoolWithTag(p_Blink, 0);
                  }
                  goto LABEL_43;
                }
                if ( (char *)v51 == (char *)FxRequest::`scalar deleting destructor' )
                {
                  *p_Blink = (void (__fastcall **)(FxObject *, unsigned int))FxRequestBase::`vftable';
                  v55 = (_MDL *)p_Blink[30];
                  if ( v55 )
                  {
                    if ( *((_BYTE *)p_Blink[2] + 316) )
                      FxMdlFreeDebug((_FX_DRIVER_GLOBALS *)p_Blink[2], (_MDL *)p_Blink[30]);
                    else
                      IoFreeMdl(v55);
                  }
                  v56 = p_Blink[21];
                  v57 = p_Blink[19];
                  if ( v56 )
                  {
                    if ( v57 )
                      (*((void (__fastcall **)(_QWORD, _QWORD))*v56 + 3))(v56, p_Blink);
                    v74 = p_Blink[21];
                    if ( v74 )
                      (*(void (__fastcall **)(_QWORD, __int64))*v74)(v74, 1LL);
                  }
                  if ( v57 && *((_BYTE *)p_Blink + 213) == 1 )
                    IoFreeIrp((PIRP)p_Blink[19]);
                  v58 = (FxRequestTimer *)p_Blink[22];
                  if ( v58 )
                    FxRequestTimer::`scalar deleting destructor'(v58, (unsigned int)v50);
                  *p_Blink = (void (__fastcall **)(FxObject *, unsigned int))FxNonPagedObject::`vftable';
                  if ( *((char *)p_Blink + 24) < 0 )
                  {
                    v75 = (FxVerifierLock *)*(p_Blink - 5);
                    if ( v75 )
                    {
                      FxVerifierLock::`scalar deleting destructor'(v75, (unsigned int)v50);
                      *(p_Blink - 5) = 0LL;
                    }
                  }
                  *((_BYTE *)p_Blink + 104) = 0;
                  FxObject::~FxObject((FxObject *)p_Blink, (unsigned int)v50, (unsigned int)v42);
                  if ( *((char *)p_Blink + 24) < 0 )
                    p_Blink -= 6;
                  FxPoolFree(p_Blink);
                  goto LABEL_43;
                }
                if ( (char *)v51 == (char *)FxMemoryBuffer::`scalar deleting destructor' )
                {
                  *p_Blink = (void (__fastcall **)(FxObject *, unsigned int))FxMemoryBuffer::`vftable'{for `FxObject'};
                  p_Blink[13] = (void (__fastcall **)(FxObject *, unsigned int))FxMemoryBufferFromLookaside::`vftable'{for `IFxMemory'};
                  FxObject::~FxObject((FxObject *)p_Blink, (unsigned int)v50, (unsigned int)v42);
                  if ( *((char *)p_Blink + 24) < 0 )
                    p_Blink -= 6;
                  if ( !p_Blink )
                    KeBugCheckEx(0x10Du, 4uLL, 0LL, retaddr, 0LL);
                  goto LABEL_94;
                }
                ((void (__fastcall *)(_QWORD, __int64))v51)(p_Blink, 1LL);
              }
              else
              {
                ((void (__fastcall *)(void (__fastcall ***)(FxObject *, unsigned int)))**p_Blink)(p_Blink);
              }
            }
          }
          else
          {
            v32(
              (FxObject *)p_Blink,
              (volatile signed __int32 *)1937075302,
              1441LL,
              "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxpkgio.cpp");
          }
LABEL_43:
          if ( SLOBYTE(Blink[1].Blink) < 0 && (v76 = (FxVerifierLock *)Blink[-3].Blink) != 0LL )
          {
            FxVerifierLock::Lock(v76, &v89, v31);
            v33 = v89;
          }
          else
          {
            v33 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&Blink[7]);
            v89 = v33;
          }
          v35 = v85;
          v36 = v86;
          p_Blink = 0LL;
          if ( (_LIST_ENTRY **)v85->Blink != &v85 || (_LIST_ENTRY **)v86->Flink != &v85 )
            __fastfail(3u);
          v86->Flink = v85;
          v35->Blink = v36;
          v86 = (_LIST_ENTRY *)&v85;
          v85 = (_LIST_ENTRY *)&v85;
          if ( v35 != &Blink[8] )
          {
            while ( LODWORD(v35[1].Flink) != 1 )
            {
              v35 = v35->Flink;
              if ( v35 == &Blink[8] )
                goto LABEL_48;
            }
            p_Blink = (void (__fastcall ***)(FxObject *, unsigned int))&v35[-57].Blink;
            v39 = _InterlockedIncrement((volatile signed __int32 *)&v35[-56].Flink + 1);
            if ( SLOBYTE(v35[-55].Flink) < 0 )
            {
              v77 = (FxTagTracker *)v35[-60].Blink;
              if ( v77 )
                FxTagTracker::UpdateTagHistory(
                  v77,
                  (void *)0x73756C66,
                  1686,
                  "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxpkgio.cpp",
                  TagAddRef,
                  v39);
            }
            v40 = v35->Flink;
            if ( v35->Flink->Blink != v35 )
              __fastfail(3u);
            v33 = v89;
            v85 = v35->Flink;
            v86 = v35;
            v40->Blink = (_LIST_ENTRY *)&v85;
            v35->Flink = (_LIST_ENTRY *)&v85;
          }
LABEL_48:
          if ( SLOBYTE(Blink[1].Blink) < 0 && (v78 = (FxVerifierLock *)Blink[-3].Blink) != 0LL )
            FxVerifierLock::Unlock(v78, v33, v34);
          else
            KeReleaseSpinLock((PKSPIN_LOCK)&Blink[7], v33);
        }
      }
    }
  }
  if ( BYTE1(this->m_DeviceBase[1].m_ChildEntry.Blink) )
  {
    ++Irp->CurrentLocation;
    ++Irp->Tail.Overlay.CurrentStackLocation;
    return (unsigned int)IofCallDriver(this->m_DeviceBase->m_AttachedDevice.m_DeviceObject, Irp);
  }
  Irp->IoStatus.Status = FileObjectFromWdm;
  Irp->IoStatus.Information = 0LL;
  IofCompleteRequest(Irp, 0);
  return (unsigned int)FileObjectFromWdm;
}
