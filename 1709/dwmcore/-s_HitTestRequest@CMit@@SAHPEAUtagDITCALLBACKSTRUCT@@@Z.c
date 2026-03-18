/*
 * XREFs of ?s_HitTestRequest@CMit@@SAHPEAUtagDITCALLBACKSTRUCT@@@Z @ 0x1800BC590
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

_BOOL8 __fastcall CMit::s_HitTestRequest(struct tagDITCALLBACKSTRUCT *a1)
{
  return (*(int (__fastcall **)(struct ISystemInputHost *, struct tagDITCALLBACKSTRUCT *))(*(_QWORD *)CMit::s_pSystemInputHost
                                                                                         + 24LL))(
           CMit::s_pSystemInputHost,
           a1) >= 0;
}
