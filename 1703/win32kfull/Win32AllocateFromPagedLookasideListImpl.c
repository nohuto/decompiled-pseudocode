/*
 * XREFs of Win32AllocateFromPagedLookasideListImpl @ 0x1C00D2DD0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C01400F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0140500 (memset.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C02B861C (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAV.c)
 */

struct _SLIST_ENTRY *__fastcall Win32AllocateFromPagedLookasideListImpl(PSLIST_HEADER ListHead)
{
  PVOID v2; // rbp
  struct _SLIST_ENTRY *v3; // rdi
  __int64 v5; // rdx
  __int64 (__fastcall *Alignment)(__int64, __int64, __int64); // rax
  __int64 v7; // r8
  __int64 v8; // rcx
  PVOID BackTrace[20]; // [rsp+20h] [rbp-A8h] BYREF

  ++*((_DWORD *)&ListHead[2].HeaderX64 + 1);
  v2 = gpLeakTrackingAllocator;
  v3 = ExpInterlockedPopEntrySList(ListHead + 1);
  if ( !v3 )
  {
    v5 = *((unsigned int *)&ListHead[3].HeaderX64 + 3);
    Alignment = (__int64 (__fastcall *)(__int64, __int64, __int64))ListHead[4].Alignment;
    v7 = *((unsigned int *)&ListHead[3].HeaderX64 + 2);
    v8 = *((unsigned int *)&ListHead[3].HeaderX64 + 1);
    ++*((_DWORD *)&ListHead[2].HeaderX64 + 2);
    v3 = (struct _SLIST_ENTRY *)Alignment(v8, v5, v7);
    if ( !v3 )
      return 0LL;
  }
  if ( !LOBYTE(ListHead->Alignment) )
    return v3;
  memset(BackTrace, 0, sizeof(BackTrace));
  RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
  if ( !(unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                           v2,
                           v3,
                           BackTrace) )
  {
    ++*((_DWORD *)&ListHead[1].HeaderX64 + 3);
    if ( ExQueryDepthSList(ListHead) < LOWORD(ListHead[1].Alignment) )
    {
      ExpInterlockedPushEntrySList(ListHead, v3);
    }
    else
    {
      ++LODWORD(ListHead[2].Alignment);
      ((void (__fastcall *)(struct _SLIST_ENTRY *))ListHead[3].Region)(v3);
    }
    return 0LL;
  }
  return v3 + 1;
}
