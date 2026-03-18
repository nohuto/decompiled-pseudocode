/*
 * XREFs of DpiAcpiHandleAcpiEvent @ 0x1C01E6520
 * Callers:
 *     <none>
 * Callees:
 *     DpiEnableD3Requests @ 0x1C000F210 (DpiEnableD3Requests.c)
 *     DpiCheckForOutstandingD3Requests @ 0x1C000F314 (DpiCheckForOutstandingD3Requests.c)
 *     ?AcquireMiniportListMutex@@YAXXZ @ 0x1C000F49C (-AcquireMiniportListMutex@@YAXXZ.c)
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     memset @ 0x1C0016A80 (memset.c)
 *     DxgkReleaseAdapterCoreSync @ 0x1C00B87D0 (DxgkReleaseAdapterCoreSync.c)
 *     DxgkAcquireAdapterCoreSync @ 0x1C00B8910 (DxgkAcquireAdapterCoreSync.c)
 *     DxgkWriteDiagEntry @ 0x1C00D2FA0 (DxgkWriteDiagEntry.c)
 *     DxgkAcquireAdapterDdiSync @ 0x1C0100C74 (DxgkAcquireAdapterDdiSync.c)
 *     DxgkReleaseAdapterDdiSync @ 0x1C0100CA8 (DxgkReleaseAdapterDdiSync.c)
 *     DpiAcpiProcessEventRequests @ 0x1C01E696C (DpiAcpiProcessEventRequests.c)
 *     DpiDxgkDdiNotifyAcpiEvent @ 0x1C01E988C (DpiDxgkDdiNotifyAcpiEvent.c)
 */

