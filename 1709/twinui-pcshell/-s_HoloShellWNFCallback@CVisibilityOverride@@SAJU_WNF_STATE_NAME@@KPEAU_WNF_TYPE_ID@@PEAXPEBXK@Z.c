/*
 * XREFs of ?s_HoloShellWNFCallback@CVisibilityOverride@@SAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z @ 0x18002D4B0
 * Callers:
 *     <none>
 * Callees:
 *     ?_ProcessOverride@CVisibilityOverride@@AEAAXXZ @ 0x18002D3F4 (-_ProcessOverride@CVisibilityOverride@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CVisibilityOverride::s_HoloShellWNFCallback(
        struct _WNF_STATE_NAME a1,
        __int64 a2,
        struct _WNF_TYPE_ID *a3,
        RTL_SRWLOCK *a4,
        int *a5,
        unsigned int a6)
{
  int v7; // esi
  RTL_SRWLOCK *v8; // rbx
  bool v9; // al

  if ( !a5 || a6 != 4 )
    return 2147549183LL;
  v7 = *a5;
  v8 = a4 + 9;
  AcquireSRWLockExclusive(a4 + 9);
  v9 = !v7 || v7 == 5;
  LOBYTE(a4[11].Ptr) = v9;
  CVisibilityOverride::_ProcessOverride((CVisibilityOverride *)a4);
  if ( v8 )
    ReleaseSRWLockExclusive(v8);
  return 0LL;
}
