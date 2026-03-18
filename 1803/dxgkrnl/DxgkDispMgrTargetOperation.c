/*
 * XREFs of DxgkDispMgrTargetOperation @ 0x1C01E4420
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1C001C940 (memset.c)
 *     ??1?$NT_OBJECT_REFERENCE@PEAUDXGDISPLAYMANAGEROBJECT_CONTAINER@@@@QEAA@XZ @ 0x1C01091E8 (--1-$NT_OBJECT_REFERENCE@PEAUDXGDISPLAYMANAGEROBJECT_CONTAINER@@@@QEAA@XZ.c)
 *     ?AcquireTargetOwnership@DXGDISPLAYMANAGEROBJECT@@QEAAJU_LUID@@I_N@Z @ 0x1C01E38C4 (-AcquireTargetOwnership@DXGDISPLAYMANAGEROBJECT@@QEAAJU_LUID@@I_N@Z.c)
 *     ?CreateSourceObject@DXGDISPLAYMANAGEROBJECT@@QEAAJU_LUID@@IPEAU_OBJECT_ATTRIBUTES@@KPEAPEAX@Z @ 0x1C01E3ABC (-CreateSourceObject@DXGDISPLAYMANAGEROBJECT@@QEAAJU_LUID@@IPEAU_OBJECT_ATTRIBUTES@@KPEAPEAX@Z.c)
 *     ?GetOwnedSourceFromTarget@DXGDISPLAYMANAGEROBJECT@@QEAAJU_LUID@@IPEAI@Z @ 0x1C01E3CB4 (-GetOwnedSourceFromTarget@DXGDISPLAYMANAGEROBJECT@@QEAAJU_LUID@@IPEAI@Z.c)
 *     ?ReleaseTargetOwnership@DXGDISPLAYMANAGEROBJECT@@QEAAJU_LUID@@I@Z @ 0x1C01E3EA8 (-ReleaseTargetOwnership@DXGDISPLAYMANAGEROBJECT@@QEAAJU_LUID@@I@Z.c)
 *     ?TransferTargetOwnership@DXGDISPLAYMANAGEROBJECT@@QEAAJU_LUID@@IPEAV1@@Z @ 0x1C01E3FFC (-TransferTargetOwnership@DXGDISPLAYMANAGEROBJECT@@QEAAJU_LUID@@IPEAV1@@Z.c)
 */

