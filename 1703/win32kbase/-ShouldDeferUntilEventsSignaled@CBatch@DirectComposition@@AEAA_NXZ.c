/*
 * XREFs of ?ShouldDeferUntilEventsSignaled@CBatch@DirectComposition@@AEAA_NXZ @ 0x1C0015FD8
 * Callers:
 *     ?ShouldDefer@CBatch@DirectComposition@@QEAA_N_JPEAVCEvent@2@PEAW4DeferReason@12@@Z @ 0x1C0016278 (-ShouldDefer@CBatch@DirectComposition@@QEAA_N_JPEAVCEvent@2@PEAW4DeferReason@12@@Z.c)
 * Callees:
 *     ??_GCEvent@DirectComposition@@QEAAPEAXI@Z @ 0x1C008207C (--_GCEvent@DirectComposition@@QEAAPEAXI@Z.c)
 */

char __fastcall DirectComposition::CBatch::ShouldDeferUntilEventsSignaled(DirectComposition::CBatch *this)
{
  __int64 v3; // rcx
  unsigned int v4; // edx
  DirectComposition::CEvent *v5; // rcx
  __int64 v6; // rdi
  union _LARGE_INTEGER Timeout; // [rsp+40h] [rbp+8h] BYREF

  if ( !*((_QWORD *)this + 13) )
    return 0;
  while ( 1 )
  {
    v3 = *((_QWORD *)this + 13);
    Timeout.QuadPart = 0LL;
    if ( KeWaitForSingleObject(*(PVOID *)(v3 + 8), UserRequest, 0, 0, &Timeout) )
      break;
    v5 = (DirectComposition::CEvent *)*((_QWORD *)this + 13);
    v6 = *(_QWORD *)v5;
    if ( v5 )
      DirectComposition::CEvent::`scalar deleting destructor'(v5, v4);
    *((_QWORD *)this + 13) = v6;
    if ( !v6 )
      return 0;
  }
  return 1;
}
