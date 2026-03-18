/*
 * XREFs of DpiAcpiHandleAcpiEvent @ 0x1C01CC140
 * Callers:
 *     <none>
 * Callees:
 *     DpiEnableD3Requests @ 0x1C0001278 (DpiEnableD3Requests.c)
 *     DpiCheckForOutstandingD3Requests @ 0x1C00012A0 (DpiCheckForOutstandingD3Requests.c)
 *     ?AcquireMiniportListMutex@@YAXXZ @ 0x1C00013AC (-AcquireMiniportListMutex@@YAXXZ.c)
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     memset @ 0x1C0015700 (memset.c)
 *     DxgkReleaseAdapterCoreSync @ 0x1C00AA594 (DxgkReleaseAdapterCoreSync.c)
 *     DxgkAcquireAdapterCoreSync @ 0x1C00AA6D4 (DxgkAcquireAdapterCoreSync.c)
 *     DxgkWriteDiagEntry @ 0x1C00F2CA0 (DxgkWriteDiagEntry.c)
 *     DxgkReleaseAdapterDdiSync @ 0x1C01126F4 (DxgkReleaseAdapterDdiSync.c)
 *     DxgkAcquireAdapterDdiSync @ 0x1C01127C4 (DxgkAcquireAdapterDdiSync.c)
 *     DpiAcpiProcessEventRequests @ 0x1C01CC590 (DpiAcpiProcessEventRequests.c)
 *     DpiDxgkDdiNotifyAcpiEvent @ 0x1C01CF46C (DpiDxgkDdiNotifyAcpiEvent.c)
 */

