/*
 * XREFs of ?CrmClientWNFCallback@@YAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z @ 0x18000D4D0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180007B90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CrmClientWNFCallback(
        struct _WNF_STATE_NAME a1,
        __int64 a2,
        struct _WNF_TYPE_ID *a3,
        void (__fastcall **a4)(_QWORD, _QWORD, _QWORD),
        unsigned int *a5,
        unsigned int a6)
{
  if ( a6 >= 4 )
    ((void (__fastcall **)(_QWORD, _QWORD, struct _WNF_TYPE_ID *))a4)[2](a4[3], *a5, a3);
  return 0LL;
}
