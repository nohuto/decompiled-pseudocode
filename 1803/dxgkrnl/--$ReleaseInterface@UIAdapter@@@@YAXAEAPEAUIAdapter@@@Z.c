/*
 * XREFs of ??$ReleaseInterface@UIAdapter@@@@YAXAEAPEAUIAdapter@@@Z @ 0x1C004CDD8
 * Callers:
 *     ?InsertCompletedToken@CCompositionSurface@@MEAAJ_K0PEAUtagCloneableFlipTokenData@@@Z @ 0x1C004C5E0 (-InsertCompletedToken@CCompositionSurface@@MEAAJ_K0PEAUtagCloneableFlipTokenData@@@Z.c)
 *     ?DisableCascadedSignaling@CFlipExBuffer@@QEAAXXZ @ 0x1C004CE24 (-DisableCascadedSignaling@CFlipExBuffer@@QEAAXXZ.c)
 *     ?EnableCascadedSignaling@CFlipExBuffer@@QEAAJPEAUCSM_BUFFER_INFO@@@Z @ 0x1C004CEBC (-EnableCascadedSignaling@CFlipExBuffer@@QEAAJPEAUCSM_BUFFER_INFO@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ReleaseInterface<IAdapter>(__int64 *a1)
{
  __int64 v2; // rcx
  __int64 result; // rax

  v2 = *a1;
  if ( v2 )
  {
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
    *a1 = 0LL;
  }
  return result;
}
