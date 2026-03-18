/*
 * XREFs of ??1SEMOBJEX@@QEAA@XZ @ 0x1C009C33C
 * Callers:
 *     HDXDrvEscape @ 0x1C009C070 (HDXDrvEscape.c)
 *     GreDrvConnect @ 0x1C00EC270 (GreDrvConnect.c)
 * Callees:
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0076930 (EtwTraceGreLockReleaseSemaphore.c)
 */

void __fastcall SEMOBJEX::~SEMOBJEX(SEMOBJEX *this)
{
  struct _ERESOURCE *v2; // rcx
  __int64 v3; // rcx
  struct _ERESOURCE *v4; // rcx
  __int64 v5; // rcx
  struct _ERESOURCE *v6; // rcx
  __int64 v7; // rcx
  struct _ERESOURCE *v8; // rcx
  __int64 v9; // rcx
  struct _ERESOURCE *v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rcx
  struct _ERESOURCE *v13; // rcx
  __int64 v14; // rcx
  struct _ERESOURCE *v15; // rcx
  __int64 v16; // rcx

  if ( *((_QWORD *)this + 7) )
  {
    EtwTraceGreLockReleaseSemaphore((__int64)L"hSem8");
    v13 = (struct _ERESOURCE *)*((_QWORD *)this + 7);
    if ( v13 )
    {
      ExReleaseResourceAndLeaveCriticalRegion(v13);
      PsLeavePriorityRegion(v14);
    }
  }
  if ( *((_QWORD *)this + 6) )
  {
    EtwTraceGreLockReleaseSemaphore((__int64)L"hSem7");
    v15 = (struct _ERESOURCE *)*((_QWORD *)this + 6);
    if ( v15 )
    {
      ExReleaseResourceAndLeaveCriticalRegion(v15);
      PsLeavePriorityRegion(v16);
    }
  }
  if ( *((_QWORD *)this + 5) )
  {
    EtwTraceGreLockReleaseSemaphore((__int64)L"hSem6");
    v2 = (struct _ERESOURCE *)*((_QWORD *)this + 5);
    if ( v2 )
    {
      ExReleaseResourceAndLeaveCriticalRegion(v2);
      PsLeavePriorityRegion(v3);
    }
  }
  if ( *((_QWORD *)this + 4) )
  {
    EtwTraceGreLockReleaseSemaphore((__int64)L"hSem5");
    v4 = (struct _ERESOURCE *)*((_QWORD *)this + 4);
    if ( v4 )
    {
      ExReleaseResourceAndLeaveCriticalRegion(v4);
      PsLeavePriorityRegion(v5);
    }
  }
  if ( *((_QWORD *)this + 3) )
  {
    EtwTraceGreLockReleaseSemaphore((__int64)L"hSem4");
    v6 = (struct _ERESOURCE *)*((_QWORD *)this + 3);
    if ( v6 )
    {
      ExReleaseResourceAndLeaveCriticalRegion(v6);
      PsLeavePriorityRegion(v7);
    }
  }
  if ( *((_QWORD *)this + 2) )
  {
    EtwTraceGreLockReleaseSemaphore((__int64)L"hSem3");
    v8 = (struct _ERESOURCE *)*((_QWORD *)this + 2);
    if ( v8 )
    {
      ExReleaseResourceAndLeaveCriticalRegion(v8);
      PsLeavePriorityRegion(v9);
    }
  }
  if ( *((_QWORD *)this + 1) )
  {
    EtwTraceGreLockReleaseSemaphore((__int64)L"hSem2");
    v10 = (struct _ERESOURCE *)*((_QWORD *)this + 1);
    if ( v10 )
    {
      ExReleaseResourceAndLeaveCriticalRegion(v10);
      PsLeavePriorityRegion(v11);
    }
  }
  if ( *(_QWORD *)this )
  {
    EtwTraceGreLockReleaseSemaphore((__int64)L"hSem1");
    if ( *(_QWORD *)this )
    {
      ExReleaseResourceAndLeaveCriticalRegion(*(PERESOURCE *)this);
      PsLeavePriorityRegion(v12);
    }
  }
}
