/*
 * XREFs of DpiPdoPollingWorkItem @ 0x1C01E8CC0
 * Callers:
 *     DpiCleanUpGlobalState @ 0x1C01E4BC4 (DpiCleanUpGlobalState.c)
 * Callees:
 *     DpiEnableD3Requests @ 0x1C000F210 (DpiEnableD3Requests.c)
 *     DpiCheckForOutstandingD3Requests @ 0x1C000F314 (DpiCheckForOutstandingD3Requests.c)
 *     ExFreeToNPagedLookasideList @ 0x1C0011EC4 (ExFreeToNPagedLookasideList.c)
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     memset @ 0x1C0016A80 (memset.c)
 *     DpiFdoInvalidateChildStatus @ 0x1C01DE850 (DpiFdoInvalidateChildStatus.c)
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
  __int64 v10; // rcx
  __int64 v11; // rax
  _QWORD v12[10]; // [rsp+30h] [rbp-78h] BYREF

  v2 = (char)Context;
  memset(v12, 0, 0x48uLL);
  EtwActivityIdControl(3u, (LPGUID)&v12[1]);
  v3 = 0;
  v12[8] = MEMORY[0xFFFFF78000000014];
  LODWORD(v12[3]) = 14;
  LOBYTE(v12[6]) = -1;
  while ( 1 )
  {
    KeWaitForSingleObject(Object, Executive, 0, 0, 0LL);
    v4 = Entry;
    if ( Entry == &Entry )
    {
      v4 = 0LL;
      _InterlockedExchange(&dword_1C0060A60, 0);
    }
    else
    {
      if ( *((PVOID **)Entry + 1) != &Entry || (v5 = *(_QWORD *)Entry, *(PVOID *)(*(_QWORD *)Entry + 8LL) != Entry) )
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
        v10 = WdLogNewEntry5_WdWarning(v8, v7, v9);
        *(_QWORD *)(v10 + 24) = *(int *)(v6 + 236);
        goto LABEL_17;
      }
      if ( *(_DWORD *)(v6 + 3808) == 1 || *(_DWORD *)(v6 + 284) != 1 )
      {
        v3 = -1073741661;
        v11 = WdLogNewEntry5_WdWarning(v8, v7, v9);
        *(_QWORD *)(v11 + 24) = *(int *)(v6 + 284);
        v10 = v11;
LABEL_17:
        WdLogEvent5_WdWarning(v10);
      }
      else
      {
        v3 = DpiFdoInvalidateChildStatus(
               *((_QWORD *)v4 + 3),
               *((_DWORD *)v4 + 8),
               *((_BYTE *)v4 + 40),
               *((_BYTE *)v4 + 41),
               *((_BYTE *)v4 + 42),
               (__int64)v12);
      }
      if ( *(_BYTE *)(v6 + 483) )
        DpiEnableD3Requests(*(_QWORD *)(v6 + 24));
      ExReleaseResourceLite(*(PERESOURCE *)(v6 + 168));
      KeLeaveCriticalRegion();
    }
    IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v6 + 64), v4, 0x20u);
    ExFreeToNPagedLookasideList(&stru_1C0060940, v4);
    if ( v3 == 259 )
    {
      _InterlockedExchange(&dword_1C0060A60, 0);
      KeSetTimer(&stru_1C00609D8, (LARGE_INTEGER)-3000000LL, &stru_1C0060A18);
      return;
    }
  }
}
