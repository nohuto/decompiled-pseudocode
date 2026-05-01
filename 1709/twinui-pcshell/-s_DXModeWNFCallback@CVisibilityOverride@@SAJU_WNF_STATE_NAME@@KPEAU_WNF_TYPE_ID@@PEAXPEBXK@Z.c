/*
 * XREFs of ?s_DXModeWNFCallback@CVisibilityOverride@@SAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z @ 0x18002D460
 * Callers:
 *     <none>
 * Callees:
 *     ?_ProcessOverride@CVisibilityOverride@@AEAAXXZ @ 0x18002D3F4 (-_ProcessOverride@CVisibilityOverride@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CVisibilityOverride::s_DXModeWNFCallback(
        struct _WNF_STATE_NAME a1,
        __int64 a2,
        struct _WNF_TYPE_ID *a3,
        RTL_SRWLOCK *a4)
{
  RTL_SRWLOCK *v5; // rdi

  v5 = a4 + 9;
  AcquireSRWLockExclusive(a4 + 9);
  CVisibilityOverride::_ProcessOverride((CVisibilityOverride *)a4);
  if ( v5 )
    ReleaseSRWLockExclusive(v5);
  return 0LL;
}
