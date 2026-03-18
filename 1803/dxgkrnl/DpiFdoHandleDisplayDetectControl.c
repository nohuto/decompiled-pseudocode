/*
 * XREFs of DpiFdoHandleDisplayDetectControl @ 0x1C003B0E8
 * Callers:
 *     DpiDxgkDdiDisplayDetectControl @ 0x1C020A0CC (DpiDxgkDdiDisplayDetectControl.c)
 * Callees:
 *     DpIndicateConnectorChange @ 0x1C0038CA0 (DpIndicateConnectorChange.c)
 *     DpiFdoQueueConnectionChangePackage @ 0x1C003B6D8 (DpiFdoQueueConnectionChangePackage.c)
 *     DxgkQueryConnectionChanges @ 0x1C003BA24 (DxgkQueryConnectionChanges.c)
 *     DpiAcquireCoreSyncAccessSafe @ 0x1C009F688 (DpiAcquireCoreSyncAccessSafe.c)
 *     DpiReleaseCoreSyncAccessSafe @ 0x1C009F7D8 (DpiReleaseCoreSyncAccessSafe.c)
 *     DpiPdoIsChildConnected @ 0x1C020D164 (DpiPdoIsChildConnected.c)
 *     ?DmmSetTargetForcableState@@YAJQEAXIE@Z @ 0x1C02152C4 (-DmmSetTargetForcableState@@YAJQEAXIE@Z.c)
 */

