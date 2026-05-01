/*
 * XREFs of ?SstpRundown@@YAXPEAU_SYSTEM_STATE_TRACKER@@@Z @ 0x180049A90
 * Callers:
 *     SystemStateTrackerStart @ 0x180020D58 (SystemStateTrackerStart.c)
 * Callees:
 *     ?SstpPublish@@YAXQEAU_SYSTEM_STATE_TRACKER@@@Z @ 0x180020FD4 (-SstpPublish@@YAXQEAU_SYSTEM_STATE_TRACKER@@@Z.c)
 */

void __fastcall SstpRundown(struct _SYSTEM_STATE_TRACKER *a1)
{
  int UniqueThread; // edx
  _QWORD *v3; // rdi
  __int64 v4; // rsi

  RtlAcquireSRWLockExclusive(a1);
  UniqueThread = (int)NtCurrentTeb()->ClientId.UniqueThread;
  *((_DWORD *)a1 + 4) &= ~1u;
  *((_DWORD *)a1 + 2) = UniqueThread;
  SstpPublish(a1);
  *((_DWORD *)a1 + 2) = 0;
  *((_DWORD *)a1 + 3) = 2;
  RtlReleaseSRWLockExclusive(a1);
  v3 = (_QWORD *)((char *)a1 + 48);
  v4 = 6LL;
  do
  {
    if ( *v3 )
      RtlUnsubscribeWnfNotificationWaitForCompletion();
    v3 += 4;
    --v4;
  }
  while ( v4 );
  memset_0((char *)a1 + 24, 0, 0xC0uLL);
}
