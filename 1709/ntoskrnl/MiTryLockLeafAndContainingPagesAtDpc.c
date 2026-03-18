/*
 * XREFs of MiTryLockLeafAndContainingPagesAtDpc @ 0x1400CBF98
 * Callers:
 *     MiCopyDataPageToImagePage @ 0x140027210 (MiCopyDataPageToImagePage.c)
 *     MiCopyHeaderIfResident @ 0x1400B6F80 (MiCopyHeaderIfResident.c)
 * Callees:
 *     MiTryLockProtoPoolPageAtDpc @ 0x1400CBFFC (MiTryLockProtoPoolPageAtDpc.c)
 *     MiTryLockLeafPage @ 0x1400CC170 (MiTryLockLeafPage.c)
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
