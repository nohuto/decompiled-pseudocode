/*
 * XREFs of ?ModernDDAWnfCallback@CDesktopManager@@SAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z @ 0x18004A870
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18004DEC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDesktopManager::ModernDDAWnfCallback(
        struct _WNF_STATE_NAME a1,
        __int64 a2,
        struct _WNF_TYPE_ID *a3,
        void (__fastcall ***a4)(_QWORD, const void *, struct _WNF_TYPE_ID *),
        const void *a5,
        unsigned int a6)
{
  if ( a6 == 392 && a4 )
    (**a4)(a4, a5, a3);
  return 0LL;
}