void __fastcall DpiAcpiHandleAcpiEvent(PVOID IoObject, _QWORD *Context, PIO_WORKITEM IoWorkItem)
{
  int v3; // r14d
  bool v6; // zf
  __int64 v7; // rsi
  __int64 v8; // rbx
  int v9; // edx
  __int64 v10; // r15
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  unsigned int v22; // [rsp+30h] [rbp-59h] BYREF
  __int64 v23; // [rsp+38h] [rbp-51h]
  PIO_WORKITEM IoWorkItema; // [rsp+40h] [rbp-49h]
  _QWORD v25[10]; // [rsp+50h] [rbp-39h] BYREF

  v3 = 0;
  IoWorkItema = IoWorkItem;
  v22 = 0;
  AcquireMiniportListMutex();
  if ( *(_DWORD *)Context == 1 && (_BYTE)word_1C006085C && HIBYTE(word_1C006085C) && (PVOID)qword_1C0060868 == IoObject )
  {
    *(_DWORD *)Context = 4;
    IoObject = (PVOID)qword_1C0060860;
  }
  memset(v25, 0, 0x48uLL);
  v25[0] = 0x4000000006LL;
  v6 = Context[1] == 0LL;
  memset(&v25[1], 0, 36);
  HIDWORD(v25[6]) = *(_DWORD *)Context;
  LODWORD(v25[7]) = *((_DWORD *)Context + 1);
  HIDWORD(v25[7]) = !v6;
  LODWORD(v25[6]) = 25;
  DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v25);
  while ( 1 )
  {
    v7 = qword_1C0060878;
    if ( *(_QWORD *)v7 != v7 )
    {
      while ( 1 )
      {
        KeWaitForSingleObject((PVOID)(v7 + 72), Executive, 0, 0, 0LL);
        v8 = *(_QWORD *)(v7 + 56);
        if ( *(_QWORD *)v8 != v8 )
          break;
LABEL_45:
        KeReleaseMutex((PRKMUTEX)(v7 + 72), 0);
        v7 = *(_QWORD *)v7;
        if ( *(_QWORD *)v7 == qword_1C0060878 )
          goto LABEL_46;
      }
      while ( *(_DWORD *)(v8 + 16) != 1953656900
           || *(_DWORD *)(v8 + 20) != 2
           || (*(_DWORD *)Context == 1 || *(_DWORD *)Context == 4) && IoObject != *(PVOID *)(v8 + 24) )
      {
LABEL_44:
        v8 = *(_QWORD *)v8;
        if ( *(_QWORD *)v8 == *(_QWORD *)(v7 + 56) )
          goto LABEL_45;
      }
      KeEnterCriticalRegion();
      if ( *(_BYTE *)(v8 + 483) )
        DpiCheckForOutstandingD3Requests(v8);
      ExAcquireResourceSharedLite(*(PERESOURCE *)(v8 + 168), 1u);
      if ( *(_BYTE *)(v8 + 1142) != 1 || !*(_QWORD *)(v7 + 232) || *(_DWORD *)(v8 + 236) != 2 )
      {
LABEL_41:
        if ( *(_BYTE *)(v8 + 483) )
          DpiEnableD3Requests(*(_QWORD *)(v8 + 24));
        ExReleaseResourceLite(*(PERESOURCE *)(v8 + 168));
        KeLeaveCriticalRegion();
        goto LABEL_44;
      }
      v22 = 0;
      ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(*(_QWORD *)(*(_QWORD *)(v8 + 24) + 64LL) + 168LL));
      if ( *(_DWORD *)(v8 + 3808) == 1 || *(_DWORD *)(v8 + 284) != 1 )
      {
        v9 = 2;
      }
      else
      {
        DxgkAcquireAdapterCoreSync(*(_QWORD *)(v8 + 3728), 2);
        v9 = 1;
      }
      DxgkAcquireAdapterDdiSync(*(_QWORD *)(v8 + 3728), v9);
      v10 = (int)DpiDxgkDdiNotifyAcpiEvent(
                   v7,
                   *(_QWORD *)(v8 + 48),
                   *(_DWORD *)Context,
                   *((_DWORD *)Context + 1),
                   Context[1],
                   (__int64)&v22);
      ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(*(_QWORD *)(*(_QWORD *)(v8 + 24) + 64LL) + 168LL));
      if ( *(_DWORD *)(v8 + 3808) == 1 || *(_DWORD *)(v8 + 284) != 1 )
      {
        DxgkReleaseAdapterDdiSync(*(DXGADAPTER **)(v8 + 3728));
      }
      else
      {
        DxgkReleaseAdapterDdiSync(*(DXGADAPTER **)(v8 + 3728));
        DxgkReleaseAdapterCoreSync(*(_QWORD *)(v8 + 3728), 2);
      }
      v11 = *(_QWORD *)(v8 + 3728);
      if ( v11 )
      {
        v23 = *(_QWORD *)(v11 + 268);
        v3 = v23;
      }
      memset(v25, 0, 0x48uLL);
      v12 = *(_QWORD *)(v8 + 2536);
      memset(&v25[1], 0, 36);
      v25[7] = __PAIR64__(v10, v22);
      v25[0] = 0x480000001ELL;
      LODWORD(v25[6]) = 42;
      HIDWORD(v25[6]) = v3;
      v25[8] = v12;
      DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v25);
      v3 = 0;
      if ( (int)v10 >= 0 )
      {
        v18 = v22;
        if ( *(_DWORD *)Context == 4 )
        {
          v14 = (unsigned int)(-((v22 & 8) != 0) - 8);
          if ( ((unsigned int)v14 & v22) != 0 )
          {
            v19 = WdLogNewEntry5_WdError(v14);
            *(_QWORD *)(v19 + 24) = v22;
            WdLogEvent5_WdError(v19);
            v18 = 0LL;
            v22 = 0;
          }
        }
        LOBYTE(v14) = (v18 & 7) != 0;
        if ( ((unsigned __int8)v14 & (*(_BYTE *)(v8 + 3736) ^ 1)) == 0 )
          goto LABEL_37;
        v20 = WdLogNewEntry5_WdError(v14);
        *(_QWORD *)(v20 + 24) = -1073741823LL;
        WdLogEvent5_WdError(v20);
      }
      else
      {
        v17 = WdLogNewEntry5_WdWarning(v14, v13, v15);
        *(_QWORD *)(v17 + 24) = v10;
        WdLogEvent5_WdWarning(v17);
      }
      v22 = 0;
LABEL_37:
      v21 = WdLogNewEntry5_WdEvent(v14, v18, v15, v16);
      *(_QWORD *)(v21 + 24) = v22;
      WdLogEvent5_WdEvent(v21);
      if ( *(_DWORD *)(v8 + 3808) != 1 && *(_DWORD *)(v8 + 284) == 1 && (v22 & 7) != 0 )
        DpiAcpiProcessEventRequests(*(_QWORD *)(v8 + 24), v22, Context, Context + 2);
      goto LABEL_41;
    }
LABEL_46:
    if ( *(_DWORD *)Context != 4 || (v22 & 8) == 0 )
      break;
    *(_DWORD *)Context = 1;
    IoObject = (PVOID)qword_1C0060868;
  }
  _InterlockedExchange64(&qword_1C0060888, 0LL);
  KeReleaseMutex(Mutex, 0);
  ExFreePoolWithTag(Context, 0);
  if ( IoWorkItema )
    IoFreeWorkItem(IoWorkItema);
}
