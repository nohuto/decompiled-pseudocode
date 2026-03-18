/*
 * XREFs of CcNotifyWriteBehindEx @ 0x1401E0540
 * Callers:
 *     MiObtainFreePages @ 0x14021D8D8 (MiObtainFreePages.c)
 *     MiFlushAllPagesWorker @ 0x140225AB0 (MiFlushAllPagesWorker.c)
 * Callees:
 *     CcNotifyWriteBehindInternal @ 0x140125F3C (CcNotifyWriteBehindInternal.c)
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
