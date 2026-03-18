/*
 * XREFs of DpiFdoHandleDisplayDetectControl @ 0x1C0010714
 * Callers:
 *     DpiDxgkDdiDisplayDetectControl @ 0x1C011233C (DpiDxgkDdiDisplayDetectControl.c)
 * Callees:
 *     DxgkQueryConnectionChanges @ 0x1C0011068 (DxgkQueryConnectionChanges.c)
 *     DpiFdoQueueConnectionChangePackage @ 0x1C0012744 (DpiFdoQueueConnectionChangePackage.c)
 *     DpIndicateConnectorChange @ 0x1C003CD30 (DpIndicateConnectorChange.c)
 *     DpiReleaseCoreSyncAccessSafe @ 0x1C00AA538 (DpiReleaseCoreSyncAccessSafe.c)
 *     DpiAcquireCoreSyncAccessSafe @ 0x1C00AA5B4 (DpiAcquireCoreSyncAccessSafe.c)
 *     DpiPdoIsChildConnected @ 0x1C01124D0 (DpiPdoIsChildConnected.c)
 *     DmmSetTargetForcableState @ 0x1C01D6ADC (DmmSetTargetForcableState.c)
 */

__int64 __fastcall DpiFdoHandleDisplayDetectControl(__int64 a1, unsigned int *a2)
{
  unsigned int v2; // r14d
  int v3; // r14d
  __int64 v5; // rbx
  __int64 v7; // rax
  char v8; // r13
  __int64 v9; // r8
  _QWORD *v10; // r12
  _QWORD *v11; // rcx
  int IsChildConnected; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  int v15; // r9d
  __int64 v16; // rdx
  __int64 v17; // rcx
  _QWORD *v18; // rax
  int v19; // ecx
  __int64 v20; // r8
  int v21; // eax
  int v22; // eax
  int v23; // r9d
  __int64 v24; // r8
  int v25; // eax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r12
  _QWORD *v29; // rax
  int v30; // eax
  bool v31; // zf
  __int64 v32; // r8
  int v33; // eax
  __int64 v34; // rax
  int v35; // r8d
  int v36; // r9d
  int ConnectionChanges; // eax
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // rax
  int v42; // [rsp+40h] [rbp-40h]
  _QWORD *v43; // [rsp+48h] [rbp-38h]
  __int64 v44; // [rsp+50h] [rbp-30h] BYREF
  __int64 v45; // [rsp+58h] [rbp-28h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+60h] [rbp-20h] BYREF
  char v47; // [rsp+C8h] [rbp+48h] BYREF
  char v48; // [rsp+D0h] [rbp+50h] BYREF
  char v49; // [rsp+D8h] [rbp+58h]

  v2 = *a2;
  v44 = 0LL;
  v3 = v2 & 0xF000000;
  v45 = 0LL;
  LODWORD(v5) = 0;
  if ( ((v3 - 50331648) & 0xFEFFFFFF) != 0 )
  {
    if ( ((v3 - 0x1000000) & 0xFEFFFFFF) != 0 )
    {
      LODWORD(v5) = -1073741811;
      v7 = WdLogNewEntry5_WdError(4278190079LL, a2);
      *(_QWORD *)(v7 + 24) = HIBYTE(*a2) & 0xF;
      *(_QWORD *)(v7 + 32) = -1073741811LL;
      WdLogEvent5_WdError(v7);
      return (unsigned int)v5;
    }
    v8 = 0;
    v49 = 0;
    KeEnterCriticalRegion();
    ExAcquireResourceSharedLite((PERESOURCE)(a1 + 3144), 1u);
    if ( (*a2 & 0xF000000) == 0x2000000 )
    {
      v10 = *(_QWORD **)(a1 + 3304);
      if ( v10 == (_QWORD *)(a1 + 3304) )
        goto LABEL_39;
      while ( 1 )
      {
        v11 = v10 - 4;
        LOBYTE(v9) = *((_BYTE *)a2 + 17);
        v10 = (_QWORD *)*v10;
        v43 = v11;
        IsChildConnected = DpiPdoIsChildConnected(
                             *(_QWORD *)(a1 + 24),
                             *((_DWORD *)v11 + 6),
                             v9,
                             (*a2 & 0x10000000) != 0,
                             (__int64)&v47,
                             (__int64)&v48);
        v5 = IsChildConnected;
        if ( IsChildConnected < 0 )
          break;
        if ( (IsChildConnected == 1075708975 || IsChildConnected == 1075708988)
          && (int)DpiAcquireCoreSyncAccessSafe(*(_QWORD *)(a1 + 24), 0LL) >= 0 )
        {
          LOBYTE(v9) = (_DWORD)v5 == 1075708975;
          v42 = DmmSetTargetForcableState(*(_QWORD *)(a1 + 3704), *((unsigned int *)v43 + 6), v9);
          if ( v42 < 0 )
          {
            v18 = (_QWORD *)WdLogNewEntry5_WdError(v17, v16);
            v18[5] = 0LL;
            v18[3] = v42;
            v18[4] = (_DWORD)v5 == 1075708975;
            WdLogEvent5_WdError(v18);
          }
          DpiReleaseCoreSyncAccessSafe(*(_QWORD *)(a1 + 24), 0LL);
          v8 = v49;
        }
        if ( (_DWORD)v5 != 1075708975 && (v48 || v47 && *((_BYTE *)a2 + 16)) )
        {
          v19 = 1;
          LOBYTE(v15) = *((_BYTE *)a2 + 16);
          v20 = *((_QWORD *)a2 + 1);
          if ( *(_DWORD *)(a1 + 3064) == (*a2 & 0xFFFFFF) )
            v19 = 3;
          LOBYTE(v45) = v47;
          LODWORD(v44) = v19;
          HIDWORD(v44) = *((_DWORD *)v43 + 6);
          HIDWORD(v45) = -2;
          v21 = DpiFdoQueueConnectionChangePackage(a1, (unsigned int)&v44, v20, v15, 0, 0, 0, 1);
          v5 = v21;
          if ( v21 < 0 )
            break;
          v8 = 1;
          v49 = 1;
        }
        if ( v10 == (_QWORD *)(a1 + 3304) )
          goto LABEL_39;
      }
    }
    else
    {
      LOBYTE(v9) = *((_BYTE *)a2 + 17);
      v22 = DpiPdoIsChildConnected(
              *(_QWORD *)(a1 + 24),
              *a2 & 0xFFFFFF,
              v9,
              (*a2 & 0x10000000) != 0,
              (__int64)&v47,
              (__int64)&v48);
      v5 = v22;
      if ( v22 >= 0 )
      {
        if ( (v22 == 1075708975 || v22 == 1075708988)
          && (int)DpiAcquireCoreSyncAccessSafe(*(_QWORD *)(a1 + 24), 0LL) >= 0 )
        {
          LOBYTE(v24) = (_DWORD)v5 == 1075708975;
          v25 = DmmSetTargetForcableState(*(_QWORD *)(a1 + 3704), *a2 & 0xFFFFFF, v24);
          v28 = v25;
          if ( v25 < 0 )
          {
            v29 = (_QWORD *)WdLogNewEntry5_WdError(v27, v26);
            v29[5] = 0LL;
            v29[4] = (_DWORD)v5 == 1075708975;
            v29[3] = v28;
            WdLogEvent5_WdError(v29);
          }
          DpiReleaseCoreSyncAccessSafe(*(_QWORD *)(a1 + 24), 0LL);
        }
        if ( !v48 && (!v47 || !*((_BYTE *)a2 + 16)) || (_DWORD)v5 == 1075708975 )
        {
LABEL_39:
          ExReleaseResourceLite((PERESOURCE)(a1 + 3144));
          KeLeaveCriticalRegion();
          if ( (int)v5 >= 0 )
          {
            if ( v8 )
            {
              if ( *((_BYTE *)a2 + 18) )
              {
                LOBYTE(v36) = *((_BYTE *)a2 + 17);
                LOBYTE(v35) = *((_BYTE *)a2 + 16);
                ConnectionChanges = DxgkQueryConnectionChanges(*(_QWORD *)(a1 + 24), 0, v35, v36, 0);
                v5 = ConnectionChanges;
                if ( ConnectionChanges >= 0 )
                  return (unsigned int)v5;
                v40 = WdLogNewEntry5_WdError(v39, v38);
                *(_QWORD *)(v40 + 24) = v5;
                WdLogEvent5_WdError(v40);
              }
              else
              {
                LODWORD(v5) = DpiFdoQueueConnectionChangePackage(a1, 0, 0, 0, 0, 0, 1, 1);
              }
            }
            if ( (int)v5 >= 0 )
              return (unsigned int)v5;
          }
          _InterlockedAnd((volatile signed __int32 *)(a1 + 3452), 0xFFFFFFFE);
          IoInvalidateDeviceRelations(*(PDEVICE_OBJECT *)(a1 + 152), BusRelations);
          return (unsigned int)v5;
        }
        v30 = 1;
        LOBYTE(v23) = *((_BYTE *)a2 + 16);
        v31 = *(_DWORD *)(a1 + 3064) == (*a2 & 0xFFFFFF);
        HIDWORD(v44) = *a2 & 0xFFFFFF;
        if ( v31 )
          v30 = 3;
        LOBYTE(v45) = v47;
        v32 = *((_QWORD *)a2 + 1);
        LODWORD(v44) = v30;
        HIDWORD(v45) = -2;
        v33 = DpiFdoQueueConnectionChangePackage(a1, (unsigned int)&v44, v32, v23, 0, 0, 0, 1);
        v5 = v33;
        if ( v33 >= 0 )
        {
          v8 = 1;
          goto LABEL_39;
        }
      }
    }
    v34 = WdLogNewEntry5_WdError(v14, v13);
    *(_QWORD *)(v34 + 24) = v5;
    WdLogEvent5_WdError(v34);
    goto LABEL_39;
  }
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 3328), &LockHandle);
  if ( v3 == 50331648 && *(_QWORD *)(a1 + 3336) != a1 + 3336 )
    LODWORD(v5) = DpIndicateConnectorChange(*(PDEVICE_OBJECT *)(a1 + 24));
  *(_BYTE *)(a1 + 3352) = v3 == 50331648;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  return (unsigned int)v5;
}
