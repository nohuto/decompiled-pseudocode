/*
 * XREFs of DpiFdoExcludeAdapterAccess @ 0x1C01C3C10
 * Callers:
 *     <none>
 * Callees:
 *     DpiEnableD3Requests @ 0x1C0001278 (DpiEnableD3Requests.c)
 *     DpiCheckForOutstandingD3Requests @ 0x1C00012A0 (DpiCheckForOutstandingD3Requests.c)
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     memset @ 0x1C0015700 (memset.c)
 *     DxgkWriteDiagEntry @ 0x1C00F2CA0 (DxgkWriteDiagEntry.c)
 *     DpiRequestIoPowerState @ 0x1C0102874 (DpiRequestIoPowerState.c)
 *     DxgkRequestAsyncDisplaySwitchCallout @ 0x1C01976A0 (DxgkRequestAsyncDisplaySwitchCallout.c)
 *     DxgkRequestSyncDisplaySwitchCallout @ 0x1C0197728 (DxgkRequestSyncDisplaySwitchCallout.c)
 *     DpiDxgkDdiProtectedCallback @ 0x1C01CF67C (DpiDxgkDdiProtectedCallback.c)
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
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // r8
  __int64 v19; // rdx
  __int64 v20; // rcx
  int v21; // eax
  __int64 v22; // r8
  __int64 v23; // rax
  __int64 v24; // r8
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // rax
  int v31; // eax
  __int64 v32; // rdx
  __int64 v33; // r8
  __int64 v34; // r9
  int v35; // eax
  __int64 v36; // rcx
  __int64 v37; // rax
  char v38; // [rsp+30h] [rbp-D0h]
  struct _DXGK_WIN32K_PARAM_DATA v39; // [rsp+38h] [rbp-C8h] BYREF
  PIO_WORKITEM IoWorkItema; // [rsp+58h] [rbp-A8h]
  _QWORD v41[10]; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD v42[10]; // [rsp+B0h] [rbp-50h] BYREF

  v3 = IoObject[8];
  v4 = (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)(Context + 4);
  IoWorkItema = IoWorkItem;
  v38 = 0;
  v7 = 0;
  v8 = 0;
  if ( *(_BYTE *)(v3 + 480) )
  {
    LODWORD(SDCFlags) = -1073741637;
    v10 = WdLogNewEntry5_WdError(IoObject, Context);
    *(_QWORD *)(v10 + 24) = -1073741637LL;
LABEL_3:
    WdLogEvent5_WdError(v10);
    goto LABEL_23;
  }
  if ( (Context[2] & 1) == 0 )
    goto LABEL_12;
  memset(&v39, 0, sizeof(v39));
  LODWORD(v39.PathsArray) = 4;
  *(_QWORD *)&v39.NumPathArrayElements = 0LL;
  v39.ModesArray = 0LL;
  memset(v42, 0, 0x48uLL);
  memset(&v42[1], 0, 36);
  LOBYTE(v11) = 1;
  v42[8] = *(_QWORD *)(v3 + 2536);
  v42[0] = 0x480000001ELL;
  v42[6] = 43LL;
  v42[7] = 0LL;
  SMgrGdiCallout(&v39, 0LL, v11, 0LL, 0LL, v4);
  SDCFlags = (int)v39.SDCFlags;
  HIDWORD(v42[6]) = v39.SDCFlags;
  DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v42, v12, v13, v14);
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
      if ( *(_DWORD *)(v3 + 236) != 2 || *(_DWORD *)(v3 + 3784) == 1 || *(_DWORD *)(v3 + 284) != 1 )
      {
        LODWORD(SDCFlags) = -1073741661;
        v10 = WdLogNewEntry5_WdError(v20, v19);
        *(_QWORD *)(v10 + 24) = -1073741661LL;
        goto LABEL_3;
      }
    }
    v21 = DpiRequestIoPowerState((__int64)IoObject, 5, (__int64)IoWorkItem, *((_DWORD *)Context + 4));
    LODWORD(SDCFlags) = v21;
    if ( v21 >= 0 )
    {
      v38 = 1;
      DpiDxgkDdiProtectedCallback(*(_QWORD *)(v3 + 48), *Context, Context[1], (unsigned int)v21);
      LODWORD(SDCFlags) = DpiRequestIoPowerState((__int64)IoObject, 6, v22, *((_DWORD *)Context + 4));
      if ( (int)SDCFlags >= 0 )
        goto LABEL_24;
      LODWORD(SDCFlags) = 0;
    }
    else if ( v21 != -1071775482 )
    {
      goto LABEL_20;
    }
    v8 = 1;
    goto LABEL_20;
  }
  v17 = WdLogNewEntry5_WdError(v16, v15);
  *(_QWORD *)(v17 + 24) = SDCFlags;
  WdLogEvent5_WdError(v17);
LABEL_20:
  if ( (int)SDCFlags >= 0 )
    goto LABEL_24;
  if ( v38 == 1 )
    DpiRequestIoPowerState((__int64)IoObject, 6, v18, *((_DWORD *)Context + 4));
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
    memset(&v39, 0, sizeof(v39));
    LODWORD(v39.PathsArray) = 4;
    *(_QWORD *)&v39.NumPathArrayElements = 1LL;
    v39.ModesArray = 0LL;
    memset(v41, 0, 0x48uLL);
    v23 = *(_QWORD *)(v3 + 2536);
    memset(&v41[1], 0, 36);
    LOBYTE(v24) = 1;
    v41[7] = 0LL;
    v41[0] = 0x480000001ELL;
    v41[6] = 44LL;
    v41[8] = v23;
    SMgrGdiCallout(&v39, 0LL, v24, 0LL, 0LL, v4);
    SDCFlags = (int)v39.SDCFlags;
    HIDWORD(v41[6]) = v39.SDCFlags;
    DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v41, v25, v26, v27);
    if ( (v39.SDCFlags & 0x80000000) != 0 )
    {
      v30 = WdLogNewEntry5_WdError(v29, v28);
      *(_QWORD *)(v30 + 24) = SDCFlags;
      WdLogEvent5_WdError(v30);
    }
  }
  if ( v8 == 1 )
  {
    memset(&v39, 0, sizeof(v39));
    v39.SDCFlags = 143;
    memset(v41, 0, 0x48uLL);
    v41[8] = *(_QWORD *)(v3 + 2536);
    v31 = *((_DWORD *)Context + 4);
    memset(&v41[1], 0, 36);
    v41[7] = 0LL;
    v41[0] = 0x480000001ELL;
    v41[6] = 45LL;
    if ( (v31 & 2) != 0 )
    {
      DxgkRequestAsyncDisplaySwitchCallout(&v39, v4);
    }
    else
    {
      v35 = DxgkRequestSyncDisplaySwitchCallout(&v39, v4);
      SDCFlags = v35;
      if ( v35 < 0 )
      {
        v37 = WdLogNewEntry5_WdError(v36, v32);
        *(_QWORD *)(v37 + 24) = SDCFlags;
        WdLogEvent5_WdError(v37);
      }
    }
    HIDWORD(v41[6]) = SDCFlags;
    DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v41, v32, v33, v34);
  }
  if ( (Context[2] & 2) != 0 )
    KeSetEvent((PRKEVENT)Context[3], 0, 0);
  ExFreePoolWithTag(Context, 0);
  IoFreeWorkItem(IoWorkItema);
  IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v3 + 64), IoWorkItema, 0x20u);
}
