/*
 * XREFs of DpiPdoIsChildConnected @ 0x1C01191D4
 * Callers:
 *     DpiFdoHandleDisplayDetectControl @ 0x1C0012498 (DpiFdoHandleDisplayDetectControl.c)
 * Callees:
 *     DpiFdoGetChildDescriptor @ 0x1C0012738 (DpiFdoGetChildDescriptor.c)
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     memset @ 0x1C0016A80 (memset.c)
 *     DpiSignalVideoOutputCreateCompletion @ 0x1C002E5AC (DpiSignalVideoOutputCreateCompletion.c)
 *     DxgkReleaseAdapterCoreSync @ 0x1C00B87D0 (DxgkReleaseAdapterCoreSync.c)
 *     DxgkAcquireAdapterCoreSync @ 0x1C00B8910 (DxgkAcquireAdapterCoreSync.c)
 *     DxgkWriteDiagEntry @ 0x1C00D2FA0 (DxgkWriteDiagEntry.c)
 *     DxgkAcquireAdapterDdiSync @ 0x1C0100C74 (DxgkAcquireAdapterDdiSync.c)
 *     DxgkReleaseAdapterDdiSync @ 0x1C0100CA8 (DxgkReleaseAdapterDdiSync.c)
 *     DpiDxgkDdiQueryChildStatus @ 0x1C01193F8 (DpiDxgkDdiQueryChildStatus.c)
 */

__int64 __fastcall DpiPdoIsChildConnected(__int64 a1, int a2, char a3, char a4, _BYTE *a5, bool *a6)
{
  bool v6; // bl
  __int64 v9; // r14
  __int64 ChildStatus; // r15
  PVOID *ChildDescriptor; // rax
  __int64 v12; // rcx
  PVOID *v13; // rdi
  int v14; // eax
  __int64 v15; // rcx
  __int64 v16; // r13
  __int64 v17; // r9
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  _DWORD v25[2]; // [rsp+48h] [rbp-61h] BYREF
  __int64 v26; // [rsp+50h] [rbp-59h]
  _QWORD v27[10]; // [rsp+60h] [rbp-49h] BYREF

  v6 = 0;
  v9 = *(_QWORD *)(a1 + 64);
  LODWORD(ChildStatus) = 0;
  *a5 = 0;
  KeEnterCriticalRegion();
  ExAcquireResourceSharedLite((PERESOURCE)(v9 + 3168), 1u);
  ChildDescriptor = (PVOID *)DpiFdoGetChildDescriptor(v9, a2);
  v13 = ChildDescriptor;
  if ( !ChildDescriptor )
  {
    v21 = WdLogNewEntry5_WdError(v12);
    *(_QWORD *)(v21 + 24) = 0LL;
    goto LABEL_19;
  }
  if ( *(_DWORD *)ChildDescriptor == 1 )
  {
    v14 = *((_DWORD *)ChildDescriptor + 1);
    if ( v14 >= 15 )
      v6 = v14 <= 16;
  }
  switch ( *((_DWORD *)v13 + 4) )
  {
    case 1:
      *a5 = 1;
      break;
    case 3:
LABEL_10:
      v15 = *(_QWORD *)(v9 + 3728);
      v16 = *(_QWORD *)(v9 + 40);
      v26 = 0LL;
      v25[1] = a2;
      v25[0] = v6 ? 3 : 1;
      DxgkAcquireAdapterCoreSync(v15, 1);
      KeWaitForSingleObject(v13[9], Executive, 0, 0, 0LL);
      DxgkAcquireAdapterDdiSync(*(_QWORD *)(v9 + 3728), 1);
      LOBYTE(v17) = a4;
      ChildStatus = (int)DpiDxgkDdiQueryChildStatus(v16, *(_QWORD *)(v9 + 48), v25, v17);
      DxgkReleaseAdapterDdiSync(*(DXGADAPTER **)(v9 + 3728));
      KeReleaseMutex((PRKMUTEX)v13[9], 0);
      DxgkReleaseAdapterCoreSync(*(_QWORD *)(v9 + 3728), 1);
      if ( (int)ChildStatus >= 0 )
      {
        *a5 = v26;
        break;
      }
      v21 = WdLogNewEntry5_WdError(v18);
      *(_QWORD *)(v21 + 24) = *(_QWORD *)(v16 + 208);
      *(_QWORD *)(v21 + 32) = ChildStatus;
LABEL_19:
      WdLogEvent5_WdError(v21);
      goto LABEL_16;
    case 4:
      if ( (!v6 || *((_DWORD *)v13 + 1) != 15 || *(_QWORD *)(v9 + 3096)) && a3 )
        goto LABEL_10;
      *a5 = *((_BYTE *)v13 + 65);
      break;
    default:
      v22 = WdLogNewEntry5_WdError((unsigned int)(*((_DWORD *)v13 + 4) - 3));
      *(_QWORD *)(v22 + 24) = 0LL;
      WdLogEvent5_WdError(v22);
      break;
  }
  if ( !*a5 && *((_BYTE *)v13 + 64) == 1 )
  {
    KeWaitForSingleObject((PVOID)(v9 + 3272), Executive, 0, 0, 0LL);
    *((_BYTE *)v13 + 64) = 0;
    KeReleaseMutex((PRKMUTEX)(v9 + 3272), 0);
    DpiSignalVideoOutputCreateCompletion(a1);
  }
  *a6 = *a5 == (v13[6] == 0LL);
LABEL_16:
  ExReleaseResourceLite((PERESOURCE)(v9 + 3168));
  KeLeaveCriticalRegion();
  memset(v27, 0, 0x48uLL);
  v19 = *(_QWORD *)(v9 + 2536);
  memset(&v27[1], 0, 36);
  HIDWORD(v27[7]) = (unsigned __int8)*a5;
  v27[0] = 0x480000001ELL;
  LODWORD(v27[6]) = 38;
  HIDWORD(v27[6]) = a2;
  LODWORD(v27[7]) = ChildStatus;
  v27[8] = v19;
  DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v27);
  return (unsigned int)ChildStatus;
}
