/*
 * XREFs of DpiFdoHandleDisplayDetectControl @ 0x1C0012498
 * Callers:
 *     DpiDxgkDdiDisplayDetectControl @ 0x1C011917C (DpiDxgkDdiDisplayDetectControl.c)
 * Callees:
 *     DpIndicateConnectorChange @ 0x1C0011410 (DpIndicateConnectorChange.c)
 *     DxgkQueryConnectionChanges @ 0x1C0011A64 (DxgkQueryConnectionChanges.c)
 *     DpiFdoQueueConnectionChangePackage @ 0x1C00138A0 (DpiFdoQueueConnectionChangePackage.c)
 *     DpiReleaseCoreSyncAccessSafe @ 0x1C00B8774 (DpiReleaseCoreSyncAccessSafe.c)
 *     DpiAcquireCoreSyncAccessSafe @ 0x1C00B87F0 (DpiAcquireCoreSyncAccessSafe.c)
 *     DpiPdoIsChildConnected @ 0x1C01191D4 (DpiPdoIsChildConnected.c)
 *     ?DmmSetTargetForcableState@@YAJQEAXIE@Z @ 0x1C01223CC (-DmmSetTargetForcableState@@YAJQEAXIE@Z.c)
 */

__int64 __fastcall DpiFdoHandleDisplayDetectControl(__int64 a1, __int64 a2)
{
  int v2; // r14d
  __int64 v3; // rbx
  char v6; // r14
  int v7; // r8d
  _QWORD *v8; // r13
  _QWORD *v9; // rcx
  int v10; // eax
  __int64 v11; // rcx
  int v12; // r9d
  int v14; // ecx
  __int64 v15; // r8
  int v16; // eax
  int v17; // eax
  int ConnectionChanges; // eax
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // rax
  _QWORD *v22; // rax
  int IsChildConnected; // eax
  __int64 v24; // rcx
  int v25; // r9d
  __int64 v26; // rax
  int v27; // eax
  __int64 v28; // rcx
  __int64 v29; // r12
  _QWORD *v30; // rax
  int v31; // eax
  __int64 v32; // r8
  int v33; // eax
  __int64 v34; // rax
  __int64 v35; // rax
  int v36; // [rsp+44h] [rbp-3Ch]
  _QWORD *v37; // [rsp+48h] [rbp-38h]
  __int64 v38; // [rsp+50h] [rbp-30h] BYREF
  __int64 v39; // [rsp+58h] [rbp-28h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+60h] [rbp-20h] BYREF
  char v41; // [rsp+C8h] [rbp+48h]
  char v42; // [rsp+D0h] [rbp+50h] BYREF
  char v43; // [rsp+D8h] [rbp+58h] BYREF

  v2 = *(_BYTE *)(a2 + 3) & 0xF;
  v38 = 0LL;
  v39 = 0LL;
  LODWORD(v3) = 0;
  if ( (unsigned int)(v2 - 3) <= 1 )
  {
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 3352), &LockHandle);
    if ( v2 == 3 && *(_QWORD *)(a1 + 3360) != a1 + 3360 )
      LODWORD(v3) = DpIndicateConnectorChange(*(PDEVICE_OBJECT *)(a1 + 24));
    *(_BYTE *)(a1 + 3376) = v2 == 3;
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    return (unsigned int)v3;
  }
  if ( (unsigned int)(v2 - 1) > 1 )
  {
    LODWORD(v3) = -1073741811;
    v21 = WdLogNewEntry5_WdError(a1);
    *(_QWORD *)(v21 + 24) = HIBYTE(*(_DWORD *)a2) & 0xF;
    *(_QWORD *)(v21 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v21);
    return (unsigned int)v3;
  }
  v6 = 0;
  v41 = 0;
  KeEnterCriticalRegion();
  ExAcquireResourceSharedLite((PERESOURCE)(a1 + 3168), 1u);
  if ( (*(_DWORD *)a2 & 0xF000000) != 0x2000000 )
  {
    LOBYTE(v7) = *(_BYTE *)(a2 + 17);
    IsChildConnected = DpiPdoIsChildConnected(
                         *(_QWORD *)(a1 + 24),
                         *(_DWORD *)a2 & 0xFFFFFF,
                         v7,
                         (*(_DWORD *)a2 & 0x10000000) != 0,
                         (__int64)&v42,
                         (__int64)&v43);
    v3 = IsChildConnected;
    if ( IsChildConnected < 0 )
    {
      v26 = WdLogNewEntry5_WdError(v24);
      *(_QWORD *)(v26 + 24) = v3;
      WdLogEvent5_WdError(v26);
      goto LABEL_13;
    }
    if ( (IsChildConnected == 1075708975 || IsChildConnected == 1075708988)
      && (int)DpiAcquireCoreSyncAccessSafe(*(_QWORD *)(a1 + 24), 0LL) >= 0 )
    {
      v27 = DmmSetTargetForcableState(*(void *const *)(a1 + 3728), *(_DWORD *)a2 & 0xFFFFFF, (_DWORD)v3 == 1075708975);
      v29 = v27;
      if ( v27 < 0 )
      {
        v30 = (_QWORD *)WdLogNewEntry5_WdError(v28);
        v30[5] = 0LL;
        v30[4] = (_DWORD)v3 == 1075708975;
        v30[3] = v29;
        WdLogEvent5_WdError(v30);
      }
      DpiReleaseCoreSyncAccessSafe(*(_QWORD *)(a1 + 24), 0LL);
    }
    if ( !v43 && (!v42 || !*(_BYTE *)(a2 + 16)) || (_DWORD)v3 == 1075708975 )
      goto LABEL_12;
    v31 = 1;
    LOBYTE(v25) = *(_BYTE *)(a2 + 16);
    v32 = *(_QWORD *)(a2 + 8);
    if ( *(_DWORD *)(a1 + 3088) == (*(_DWORD *)a2 & 0xFFFFFF) )
      v31 = 3;
    HIDWORD(v38) = *(_DWORD *)a2 & 0xFFFFFF;
    LOBYTE(v39) = v42;
    LODWORD(v38) = v31;
    HIDWORD(v39) = -2;
    v33 = DpiFdoQueueConnectionChangePackage(a1, (unsigned int)&v38, v32, v25, 0, 0, 0, 1);
    v3 = v33;
    if ( v33 >= 0 )
    {
      v6 = 1;
      goto LABEL_13;
    }
LABEL_50:
    v34 = WdLogNewEntry5_WdError(v11);
    *(_QWORD *)(v34 + 24) = v3;
    WdLogEvent5_WdError(v34);
LABEL_12:
    v6 = v41;
    goto LABEL_13;
  }
  v8 = *(_QWORD **)(a1 + 3328);
  if ( v8 != (_QWORD *)(a1 + 3328) )
  {
    while ( 1 )
    {
      LOBYTE(v7) = *(_BYTE *)(a2 + 17);
      v9 = v8;
      v8 = (_QWORD *)*v8;
      v37 = v9;
      v10 = DpiPdoIsChildConnected(
              *(_QWORD *)(a1 + 24),
              *((_DWORD *)v9 - 2),
              v7,
              (*(_DWORD *)a2 & 0x10000000) != 0,
              (__int64)&v42,
              (__int64)&v43);
      v3 = v10;
      if ( v10 < 0 )
        goto LABEL_50;
      if ( (v10 == 1075708988 || v10 == 1075708975) && (int)DpiAcquireCoreSyncAccessSafe(*(_QWORD *)(a1 + 24), 0LL) >= 0 )
      {
        v36 = DmmSetTargetForcableState(*(void *const *)(a1 + 3728), *((_DWORD *)v37 - 2), (_DWORD)v3 == 1075708975);
        if ( v36 < 0 )
        {
          v22 = (_QWORD *)WdLogNewEntry5_WdError(v20);
          v22[5] = 0LL;
          v22[3] = v36;
          v22[4] = (_DWORD)v3 == 1075708975;
          WdLogEvent5_WdError(v22);
        }
        DpiReleaseCoreSyncAccessSafe(*(_QWORD *)(a1 + 24), 0LL);
      }
      if ( (_DWORD)v3 != 1075708975 && (v43 || v42 && *(_BYTE *)(a2 + 16)) )
      {
        v14 = 1;
        LOBYTE(v12) = *(_BYTE *)(a2 + 16);
        v15 = *(_QWORD *)(a2 + 8);
        if ( *(_DWORD *)(a1 + 3088) == (*(_DWORD *)a2 & 0xFFFFFF) )
          v14 = 3;
        LODWORD(v38) = v14;
        v16 = *((_DWORD *)v37 - 2);
        LOBYTE(v39) = v42;
        HIDWORD(v38) = v16;
        HIDWORD(v39) = -2;
        v17 = DpiFdoQueueConnectionChangePackage(a1, (unsigned int)&v38, v15, v12, 0, 0, 0, 1);
        v3 = v17;
        if ( v17 < 0 )
          goto LABEL_50;
        v41 = 1;
      }
      if ( v8 == (_QWORD *)(a1 + 3328) )
        goto LABEL_12;
    }
  }