__int64 __fastcall DpiFdoHandleDisplayDetectControl(__int64 a1, unsigned int *a2)
{
  unsigned int v3; // edx
  __int64 v4; // rbx
  int v6; // esi
  __int64 v7; // rax
  char v8; // r13
  _QWORD *v9; // r12
  _QWORD *v10; // r13
  _QWORD *v11; // rcx
  int IsChildConnected; // eax
  __int64 v13; // rcx
  int v14; // r8d
  int v15; // r9d
  __int64 v16; // rcx
  _QWORD *v17; // rax
  int v18; // ecx
  __int64 v19; // r8
  int v20; // eax
  int v21; // eax
  __int64 v22; // rax
  int v23; // eax
  __int64 v24; // rcx
  int v25; // eax
  __int64 v26; // rcx
  __int64 v27; // r12
  _QWORD *v28; // rax
  int v29; // eax
  __int64 v30; // r8
  int v31; // eax
  __int64 v32; // rax
  int ConnectionChanges; // eax
  __int64 v34; // rcx
  __int64 v35; // rax
  int v37; // [rsp+44h] [rbp-3Ch]
  _QWORD *v38; // [rsp+48h] [rbp-38h]
  __int64 v39; // [rsp+50h] [rbp-30h] BYREF
  __int64 v40; // [rsp+58h] [rbp-28h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+60h] [rbp-20h] BYREF
  char v42; // [rsp+C8h] [rbp+48h]
  char v43; // [rsp+D0h] [rbp+50h] BYREF
  char v44; // [rsp+D8h] [rbp+58h] BYREF

  v3 = *a2;
  LODWORD(v4) = 0;
  v39 = 0LL;
  v6 = HIBYTE(v3) & 0xF;
  v40 = 0LL;
  if ( (unsigned int)(v6 - 3) > 1 )
  {
    if ( (unsigned int)(v6 - 1) > 1 )
    {
      LODWORD(v4) = -1073741811;
      v7 = WdLogNewEntry5_WdError(a1);
      *(_QWORD *)(v7 + 24) = HIBYTE(*a2) & 0xF;
      *(_QWORD *)(v7 + 32) = -1073741811LL;
      WdLogEvent5_WdError(v7);
      return (unsigned int)v4;
    }
    v8 = 0;
    v42 = 0;
    if ( v6 == 2 )
    {
      v9 = (_QWORD *)(a1 + 3328);
      v10 = *(_QWORD **)(a1 + 3328);
      if ( v10 == (_QWORD *)(a1 + 3328) )
        return (unsigned int)v4;
      while ( 1 )
      {
        v11 = v10;
        v10 = (_QWORD *)*v10;
        v38 = v11;
        IsChildConnected = DpiPdoIsChildConnected(
                             *(_QWORD *)(a1 + 24),
                             *((_DWORD *)v11 - 2),
                             *((_BYTE *)a2 + 17),
                             (*a2 & 0x10000000) != 0,
                             (__int64)&v43,
                             (__int64)&v44);
        v4 = IsChildConnected;
        if ( IsChildConnected < 0 )
          break;
        if ( (IsChildConnected == 1075708975 || IsChildConnected == 1075708988)
          && (int)DpiAcquireCoreSyncAccessSafe(*(_QWORD *)(a1 + 24), 0LL) >= 0 )
        {
          v37 = DmmSetTargetForcableState(*(void *const *)(a1 + 3728), *((_DWORD *)v38 - 2), (_DWORD)v4 == 1075708975);
          if ( v37 < 0 )
          {
            v17 = (_QWORD *)WdLogNewEntry5_WdError(v16);
            v17[5] = 0LL;
            v17[3] = v37;
            v17[4] = (_DWORD)v4 == 1075708975;
            WdLogEvent5_WdError(v17);
          }
          DpiReleaseCoreSyncAccessSafe(*(_QWORD *)(a1 + 24), 0LL);
        }
        if ( (_DWORD)v4 != 1075708975 && (v44 || v43 && *((_BYTE *)a2 + 16)) )
        {
          v18 = 1;
          LOBYTE(v15) = *((_BYTE *)a2 + 16);
          v19 = *((_QWORD *)a2 + 1);
          if ( *(_DWORD *)(a1 + 3088) == (*a2 & 0xFFFFFF) )
            v18 = 3;
          LODWORD(v39) = v18;
          v20 = *((_DWORD *)v38 - 2);
          LOBYTE(v40) = v43;
          HIDWORD(v39) = v20;
          HIDWORD(v40) = -2;
          v21 = DpiFdoQueueConnectionChangePackage(a1, (unsigned int)&v39, v19, v15, 0, 0, 0, 1);
          v4 = v21;
          if ( v21 < 0 )
            break;
          v42 = 1;
        }
        if ( v10 == v9 )
          goto LABEL_24;
      }
      v22 = WdLogNewEntry5_WdError(v13);
      *(_QWORD *)(v22 + 24) = v4;
      WdLogEvent5_WdError(v22);
LABEL_24:
      v8 = v42;
LABEL_41:
      if ( (int)v4 >= 0 )
      {
        if ( v8 )
        {
          if ( *((_BYTE *)a2 + 18) )
          {
            LOBYTE(v15) = *((_BYTE *)a2 + 17);
            LOBYTE(v14) = *((_BYTE *)a2 + 16);
            ConnectionChanges = DxgkQueryConnectionChanges(*(_QWORD *)(a1 + 24), 0, v14, v15, 0);
            v4 = ConnectionChanges;
            if ( ConnectionChanges >= 0 )
              return (unsigned int)v4;
            v35 = WdLogNewEntry5_WdError(v34);
            *(_QWORD *)(v35 + 24) = v4;
            WdLogEvent5_WdError(v35);
          }
          else
          {
            LODWORD(v4) = DpiFdoQueueConnectionChangePackage(a1, 0, 0, 0, 0, 0, 1, 1);
          }
        }
        if ( (int)v4 >= 0 )
          return (unsigned int)v4;
      }
      _InterlockedAnd((volatile signed __int32 *)(a1 + 3476), 0xFFFFFFFE);
      IoInvalidateDeviceRelations(*(PDEVICE_OBJECT *)(a1 + 152), BusRelations);
      return (unsigned int)v4;
    }
    v23 = DpiPdoIsChildConnected(
            *(_QWORD *)(a1 + 24),
            v3 & 0xFFFFFF,
            *((_BYTE *)a2 + 17),
            (v3 & 0x10000000) != 0,
            (__int64)&v43,
            (__int64)&v44);
    v4 = v23;
    if ( v23 >= 0 )
    {
      if ( (v23 == 1075708975 || v23 == 1075708988) && (int)DpiAcquireCoreSyncAccessSafe(*(_QWORD *)(a1 + 24), 0LL) >= 0 )
      {
        v25 = DmmSetTargetForcableState(*(void *const *)(a1 + 3728), *a2 & 0xFFFFFF, (_DWORD)v4 == 1075708975);
        v27 = v25;
        if ( v25 < 0 )
        {
          v28 = (_QWORD *)WdLogNewEntry5_WdError(v26);
          v28[5] = 0LL;
          v28[4] = (_DWORD)v4 == 1075708975;
          v28[3] = v27;
          WdLogEvent5_WdError(v28);
        }
        DpiReleaseCoreSyncAccessSafe(*(_QWORD *)(a1 + 24), 0LL);
      }
      if ( !v44 && (!v43 || !*((_BYTE *)a2 + 16)) || (_DWORD)v4 == 1075708975 )
        goto LABEL_41;
      v29 = 1;
      LOBYTE(v15) = *((_BYTE *)a2 + 16);
      v30 = *((_QWORD *)a2 + 1);
      if ( *(_DWORD *)(a1 + 3088) == (*a2 & 0xFFFFFF) )
        v29 = 3;
      HIDWORD(v39) = *a2 & 0xFFFFFF;
      LOBYTE(v40) = v43;
      LODWORD(v39) = v29;
      HIDWORD(v40) = -2;
      v31 = DpiFdoQueueConnectionChangePackage(a1, (unsigned int)&v39, v30, v15, 0, 0, 0, 1);
      v4 = v31;
      if ( v31 >= 0 )
      {
        v8 = 1;
        goto LABEL_41;
      }
    }
    v32 = WdLogNewEntry5_WdError(v24);
    *(_QWORD *)(v32 + 24) = v4;
    WdLogEvent5_WdError(v32);
    goto LABEL_41;
  }
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 3352), &LockHandle);
  if ( v6 == 3 && *(_QWORD *)(a1 + 3360) != a1 + 3360 )
    LODWORD(v4) = DpIndicateConnectorChange(*(PDEVICE_OBJECT *)(a1 + 24));
  *(_BYTE *)(a1 + 3376) = v6 == 3;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  return (unsigned int)v4;
}
