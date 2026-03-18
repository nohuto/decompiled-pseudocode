/*
 * XREFs of ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C003BA28
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

void __fastcall PUSHLOCKEX::~PUSHLOCKEX(PUSHLOCKEX *this)
{
  __int64 v1; // rcx

  v1 = *(_QWORD *)this;
  if ( v1 )
  {
    ExReleasePushLockExclusiveEx(v1, 0LL);
    KeLeaveCriticalRegion();
  }
}