__int64 __fastcall DxgkDispMgrTargetOperation(unsigned __int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  int OwnedSourceFromTarget; // ebx
  __int64 v5; // r8
  __int64 v6; // rax
  struct DXGFASTMUTEX **v7; // r10
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  HANDLE *v12; // r8
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rax
  __int64 v17; // rax
  int v19; // eax
  HANDLE Handle[9]; // [rsp+40h] [rbp-48h] BYREF
  unsigned int v21; // [rsp+98h] [rbp+10h] BYREF
  PVOID Object; // [rsp+A0h] [rbp+18h] BYREF
  PVOID v23; // [rsp+A8h] [rbp+20h] BYREF

  memset(Handle, 0, 0x38uLL);
  if ( a1 + 56 < a1 || a1 + 56 > MmUserProbeAddress )
    *(_BYTE *)MmUserProbeAddress = 0;
  *(_OWORD *)Handle = *(_OWORD *)a1;
  *(_OWORD *)&Handle[2] = *(_OWORD *)(a1 + 16);
  *(_OWORD *)&Handle[4] = *(_OWORD *)(a1 + 32);
  Handle[6] = *(HANDLE *)(a1 + 48);
  Object = 0LL;
  OwnedSourceFromTarget = ObReferenceObjectByHandleWithTag(
                            Handle[1],
                            0x20000u,
                            g_pDxgkDisplayManagerObjectType,
                            1,
                            0x4B677844u,
                            &Object,
                            0LL);
  if ( OwnedSourceFromTarget < 0 )
  {
    v6 = WdLogNewEntry5_WdWarning(v3, v2, v5);
    *(HANDLE *)(v6 + 24) = Handle[1];
LABEL_14:
    WdLogEvent5_WdWarning(v6);
    goto LABEL_25;
  }
  v7 = *(struct DXGFASTMUTEX ***)Object;
  if ( !*(_QWORD *)Object )
  {
    v8 = WdLogNewEntry5_WdWarning(v3, v2, v5);
    *(_QWORD *)(v8 + 24) = 751LL;
    WdLogEvent5_WdWarning(v8);
    goto LABEL_24;
  }
  switch ( LODWORD(Handle[0]) )
  {
    case 1:
      v19 = DXGDISPLAYMANAGEROBJECT::AcquireTargetOwnership(v7, (struct _LUID)Handle[2], (unsigned int)Handle[3]);
      goto LABEL_29;
    case 2:
      v19 = DXGDISPLAYMANAGEROBJECT::ReleaseTargetOwnership(
              *(struct DXGFASTMUTEX ***)Object,
              (struct _LUID)Handle[2],
              (unsigned int)Handle[3]);
LABEL_29:
      OwnedSourceFromTarget = v19;
      goto LABEL_25;
    case 3:
      v23 = 0LL;
      OwnedSourceFromTarget = ObReferenceObjectByHandleWithTag(
                                Handle[4],
                                0x20000u,
                                g_pDxgkDisplayManagerObjectType,
                                1,
                                0x4B677844u,
                                &v23,
                                0LL);
      if ( OwnedSourceFromTarget >= 0 )
      {
        if ( !*(_QWORD *)v23 )
        {
          v17 = WdLogNewEntry5_WdWarning(v14, v13, v15);
          *(_QWORD *)(v17 + 24) = 774LL;
          WdLogEvent5_WdWarning(v17);
          NT_OBJECT_REFERENCE<DXGDISPLAYMANAGEROBJECT_CONTAINER *>::~NT_OBJECT_REFERENCE<DXGDISPLAYMANAGEROBJECT_CONTAINER *>(&v23);
          goto LABEL_24;
        }
        OwnedSourceFromTarget = DXGDISPLAYMANAGEROBJECT::TransferTargetOwnership(
                                  *(struct DXGFASTMUTEX ***)Object,
                                  (struct _LUID)Handle[2],
                                  (unsigned int)Handle[3],
                                  *(struct DXGFASTMUTEX ***)v23);
      }
      else
      {
        v16 = WdLogNewEntry5_WdWarning(v14, v13, v15);
        *(HANDLE *)(v16 + 24) = Handle[1];
        WdLogEvent5_WdWarning(v16);
      }
      NT_OBJECT_REFERENCE<DXGDISPLAYMANAGEROBJECT_CONTAINER *>::~NT_OBJECT_REFERENCE<DXGDISPLAYMANAGEROBJECT_CONTAINER *>(&v23);
      goto LABEL_25;
  }
  if ( LODWORD(Handle[0]) != 4 )
  {
LABEL_24:
    OwnedSourceFromTarget = -1073741811;
    goto LABEL_25;
  }
  v21 = -1;
  OwnedSourceFromTarget = DXGDISPLAYMANAGEROBJECT::GetOwnedSourceFromTarget(
                            v7,
                            (struct _LUID)Handle[2],
                            (unsigned int)Handle[3],
                            &v21);
  if ( OwnedSourceFromTarget < 0 )
  {
    v6 = WdLogNewEntry5_WdWarning(v10, v9, v11);
    *(_QWORD *)(v6 + 24) = 787LL;
    goto LABEL_14;
  }
  OwnedSourceFromTarget = DXGDISPLAYMANAGEROBJECT::CreateSourceObject(
                            *(DXGDISPLAYMANAGEROBJECT **)Object,
                            (struct _LUID)Handle[2],
                            v21,
                            (struct _OBJECT_ATTRIBUTES *)Handle[4],
                            (ACCESS_MASK)Handle[5],
                            &Handle[6]);
  if ( OwnedSourceFromTarget >= 0 )
  {
    v12 = (HANDLE *)(a1 + 48);
    if ( a1 + 48 >= MmUserProbeAddress )
      v12 = (HANDLE *)MmUserProbeAddress;
    *v12 = Handle[6];
  }
LABEL_25:
  NT_OBJECT_REFERENCE<DXGDISPLAYMANAGEROBJECT_CONTAINER *>::~NT_OBJECT_REFERENCE<DXGDISPLAYMANAGEROBJECT_CONTAINER *>(&Object);
  return (unsigned int)OwnedSourceFromTarget;
}
