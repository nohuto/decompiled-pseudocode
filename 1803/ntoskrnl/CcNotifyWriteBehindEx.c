/*
 * XREFs of CcNotifyWriteBehindEx @ 0x14014DA40
 * Callers:
 *     MiFlushAllPagesWorker @ 0x14014D944 (MiFlushAllPagesWorker.c)
 *     MiObtainFreePages @ 0x140259A20 (MiObtainFreePages.c)
 * Callees:
 *     CcNotifyWriteBehindInternal @ 0x1400C525C (CcNotifyWriteBehindInternal.c)
 */

LONG __fastcall CcNotifyWriteBehindEx(LONG a1, __int64 a2)
{
  LONG result; // eax
  struct _KEVENT *v3; // rcx

  result = a1;
  v3 = *(struct _KEVENT **)(a2 + 8);
  if ( v3 )
    return CcNotifyWriteBehindInternal(v3, result);
  return result;
}
