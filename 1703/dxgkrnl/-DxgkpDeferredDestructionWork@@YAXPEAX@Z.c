/*
 * XREFs of ?DxgkpDeferredDestructionWork@@YAXPEAX@Z @ 0x1C0095E10
 * Callers:
 *     <none>
 * Callees:
 *     ??1CEnsureCurrentDxgProcess@@QEAA@XZ @ 0x1C0001BB8 (--1CEnsureCurrentDxgProcess@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 *     ?AttachToProcess@CEnsureCurrentDxgProcess@@QEAAJPEAVDXGPROCESS@@@Z @ 0x1C00232E0 (-AttachToProcess@CEnsureCurrentDxgProcess@@QEAAJPEAVDXGPROCESS@@@Z.c)
 *     ??1DXGRESOURCE@@QEAA@XZ @ 0x1C009EFE8 (--1DXGRESOURCE@@QEAA@XZ.c)
 *     ?DestroyDeferredAllocations@DXGDEVICE@@QEAAXPEAVDXGTERMINATIONTRACKER@@@Z @ 0x1C00C9280 (-DestroyDeferredAllocations@DXGDEVICE@@QEAAXPEAVDXGTERMINATIONTRACKER@@@Z.c)
 *     ?PopDeferredTracker@ADAPTER_RENDER@@QEAAPEAVDXGTERMINATIONTRACKER@@XZ @ 0x1C00CEDFC (-PopDeferredTracker@ADAPTER_RENDER@@QEAAPEAVDXGTERMINATIONTRACKER@@XZ.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C019527C (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 */

void __fastcall DxgkpDeferredDestructionWork(struct _EX_RUNDOWN_REF *this)
{
  struct DXGTERMINATIONTRACKER *v2; // rax
  struct DXGTERMINATIONTRACKER *v3; // rbx
  struct DXGPROCESS *v4; // rdx
  DXGDEVICE *v5; // rcx
  ULONG_PTR Count; // rdi
  ULONG_PTR v7; // rcx
  DXGRESOURCE *v8; // rdi
  __int64 v9; // [rsp+20h] [rbp-48h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+28h] [rbp-40h] BYREF

  while ( 1 )
  {
    v2 = ADAPTER_RENDER::PopDeferredTracker((ADAPTER_RENDER *)this);
    v3 = v2;
    if ( !v2 )
      break;
    KeStackAttachProcess(*((PRKPROCESS *)v2 + 2), &ApcState);
    v4 = *(struct DXGPROCESS **)(*((_QWORD *)v3 + 3) + 40LL);
    v9 = 0LL;
    if ( (*((_BYTE *)v4 + 275) & 4) != 0 )
      CEnsureCurrentDxgProcess::AttachToProcess((CEnsureCurrentDxgProcess *)&v9, v4);
    v5 = (DXGDEVICE *)*((_QWORD *)v3 + 3);
    if ( *(_QWORD *)v3 )
    {
      DXGDEVICE::DestroyDeferredAllocations(v5, v3);
      v8 = *(DXGRESOURCE **)v3;
      if ( *(_QWORD *)v3 )
      {
        DXGRESOURCE::~DXGRESOURCE(*(DXGRESOURCE **)v3);
        ExFreePoolWithTag(v8, 0);
      }
    }
    else
    {
      DXGDEVICE::DestroyDeferredAllocations(v5, v3);
    }
    CEnsureCurrentDxgProcess::~CEnsureCurrentDxgProcess((CEnsureCurrentDxgProcess *)&v9);
    KeUnstackDetachProcess(&ApcState);
    ObfDereferenceObject(*((PVOID *)v3 + 2));
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(&this[123], 0LL);
    this[124].Count = (ULONG_PTR)KeGetCurrentThread();
    this[121].Count -= *((_QWORD *)v3 + 5);
    this[124].Count = 0LL;
    ExReleasePushLockExclusiveEx(&this[123], 0LL);
    KeLeaveCriticalRegion();
    Count = this[125].Count;
    ++*(_DWORD *)(Count + 28);
    if ( ExQueryDepthSList((PSLIST_HEADER)Count) >= *(_WORD *)(Count + 16) )
    {
      ++*(_DWORD *)(Count + 32);
      (*(void (__fastcall **)(struct DXGTERMINATIONTRACKER *, ULONG_PTR))(Count + 56))(v3, Count);
    }
    else
    {
      ExpInterlockedPushEntrySList((PSLIST_HEADER)Count, (PSLIST_ENTRY)v3);
    }
  }
  ExReleaseRundownProtection(this + 122);
  v7 = this[2].Count;
  if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v7 + 24), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    DXGGLOBAL::DestroyAdapter(*(DXGGLOBAL **)(v7 + 16), (struct DXGADAPTER *)v7);
}
