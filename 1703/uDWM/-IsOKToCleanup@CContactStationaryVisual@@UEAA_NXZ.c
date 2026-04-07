/*
 * XREFs of ?IsOKToCleanup@CContactStationaryVisual@@UEAA_NXZ @ 0x18008B700
 * Callers:
 *     ?CleanupFinishedAnimations@CContactManager@@AEAAXXZ @ 0x180070700 (-CleanupFinishedAnimations@CContactManager@@AEAAXXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CContactStationaryVisual::IsOKToCleanup(CContactStationaryVisual *this)
{
  __int64 v1; // rdx
  __int64 result; // rax
  __int64 v3; // rcx

  v1 = *((_QWORD *)this + 44);
  result = 0LL;
  if ( !v1 || *(_BYTE *)(v1 + 72) )
  {
    v3 = *((_QWORD *)this + 45);
    if ( !v3 || *(_BYTE *)(v3 + 72) )
      return 1LL;
  }
  return result;
}
