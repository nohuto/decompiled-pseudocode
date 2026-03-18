/*
 * XREFs of ??0PUSHLOCKEX@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C003B9F4
 * Callers:
 *     ?RemoveLSurf@SURFACE@@QEAAXPEAVSFMLOGICALSURFACE@@@Z @ 0x1C001D380 (-RemoveLSurf@SURFACE@@QEAAXPEAVSFMLOGICALSURFACE@@@Z.c)
 *     ?AddLSurf@SURFACE@@QEAAXPEAVSFMLOGICALSURFACE@@@Z @ 0x1C001D3E0 (-AddLSurf@SURFACE@@QEAAXPEAVSFMLOGICALSURFACE@@@Z.c)
 *     xxxDestroyThreadInfo @ 0x1C0036210 (xxxDestroyThreadInfo.c)
 *     DestroyProcessInfo @ 0x1C003B604 (DestroyProcessInfo.c)
 *     EngFreeUserMem @ 0x1C003C200 (EngFreeUserMem.c)
 *     EngAllocUserMemEx @ 0x1C003C2AC (EngAllocUserMemEx.c)
 *     GreSfmGetNotificationTokens @ 0x1C004D250 (GreSfmGetNotificationTokens.c)
 * Callees:
 *     <none>
 */

PUSHLOCKEX *__fastcall PUSHLOCKEX::PUSHLOCKEX(PUSHLOCKEX *this, struct _EX_PUSH_LOCK *a2)
{
  *(_QWORD *)this = a2;
  if ( a2 )
  {
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(*(_QWORD *)this, 0LL);
  }
  return this;
}
