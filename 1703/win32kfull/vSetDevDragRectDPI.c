/*
 * XREFs of vSetDevDragRectDPI @ 0x1C0266AA8
 * Callers:
 *     xxxDrawDragRectEx @ 0x1C01F64F0 (xxxDrawDragRectEx.c)
 * Callees:
 *     GreDwmNotifySpriteDPIChange @ 0x1C0022FD0 (GreDwmNotifySpriteDPIChange.c)
 *     ?vUnlock@SPRITERANGELOCK@@QEAAXXZ @ 0x1C0025370 (-vUnlock@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ??0SEMOBJSHARED@@QEAA@PEAUHSEMAPHORE__@@@Z @ 0x1C00473F0 (--0SEMOBJSHARED@@QEAA@PEAUHSEMAPHORE__@@@Z.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00875DC (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 */

void __fastcall vSetDevDragRectDPI(__int64 a1)
{
  __int64 v2; // rcx
  HSPRITE *v3; // rbx
  __int64 v4; // rdi
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF
  char v6; // [rsp+40h] [rbp+18h] BYREF

  SEMOBJSHARED::SEMOBJSHARED((SEMOBJSHARED *)&v6, ghsemDynamicModeChange);
  v5 = ghsemGreLock;
  GreAcquireSemaphore(ghsemGreLock);
  if ( a1 && *(_DWORD *)(a1 + 1188) )
  {
    v3 = (HSPRITE *)(a1 + 1208);
    v4 = 4LL;
    do
    {
      GreDwmNotifySpriteDPIChange(v2, 0LL, *v3++);
      --v4;
    }
    while ( v4 );
  }
  SEMOBJ::vUnlock((SEMOBJ *)&v5);
  SPRITERANGELOCK::vUnlock((SPRITERANGELOCK *)&v6);
}
