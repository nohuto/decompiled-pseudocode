/*
 * XREFs of ?CheckOcclusionState@CHolographicInteropTarget@@UEAAJXZ @ 0x1801C1640
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CHolographicInteropTarget::CheckOcclusionState(CHolographicInteropTarget *this)
{
  __int64 v1; // rax
  __int64 v2; // rax

  v1 = *((_QWORD *)this + 6);
  if ( v1 && (v2 = *(_QWORD *)(v1 + 32)) != 0 && !*(_BYTE *)(v2 + 144) )
    return 0LL;
  else
    return 142213121LL;
}