LABEL_13:
  ExReleaseResourceLite((PERESOURCE)(a1 + 3168));
  KeLeaveCriticalRegion();
  if ( (int)v3 < 0 )
    goto LABEL_52;
  if ( v6 )
  {
    if ( *(_BYTE *)(a2 + 18) )
    {
      ConnectionChanges = DxgkQueryConnectionChanges(
                            *(_QWORD *)(a1 + 24),
                            0,
                            *(_BYTE *)(a2 + 16),
                            *(_BYTE *)(a2 + 17),
                            0);
      v3 = ConnectionChanges;
      if ( ConnectionChanges >= 0 )
        return (unsigned int)v3;
      v35 = WdLogNewEntry5_WdError(v19);
      *(_QWORD *)(v35 + 24) = v3;
      WdLogEvent5_WdError(v35);
    }
    else
    {
      LODWORD(v3) = DpiFdoQueueConnectionChangePackage(a1, 0, 0, 0, 0, 0, 1, 1);
    }
  }
  if ( (int)v3 < 0 )
  {
LABEL_52:
    _InterlockedAnd((volatile signed __int32 *)(a1 + 3476), 0xFFFFFFFE);
    IoInvalidateDeviceRelations(*(PDEVICE_OBJECT *)(a1 + 152), BusRelations);
  }
  return (unsigned int)v3;
}
