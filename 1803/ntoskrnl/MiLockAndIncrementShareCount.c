/*
 * XREFs of MiLockAndIncrementShareCount @ 0x14007165C
 * Callers:
 *     MiInitializePfnForOtherProcess @ 0x140071528 (MiInitializePfnForOtherProcess.c)
 * Callees:
 *     MiLockPageInline @ 0x1400EB9C0 (MiLockPageInline.c)
 */

__int64 __fastcall MiLockAndIncrementShareCount(__int64 a1)
{
  __int64 v1; // rbx
  __int64 result; // rax

  v1 = 48 * a1 - 0x58000000000LL;
  LOBYTE(result) = MiLockPageInline(v1);
  *(_QWORD *)(v1 + 24) ^= (*(_QWORD *)(v1 + 24) ^ (*(_QWORD *)(v1 + 24) + 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(v1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  result = (unsigned __int8)result;
  __writecr8((unsigned __int8)result);
  return result;
}
