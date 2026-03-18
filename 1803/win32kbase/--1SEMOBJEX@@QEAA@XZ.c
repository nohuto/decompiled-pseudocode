/*
 * XREFs of ??1SEMOBJEX@@QEAA@XZ @ 0x1C00C3708
 * Callers:
 *     GreDrvConnect @ 0x1C00C38D0 (GreDrvConnect.c)
 *     HDXDrvEscape @ 0x1C00C3C10 (HDXDrvEscape.c)
 * Callees:
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C005AB30 (EtwTraceGreLockReleaseSemaphore.c)
 */

void __fastcall SEMOBJEX::~SEMOBJEX(SEMOBJEX *this, __int64 a2, int a3)
{
  __int64 v3; // rdx
  struct _ERESOURCE *v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rdx
  struct _ERESOURCE *v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rdx
  struct _ERESOURCE *v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rdx
  struct _ERESOURCE *v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rdx
  struct _ERESOURCE *v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // rdx
  struct _ERESOURCE *v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // rdx
  struct _ERESOURCE *v23; // rcx
  __int64 v24; // rcx
  __int64 v25; // rcx

  v3 = *((_QWORD *)this + 7);
  if ( v3 )
  {
    EtwTraceGreLockReleaseSemaphore((__int64)L"hSem8", v3, a3);
    v5 = (struct _ERESOURCE *)*((_QWORD *)this + 7);
    if ( v5 )
    {
      ExReleaseResourceAndLeaveCriticalRegion(v5);
      PsLeavePriorityRegion(v6);
    }
  }
  v7 = *((_QWORD *)this + 6);
  if ( v7 )
  {
    EtwTraceGreLockReleaseSemaphore((__int64)L"hSem7", v7, a3);
    v8 = (struct _ERESOURCE *)*((_QWORD *)this + 6);
    if ( v8 )
    {
      ExReleaseResourceAndLeaveCriticalRegion(v8);
      PsLeavePriorityRegion(v9);
    }
  }
  v10 = *((_QWORD *)this + 5);
  if ( v10 )
  {
    EtwTraceGreLockReleaseSemaphore((__int64)L"hSem6", v10, a3);
    v11 = (struct _ERESOURCE *)*((_QWORD *)this + 5);
    if ( v11 )
    {
      ExReleaseResourceAndLeaveCriticalRegion(v11);
      PsLeavePriorityRegion(v12);
    }
  }
  v13 = *((_QWORD *)this + 4);
  if ( v13 )
  {
    EtwTraceGreLockReleaseSemaphore((__int64)L"hSem5", v13, a3);
    v14 = (struct _ERESOURCE *)*((_QWORD *)this + 4);
    if ( v14 )
    {
      ExReleaseResourceAndLeaveCriticalRegion(v14);
      PsLeavePriorityRegion(v15);
    }
  }
  v16 = *((_QWORD *)this + 3);
  if ( v16 )
  {
    EtwTraceGreLockReleaseSemaphore((__int64)L"hSem4", v16, a3);
    v17 = (struct _ERESOURCE *)*((_QWORD *)this + 3);
    if ( v17 )
    {
      ExReleaseResourceAndLeaveCriticalRegion(v17);
      PsLeavePriorityRegion(v18);
    }
  }
  v19 = *((_QWORD *)this + 2);
  if ( v19 )
  {
    EtwTraceGreLockReleaseSemaphore((__int64)L"hSem3", v19, a3);
    v20 = (struct _ERESOURCE *)*((_QWORD *)this + 2);
    if ( v20 )
    {
      ExReleaseResourceAndLeaveCriticalRegion(v20);
      PsLeavePriorityRegion(v21);
    }
  }
  v22 = *((_QWORD *)this + 1);
  if ( v22 )
  {
    EtwTraceGreLockReleaseSemaphore((__int64)L"hSem2", v22, a3);
    v23 = (struct _ERESOURCE *)*((_QWORD *)this + 1);
    if ( v23 )
    {
      ExReleaseResourceAndLeaveCriticalRegion(v23);
      PsLeavePriorityRegion(v24);
    }
  }
  if ( *(_QWORD *)this )
  {
    EtwTraceGreLockReleaseSemaphore((__int64)L"hSem1", *(_QWORD *)this, a3);
    if ( *(_QWORD *)this )
    {
      ExReleaseResourceAndLeaveCriticalRegion(*(PERESOURCE *)this);
      PsLeavePriorityRegion(v25);
    }
  }
}
