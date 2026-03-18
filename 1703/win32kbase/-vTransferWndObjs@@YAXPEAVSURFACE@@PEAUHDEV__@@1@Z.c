/*
 * XREFs of ?vTransferWndObjs@@YAXPEAVSURFACE@@PEAUHDEV__@@1@Z @ 0x1C00FB024
 * Callers:
 *     ?DrvTransferGdiObjects@@YAXPEAUHDEV__@@0K@Z @ 0x1C00F7538 (-DrvTransferGdiObjects@@YAXPEAUHDEV__@@0K@Z.c)
 * Callees:
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C0037A88 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     EngAcquireSemaphore @ 0x1C0037BB0 (EngAcquireSemaphore.c)
 *     ?vUnreferencePdev@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@@Z @ 0x1C0038940 (-vUnreferencePdev@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@@Z.c)
 *     ?vReferencePdev@PDEVOBJ@@QEAAXXZ @ 0x1C0038A40 (-vReferencePdev@PDEVOBJ@@QEAAXXZ.c)
 */

void __fastcall vTransferWndObjs(struct SURFACE *a1, PDEV *a2, HDEV a3)
{
  __int64 v6; // rcx
  __int64 i; // rbx
  __int64 j; // rdi
  HDEV v9; // [rsp+48h] [rbp+10h] BYREF
  PDEV *v10; // [rsp+50h] [rbp+18h] BYREF
  HSEMAPHORE v11; // [rsp+58h] [rbp+20h] BYREF

  v11 = ghsemWndobj;
  EngAcquireSemaphore(ghsemWndobj);
  v10 = a2;
  v9 = a3;
  for ( i = *(_QWORD *)GetgptoWrap(v6); i; i = *(_QWORD *)(i + 8) )
  {
    if ( *(struct SURFACE **)(i + 32) == a1 )
    {
      for ( j = *(_QWORD *)(i + 24); j; j = *(_QWORD *)(j + 160) )
      {
        PDEVOBJ::vReferencePdev((PDEVOBJ *)&v9);
        PDEVOBJ::vUnreferencePdev(&v10, 0);
      }
    }
  }
  SEMOBJ::vUnlock((PERESOURCE *)&v11);
}