void __fastcall DpiAcpiHandleAcpiEvent(PVOID IoObject, _QWORD *Context, PIO_WORKITEM IoWorkItem)
{
  int v3; // r14d
  bool v6; // zf
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rsi
  __int64 v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // r15
  __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  unsigned int v29; // [rsp+30h] [rbp-59h] BYREF
  __int64 v30; // [rsp+38h] [rbp-51h]
  PIO_WORKITEM IoWorkItema; // [rsp+40h] [rbp-49h]
  _QWORD v32[10]; // [rsp+50h] [rbp-39h] BYREF

  v3 = 0;
  IoWorkItema = IoWorkItem;
  v29 = 0;
  AcquireMiniportListMutex();
  if ( *(_DWORD *)Context == 1 && (_BYTE)word_1C006F9DC && HIBYTE(word_1C006F9DC) && (PVOID)qword_1C006F9E8 == IoObject )
  {
    *(_DWORD *)Context = 4;
    IoObject = (PVOID)qword_1C006F9E0;
  }
  memset(v32, 0, 0x48uLL);
  v32[0] = 0x4000000006LL;
  v6 = Context[1] == 0LL;
  memset(&v32[1], 0, 36);
  HIDWORD(v32[6]) = *(_DWORD *)Context;
  LODWORD(v32[7]) = *((_DWORD *)Context + 1);
  HIDWORD(v32[7]) = !v6;
  LODWORD(v32[6]) = 25;
  DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v32, v7, v8, v9);
  while ( 1 )
  {
    v10 = qword_1C006F9F8;
    if ( *(_QWORD *)v10 != v10 )
    {
      while ( 1 )
      {
        KeWaitForSingleObject((PVOID)(v10 + 72), Executive, 0, 0, 0LL);
        v11 = *(_QWORD *)(v10 + 56);
        if ( *(_QWORD *)v11 != v11 )
          break;
LABEL_45:
        KeReleaseMutex((PRKMUTEX)(v10 + 72), 0);
        v10 = *(_QWORD *)v10;
        if ( *(_QWORD *)v10 == qword_1C006F9F8 )
          goto LABEL_46;
      }
      while ( *(_DWORD *)(v11 + 16) != 1953656900
           || *(_DWORD *)(v11 + 20) != 2
           || (*(_DWORD *)Context == 1 || *(_DWORD *)Context == 4) && IoObject != *(PVOID *)(v11 + 24) )
      {
LABEL_44:
        v11 = *(_QWORD *)v11;
        if ( *(_QWORD *)v11 == *(_QWORD *)(v10 + 56) )
          goto LABEL_45;
      }
      KeEnterCriticalRegion();
      if ( *(_BYTE *)(v11 + 483) )
        DpiCheckForOutstandingD3Requests(v11);
      ExAcquireResourceSharedLite(*(PERESOURCE *)(v11 + 168), 1u);
      if ( *(_BYTE *)(v11 + 1142) != 1 || !*(_QWORD *)(v10 + 232) || *(_DWORD *)(v11 + 236) != 2 )
      {
LABEL_41:
        if ( *(_BYTE *)(v11 + 483) )
          DpiEnableD3Requests(*(_QWORD *)(v11 + 24));
        ExReleaseResourceLite(*(PERESOURCE *)(v11 + 168));
        KeLeaveCriticalRegion();
        goto LABEL_44;
      }
      v29 = 0;
      ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(*(_QWORD *)(*(_QWORD *)(v11 + 24) + 64LL) + 168LL));
      if ( *(_DWORD *)(v11 + 3784) == 1 || *(_DWORD *)(v11 + 284) != 1 )
      {
        v12 = 2LL;
      }
      else
      {
        DxgkAcquireAdapterCoreSync(*(_QWORD *)(v11 + 3704), 2LL);
        v12 = 1LL;
      }
      DxgkAcquireAdapterDdiSync(*(_QWORD *)(v11 + 3704), v12);
      v13 = (int)DpiDxgkDdiNotifyAcpiEvent(
                   v10,
                   *(_QWORD *)(v11 + 48),
                   *(_DWORD *)Context,
                   *((_DWORD *)Context + 1),
                   Context[1],
                   (__int64)&v29);
      ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(*(_QWORD *)(*(_QWORD *)(v11 + 24) + 64LL) + 168LL));
      if ( *(_DWORD *)(v11 + 3784) == 1 || *(_DWORD *)(v11 + 284) != 1 )
      {
        DxgkReleaseAdapterDdiSync(*(DXGADAPTER **)(v11 + 3704), v14);
      }
      else
      {
        DxgkReleaseAdapterDdiSync(*(DXGADAPTER **)(v11 + 3704), v14);
        DxgkReleaseAdapterCoreSync(*(_QWORD *)(v11 + 3704), 2LL);
      }
      v15 = *(_QWORD *)(v11 + 3704);
      if ( v15 )
      {
        v30 = *(_QWORD *)(v15 + 268);
        v3 = v30;
      }
      memset(v32, 0, 0x48uLL);
      v16 = *(_QWORD *)(v11 + 2536);
      memset(&v32[1], 0, 36);
      v32[7] = __PAIR64__(v13, v29);
      v32[0] = 0x480000001ELL;
      LODWORD(v32[6]) = 42;
      HIDWORD(v32[6]) = v3;
      v32[8] = v16;
      DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v32, v17, v18, v19);
      v3 = 0;
      if ( (int)v13 >= 0 )
      {
        v25 = v29;
        if ( *(_DWORD *)Context == 4 )
        {
          v21 = (unsigned int)(-((v29 & 8) != 0) - 8);
          if ( ((unsigned int)v21 & v29) != 0 )
          {
            v26 = WdLogNewEntry5_WdError(v21, v29);
            *(_QWORD *)(v26 + 24) = v29;
            WdLogEvent5_WdError(v26);
            v25 = 0LL;
            v29 = 0;
          }
        }
        LOBYTE(v21) = ~*(_BYTE *)(v11 + 3712) & ((v25 & 7) != 0);
        if ( !(_BYTE)v21 )
          goto LABEL_37;
        v27 = WdLogNewEntry5_WdError(v21, v25);
        *(_QWORD *)(v27 + 24) = -1073741823LL;
        WdLogEvent5_WdError(v27);
      }
      else
      {
        v24 = WdLogNewEntry5_WdWarning(v21, v20, v22, v23);
        *(_QWORD *)(v24 + 24) = v13;
        WdLogEvent5_WdWarning(v24);
      }
      v29 = 0;
LABEL_37:
      v28 = WdLogNewEntry5_WdEvent(v21);
      *(_QWORD *)(v28 + 24) = v29;
      WdLogEvent5_WdEvent(v28);
      if ( *(_DWORD *)(v11 + 3784) != 1 && *(_DWORD *)(v11 + 284) == 1 && (v29 & 7) != 0 )
        DpiAcpiProcessEventRequests(*(_QWORD *)(v11 + 24), v29, Context, Context + 2);
      goto LABEL_41;
    }
LABEL_46:
    if ( *(_DWORD *)Context != 4 || (v29 & 8) == 0 )
      break;
    *(_DWORD *)Context = 1;
    IoObject = (PVOID)qword_1C006F9E8;
  }
  _InterlockedExchange64(&qword_1C006FA08, 0LL);
  KeReleaseMutex(Mutex, 0);
  ExFreePoolWithTag(Context, 0);
  if ( IoWorkItema )
    IoFreeWorkItem(IoWorkItema);
}
