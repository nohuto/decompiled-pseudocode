/*
 * XREFs of DpiMiracastFindDisplayAdapterFdo @ 0x1C01FEFE0
 * Callers:
 *     DxgkMiracastStartMiracastSession @ 0x1C003EE7C (DxgkMiracastStartMiracastSession.c)
 * Callees:
 *     DpiEnableD3Requests @ 0x1C0001CC0 (DpiEnableD3Requests.c)
 *     ?AcquireMiniportListMutex@@YAXXZ @ 0x1C0001CD4 (-AcquireMiniportListMutex@@YAXXZ.c)
 *     ?IsMiniportListMutexOwnedByCurrentThread@@YAEXZ @ 0x1C000B754 (-IsMiniportListMutexOwnedByCurrentThread@@YAEXZ.c)
 *     DpiCheckForOutstandingD3Requests @ 0x1C000B870 (DpiCheckForOutstandingD3Requests.c)
 *     DpiMiracastFindDisplayAdapterFdoIhv @ 0x1C00DCDD4 (DpiMiracastFindDisplayAdapterFdoIhv.c)
 *     DxgkMiracastQueryMiracastSupportInternal @ 0x1C00DCF54 (DxgkMiracastQueryMiracastSupportInternal.c)
 */

__int64 __fastcall DpiMiracastFindDisplayAdapterFdo(struct _DEVICE_OBJECT *a1, __int64 *a2, _BYTE *a3)
{
  char v4; // bl
  __int64 *v5; // r13
  __int64 v6; // r14
  int MiracastSupportInternal; // r15d
  char v8; // al
  int DisplayAdapterFdoIhv; // eax
  __int64 v10; // r12
  __int64 v11; // rsi
  bool v12; // zf
  struct _IO_REMOVE_LOCK *v13; // r13
  int v14; // ecx
  PDEVICE_OBJECT LowerDeviceObject; // r13
  __int64 v17; // [rsp+30h] [rbp-30h] BYREF
  PVOID v18; // [rsp+38h] [rbp-28h]
  __int64 v19; // [rsp+40h] [rbp-20h] BYREF
  __int64 v20; // [rsp+48h] [rbp-18h]
  int v21; // [rsp+50h] [rbp-10h]

  v4 = 0;
  v5 = a2;
  if ( !IsMiniportListMutexOwnedByCurrentThread() )
  {
    AcquireMiniportListMutex();
    v4 = 1;
  }
  v17 = 0LL;
  v19 = 0LL;
  v20 = 0LL;
  v6 = 0LL;
  v21 = 0;
  MiracastSupportInternal = DxgkMiracastQueryMiracastSupportInternal((__int64)&v19);
  if ( MiracastSupportInternal < 0 )
    goto LABEL_47;
  v8 = v20;
  if ( a3 )
    *a3 = v20;
  if ( v8 )
  {
    DisplayAdapterFdoIhv = DpiMiracastFindDisplayAdapterFdoIhv(&v17);
    v6 = v17;
    MiracastSupportInternal = DisplayAdapterFdoIhv;
    goto LABEL_41;
  }
  v10 = qword_1C007A778;
  MiracastSupportInternal = -1073741275;
  if ( *(_QWORD *)v10 == v10 )
  {
LABEL_46:
    *v5 = 0LL;
    goto LABEL_47;
  }
  do
  {
    if ( MiracastSupportInternal >= 0 )
    {
      v5 = a2;
      goto LABEL_51;
    }
    KeWaitForSingleObject((PVOID)(v10 + 72), Executive, 0, 0, 0LL);
    v11 = *(_QWORD *)(v10 + 56);
    if ( *(_QWORD *)v11 == v11 )
      goto LABEL_39;
    while ( 1 )
    {
      v12 = *(_DWORD *)(v11 + 16) == 1953656900;
      v6 = v11;
      v17 = v11;
      if ( v12 && *(_DWORD *)(v11 + 20) == 2 )
      {
        v13 = (struct _IO_REMOVE_LOCK *)(v11 + 64);
        if ( IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)(v11 + 64), (PVOID)v11, File, 1u, 0x20u) >= 0 )
          break;
      }
LABEL_36:
      v11 = *(_QWORD *)v11;
      if ( *(_QWORD *)v11 == *(_QWORD *)(v10 + 56) )
        goto LABEL_39;
    }
    KeEnterCriticalRegion();
    if ( *(_BYTE *)(v11 + 483) )
      DpiCheckForOutstandingD3Requests(v11);
    ExAcquireResourceSharedLite(*(PERESOURCE *)(v11 + 168), 1u);
    v14 = *(_DWORD *)(v11 + 236);
    if ( v14 != 2 && (*(_DWORD *)(v11 + 240) != 2 || ((v14 - 3) & 0xFFFFFFFC) != 0 || v14 == 4)
      || *(_DWORD *)(v11 + 3088) == -1
      || *(_DWORD *)(v11 + 3808) == 1
      || *(_DWORD *)(v11 + 284) != 1
      || !*(_QWORD *)(v11 + 4720) )
    {
      goto LABEL_33;
    }
    LowerDeviceObject = a1;
    ObfReferenceObject(a1);
    if ( a1 )
    {
      do
      {
        if ( LowerDeviceObject == *(PDEVICE_OBJECT *)(v11 + 24) )
          break;
        v18 = LowerDeviceObject;
        LowerDeviceObject = IoGetLowerDeviceObject(LowerDeviceObject);
        ObfDereferenceObject(v18);
      }
      while ( LowerDeviceObject );
      if ( LowerDeviceObject )
        ObfDereferenceObject(LowerDeviceObject);
    }
    if ( LowerDeviceObject != *(PDEVICE_OBJECT *)(v11 + 24) )
    {
      v13 = (struct _IO_REMOVE_LOCK *)(v11 + 64);
LABEL_33:
      if ( *(_BYTE *)(v11 + 483) )
        DpiEnableD3Requests(*(_QWORD *)(v11 + 24));
      ExReleaseResourceLite(*(PERESOURCE *)(v11 + 168));
      KeLeaveCriticalRegion();
      IoReleaseRemoveLockEx(v13, (PVOID)v11, 0x20u);
      v6 = 0LL;
      v17 = 0LL;
      goto LABEL_36;
    }
    MiracastSupportInternal = 0;
LABEL_39:
    KeReleaseMutex((PRKMUTEX)(v10 + 72), 0);
    v10 = *(_QWORD *)v10;
  }
  while ( *(_QWORD *)v10 != qword_1C007A778 );
  v5 = a2;
LABEL_41:
  if ( MiracastSupportInternal < 0 )
  {
    if ( v6 )
    {
      if ( *(_BYTE *)(v6 + 483) )
        DpiEnableD3Requests(*(_QWORD *)(v6 + 24));
      ExReleaseResourceLite(*(PERESOURCE *)(v6 + 168));
      KeLeaveCriticalRegion();
    }
    goto LABEL_46;
  }
LABEL_51:
  *v5 = v6;
  MiracastSupportInternal = 0;
LABEL_47:
  if ( v4 )
  {
    _InterlockedExchange64(&qword_1C007A788, 0LL);
    KeReleaseMutex((PRKMUTEX)Mutex, 0);
  }
  return (unsigned int)MiracastSupportInternal;
}
