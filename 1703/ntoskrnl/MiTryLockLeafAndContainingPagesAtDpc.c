/*
 * XREFs of MiTryLockLeafAndContainingPagesAtDpc @ 0x14010A7AC
 * Callers:
 *     MiCopyHeaderIfResident @ 0x14005DFD4 (MiCopyHeaderIfResident.c)
 *     MiCopyDataPageToImagePage @ 0x140095B10 (MiCopyDataPageToImagePage.c)
 * Callees:
 *     MiTryLockProtoPoolPageAtDpc @ 0x14010A810 (MiTryLockProtoPoolPageAtDpc.c)
 *     MiTryLockLeafPage @ 0x14010AED8 (MiTryLockLeafPage.c)
 */

__int64 __fastcall MiTryLockLeafAndContainingPagesAtDpc(__int64 a1, __int64 *a2, unsigned int a3)
{
  __int64 result; // rax
  __int64 v7; // rbx
  __int64 v8; // rax

  *a2 = 0LL;
  result = MiTryLockProtoPoolPageAtDpc(a1, a3);
  v7 = result;
  if ( result )
  {
    v8 = MiTryLockLeafPage(a1, a3);
    if ( v8 )
      *a2 = v8;
    return v7;
  }
  return result;
}
