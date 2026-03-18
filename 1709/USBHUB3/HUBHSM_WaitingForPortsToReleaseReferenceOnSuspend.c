/*
 * XREFs of HUBHSM_WaitingForPortsToReleaseReferenceOnSuspend @ 0x1C00082E0
 * Callers:
 *     <none>
 * Callees:
 *     HUBSM_AddEvent @ 0x1C0009C48 (HUBSM_AddEvent.c)
 *     _guard_dispatch_icall_nop @ 0x1C0038E70 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBHSM_WaitingForPortsToReleaseReferenceOnSuspend(__int64 a1)
{
  __int64 v1; // rcx
  int v2; // eax
  _QWORD *v3; // rbx
  __int64 v4; // rcx
  _QWORD *i; // rdi

  v1 = *(_QWORD *)(a1 + 960);
  v2 = *(_DWORD *)(v1 + 2348);
  if ( v2 )
  {
    v3 = (_QWORD *)(v1 + 2352);
    *(_DWORD *)(v1 + 2324) = v2;
    v4 = *(_QWORD *)(v1 + 2352) - 248LL;
    for ( i = (_QWORD *)(v4 + 248); v3 != i; i = (_QWORD *)*i )
    {
      _InterlockedOr((volatile signed __int32 *)(v4 + 264), 4u);
      (*(void (__fastcall **)(__int64, __int64))(v4 + 1240))(v4, 3042LL);
      v4 = *i - 248LL;
    }
  }
  else
  {
    HUBSM_AddEvent(v1 + 1256, 2058LL);
  }
  return 1000LL;
}
