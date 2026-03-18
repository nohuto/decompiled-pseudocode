/*
 * XREFs of GreOnCURSINFODestroy @ 0x1C0099740
 * Callers:
 *     ?CleanupCursorObject@@YAXPEAUtagCURSOR@@@Z @ 0x1C0099668 (-CleanupCursorObject@@YAXPEAUtagCURSOR@@@Z.c)
 * Callees:
 *     ??0SEMOBJSHARED@@QEAA@PEAUHSEMAPHORE__@@@Z @ 0x1C00898B0 (--0SEMOBJSHARED@@QEAA@PEAUHSEMAPHORE__@@@Z.c)
 *     ?vUnlock@SPRITERANGELOCK@@QEAAXXZ @ 0x1C00898E4 (-vUnlock@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00F7C04 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     _lambda_9a8a047a5147a8b2f6bffa79fe7b2ec3_::operator() @ 0x1C024BE44 (_lambda_9a8a047a5147a8b2f6bffa79fe7b2ec3_--operator().c)
 */

void __fastcall GreOnCURSINFODestroy(struct _CURSINFO *a1)
{
  __int64 v2; // rcx
  __int64 HDEV; // rax
  __int64 v4; // rdi
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF
  __int64 v8; // [rsp+38h] [rbp+10h] BYREF
  char v9; // [rsp+40h] [rbp+18h] BYREF

  if ( gCachedSetPointerState == a1 )
  {
    SEMOBJSHARED::SEMOBJSHARED((SEMOBJSHARED *)&v9, ghsemDynamicModeChange);
    HDEV = UserGetHDEV(v2);
    if ( HDEV )
    {
      v7 = HDEV;
      v4 = *(_QWORD *)(HDEV + 48);
      if ( PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v7) )
      {
        lambda_9a8a047a5147a8b2f6bffa79fe7b2ec3_::operator()(v5, v4, a1);
      }
      else
      {
        v8 = ghsemGreLock;
        GreAcquireSemaphore(ghsemGreLock);
        lambda_9a8a047a5147a8b2f6bffa79fe7b2ec3_::operator()(v6, v4, a1);
        SEMOBJ::vUnlock((SEMOBJ *)&v8);
      }
    }
    SPRITERANGELOCK::vUnlock((SPRITERANGELOCK *)&v9);
  }
}
