/*
 * XREFs of FxFreeDriverGlobals @ 0x1C00806FC
 * Callers:
 *     FxLibraryCommonUnregisterClient @ 0x1C00736A8 (FxLibraryCommonUnregisterClient.c)
 * Callees:
 *     <none>
 */

void __fastcall FxFreeDriverGlobals(_WDF_DRIVER_GLOBALS *DriverGlobals)
{
  char *DriverName; // rbx
  KIRQL v2; // al
  __int64 v3; // r8
  char **v4; // rdx
  __int64 v5; // rdi
  _QWORD *v6; // rdi
  void *v7; // rcx
  void *v8; // rcx
  void *v9; // rcx
  void *v10; // rcx

  DriverName = DriverGlobals[-8].DriverName;
  v2 = KeAcquireSpinLockRaiseToDpc(&FxLibraryGlobals.FxDriverGlobalsListLock.m_Lock);
  v3 = *(_QWORD *)DriverName;
  if ( *(char **)(*(_QWORD *)DriverName + 8LL) != DriverName
    || (v4 = (char **)*((_QWORD *)DriverName + 1), *v4 != DriverName) )
  {
    __fastfail(3u);
  }
  *v4 = (char *)v3;
  *(_QWORD *)(v3 + 8) = v4;
  *((_QWORD *)DriverName + 1) = DriverName;
  *(_QWORD *)DriverName = DriverName;
  KeReleaseSpinLock(&FxLibraryGlobals.FxDriverGlobalsListLock.m_Lock, v2);
  v5 = *((_QWORD *)DriverName + 10);
  if ( v5 )
  {
    v6 = *(_QWORD **)(v5 + 400);
    while ( v6 )
    {
      v7 = v6;
      v6 = (_QWORD *)v6[49];
      ExFreePoolWithTag(v7, 0);
    }
    v8 = (void *)**((_QWORD **)DriverName + 10);
    if ( v8 )
    {
      ExFreePoolWithTag(v8, 0);
      **((_QWORD **)DriverName + 10) = 0LL;
    }
    *(_BYTE *)(*((_QWORD *)DriverName + 10) + 432LL) = 0;
    ExFreePoolWithTag(*((PVOID *)DriverName + 10), 0);
    *((_QWORD *)DriverName + 10) = 0LL;
  }
  v9 = (void *)*((_QWORD *)DriverName + 41);
  if ( v9 )
    ExFreePoolWithTag(v9, 0);
  v10 = (void *)*((_QWORD *)DriverName + 52);
  DriverName[48] = 0;
  if ( v10 )
  {
    ExFreePoolWithTag(v10, 0);
    *((_QWORD *)DriverName + 52) = 0LL;
  }
  ExFreePoolWithTag(DriverName, 0);
}
