/*
 * XREFs of ?IsOKToCleanup@CFlickVisual@@UEAA_NXZ @ 0x1800899A0
 * Callers:
 *     ?CleanupFinishedAnimations@CContactManager@@AEAAXXZ @ 0x180070700 (-CleanupFinishedAnimations@CContactManager@@AEAAXXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CFlickVisual::IsOKToCleanup(CFlickVisual *this)
{
  __int64 v1; // rdx
  __int64 result; // rax

  v1 = *((_QWORD *)this + 44);
  result = 0LL;
  if ( !v1 || *(_BYTE *)(v1 + 72) )
    return 1LL;
  return result;
}
