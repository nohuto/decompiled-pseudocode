/*
 * XREFs of DpiPdoPollingWorkItem @ 0x1C01CE8B0
 * Callers:
 *     DpiCleanUpGlobalState @ 0x1C01CA818 (DpiCleanUpGlobalState.c)
 * Callees:
 *     DpiEnableD3Requests @ 0x1C0001278 (DpiEnableD3Requests.c)
 *     DpiCheckForOutstandingD3Requests @ 0x1C00012A0 (DpiCheckForOutstandingD3Requests.c)
 *     ExFreeToNPagedLookasideList @ 0x1C001178C (ExFreeToNPagedLookasideList.c)
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     memset @ 0x1C0015700 (memset.c)
 *     DpiFdoInvalidateChildStatus @ 0x1C01C4DD8 (DpiFdoInvalidateChildStatus.c)
 */

void __fastcall DpiPdoPollingWorkItem(PDEVICE_OBJECT DeviceObject, PVOID Context)
{
  char v2; // r14
  int v3; // ebp
  PVOID v4; // rdi
  __int64 v5; // rax
  __int64 v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rcx
  __int64 v12; // rax
  _QWORD v13[8]; // [rsp+30h] [rbp-68h] BYREF

  v2 = (char)Context;
  memset(v13, 0, sizeof(v13));
  EtwActivityIdControl(3u, (LPGUID)&v13[1]);
  v3 = 0;
  v13[7] = MEMORY[0xFFFFF78000000014];
  LODWORD(v13[3]) = 14;
  while ( 1 )
  {
    KeWaitForSingleObject(Object, Executive, 0, 0, 0LL);
    v4 = Entry;
    if ( Entry == &Entry )
    {
      v4 = 0LL;
      _InterlockedExchange(&dword_1C006FBE0, 0);
    }
    else
    {
      v5 = *(_QWORD *)Entry;
      if ( *((PVOID **)Entry + 1) != &Entry || *(PVOID *)(v5 + 8) != Entry )
        __fastfail(3u);
      Entry = *(PVOID *)Entry;
      *(_QWORD *)(v5 + 8) = &Entry;
    }
    KeReleaseMutex((PRKMUTEX)Object, 0);
    if ( !v4 )
      break;
    v6 = *(_QWORD *)(*((_QWORD *)v4 + 3) + 64LL);
    if ( !v2 )
    {
      KeEnterCriticalRegion();
      if ( *(_BYTE *)(v6 + 483) )
        DpiCheckForOutstandingD3Requests(v6);
      ExAcquireResourceSharedLite(*(PERESOURCE *)(v6 + 168), 1u);
      if ( *(_DWORD *)(v6 + 236) != 2 )
      {
        v3 = -1073741810;
        v11 = WdLogNewEntry5_WdWarning(v8, v7, v9, v10);
        *(_QWORD *)(v11 + 24) = *(int *)(v6 + 236);
        goto LABEL_17;
      }
      if ( *(_DWORD *)(v6 + 3784) == 1 || *(_DWORD *)(v6 + 284) != 1 )
      {
        v3 = -1073741661;
        v12 = WdLogNewEntry5_WdWarning(v8, v7, v9, v10);
        *(_QWORD *)(v12 + 24) = *(int *)(v6 + 284);
        v11 = v12;
LABEL_17:
        WdLogEvent5_WdWarning(v11);
      }
      else
      {
        v3 = DpiFdoInvalidateChildStatus(
               *((_QWORD *)v4 + 3),
               *((_DWORD *)v4 + 8),
               *((_BYTE *)v4 + 40),
               *((_BYTE *)v4 + 41),
               *((_BYTE *)v4 + 42),
               (__int64)v13);
      }
      if ( *(_BYTE *)(v6 + 483) )
        DpiEnableD3Requests(*(_QWORD *)(v6 + 24));
      ExReleaseResourceLite(*(PERESOURCE *)(v6 + 168));
      KeLeaveCriticalRegion();
    }
    IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v6 + 64), v4, 0x20u);
    ExFreeToNPagedLookasideList(&stru_1C006FAC0, v4);
    if ( v3 == 259 )
    {
      _InterlockedExchange(&dword_1C006FBE0, 0);
      KeSetTimer(&stru_1C006FB58, (LARGE_INTEGER)-3000000LL, &stru_1C006FB98);
      return;
    }
  }
}
