/*
 * XREFs of DpiFdoExcludeAdapterAccess @ 0x1C01F4850
 * Callers:
 *     <none>
 * Callees:
 *     DpiEnableD3Requests @ 0x1C0001CC0 (DpiEnableD3Requests.c)
 *     DpiCheckForOutstandingD3Requests @ 0x1C000B870 (DpiCheckForOutstandingD3Requests.c)
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     memset @ 0x1C001C940 (memset.c)
 *     DxgkWriteDiagEntry @ 0x1C00C3130 (DxgkWriteDiagEntry.c)
 *     DxgkRequestAsyncDisplaySwitchCallout @ 0x1C01A1F70 (DxgkRequestAsyncDisplaySwitchCallout.c)
 *     DxgkRequestSyncDisplaySwitchCallout @ 0x1C01A1FF8 (DxgkRequestSyncDisplaySwitchCallout.c)
 *     DpiRequestIoPowerState @ 0x1C01F1AF8 (DpiRequestIoPowerState.c)
 *     DpiDxgkDdiProtectedCallback @ 0x1C020A624 (DpiDxgkDdiProtectedCallback.c)
 */

void __fastcall DpiFdoExcludeAdapterAccess(_QWORD *IoObject, _QWORD *Context, PIO_WORKITEM IoWorkItem)
{
  __int64 v3; // rdi
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v4; // r15
  char v7; // r13
  char v8; // r12
  __int64 SDCFlags; // rbx
  __int64 v10; // rax
  __int64 v11; // r8
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // r8
  __int64 v15; // rcx
  int v16; // eax
  __int64 v17; // r8
  __int64 v18; // rax
  __int64 v19; // r8
  __int64 v20; // rcx
  __int64 v21; // rax
  int v22; // eax
  int v23; // eax
  __int64 v24; // rcx
  __int64 v25; // rax
  char v26; // [rsp+30h] [rbp-D0h]
  struct _DXGK_WIN32K_PARAM_DATA v27; // [rsp+38h] [rbp-C8h] BYREF
  PIO_WORKITEM IoWorkItema; // [rsp+58h] [rbp-A8h]
  _QWORD v29[10]; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD v30[10]; // [rsp+B0h] [rbp-50h] BYREF

  v3 = IoObject[8];
  v4 = (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)(Context + 4);
  IoWorkItema = IoWorkItem;
  v26 = 0;
  v7 = 0;
  v8 = 0;
  if ( *(_BYTE *)(v3 + 480) )
  {
    LODWORD(SDCFlags) = -1073741637;
    v10 = WdLogNewEntry5_WdError(IoObject);
    *(_QWORD *)(v10 + 24) = -1073741637LL;
LABEL_3:
    WdLogEvent5_WdError(v10);
    goto LABEL_23;
  }
  if ( (Context[2] & 1) == 0 )
    goto LABEL_12;
  memset(&v27, 0, sizeof(v27));
  LODWORD(v27.PathsArray) = 4;
  *(_QWORD *)&v27.NumPathArrayElements = 0LL;
  v27.ModesArray = 0LL;
  memset(v30, 0, 0x48uLL);
  memset(&v30[1], 0, 36);
  LOBYTE(v11) = 1;
  v30[8] = *(_QWORD *)(v3 + 2536);
  v30[0] = 0x480000001ELL;
  v30[6] = 43LL;
  v30[7] = 0LL;
  SMgrGdiCallout(&v27, 0LL, v11, 0LL, 0LL, v4);
  SDCFlags = (int)v27.SDCFlags;
  HIDWORD(v30[6]) = v27.SDCFlags;
  DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v30);
  if ( (int)SDCFlags >= 0 )
  {
LABEL_12:
    if ( (Context[2] & 2) == 0 )
    {
      KeEnterCriticalRegion();
      if ( *(_BYTE *)(v3 + 483) )
        DpiCheckForOutstandingD3Requests(v3);
      ExAcquireResourceSharedLite(*(PERESOURCE *)(v3 + 168), 1u);
      KeWaitForSingleObject((PVOID)(v3 + 176), Executive, 0, 0, 0LL);
      v7 = 1;
      if ( *(_DWORD *)(v3 + 236) != 2 || *(_DWORD *)(v3 + 3808) == 1 || *(_DWORD *)(v3 + 284) != 1 )
      {
        LODWORD(SDCFlags) = -1073741661;
        v10 = WdLogNewEntry5_WdError(v15);
        *(_QWORD *)(v10 + 24) = -1073741661LL;
        goto LABEL_3;
      }
    }
    v16 = DpiRequestIoPowerState((__int64)IoObject, 5, (__int64)IoWorkItem, *((_DWORD *)Context + 4));
    LODWORD(SDCFlags) = v16;
    if ( v16 >= 0 )
    {
      v26 = 1;
      DpiDxgkDdiProtectedCallback(*(_QWORD *)(v3 + 48), *Context, Context[1], (unsigned int)v16);
      LODWORD(SDCFlags) = DpiRequestIoPowerState((__int64)IoObject, 6, v17, *((_DWORD *)Context + 4));
      if ( (int)SDCFlags >= 0 )
        goto LABEL_24;
      LODWORD(SDCFlags) = 0;
    }
    else if ( v16 != -1071775482 )
    {
      goto LABEL_20;
    }
    v8 = 1;
    goto LABEL_20;
  }
  v13 = WdLogNewEntry5_WdError(v12);
  *(_QWORD *)(v13 + 24) = SDCFlags;
  WdLogEvent5_WdError(v13);
