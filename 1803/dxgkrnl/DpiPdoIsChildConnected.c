/*
 * XREFs of DpiPdoIsChildConnected @ 0x1C020D164
 * Callers:
 *     DpiFdoHandleDisplayDetectControl @ 0x1C003B0E8 (DpiFdoHandleDisplayDetectControl.c)
 * Callees:
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     memset @ 0x1C001C940 (memset.c)
 *     DpiFdoGetChildDescriptor @ 0x1C00396A8 (DpiFdoGetChildDescriptor.c)
 *     DpiSignalVideoOutputCreateCompletion @ 0x1C003C68C (DpiSignalVideoOutputCreateCompletion.c)
 *     DxgkAcquireAdapterCoreSync @ 0x1C009F7A0 (DxgkAcquireAdapterCoreSync.c)
 *     DxgkReleaseAdapterCoreSync @ 0x1C009F834 (DxgkReleaseAdapterCoreSync.c)
 *     DxgkWriteDiagEntry @ 0x1C00C3130 (DxgkWriteDiagEntry.c)
 *     DxgkAcquireAdapterDdiSync @ 0x1C010930C (DxgkAcquireAdapterDdiSync.c)
 *     DxgkReleaseAdapterDdiSync @ 0x1C0109340 (DxgkReleaseAdapterDdiSync.c)
 *     DpiDxgkDdiQueryChildStatus @ 0x1C020A7EC (DpiDxgkDdiQueryChildStatus.c)
 */

__int64 __fastcall DpiPdoIsChildConnected(__int64 a1, int a2, char a3, unsigned __int8 a4, char *a5, bool *a6)
{
  bool v6; // bl
  __int64 v7; // r14
  __int64 v10; // r13
  __int64 ChildStatus; // r15
  _QWORD *ChildDescriptor; // rax
  __int64 v13; // rcx
  _QWORD *v14; // rdi
  __int64 v15; // rax
  int v16; // r12d
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // r13
  __int64 v20; // rcx
  __int64 v21; // rax
  char v22; // al
  __int64 v23; // rax
  _DWORD v28[2]; // [rsp+48h] [rbp-61h] BYREF
  __int64 v29; // [rsp+50h] [rbp-59h]
  _QWORD v30[10]; // [rsp+60h] [rbp-49h] BYREF

  v6 = 0;
  v7 = *(_QWORD *)(a1 + 64);
  v10 = a1;
  LODWORD(ChildStatus) = 0;
  *a5 = 0;
  KeEnterCriticalRegion();
  ExAcquireResourceSharedLite((PERESOURCE)(v7 + 3168), 1u);
  ChildDescriptor = DpiFdoGetChildDescriptor(v7, a2);
  v14 = ChildDescriptor;
  if ( !ChildDescriptor )
  {
    v15 = WdLogNewEntry5_WdError(v13);
    *(_QWORD *)(v15 + 24) = 0LL;
    WdLogEvent5_WdError(v15);
    v16 = a2;
    goto LABEL_23;
  }
  if ( *(_DWORD *)ChildDescriptor == 1 )
    v6 = (unsigned int)(*((_DWORD *)ChildDescriptor + 1) - 15) <= 1;
  switch ( *((_DWORD *)ChildDescriptor + 4) )
  {
    case 1:
      *a5 = 1;
      goto LABEL_18;
    case 3:
      goto LABEL_14;
    case 4:
      if ( v6 && *((_DWORD *)ChildDescriptor + 1) == 15 && !*(_QWORD *)(v7 + 3096) || !a3 )
      {
        *a5 = *((_BYTE *)ChildDescriptor + 65);
        goto LABEL_18;
      }
LABEL_14:
      v16 = a2;
      v18 = *(_QWORD *)(v7 + 3728);
      v19 = *(_QWORD *)(v7 + 40);
      v29 = 0LL;
      v28[1] = a2;
      v28[0] = v6 ? 3 : 1;
      DxgkAcquireAdapterCoreSync(v18, 1);
      KeWaitForSingleObject((PVOID)v14[9], Executive, 0, 0, 0LL);
      DxgkAcquireAdapterDdiSync(*(_QWORD *)(v7 + 3728), 1);
      ChildStatus = (int)DpiDxgkDdiQueryChildStatus(v19, *(_QWORD *)(v7 + 48), (__int64)v28, a4);
      DxgkReleaseAdapterDdiSync(*(DXGADAPTER **)(v7 + 3728));
      KeReleaseMutex((PRKMUTEX)v14[9], 0);
      DxgkReleaseAdapterCoreSync(*(_QWORD *)(v7 + 3728));
      if ( (int)ChildStatus < 0 )
      {
        v21 = WdLogNewEntry5_WdError(v20);
        *(_QWORD *)(v21 + 24) = *(_QWORD *)(v19 + 208);
        *(_QWORD *)(v21 + 32) = ChildStatus;
        WdLogEvent5_WdError(v21);
        goto LABEL_23;
      }
      v10 = a1;
      *a5 = v29;
      goto LABEL_19;
  }
  v17 = WdLogNewEntry5_WdError((unsigned int)(*((_DWORD *)ChildDescriptor + 4) - 3));
  *(_QWORD *)(v17 + 24) = 0LL;
  WdLogEvent5_WdError(v17);
LABEL_18:
  v16 = a2;
LABEL_19:
  v22 = *a5;
  if ( !*a5 && *((_BYTE *)v14 + 64) == 1 )
  {
    KeWaitForSingleObject((PVOID)(v7 + 3272), Executive, 0, 0, 0LL);
    *((_BYTE *)v14 + 64) = 0;
    KeReleaseMutex((PRKMUTEX)(v7 + 3272), 0);
    DpiSignalVideoOutputCreateCompletion(v10);
    v22 = *a5;
  }
  *a6 = v22 == (v14[6] == 0LL);
LABEL_23:
  ExReleaseResourceLite((PERESOURCE)(v7 + 3168));
  KeLeaveCriticalRegion();
  memset(v30, 0, 0x48uLL);
  v23 = *(_QWORD *)(v7 + 2536);
  memset(&v30[1], 0, 36);
  HIDWORD(v30[7]) = (unsigned __int8)*a5;
  v30[0] = 0x480000001ELL;
  LODWORD(v30[6]) = 38;
  HIDWORD(v30[6]) = v16;
  LODWORD(v30[7]) = ChildStatus;
  v30[8] = v23;
  DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v30);
  return (unsigned int)ChildStatus;
}
