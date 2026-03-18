/*
 * XREFs of ?AllocateFromPagedLookasideList@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAXPEAX@Z @ 0x1C01954DC
 * Callers:
 *     Win32UAFMAllocateFromPagedLookasideListImpl @ 0x1C01E90C0 (Win32UAFMAllocateFromPagedLookasideListImpl.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C01400F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0140500 (memset.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C02B861C (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAV.c)
 */

struct _SLIST_ENTRY *__fastcall NSInstrumentation::CLeakTrackingAllocator::AllocateFromPagedLookasideList(
        NSInstrumentation::CLeakTrackingAllocator *this,
        union _SLIST_HEADER *a2)
{
  PVOID v2; // rbp
  struct _SLIST_ENTRY *v4; // rdi
  __int64 v5; // rdx
  __int64 (__fastcall *Alignment)(__int64, __int64, __int64); // rax
  __int64 v7; // r8
  __int64 v8; // rcx
  PVOID BackTrace[20]; // [rsp+20h] [rbp-A8h] BYREF

  v2 = gpLeakTrackingAllocator;
  ++*((_DWORD *)&a2[2].HeaderX64 + 1);
  v4 = ExpInterlockedPopEntrySList(a2 + 1);
  if ( !v4 )
  {
    v5 = *((unsigned int *)&a2[3].HeaderX64 + 3);
    Alignment = (__int64 (__fastcall *)(__int64, __int64, __int64))a2[4].Alignment;
    v7 = *((unsigned int *)&a2[3].HeaderX64 + 2);
    v8 = *((unsigned int *)&a2[3].HeaderX64 + 1);
    ++*((_DWORD *)&a2[2].HeaderX64 + 2);
    v4 = (struct _SLIST_ENTRY *)Alignment(v8, v5, v7);
    if ( !v4 )
      return 0LL;
  }
  if ( !LOBYTE(a2->Alignment) )
    return v4;
  memset(BackTrace, 0, sizeof(BackTrace));
  RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
  if ( !(unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                           v2,
                           v4,
                           BackTrace) )
  {
    ++*((_DWORD *)&a2[1].HeaderX64 + 3);
    if ( ExQueryDepthSList(a2) < LOWORD(a2[1].Alignment) )
    {
      ExpInterlockedPushEntrySList(a2, v4);
    }
    else
    {
      ++LODWORD(a2[2].Alignment);
      ((void (__fastcall *)(struct _SLIST_ENTRY *))a2[3].Region)(v4);
    }
    return 0LL;
  }
  return v4 + 1;
}
