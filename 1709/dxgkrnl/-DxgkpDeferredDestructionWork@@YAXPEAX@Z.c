/*
 * XREFs of ?DxgkpDeferredDestructionWork@@YAXPEAX@Z @ 0x1C007FDE0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CEnsureCurrentDxgProcess@@QEAA@XZ @ 0x1C0001354 (--1CEnsureCurrentDxgProcess@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     ?AttachToProcess@CEnsureCurrentDxgProcess@@QEAAJPEAVDXGPROCESS@@@Z @ 0x1C0021680 (-AttachToProcess@CEnsureCurrentDxgProcess@@QEAAJPEAVDXGPROCESS@@@Z.c)
 *     ?DeleteTerminationTracker@ADAPTER_RENDER@@QEAAXPEAVDXGTERMINATIONTRACKER@@@Z @ 0x1C007FFB4 (-DeleteTerminationTracker@ADAPTER_RENDER@@QEAAXPEAVDXGTERMINATIONTRACKER@@@Z.c)
 *     ?DestroyDeferredAllocations@DXGDEVICE@@QEAAXPEAVDXGTERMINATIONTRACKER@@@Z @ 0x1C009CB10 (-DestroyDeferredAllocations@DXGDEVICE@@QEAAXPEAVDXGTERMINATIONTRACKER@@@Z.c)
 *     ??1DXGRESOURCE@@QEAA@XZ @ 0x1C00F2F2C (--1DXGRESOURCE@@QEAA@XZ.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C01A9EA0 (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 */

void __fastcall DxgkpDeferredDestructionWork(struct _EX_RUNDOWN_REF *this)
{
  ULONG_PTR *Count; // rdi
  struct DXGTERMINATIONTRACKER *v3; // rbx
  struct DXGPROCESS *v4; // rdx
  DXGDEVICE *v5; // rcx
  ULONG_PTR v6; // rcx
  DXGRESOURCE *v7; // rdi
  __int64 v8; // [rsp+20h] [rbp-58h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+28h] [rbp-50h] BYREF

  while ( 1 )
  {
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(&this[126], 0LL);
    this[127].Count = (ULONG_PTR)KeGetCurrentThread();
    Count = (ULONG_PTR *)this[125].Count;
    if ( Count )
      this[125].Count = *Count;
    else
      LOBYTE(this[132].Count) = 0;
    this[127].Count = 0LL;
    ExReleasePushLockExclusiveEx(&this[126], 0LL);
    KeLeaveCriticalRegion();
    v3 = (struct DXGTERMINATIONTRACKER *)(Count - 7);
    if ( !Count )
      v3 = 0LL;
    if ( !v3 )
      break;
    KeStackAttachProcess(*((PRKPROCESS *)v3 + 2), &ApcState);
    v4 = *(struct DXGPROCESS **)(*((_QWORD *)v3 + 3) + 40LL);
    v8 = 0LL;
    if ( (*((_BYTE *)v4 + 307) & 8) != 0 )
      CEnsureCurrentDxgProcess::AttachToProcess((CEnsureCurrentDxgProcess *)&v8, v4);
    v5 = (DXGDEVICE *)*((_QWORD *)v3 + 3);
    if ( *(_QWORD *)v3 )
    {
      DXGDEVICE::DestroyDeferredAllocations(v5, v3);
      v7 = *(DXGRESOURCE **)v3;
      if ( *(_QWORD *)v3 )
      {
        DXGRESOURCE::~DXGRESOURCE(*(DXGRESOURCE **)v3);
        ExFreePoolWithTag(v7, 0);
      }
    }
    else
    {
      DXGDEVICE::DestroyDeferredAllocations(v5, v3);
    }
    CEnsureCurrentDxgProcess::~CEnsureCurrentDxgProcess((CEnsureCurrentDxgProcess *)&v8);
    KeUnstackDetachProcess(&ApcState);
    ObfDereferenceObject(*((PVOID *)v3 + 2));
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(&this[135], 0LL);
    this[136].Count = (ULONG_PTR)KeGetCurrentThread();
    this[133].Count -= *((_QWORD *)v3 + 5);
    this[136].Count = 0LL;
    ExReleasePushLockExclusiveEx(&this[135], 0LL);
    KeLeaveCriticalRegion();
    ADAPTER_RENDER::DeleteTerminationTracker((ADAPTER_RENDER *)this, v3);
  }
  ExReleaseRundownProtection(this + 134);
  v6 = this[2].Count;
  if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v6 + 24), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    DXGGLOBAL::DestroyAdapter(*(DXGGLOBAL **)(v6 + 16), (struct DXGADAPTER *)v6);
}
