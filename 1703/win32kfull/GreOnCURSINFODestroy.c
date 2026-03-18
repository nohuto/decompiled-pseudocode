/*
 * XREFs of GreOnCURSINFODestroy @ 0x1C00451AC
 * Callers:
 *     ?CleanupCursorObject@@YAXPEAUtagCURSOR@@@Z @ 0x1C00450D4 (-CleanupCursorObject@@YAXPEAUtagCURSOR@@@Z.c)
 * Callees:
 *     ?vUnlock@SPRITERANGELOCK@@QEAAXXZ @ 0x1C0025370 (-vUnlock@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ??0SEMOBJSHARED@@QEAA@PEAUHSEMAPHORE__@@@Z @ 0x1C00473F0 (--0SEMOBJSHARED@@QEAA@PEAUHSEMAPHORE__@@@Z.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00875DC (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     _lambda_99abfd18865ed9d0c307366addb35405_::operator() @ 0x1C024A53C (_lambda_99abfd18865ed9d0c307366addb35405_--operator().c)
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
        lambda_99abfd18865ed9d0c307366addb35405_::operator()(v5, v4, a1);
      }
      else
      {
        v8 = ghsemGreLock;
        GreAcquireSemaphore(ghsemGreLock);
        lambda_99abfd18865ed9d0c307366addb35405_::operator()(v6, v4, a1);
        SEMOBJ::vUnlock((SEMOBJ *)&v8);
      }
    }
    SPRITERANGELOCK::vUnlock((SPRITERANGELOCK *)&v9);
  }
}
