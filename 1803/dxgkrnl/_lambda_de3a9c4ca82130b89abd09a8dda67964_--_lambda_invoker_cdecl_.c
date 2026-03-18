/*
 * XREFs of _lambda_de3a9c4ca82130b89abd09a8dda67964_::_lambda_invoker_cdecl_ @ 0x1C0150450
 * Callers:
 *     ?DxgkDestroyAllocationHelper@@YAJPEAVDXGPROCESS@@IIPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C00E3450 (-DxgkDestroyAllocationHelper@@YAJPEAVDXGPROCESS@@IIPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAU.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall lambda_de3a9c4ca82130b89abd09a8dda67964_::_lambda_invoker_cdecl_(
        struct OUTPUTDUPL_MGR_INDIRECT *a1,
        __int64 (__fastcall **a2)(_QWORD, _QWORD))
{
  if ( *a2 == *((__int64 (__fastcall **)(_QWORD, _QWORD))a1 + 14) )
    return ((__int64 (__fastcall **)(char *, _QWORD))a2)[1]((char *)a1 + 24, a2[2]);
  else
    return 0LL;
}
