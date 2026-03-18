/*
 * XREFs of ?vTransferWndObjs@@YAXPEAVSURFACE@@PEAUHDEV__@@1@Z @ 0x1C00FB414
 * Callers:
 *     ?DrvTransferGdiObjects@@YAXPEAUHDEV__@@0K@Z @ 0x1C00F8360 (-DrvTransferGdiObjects@@YAXPEAUHDEV__@@0K@Z.c)
 * Callees:
 *     ?vUnreferencePdev@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@@Z @ 0x1C003CFC0 (-vUnreferencePdev@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@@Z.c)
 *     ?vReferencePdev@PDEVOBJ@@QEAAXXZ @ 0x1C003D0D0 (-vReferencePdev@PDEVOBJ@@QEAAXXZ.c)
 *     EngAcquireSemaphore @ 0x1C003E250 (EngAcquireSemaphore.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C0042C5C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 */

void __fastcall vTransferWndObjs(struct SURFACE *a1, PDEV **a2, HDEV a3)
{
  __int64 v6; // rcx
  __int64 i; // rbx
  __int64 j; // rdi
  int v9; // r8d
  HDEV v10; // [rsp+48h] [rbp+10h] BYREF
  PDEV **v11; // [rsp+50h] [rbp+18h] BYREF
  HSEMAPHORE v12; // [rsp+58h] [rbp+20h] BYREF

  v12 = ghsemWndobj;
  EngAcquireSemaphore(ghsemWndobj);
  v11 = a2;
  v10 = a3;
  for ( i = *(_QWORD *)GetgptoWrap(v6); i; i = *(_QWORD *)(i + 8) )
  {
    if ( *(struct SURFACE **)(i + 32) == a1 )
    {
      for ( j = *(_QWORD *)(i + 24); j; j = *(_QWORD *)(j + 160) )
      {
        PDEVOBJ::vReferencePdev((PDEVOBJ *)&v10);
        PDEVOBJ::vUnreferencePdev(&v11, 0, v9);
      }
    }
  }
  SEMOBJ::vUnlock((PERESOURCE *)&v12);
}
