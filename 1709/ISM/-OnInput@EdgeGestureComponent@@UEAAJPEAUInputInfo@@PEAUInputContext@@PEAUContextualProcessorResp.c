/*
 * XREFs of ?OnInput@EdgeGestureComponent@@UEAAJPEAUInputInfo@@PEAUInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x18002AA10
 * Callers:
 *     <none>
 * Callees:
 *     ?OnContextualInput@EdgeGestureTarget@@QEAAJPEAUInputInfo@@PEAUInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x18002D470 (-OnContextualInput@EdgeGestureTarget@@QEAAJPEAUInputInfo@@PEAUInputContext@@PEAUContextualProces.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall EdgeGestureComponent::OnInput(
        EdgeGestureComponent *this,
        struct InputInfo *a2,
        struct InputContext *a3,
        struct ContextualProcessorResponse *a4)
{
  EdgeGestureTarget *v4; // rcx
  unsigned int v5; // ebx
  __int64 v6; // rcx

  v4 = (EdgeGestureTarget *)*((_QWORD *)this + 10);
  v5 = 0;
  if ( v4 )
  {
    return (unsigned int)EdgeGestureTarget::OnContextualInput(v4, a2, a3, a4);
  }
  else
  {
    *(_DWORD *)a4 = 0;
    v6 = *((_QWORD *)a4 + 2);
    if ( v6 )
    {
      *((_QWORD *)a4 + 2) = 0LL;
      (*(void (__fastcall **)(__int64, struct InputInfo *, struct InputContext *))(*(_QWORD *)v6 + 16LL))(v6, a2, a3);
    }
  }
  return v5;
}
