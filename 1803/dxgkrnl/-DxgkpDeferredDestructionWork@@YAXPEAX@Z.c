/*
 * XREFs of ?DxgkpDeferredDestructionWork@@YAXPEAX@Z @ 0x1C00A2DD0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CEnsureCurrentDxgProcess@@QEAA@XZ @ 0x1C0001D44 (--1CEnsureCurrentDxgProcess@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     ?AttachToProcess@CEnsureCurrentDxgProcess@@QEAAJPEAVDXGPROCESS@@@Z @ 0x1C0028BF8 (-AttachToProcess@CEnsureCurrentDxgProcess@@QEAAJPEAVDXGPROCESS@@@Z.c)
 *     ?DeleteTerminationTracker@ADAPTER_RENDER@@QEAAXPEAVDXGTERMINATIONTRACKER@@@Z @ 0x1C00A2FB0 (-DeleteTerminationTracker@ADAPTER_RENDER@@QEAAXPEAVDXGTERMINATIONTRACKER@@@Z.c)
 *     ??1DXGRESOURCE@@QEAA@XZ @ 0x1C00D35D0 (--1DXGRESOURCE@@QEAA@XZ.c)
 *     ?DestroyDeferredAllocations@DXGDEVICE@@QEAAXPEAVDXGTERMINATIONTRACKER@@@Z @ 0x1C00F1260 (-DestroyDeferredAllocations@DXGDEVICE@@QEAAXPEAVDXGTERMINATIONTRACKER@@@Z.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C019DB30 (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 */

void __fastcall DxgkpDeferredDestructionWork(struct _EX_RUNDOWN_REF *this)
{
  struct DXGTERMINATIONTRACKER *v2; // rsi
  ULONG_PTR *Count; // rcx
  DXGDEVICE *v4; // rcx
  struct DXGPROCESS *v5; // rdx
  DXGRESOURCE *v6; // rdi
  ULONG_PTR v7; // rcx
  DXGRESOURCE *v8; // rdi
  __int64 v9; // [rsp+20h] [rbp-58h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+28h] [rbp-50h] BYREF

  while ( 1 )
  {
    v2 = 0LL;
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(&this[128], 0LL);
    this[129].Count = (ULONG_PTR)KeGetCurrentThread();
    Count = (ULONG_PTR *)this[127].Count;
    if ( Count )
    {
      v2 = (struct DXGTERMINATIONTRACKER *)(Count - 7);
      this[127].Count = *Count;
    }
    else
    {
      LOBYTE(this[134].Count) = 0;
    }
    this[129].Count = 0LL;
    ExReleasePushLockExclusiveEx(&this[128], 0LL);
    KeLeaveCriticalRegion();
    if ( !v2 )
      break;
    KeStackAttachProcess(*((PRKPROCESS *)v2 + 2), &ApcState);
    v4 = (DXGDEVICE *)*((_QWORD *)v2 + 3);
    v5 = (struct DXGPROCESS *)*((_QWORD *)v4 + 5);
    v9 = 0LL;
    if ( (*((_BYTE *)v5 + 323) & 8) != 0 )
    {
      CEnsureCurrentDxgProcess::AttachToProcess((CEnsureCurrentDxgProcess *)&v9, v5);
      v4 = (DXGDEVICE *)*((_QWORD *)v2 + 3);
    }
    v6 = *(DXGRESOURCE **)v2;
    DXGDEVICE::DestroyDeferredAllocations(v4, v2);
    if ( v6 )
    {
      v8 = *(DXGRESOURCE **)v2;
      if ( *(_QWORD *)v2 )
      {
        DXGRESOURCE::~DXGRESOURCE(*(DXGRESOURCE **)v2);
        ExFreePoolWithTag(v8, 0);
      }
    }
    CEnsureCurrentDxgProcess::~CEnsureCurrentDxgProcess((CEnsureCurrentDxgProcess *)&v9);
    KeUnstackDetachProcess(&ApcState);
    ObfDereferenceObject(*((PVOID *)v2 + 2));
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(&this[137], 0LL);
    this[138].Count = (ULONG_PTR)KeGetCurrentThread();
    this[135].Count -= *((_QWORD *)v2 + 5);
    this[138].Count = 0LL;
    ExReleasePushLockExclusiveEx(&this[137], 0LL);
    KeLeaveCriticalRegion();
    ADAPTER_RENDER::DeleteTerminationTracker((ADAPTER_RENDER *)this, v2);
  }
  ExReleaseRundownProtection(this + 136);
  v7 = this[2].Count;
  if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v7 + 24), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    DXGGLOBAL::DestroyAdapter(*(DXGGLOBAL **)(v7 + 16), (struct DXGADAPTER *)v7);
}
