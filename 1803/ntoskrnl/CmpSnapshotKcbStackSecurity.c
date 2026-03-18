/*
 * XREFs of CmpSnapshotKcbStackSecurity @ 0x1406F6844
 * Callers:
 *     CmDeleteValueKey @ 0x14049B18C (CmDeleteValueKey.c)
 *     CmSetValueKey @ 0x1404A4924 (CmSetValueKey.c)
 * Callees:
 *     CmpAllocateTransientPoolWithTag @ 0x140009020 (CmpAllocateTransientPoolWithTag.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 *     CmpGetSecurityCacheEntryForKcbStack @ 0x1404A81C4 (CmpGetSecurityCacheEntryForKcbStack.c)
 */

__int64 __fastcall CmpSnapshotKcbStackSecurity(__int64 a1, __int64 a2, ULONG a3, _QWORD *a4)
{
  __int64 SecurityCacheEntryForKcbStack; // rdi
  PVOID TransientPoolWithTag; // rax
  unsigned int v8; // ebx
  PVOID v9; // rsi

  SecurityCacheEntryForKcbStack = CmpGetSecurityCacheEntryForKcbStack(a1, a2);
  TransientPoolWithTag = CmpAllocateTransientPoolWithTag(
                           PagedPool,
                           *(unsigned int *)(SecurityCacheEntryForKcbStack + 24),
                           a3);
  v8 = 0;
  v9 = TransientPoolWithTag;
  if ( TransientPoolWithTag )
  {
    memmove(
      TransientPoolWithTag,
      (const void *)(SecurityCacheEntryForKcbStack + 32),
      *(unsigned int *)(SecurityCacheEntryForKcbStack + 24));
    *a4 = v9;
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v8;
}
