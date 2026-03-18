/*
 * XREFs of IoGetFsTrackOffsetState @ 0x140008A40
 * Callers:
 *     <none>
 * Callees:
 *     IopIrpHasExtensionType @ 0x140117EC8 (IopIrpHasExtensionType.c)
 */

__int64 __fastcall IoGetFsTrackOffsetState(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rcx
  _QWORD *v4; // r9
  _QWORD *v5; // r10
  __int64 v7; // rcx

  if ( !(unsigned __int8)IopIrpHasExtensionType(a1, 5LL, a3, a3) )
    return 3221226021LL;
  v7 = *(_QWORD *)(v3 + 200);
  *v5 = *(_QWORD *)(v7 + 40);
  *v4 = *(_QWORD *)(v7 + 48);
  return 0LL;
}
