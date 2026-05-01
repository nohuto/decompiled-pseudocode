/*
 * XREFs of ?OnPlaceModeMoveToInitialPosition@CDragVisualAcc@@UEAAXXZ @ 0x1802F9760
 * Callers:
 *     <none>
 * Callees:
 *     ?SetDropEffect@CDragVisualAcc@@UEAAXPEBG@Z @ 0x1802F9A50 (-SetDropEffect@CDragVisualAcc@@UEAAXPEBG@Z.c)
 */

void __fastcall CDragVisualAcc::OnPlaceModeMoveToInitialPosition(CDragVisualAcc *this)
{
  const unsigned __int16 *v1; // rdx

  v1 = (const unsigned __int16 *)*((_QWORD *)this + 13);
  if ( v1 )
    CDragVisualAcc::SetDropEffect(this, v1);
}
