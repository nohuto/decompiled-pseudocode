/*
 * XREFs of PsGetCurrentProcessWow64Process @ 0x1400B1100
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 PsGetCurrentProcessWow64Process()
{
  _WORD *v0; // rcx
  __int16 v2; // dx

  v0 = (_WORD *)KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[7];
  if ( v0 && ((v2 = v0[4], v2 == 332) || v2 == 452) )
    return *(_QWORD *)v0;
  else
    return 0LL;
}