LABEL_20:
  if ( (int)SDCFlags >= 0 )
    goto LABEL_24;
  if ( v26 == 1 )
    DpiRequestIoPowerState((__int64)IoObject, 6, v14, *((_DWORD *)Context + 4));
LABEL_23:
  DpiDxgkDdiProtectedCallback(*(_QWORD *)(v3 + 48), *Context, Context[1], (unsigned int)SDCFlags);
LABEL_24:
  if ( v7 == 1 )
  {
    KeReleaseMutex((PRKMUTEX)(v3 + 176), 0);
    if ( *(_BYTE *)(v3 + 483) )
      DpiEnableD3Requests(*(_QWORD *)(v3 + 24));
    ExReleaseResourceLite(*(PERESOURCE *)(v3 + 168));
    KeLeaveCriticalRegion();
  }
  if ( (Context[2] & 1) != 0 )
  {
    memset(&v27, 0, sizeof(v27));
    LODWORD(v27.PathsArray) = 4;
    *(_QWORD *)&v27.NumPathArrayElements = 1LL;
    v27.ModesArray = 0LL;
    memset(v29, 0, 0x48uLL);
    v18 = *(_QWORD *)(v3 + 2536);
    memset(&v29[1], 0, 36);
    LOBYTE(v19) = 1;
    v29[7] = 0LL;
    v29[0] = 0x480000001ELL;
    v29[6] = 44LL;
    v29[8] = v18;
    SMgrGdiCallout(&v27, 0LL, v19, 0LL, 0LL, v4);
    SDCFlags = (int)v27.SDCFlags;
    HIDWORD(v29[6]) = v27.SDCFlags;
    DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v29);
    if ( (v27.SDCFlags & 0x80000000) != 0 )
    {
      v21 = WdLogNewEntry5_WdError(v20);
      *(_QWORD *)(v21 + 24) = SDCFlags;
      WdLogEvent5_WdError(v21);
    }
  }
  if ( v8 == 1 )
  {
    memset(&v27, 0, sizeof(v27));
    v27.SDCFlags = 143;
    memset(v29, 0, 0x48uLL);
    v29[8] = *(_QWORD *)(v3 + 2536);
    v22 = *((_DWORD *)Context + 4);
    memset(&v29[1], 0, 36);
    v29[7] = 0LL;
    v29[0] = 0x480000001ELL;
    v29[6] = 45LL;
    if ( (v22 & 2) != 0 )
    {
      DxgkRequestAsyncDisplaySwitchCallout(&v27, v4);
    }
    else
    {
      v23 = DxgkRequestSyncDisplaySwitchCallout(&v27, v4);
      SDCFlags = v23;
      if ( v23 < 0 )
      {
        v25 = WdLogNewEntry5_WdError(v24);
        *(_QWORD *)(v25 + 24) = SDCFlags;
        WdLogEvent5_WdError(v25);
      }
    }
    HIDWORD(v29[6]) = SDCFlags;
    DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v29);
  }
  if ( (Context[2] & 2) != 0 )
    KeSetEvent((PRKEVENT)Context[3], 0, 0);
  ExFreePoolWithTag(Context, 0);
  IoFreeWorkItem(IoWorkItema);
  IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v3 + 64), IoWorkItema, 0x20u);
}
