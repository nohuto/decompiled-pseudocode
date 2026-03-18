/*
 * XREFs of DpiPdoIsChildConnected @ 0x1C01124D0
 * Callers:
 *     DpiFdoHandleDisplayDetectControl @ 0x1C0010714 (DpiFdoHandleDisplayDetectControl.c)
 * Callees:
 *     DpiFdoGetChildDescriptor @ 0x1C0010B6C (DpiFdoGetChildDescriptor.c)
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     memset @ 0x1C0015700 (memset.c)
 *     DpiSignalVideoOutputCreateCompletion @ 0x1C003DA1C (DpiSignalVideoOutputCreateCompletion.c)
 *     DxgkReleaseAdapterCoreSync @ 0x1C00AA594 (DxgkReleaseAdapterCoreSync.c)
 *     DxgkAcquireAdapterCoreSync @ 0x1C00AA6D4 (DxgkAcquireAdapterCoreSync.c)
 *     DxgkWriteDiagEntry @ 0x1C00F2CA0 (DxgkWriteDiagEntry.c)
 *     DxgkReleaseAdapterDdiSync @ 0x1C01126F4 (DxgkReleaseAdapterDdiSync.c)
 *     DpiDxgkDdiQueryChildStatus @ 0x1C0112714 (DpiDxgkDdiQueryChildStatus.c)
 *     DxgkAcquireAdapterDdiSync @ 0x1C01127C4 (DxgkAcquireAdapterDdiSync.c)
 */

__int64 __fastcall DpiPdoIsChildConnected(__int64 a1, int a2, char a3, char a4, _BYTE *a5, bool *a6)
{
  bool v6; // bl
  __int64 v9; // r14
  __int64 ChildStatus; // r15
  PVOID *ChildDescriptor; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  PVOID *v14; // rdi
  int v15; // eax
  __int64 v16; // rcx
  __int64 v17; // r13
  __int64 v18; // r9
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v26; // rax
  __int64 v27; // rax
  _DWORD v30[2]; // [rsp+48h] [rbp-61h] BYREF
  __int64 v31; // [rsp+50h] [rbp-59h]
  _QWORD v32[10]; // [rsp+60h] [rbp-49h] BYREF

  v6 = 0;
  v9 = *(_QWORD *)(a1 + 64);
  LODWORD(ChildStatus) = 0;
  *a5 = 0;
  KeEnterCriticalRegion();
  ExAcquireResourceSharedLite((PERESOURCE)(v9 + 3144), 1u);
  ChildDescriptor = (PVOID *)DpiFdoGetChildDescriptor(v9, a2);
  v14 = ChildDescriptor;
  if ( !ChildDescriptor )
  {
    v26 = WdLogNewEntry5_WdError(v13, v12);
    *(_QWORD *)(v26 + 24) = 0LL;
    goto LABEL_19;
  }
  if ( *(_DWORD *)ChildDescriptor == 1 )
  {
    v15 = *((_DWORD *)ChildDescriptor + 1);
    if ( v15 >= 15 )
      v6 = v15 <= 16;
  }
  switch ( *((_DWORD *)v14 + 4) )
  {
    case 1:
      *a5 = 1;
      break;
    case 3:
LABEL_10:
      v16 = *(_QWORD *)(v9 + 3704);
      v17 = *(_QWORD *)(v9 + 40);
      v31 = 0LL;
      v30[1] = a2;
      v30[0] = v6 ? 3 : 1;
      DxgkAcquireAdapterCoreSync(v16, 1LL);
      KeWaitForSingleObject(v14[9], Executive, 0, 0, 0LL);
      DxgkAcquireAdapterDdiSync(*(_QWORD *)(v9 + 3704), 1LL);
      LOBYTE(v18) = a4;
      ChildStatus = (int)DpiDxgkDdiQueryChildStatus(v17, *(_QWORD *)(v9 + 48), v30, v18);
      DxgkReleaseAdapterDdiSync(*(_QWORD *)(v9 + 3704));
      KeReleaseMutex((PRKMUTEX)v14[9], 0);
      DxgkReleaseAdapterCoreSync(*(_QWORD *)(v9 + 3704), 1LL);
      if ( (int)ChildStatus >= 0 )
      {
        *a5 = v31;
        break;
      }
      v26 = WdLogNewEntry5_WdError(v20, v19);
      *(_QWORD *)(v26 + 24) = *(_QWORD *)(v17 + 208);
      *(_QWORD *)(v26 + 32) = ChildStatus;
LABEL_19:
      WdLogEvent5_WdError(v26);
      goto LABEL_16;
    case 4:
      if ( (!v6 || *((_DWORD *)v14 + 1) != 15 || *(_QWORD *)(v9 + 3072)) && a3 )
        goto LABEL_10;
      *a5 = *((_BYTE *)v14 + 65);
      break;
    default:
      v27 = WdLogNewEntry5_WdError((unsigned int)(*((_DWORD *)v14 + 4) - 3), 1LL);
      *(_QWORD *)(v27 + 24) = 0LL;
      WdLogEvent5_WdError(v27);
      break;
  }
  if ( !*a5 && *((_BYTE *)v14 + 64) == 1 )
  {
    KeWaitForSingleObject((PVOID)(v9 + 3248), Executive, 0, 0, 0LL);
    *((_BYTE *)v14 + 64) = 0;
    KeReleaseMutex((PRKMUTEX)(v9 + 3248), 0);
    DpiSignalVideoOutputCreateCompletion(a1);
  }
  *a6 = *a5 == (v14[6] == 0LL);
LABEL_16:
  ExReleaseResourceLite((PERESOURCE)(v9 + 3144));
  KeLeaveCriticalRegion();
  memset(v32, 0, 0x48uLL);
  v21 = *(_QWORD *)(v9 + 2536);
  memset(&v32[1], 0, 36);
  HIDWORD(v32[7]) = (unsigned __int8)*a5;
  v32[0] = 0x480000001ELL;
  LODWORD(v32[6]) = 38;
  HIDWORD(v32[6]) = a2;
  LODWORD(v32[7]) = ChildStatus;
  v32[8] = v21;
  DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v32, v22, v23, v24);
  return (unsigned int)ChildStatus;
}
