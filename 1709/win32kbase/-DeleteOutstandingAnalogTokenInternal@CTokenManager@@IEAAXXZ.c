/*
 * XREFs of ?DeleteOutstandingAnalogTokenInternal@CTokenManager@@IEAAXXZ @ 0x1C0035568
 * Callers:
 *     ?DeleteAllTokensInternal@CTokenManager@@IEAAXXZ @ 0x1C0035F20 (-DeleteAllTokensInternal@CTokenManager@@IEAAXXZ.c)
 *     ??1CTokenManager@@AEAA@XZ @ 0x1C003648C (--1CTokenManager@@AEAA@XZ.c)
 *     ?ConfirmOutstandingAnalogTokenInternal@CTokenManager@@IEAAXXZ @ 0x1C0153890 (-ConfirmOutstandingAnalogTokenInternal@CTokenManager@@IEAAXXZ.c)
 *     ?GetAnalogSurfaceUpdatesInternal@CTokenManager@@IEAAHIIPEAUCSM_SURFACE_UPDATE@@PEAI@Z @ 0x1C01539AC (-GetAnalogSurfaceUpdatesInternal@CTokenManager@@IEAAHIIPEAUCSM_SURFACE_UPDATE@@PEAI@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00AB7F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CTokenManager::DeleteOutstandingAnalogTokenInternal(CTokenManager *this)
{
  void (__fastcall ***v2)(_QWORD, __int64); // rcx

  v2 = (void (__fastcall ***)(_QWORD, __int64))*((_QWORD *)this + 28);
  if ( v2 )
  {
    (**v2)(v2, 1LL);
    *((_QWORD *)this + 28) = 0LL;
  }
}
