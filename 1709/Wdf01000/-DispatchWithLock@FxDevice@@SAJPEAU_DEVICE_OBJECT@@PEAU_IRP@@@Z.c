/*
 * XREFs of ?DispatchWithLock@FxDevice@@SAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x1C00072B0
 * Callers:
 *     <none>
 * Callees:
 *     ?_GetFileObjectFromWdm@FxFileObject@@SAJPEAVFxDevice@@W4_WDF_FILEOBJECT_CLASS@@PEAU_FILE_OBJECT@@PEAPEAV1@@Z @ 0x1C0001450 (-_GetFileObjectFromWdm@FxFileObject@@SAJPEAVFxDevice@@W4_WDF_FILEOBJECT_CLASS@@PEAU_FILE_OBJECT@.c)
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C0003AD0 (-FxPoolFree@@YAXPEAX@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0005090 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?DispatchStep1@FxPkgIo@@QEAAJPEAU_IRP@@PEAX@Z @ 0x1C0008210 (-DispatchStep1@FxPkgIo@@QEAAJPEAU_IRP@@PEAX@Z.c)
 *     ??1FxObject@@UEAA@XZ @ 0x1C000B110 (--1FxObject@@UEAA@XZ.c)
 *     ?DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z @ 0x1C000B530 (-DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z.c)
 *     ?CancelForQueue@FxIoQueue@@QEAAXPEAVFxRequest@@E@Z @ 0x1C000DA0C (-CancelForQueue@FxIoQueue@@QEAAXPEAVFxRequest@@E@Z.c)
 *     ?RemoveIrpFromListEntry@FxIrpQueue@@AEAAXPEAVFxIrp@@@Z @ 0x1C000FF74 (-RemoveIrpFromListEntry@FxIrpQueue@@AEAAXPEAVFxIrp@@@Z.c)
 *     ?FxIsPagedPoolType@@YAEW4_POOL_TYPE@@@Z @ 0x1C0012470 (-FxIsPagedPoolType@@YAEW4_POOL_TYPE@@@Z.c)
 *     WPP_IFR_SF_ @ 0x1C0015D18 (WPP_IFR_SF_.c)
 *     ?PurgeForwardProgressIrps@FxIoQueue@@AEAAXPEAU_FILE_OBJECT@@@Z @ 0x1C001A640 (-PurgeForwardProgressIrps@FxIoQueue@@AEAAXPEAU_FILE_OBJECT@@@Z.c)
 *     ?AddRef@FxObject@@QEAAKPEAXJPEBD@Z @ 0x1C001FD44 (-AddRef@FxObject@@QEAAKPEAXJPEBD@Z.c)
 *     ?SetObjectStateLocked@FxObject@@AEAAXW4FxObjectState@@@Z @ 0x1C001FE98 (-SetObjectStateLocked@FxObject@@AEAAXW4FxObjectState@@@Z.c)
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C001FECC (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     ?SetCompletionRoutineEx@FxIrp@@QEAAXPEAU_DEVICE_OBJECT@@P6AJ0PEAU_IRP@@PEAX@Z2EEE@Z @ 0x1C0021168 (-SetCompletionRoutineEx@FxIrp@@QEAAXPEAU_DEVICE_OBJECT@@P6AJ0PEAU_IRP@@PEAX@Z2EEE@Z.c)
 *     ?OnClose@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z @ 0x1C00263F0 (-OnClose@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z.c)
 *     ?OnCreate@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z @ 0x1C0026700 (-OnCreate@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z.c)
 *     WPP_IFR_SF_qqcq @ 0x1C0035FC0 (WPP_IFR_SF_qqcq.c)
 *     ?CallbackEnd@FxLockedCallback@@IEAAXE@Z @ 0x1C003B27C (-CallbackEnd@FxLockedCallback@@IEAAXE@Z.c)
 *     ?CallbackStart@FxLockedCallback@@IEAAXPEAE@Z @ 0x1C003B2A4 (-CallbackStart@FxLockedCallback@@IEAAXPEAE@Z.c)
 *     ?PeekNextIrpFromQueue@FxIrpQueue@@AEAAPEAU_IRP@@PEAU2@PEAX@Z @ 0x1C003B834 (-PeekNextIrpFromQueue@FxIrpQueue@@AEAAPEAU_IRP@@PEAU2@PEAX@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C003C594 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ??_GFxVerifierLock@@QEAAPEAXI@Z @ 0x1C003C5E4 (--_GFxVerifierLock@@QEAAPEAXI@Z.c)
 *     WPP_IFR_SF_qqcDq @ 0x1C003C650 (WPP_IFR_SF_qqcDq.c)
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

__int64 __fastcall FxDevice::DispatchWithLock(_DEVICE_OBJECT *DeviceObject, _IRP *Irp)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  unsigned __int8 MajorFunction; // al
  int v6; // eax
  int v7; // eax
  int v8; // eax
  unsigned __int64 v9; // r15
  __int64 v10; // rbx
  _QWORD *v11; // r8
  _IO_STACK_LOCATION *v12; // rax
  __int64 v13; // rsi
  unsigned __int8 MinorFunction; // r12
  __int64 v15; // r10
  __int64 (__fastcall *v16)(unsigned __int64, _IRP *, _QWORD *); // r9
  _QWORD *v17; // rcx
  int v18; // ecx
  FxPkgIo *v19; // rsi
  int (__fastcall *Dispatch)(FxPackage *, _IRP *); // rax
  unsigned int FileObjectFromWdm; // r14d
  NTSTATUS v24; // esi
  _FX_DRIVER_GLOBALS *v25; // r11
  _IO_STACK_LOCATION *v26; // rcx
  unsigned __int8 v27; // al
  _FILE_OBJECT *v28; // r8
  unsigned __int64 v29; // r12
  unsigned __int8 v30; // r8
  _LIST_ENTRY *m_PkgContext; // rbx
  _LIST_ENTRY *i; // rbx
  FxDeviceBase *v33; // rax
  _LIST_ENTRY *Blink; // r13
  _FX_DRIVER_GLOBALS *Flink; // rbx
  unsigned __int8 v36; // r8
  _LIST_ENTRY *v37; // rcx
  _LIST_ENTRY *v38; // rdx
  FxIoQueue *p_Blink; // r12
  _LIST_ENTRY *v40; // rbx
  _LIST_ENTRY *v41; // rax
  unsigned int v42; // edx
  _LIST_ENTRY *v43; // rax
  unsigned __int8 v44; // r8
  FxIrpQueue *p_m_Queue; // r9
  _IRP *p_m_RequestCount; // rax
  FxIrpQueue *v47; // rdx
  void (__fastcall *FxVerifyLeakDetection)(FxObject *); // rdx
  unsigned __int8 v49; // r8
  unsigned int (__fastcall *Release)(FxObject *, void *, int, const char *); // rax
  unsigned __int8 v51; // dl
  unsigned __int8 v52; // r8
  _LIST_ENTRY *v53; // rbx
  _LIST_ENTRY *v54; // rcx
  _FX_DRIVER_GLOBALS *m_Globals; // rdx
  unsigned int v56; // r14d
  unsigned int v57; // r11d
  unsigned int v58; // eax
  unsigned int v59; // edx
  _LIST_ENTRY *v60; // rax
  unsigned __int16 m_ObjectFlags; // cx
  FxTagTracker *v62; // r8
  unsigned __int16 v63; // cx
  _QWORD *v64; // rbx
  void (__fastcall *v65)(unsigned __int64, void (__fastcall *)(FxObject *), FxTagTracker *); // rax
  void (__fastcall *v66)(unsigned __int64, void (__fastcall *)(FxObject *), FxTagTracker *); // rax
  unsigned __int16 v67; // ax
  _QWORD *v68; // rcx
  _QWORD *v69; // rbx
  void (__fastcall *SelfDestruct)(FxObject *); // rdx
  void *(__fastcall *v71)(FxRegKey *, unsigned int); // rax
  void (__fastcall **m_Lock)(FxObject *); // rcx
  void (__fastcall **v73)(FxObject *); // rcx
  FX_POOL_TRACKER *v74; // rbx
  _MDL *v75; // rcx
  void (__fastcall **v76)(FxObject *); // rcx
  void (__fastcall **v77)(FxObject *); // rbx
  FxRequestTimer *v78; // rcx
  _IO_STACK_LOCATION *v79; // rax
  unsigned __int64 v80; // rcx
  FxDeviceBase *m_DeviceBase; // r10
  _IO_STACK_LOCATION *v82; // rdx
  const void *v83; // r8
  unsigned __int16 m_ObjectSize; // ax
  FxVerifierLock *v85; // rcx
  FxTagTracker *v86; // rcx
  FxVerifierLock *v87; // rcx
  FxVerifierLock *v88; // rcx
  _IRP *m_Irp; // r9
  _QWORD *v90; // rbx
  FxRequest *v91; // rbx
  FxRequest_vtbl *v92; // rax
  unsigned __int8 v93; // r8
  FxTagTracker *v94; // rcx
  void (__fastcall **v95)(FxObject *); // rcx
  FxVerifierLock *v96; // rcx
  FxVerifierLock *v97; // rcx
  FxTagTracker *v98; // rcx
  FxVerifierLock *v99; // rcx
  const void *ObjectHandleUnchecked; // rax
  __int64 v101; // r10
  _FX_DRIVER_GLOBALS *v102; // r11
  ULONG RemlockSize[2]; // [rsp+20h] [rbp-69h]
  void *_a1; // [rsp+28h] [rbp-61h]
  void *_a2; // [rsp+30h] [rbp-59h]
  char _a3; // [rsp+38h] [rbp-51h]
  void *_a4; // [rsp+40h] [rbp-49h]
  _LIST_ENTRY *v108; // [rsp+50h] [rbp-39h] BYREF
  _LIST_ENTRY *v109; // [rsp+58h] [rbp-31h]
  int v110; // [rsp+60h] [rbp-29h]
  FxTagTracker *v111; // [rsp+68h] [rbp-21h]
  FxIrp v112; // [rsp+70h] [rbp-19h] BYREF
  unsigned int v113; // [rsp+78h] [rbp-11h]
  _FILE_OBJECT *FileObject; // [rsp+80h] [rbp-9h]
  FxIrp FxIrp; // [rsp+88h] [rbp-1h] BYREF
  FxFileObject *ppFxFileObject; // [rsp+90h] [rbp+7h] BYREF
  FxIrp v117; // [rsp+A0h] [rbp+17h] BYREF
  ULONG_PTR retaddr; // [rsp+E8h] [rbp+5Fh]
  unsigned __int8 v119; // [rsp+F8h] [rbp+6Fh] BYREF
  unsigned __int8 v120; // [rsp+100h] [rbp+77h] BYREF
  unsigned __int8 PreviousIrql; // [rsp+108h] [rbp+7Fh] BYREF

  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  MajorFunction = CurrentStackLocation->MajorFunction;
  if ( CurrentStackLocation->MajorFunction < 0x16u )
    goto LABEL_2;
  if ( MajorFunction <= 0x17u )
    goto LABEL_24;
  if ( MajorFunction != 27 )
  {
LABEL_2:
    v6 = 3;
    goto LABEL_3;
  }
  if ( CurrentStackLocation->MinorFunction == 2 )
    v6 = 2;
  else
LABEL_24:
    v6 = 1;
LABEL_3:
  v7 = v6 - 1;
  if ( v7 )
  {
    v8 = v7 - 1;
    if ( v8 )
    {
      if ( v8 != 1 || (v117.m_Irp = Irp, ((__int64)DeviceObject[1].CurrentIrp & 1) == 0) )
      {
LABEL_7:
        v9 = 0LL;
        v10 = *((_QWORD *)DeviceObject->DeviceExtension - 6);
        v11 = *(_QWORD **)(v10 + 368);
        if ( v11 != (_QWORD *)(v10 + 368) )
        {
          v12 = Irp->Tail.Overlay.CurrentStackLocation;
          v13 = v12->MajorFunction;
          MinorFunction = v12->MinorFunction;
          v15 = 3 * v13;
          while ( 1 )
          {
            v16 = (__int64 (__fastcall *)(unsigned __int64, _IRP *, _QWORD *))v11[v15 + 2];
            v17 = v11;
            v11 = (_QWORD *)*v11;
            if ( v16 )
              break;
LABEL_10:
            if ( v11 == (_QWORD *)(v10 + 368) )
              goto LABEL_11;
          }
          v56 = v17[v15 + 3];
          if ( v56 )
          {
            v57 = 0;
            while ( *(_BYTE *)(v57 + v17[v15 + 4]) != MinorFunction )
            {
              if ( ++v57 >= v56 )
                goto LABEL_10;
            }
          }
          if ( *((_BYTE *)v17 + 688) )
          {
            v80 = v10 ^ 0xFFFFFFFFFFFFFFF8uLL;
            if ( !*(_WORD *)(v10 + 10) )
              v80 = 0LL;
            v58 = v16(v80, Irp, v11);
          }
          else
          {
            if ( *(_WORD *)(v10 + 10) )
              v9 = v10 ^ 0xFFFFFFFFFFFFFFF8uLL;
            v58 = v16(v9, Irp, v11);
          }
          FileObjectFromWdm = v58;
          if ( (unsigned __int8)v13 >= 0x16u
            && ((unsigned __int8)v13 <= 0x17u || (_BYTE)v13 == 27 && MinorFunction != 2) )
          {
            IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(*(_QWORD *)(v10 + 144) + 336LL), Irp, 0x20u);
          }
          return FileObjectFromWdm;
        }
LABEL_11:
        v18 = Irp->Tail.Overlay.CurrentStackLocation->MajorFunction;
        if ( v18 == 27 )
        {
LABEL_15:
          v19 = *(FxPkgIo **)(v10 + 648);
          if ( !v19 )
LABEL_163:
            v19 = *(FxPkgIo **)(v10 + 672);
        }
        else if ( v18 == 14 )
        {
LABEL_78:
          v19 = *(FxPkgIo **)(v10 + 640);
        }
        else
        {
          switch ( Irp->Tail.Overlay.CurrentStackLocation->MajorFunction )
          {
            case 0u:
            case 2u:
            case 0x10u:
            case 0x12u:
              v19 = *(FxPkgIo **)(v10 + 656);
              break;
            case 3u:
            case 4u:
            case 0xFu:
              goto LABEL_78;
            case 0x16u:
              goto LABEL_15;
            case 0x17u:
              v19 = *(FxPkgIo **)(v10 + 664);
              break;
            default:
              goto LABEL_163;
          }
        }
        Dispatch = v19->Dispatch;
        if ( (char *)Dispatch != (char *)FxPkgGeneral::Dispatch )
        {
          if ( (char *)Dispatch == (char *)FxPkgIo::Dispatch )
          {
            m_Globals = v19->m_Globals;
            if ( m_Globals->FxTrackDriverForMiniDumpLog )
              *(_FX_DRIVER_GLOBALS *volatile *)((char *)&FxLibraryGlobals.DriverTracker.m_DriverUsage->FxDriverGlobals
                                              + FxLibraryGlobals.DriverTracker.m_EntrySize
                                              * HIDWORD(KeGetPcr()[1].LockArray)) = m_Globals;
            if ( v19->m_Globals->FxVerboseOn )
            {
              ObjectHandleUnchecked = FxObject::GetObjectHandleUnchecked(v19->m_DeviceBase);
              WPP_IFR_SF_qqcDq(
                v102,
                *(_QWORD *)(v101 + 144),
                (unsigned int)Irp->Tail.Overlay.CurrentStackLocation,
                0xCu,
                WPP_FxPkgIo_cpp_Traceguids,
                ObjectHandleUnchecked,
                *(const void **)(v101 + 144),
                Irp->Tail.Overlay.CurrentStackLocation->MajorFunction,
                Irp->Tail.Overlay.CurrentStackLocation->MinorFunction,
                Irp);
            }
            return (unsigned int)FxPkgIo::DispatchStep1(v19, Irp, v19->m_DynamicDispatchInfoListHead.Flink);
          }
          else
          {
            return (unsigned int)Dispatch(v19, Irp);
          }
        }
        v25 = v19->m_Globals;
        FxIrp.m_Irp = Irp;
        if ( v25->FxTrackDriverForMiniDumpLog )
          *(_FX_DRIVER_GLOBALS *volatile *)((char *)&FxLibraryGlobals.DriverTracker.m_DriverUsage->FxDriverGlobals
                                          + FxLibraryGlobals.DriverTracker.m_EntrySize
                                          * HIDWORD(KeGetPcr()[1].LockArray)) = v25;
        if ( v25->FxVerboseOn )
        {
          m_DeviceBase = v19->m_DeviceBase;
          v82 = Irp->Tail.Overlay.CurrentStackLocation;
          v83 = (const void *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
          _a4 = Irp;
          m_ObjectSize = m_DeviceBase->m_ObjectSize;
          _a3 = v82->MajorFunction;
          if ( !m_ObjectSize )
            v83 = 0LL;
          WPP_IFR_SF_qqcq(
            v25,
            5u,
            0xDu,
            0x14u,
            WPP_FxPkgGeneral_cpp_Traceguids,
            v83,
            m_DeviceBase->m_DeviceObject.m_DeviceObject,
            _a3,
            _a4);
        }
        v26 = Irp->Tail.Overlay.CurrentStackLocation;
        v27 = v26->MajorFunction;
        if ( v26->MajorFunction )
        {
          if ( v27 != 18 )
          {
            if ( v27 == 2 )
            {
              return (unsigned int)FxPkgGeneral::OnClose((FxPkgGeneral *)v19, &FxIrp);
            }
            else
            {
              if ( v27 != 16 )
              {
                FileObjectFromWdm = -1073741637;
                Irp->IoStatus.Status = -1073741637;
                IofCompleteRequest(Irp, 0);
                return FileObjectFromWdm;
              }
              return (unsigned int)FxPkgGeneral::OnShutdown((FxPkgGeneral *)v19, &FxIrp);
            }
          }
          v28 = v26->FileObject;
          v29 = 0LL;
          ppFxFileObject = 0LL;
          if ( v28 && (v28->Flags & 0x100) != 0 )
          {
            FileObjectFromWdm = 0;
          }
          else
          {
            FileObjectFromWdm = FxFileObject::_GetFileObjectFromWdm(
                                  v19->m_Device,
                                  (_WDF_FILEOBJECT_CLASS)LODWORD(v19->m_DeviceBase[1].m_DisposeSingleEntry.Next),
                                  v28,
                                  &ppFxFileObject);
            v113 = FileObjectFromWdm;
            if ( ppFxFileObject )
            {
              if ( (FileObjectFromWdm & 0x80000000) == 0 && ppFxFileObject->m_ObjectSize )
                v29 = (unsigned __int64)ppFxFileObject ^ 0xFFFFFFFFFFFFFFF8uLL;
              m_PkgContext = (_LIST_ENTRY *)ppFxFileObject->m_PkgContext;
              if ( !m_PkgContext )
                m_PkgContext = &v19->m_IoQueueListHead;
            }
            else
            {
              m_PkgContext = v19->m_IoQueueListHead.Blink;
              if ( m_PkgContext != &v19->m_IoQueueListHead )
              {
                while ( LODWORD(m_PkgContext[9].Flink) || !m_PkgContext[2].Blink )
                {
                  m_PkgContext = m_PkgContext->Blink;
                  if ( m_PkgContext == &v19->m_IoQueueListHead )
                    goto LABEL_40;
                }
                m_PkgContext = m_PkgContext->Blink;
              }
            }
LABEL_40:
            for ( i = m_PkgContext->Flink; i != &v19->m_IoQueueListHead; i = i->Flink )
            {
              if ( i[3].Blink )
              {
                PreviousIrql = 0;
                FxLockedCallback::CallbackStart((FxLockedCallback *)&i[3], &PreviousIrql);
                ((void (__fastcall *)(unsigned __int64))i[3].Blink)(v29);
                FxLockedCallback::CallbackEnd((FxLockedCallback *)&i[3], PreviousIrql);
              }
            }
            FileObject = Irp->Tail.Overlay.CurrentStackLocation->FileObject;
            if ( FileObject )
            {
              v33 = v19->m_DeviceBase;
              v110 = 2;
              Blink = v33[3].m_ChildListHead.Blink;
              v109 = (_LIST_ENTRY *)&v108;
              v108 = (_LIST_ENTRY *)&v108;
              Flink = (_FX_DRIVER_GLOBALS *)Blink[1].Flink;
              if ( KeGetCurrentIrql() )
              {
                WPP_IFR_SF_(Flink, 2u, 0xDu, 0x21u, WPP_FxPkgIo_cpp_Traceguids);
                FxVerifierDbgBreakPoint(Flink);
              }
              else
              {
                if ( SLOBYTE(Blink[1].Blink) < 0 && (v85 = (FxVerifierLock *)Blink[-3].Blink) != 0LL )
                {
                  FxVerifierLock::Lock(v85, &v119, v30);
                  v36 = v119;
                }
                else
                {
                  v36 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&Blink[7]);
                  v119 = v36;
                }
                v37 = Blink + 8;
                v38 = Blink[8].Flink;
                if ( v38->Blink != &Blink[8] )
                  __fastfail(3u);
                v108 = Blink[8].Flink;
                v109 = Blink + 8;
                p_Blink = 0LL;
                v38->Blink = (_LIST_ENTRY *)&v108;
                v40 = v108;
                v37->Flink = (_LIST_ENTRY *)&v108;
                v41 = v109;
                if ( (_LIST_ENTRY **)v40->Blink != &v108 || (_LIST_ENTRY **)v109->Flink != &v108 )
                  __fastfail(3u);
                v109->Flink = v40;
                v40->Blink = v41;
                v109 = (_LIST_ENTRY *)&v108;
                v108 = (_LIST_ENTRY *)&v108;
                if ( v40 != v37 )
                {
                  while ( LODWORD(v40[1].Flink) != 1 )
                  {
                    v40 = v40->Flink;
                    if ( v40 == v37 )
                      goto LABEL_56;
                  }
                  p_Blink = (FxIoQueue *)&v40[-57].Blink;
                  v42 = _InterlockedIncrement((volatile signed __int32 *)&v40[-56].Flink + 1);
                  if ( SLOBYTE(v40[-55].Flink) < 0 )
                  {
                    v86 = (FxTagTracker *)v40[-60].Blink;
                    if ( v86 )
                      FxTagTracker::UpdateTagHistory(
                        v86,
                        (void *)0x73756C66,
                        1686,
                        "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxpkgio.cpp",
                        TagAddRef,
                        v42);
                  }
                  v43 = v40->Flink;
                  if ( v40->Flink->Blink != v40 )
                    __fastfail(3u);
                  v36 = v119;
                  v108 = v40->Flink;
                  v109 = v40;
                  v43->Blink = (_LIST_ENTRY *)&v108;
                  v40->Flink = (_LIST_ENTRY *)&v108;
                }
LABEL_56:
                if ( SLOBYTE(Blink[1].Blink) < 0 && (v87 = (FxVerifierLock *)Blink[-3].Blink) != 0LL )
                  FxVerifierLock::Unlock(v87, v36, v36);
                else
                  KeReleaseSpinLock((PKSPIN_LOCK)&Blink[7], v36);
                while ( p_Blink )
                {
                  if ( p_Blink->m_SupportForwardProgress )
                    FxIoQueue::PurgeForwardProgressIrps(p_Blink, FileObject);
                  if ( SLOBYTE(p_Blink->m_ObjectFlags) < 0
                    && (v88 = *(FxVerifierLock **)&p_Blink[-1].m_PowerIdle.m_DbgFlagIsInitialized) != 0LL )
                  {
                    FxVerifierLock::Lock(v88, &v120, v44);
                  }
                  else
                  {
                    v120 = KeAcquireSpinLockRaiseToDpc(&p_Blink->m_NPLock.m_Lock);
                  }
                  while ( 1 )
                  {
                    p_m_Queue = &p_Blink->m_Queue;
                    p_m_RequestCount = 0LL;
                    v47 = (FxIrpQueue *)p_Blink->m_Queue.m_Queue.Flink;
                    if ( v47 != &p_Blink->m_Queue )
                    {
                      do
                      {
                        p_m_RequestCount = (_IRP *)&v47[-5].m_RequestCount;
                        if ( !FileObject )
                          break;
                        if ( p_m_RequestCount->Tail.Overlay.CurrentStackLocation->FileObject == FileObject )
                          break;
                        v47 = (FxIrpQueue *)v47->m_Queue.Flink;
                        p_m_RequestCount = 0LL;
                      }
                      while ( v47 != p_m_Queue );
                    }
                    v112.m_Irp = p_m_RequestCount;
                    if ( !p_m_RequestCount )
                      break;
                    while ( !_InterlockedExchange64((volatile __int64 *)&p_m_RequestCount->CancelRoutine, 0LL) )
                    {
                      p_m_RequestCount = FxIrpQueue::PeekNextIrpFromQueue(p_m_Queue, v112.m_Irp, FileObject);
                      v112.m_Irp = p_m_RequestCount;
                      if ( !p_m_RequestCount )
                        goto LABEL_65;
                      p_m_Queue = &p_Blink->m_Queue;
                    }
                    FxIrpQueue::RemoveIrpFromListEntry(p_m_Queue, &v112);
                    m_Irp = v112.m_Irp;
                    v90 = v112.m_Irp->Tail.Overlay.DriverContext[3];
                    if ( *(_DWORD *)v90 == 1 )
                      v90[1] = 0LL;
                    m_Irp->Tail.Overlay.DriverContext[3] = 0LL;
                    v91 = (FxRequest *)(v90 - 15);
                    v92 = v91->__vftable;
                    v91->m_IrpQueue = 0LL;
                    v92->Release(
                      v91,
                      (void *)1969583441,
                      2102,
                      "minkernel\\wdf\\framework\\shared\\core\\fxrequest.cpp");
                    FxObject::AddRef(
                      v91,
                      (void *)0x75657551,
                      4331,
                      "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp");
                    FxIoQueue::CancelForQueue(p_Blink, v91, v120);
                    FxNonPagedObject::Lock(p_Blink, &v120, v93);
                  }
LABEL_65:
                  FxIoQueue::DispatchEvents(p_Blink, v120, 0LL);
                  Release = p_Blink->Release;
                  if ( Release == FxObject::Release )
                  {
                    if ( SLOBYTE(p_Blink->m_ObjectFlags) < 0 )
                    {
                      v94 = (FxTagTracker *)p_Blink[-1].m_PowerIdle.m_Event.Header.WaitListHead.Blink;
                      if ( v94 )
                        FxTagTracker::UpdateTagHistory(
                          v94,
                          (void *)0x73756C66,
                          1441,
                          "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxpkgio.cpp",
                          TagRelease,
                          p_Blink->m_Refcnt - 1);
                    }
                    if ( _InterlockedExchangeAdd(&p_Blink->m_Refcnt, 0xFFFFFFFF) != 1 )
                      goto LABEL_68;
                    m_ObjectFlags = p_Blink->m_ObjectFlags;
                    if ( (m_ObjectFlags & 0x20) != 0 || (m_ObjectFlags & 0x10) != 0 && KeGetCurrentIrql() )
                    {
                      FxObject::SetObjectStateLocked(p_Blink, FxObjectStateDeferedDestroy);
                      FxDisposeList::Add(p_Blink->m_Globals->Driver->m_DisposeList, p_Blink);
                    }
                    else
                    {
                      if ( (m_ObjectFlags & 0x80u) != 0 )
                      {
                        v62 = (FxTagTracker *)p_Blink[-1].m_PowerIdle.m_Event.Header.WaitListHead.Blink;
                        v111 = v62;
                        if ( v62 )
                        {
                          FxTagTracker::CheckForAbandondedTags(v62);
                          v62 = v111;
                        }
                      }
                      else
                      {
                        v62 = 0LL;
                        v111 = 0LL;
                      }
                      v63 = p_Blink->m_ObjectSize;
                      if ( v63 && (p_Blink->m_ObjectFlags & 8) != 0 )
                      {
                        v64 = (FxIoQueue_vtbl **)((char *)&p_Blink->FxNonPagedObject::FxObject::__vftable + v63);
                        if ( v64 )
                        {
                          do
                          {
                            v65 = (void (__fastcall *)(unsigned __int64, void (__fastcall *)(FxObject *), FxTagTracker *))v64[2];
                            if ( v65 )
                            {
                              v65((unsigned __int64)p_Blink ^ 0xFFFFFFFFFFFFFFF8uLL, FxVerifyLeakDetection, v62);
                              v64[2] = 0LL;
                            }
                            v66 = (void (__fastcall *)(unsigned __int64, void (__fastcall *)(FxObject *), FxTagTracker *))v64[3];
                            if ( v66 )
                            {
                              v66((unsigned __int64)p_Blink ^ 0xFFFFFFFFFFFFFFF8uLL, FxVerifyLeakDetection, v62);
                              v64[3] = 0LL;
                            }
                            v64 = (_QWORD *)v64[1];
                          }
                          while ( v64 );
                          FileObjectFromWdm = v113;
                          v62 = v111;
                        }
                        v67 = p_Blink->m_ObjectSize;
                        LOBYTE(FxVerifyLeakDetection) = 1;
                        if ( v67 )
                        {
                          v68 = (FxIoQueue_vtbl **)((char *)&p_Blink->FxNonPagedObject::FxObject::__vftable + v67);
                          if ( v68 )
                          {
                            do
                            {
                              v69 = (_QWORD *)v68[1];
                              if ( !(_BYTE)FxVerifyLeakDetection )
                                FxPoolFree(v68);
                              LOBYTE(FxVerifyLeakDetection) = 0;
                              v68 = v69;
                            }
                            while ( v69 );
                            v62 = v111;
                          }
                        }
                      }
                      if ( SLOBYTE(p_Blink->m_ObjectFlags) < 0 )
                      {
                        if ( BYTE4(p_Blink[-1].m_IoPkgListNode.m_ListEntry.Blink) )
                        {
                          _InterlockedDecrement(&p_Blink->m_Globals->FxVerifyLeakDetection->ObjectCnt);
                          if ( p_Blink->FxNonPagedObject::FxObject::m_Type == 4098
                            && _InterlockedExchangeAdd(
                                 &p_Blink->m_Globals->FxVerifyLeakDetection->DeviceCnt,
                                 0xFFFFFFFF) != 1 )
                          {
                            FxVerifyLeakDetection = (void (__fastcall *)(FxObject *))p_Blink->m_Globals->FxVerifyLeakDetection;
                            _InterlockedExchangeAdd(
                              (volatile signed __int32 *)FxVerifyLeakDetection + 2,
                              -*((_DWORD *)FxVerifyLeakDetection + 1));
                          }
                        }
                      }
                      if ( v62 )
                      {
                        p_Blink[-1].m_PowerIdle.m_Event.Header.WaitListHead.Blink = 0LL;
                        FxTagTracker::`scalar deleting destructor'(v62, (unsigned int)FxVerifyLeakDetection);
                      }
                      SelfDestruct = p_Blink->SelfDestruct;
                      if ( SelfDestruct == FxObject::SelfDestruct )
                      {
                        v71 = (void *(__fastcall *)(FxRegKey *, unsigned int))p_Blink->~FxObject;
                        if ( v71 == FxRegKey::`scalar deleting destructor' )
                        {
                          p_Blink->FxNonPagedObject::FxObject::__vftable = (FxIoQueue_vtbl *)FxRegKey::`vftable';
                          m_Lock = (void (__fastcall **)(FxObject *))p_Blink->m_NPLock.m_Lock;
                          if ( m_Lock )
                          {
                            ZwClose(m_Lock);
                            p_Blink->m_NPLock.m_Lock = 0LL;
                          }
                          v73 = *(void (__fastcall ***)(FxObject *))&p_Blink->m_NPLock.m_DbgFlagIsInitialized;
                          p_Blink->FxNonPagedObject::FxObject::__vftable = (FxIoQueue_vtbl *)FxPagedObject::`vftable';
                          if ( v73 )
                          {
                            FxPoolFree(v73);
                            *(_QWORD *)&p_Blink->m_NPLock.m_DbgFlagIsInitialized = 0LL;
                          }
                          FxObject::~FxObject(p_Blink);
                          if ( SLOBYTE(p_Blink->m_ObjectFlags) < 0 )
                            p_Blink = (FxIoQueue *)((char *)p_Blink - 48);
                          if ( !p_Blink )
                            KeBugCheckEx(0x10Du, 4uLL, 0LL, retaddr, 0LL);
LABEL_135:
                          if ( ((unsigned __int16)p_Blink & 0xFFF) != 0 )
                          {
                            v74 = *(FX_POOL_TRACKER **)&p_Blink[-1].m_IoPkgListNode.m_Type;
                            if ( LOBYTE(p_Blink[-1].m_PowerSListEntry.Next[33].Next) )
                            {
                              if ( FxIsPagedPoolType(v74->PoolType) )
                                FxPoolRemovePagedAllocateTracker(v74);
                              else
                                FxPoolRemoveNonPagedAllocateTracker(v74);
                              memset(v74, 0, v74->Size + 64);
                            }
                            ExFreePoolWithTag(v74, 0);
                          }
                          else
                          {
                            ExFreePoolWithTag(p_Blink, 0);
                          }
                          goto LABEL_68;
                        }
                        if ( (char *)v71 == (char *)FxRequest::`scalar deleting destructor' )
                        {
                          p_Blink->FxNonPagedObject::FxObject::__vftable = (FxIoQueue_vtbl *)FxRequestBase::`vftable';
                          v75 = (_MDL *)p_Blink->m_DriverCancelable.m_Queue.Blink;
                          if ( v75 )
                          {
                            if ( p_Blink->m_Globals->FxVerifierOn )
                              FxMdlFreeDebug(p_Blink->m_Globals, (_MDL *)p_Blink->m_DriverCancelable.m_Queue.Blink);
                            else
                              IoFreeMdl(v75);
                          }
                          v76 = *(void (__fastcall ***)(FxObject *))&p_Blink->m_FinishDisposing.m_DbgFlagIsInitialized;
                          v77 = (void (__fastcall **)(FxObject *))p_Blink->m_FinishDisposing.m_Event.Header.WaitListHead.Flink;
                          if ( v76 )
                          {
                            if ( v77 )
                              (*((void (__fastcall **)(void (__fastcall **)(FxObject *), FxIoQueue *))*v76 + 3))(
                                v76,
                                p_Blink);
                            v95 = *(void (__fastcall ***)(FxObject *))&p_Blink->m_FinishDisposing.m_DbgFlagIsInitialized;
                            if ( v95 )
                              (*(void (__fastcall **)(void (__fastcall **)(FxObject *), __int64))*v95)(v95, 1LL);
                          }
                          if ( v77 && BYTE5(p_Blink->m_Queue.m_LockObject) == 1 )
                            IoFreeIrp((PIRP)p_Blink->m_FinishDisposing.m_Event.Header.WaitListHead.Flink);
                          v78 = *(FxRequestTimer **)&p_Blink->m_PowerState;
                          if ( v78 )
                            FxRequestTimer::`scalar deleting destructor'(v78, (unsigned int)SelfDestruct);
                          p_Blink->FxNonPagedObject::FxObject::__vftable = (FxIoQueue_vtbl *)FxNonPagedObject::`vftable';
                          if ( SLOBYTE(p_Blink->m_ObjectFlags) < 0 )
                          {
                            v96 = *(FxVerifierLock **)&p_Blink[-1].m_PowerIdle.m_DbgFlagIsInitialized;
                            if ( v96 )
                            {
                              FxVerifierLock::`scalar deleting destructor'(v96, (unsigned int)SelfDestruct);
                              *(_QWORD *)&p_Blink[-1].m_PowerIdle.m_DbgFlagIsInitialized = 0LL;
                            }
                          }
                          p_Blink->m_NPLock.m_DbgFlagIsInitialized = 0;
                          FxObject::~FxObject(p_Blink);
                          if ( SLOBYTE(p_Blink->m_ObjectFlags) < 0 )
                            p_Blink = (FxIoQueue *)((char *)p_Blink - 48);
                          FxPoolFree(p_Blink);
                          goto LABEL_68;
                        }
                        if ( (char *)v71 == (char *)FxMemoryBuffer::`scalar deleting destructor' )
                        {
                          p_Blink->FxNonPagedObject::FxObject::__vftable = (FxIoQueue_vtbl *)FxMemoryBuffer::`vftable'{for `FxObject'};
                          *(_QWORD *)&p_Blink->m_NPLock.m_DbgFlagIsInitialized = FxMemoryBufferFromLookaside::`vftable'{for `IFxMemory'};
                          FxObject::~FxObject(p_Blink);
                          if ( SLOBYTE(p_Blink->m_ObjectFlags) < 0 )
                            p_Blink = (FxIoQueue *)((char *)p_Blink - 48);
                          if ( !p_Blink )
                            KeBugCheckEx(0x10Du, 4uLL, 0LL, retaddr, 0LL);
                          goto LABEL_135;
                        }
                        v71((FxRegKey *)p_Blink, 1u);
                      }
                      else
                      {
                        p_Blink->SelfDestruct(p_Blink);
                      }
                    }
                  }
                  else
                  {
                    Release(
                      p_Blink,
                      (void *)1937075302,
                      1441,
                      "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxpkgio.cpp");
                  }
LABEL_68:
                  if ( SLOBYTE(Blink[1].Blink) < 0 && (v97 = (FxVerifierLock *)Blink[-3].Blink) != 0LL )
                  {
                    FxVerifierLock::Lock(v97, &v119, v49);
                    v51 = v119;
                  }
                  else
                  {
                    v51 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&Blink[7]);
                    v119 = v51;
                  }
                  v53 = v108;
                  v54 = v109;
                  p_Blink = 0LL;
                  if ( (_LIST_ENTRY **)v108->Blink != &v108 || (_LIST_ENTRY **)v109->Flink != &v108 )
                    __fastfail(3u);
                  v109->Flink = v108;
                  v53->Blink = v54;
                  v109 = (_LIST_ENTRY *)&v108;
                  v108 = (_LIST_ENTRY *)&v108;
                  if ( v53 != &Blink[8] )
                  {
                    while ( LODWORD(v53[1].Flink) != 1 )
                    {
                      v53 = v53->Flink;
                      if ( v53 == &Blink[8] )
                        goto LABEL_73;
                    }
                    p_Blink = (FxIoQueue *)&v53[-57].Blink;
                    v59 = _InterlockedIncrement((volatile signed __int32 *)&v53[-56].Flink + 1);
                    if ( SLOBYTE(v53[-55].Flink) < 0 )
                    {
                      v98 = (FxTagTracker *)v53[-60].Blink;
                      if ( v98 )
                        FxTagTracker::UpdateTagHistory(
                          v98,
                          (void *)0x73756C66,
                          1686,
                          "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxpkgio.cpp",
                          TagAddRef,
                          v59);
                    }
                    v60 = v53->Flink;
                    if ( v53->Flink->Blink != v53 )
                      __fastfail(3u);
                    v51 = v119;
                    v108 = v53->Flink;
                    v109 = v53;
                    v60->Blink = (_LIST_ENTRY *)&v108;
                    v53->Flink = (_LIST_ENTRY *)&v108;
                  }
LABEL_73:
                  if ( SLOBYTE(Blink[1].Blink) < 0 && (v99 = (FxVerifierLock *)Blink[-3].Blink) != 0LL )
                    FxVerifierLock::Unlock(v99, v51, v52);
                  else
                    KeReleaseSpinLock((PKSPIN_LOCK)&Blink[7], v51);
                }
              }
            }
          }
          if ( !BYTE1(v19->m_DeviceBase[1].m_ChildEntry.Blink) )
          {
            Irp->IoStatus.Status = FileObjectFromWdm;
            Irp->IoStatus.Information = 0LL;
            IofCompleteRequest(Irp, 0);
            return FileObjectFromWdm;
          }
          ++Irp->CurrentLocation;
          ++Irp->Tail.Overlay.CurrentStackLocation;
          return (unsigned int)IofCallDriver(v19->m_DeviceBase->m_AttachedDevice.m_DeviceObject, Irp);
        }
        else
        {
          return (unsigned int)FxPkgGeneral::OnCreate((FxPkgGeneral *)v19, &FxIrp);
        }
      }
      v24 = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)&DeviceObject[1], Irp, a5, 1u, 0x20u);
      if ( v24 >= 0 )
      {
        v79 = Irp->Tail.Overlay.CurrentStackLocation;
        *(_OWORD *)&v79[-1].MajorFunction = *(_OWORD *)&v79->MajorFunction;
        *(_OWORD *)&v79[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&v79->Parameters.NotifyDirectoryEx.CompletionFilter;
        *(_OWORD *)(&v79[-1].Parameters.SetQuota + 6) = *(_OWORD *)(&v79->Parameters.SetQuota + 6);
        v79[-1].FileObject = v79->FileObject;
        v79[-1].Control = 0;
        FxIrp::SetCompletionRoutineEx(
          &v117,
          DeviceObject,
          FxDevice::_CompletionRoutineForRemlockMaintenance,
          DeviceObject,
          RemlockSize[0],
          (unsigned __int8)_a1,
          (unsigned __int8)_a2);
        --Irp->CurrentLocation;
        --Irp->Tail.Overlay.CurrentStackLocation;
        goto LABEL_7;
      }
    }
    else
    {
      v24 = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)&DeviceObject[1], Irp, a5, 1u, 0x20u);
      if ( v24 >= 0 )
      {
        IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)&DeviceObject[1], Irp, 0x20u);
        goto LABEL_7;
      }
    }
  }
  else
  {
    v24 = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)&DeviceObject[1], Irp, a5, 1u, 0x20u);
    if ( v24 >= 0 )
      goto LABEL_7;
  }
  Irp->IoStatus.Status = v24;
  IofCompleteRequest(Irp, 0);
  return (unsigned int)v24;
}
