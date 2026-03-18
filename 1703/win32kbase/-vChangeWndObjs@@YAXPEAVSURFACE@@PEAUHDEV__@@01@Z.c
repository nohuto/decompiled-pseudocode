/*
 * XREFs of ?vChangeWndObjs@@YAXPEAVSURFACE@@PEAUHDEV__@@01@Z @ 0x1C0091028
 * Callers:
 *     bDynamicModeChange @ 0x1C00F2CAC (bDynamicModeChange.c)
 * Callees:
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C0037A88 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     EngAcquireSemaphore @ 0x1C0037BB0 (EngAcquireSemaphore.c)
 *     ?vUnreferencePdev@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@@Z @ 0x1C0038940 (-vUnreferencePdev@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@@Z.c)
 *     ?vReferencePdev@PDEVOBJ@@QEAAXXZ @ 0x1C0038A40 (-vReferencePdev@PDEVOBJ@@QEAAXXZ.c)
 */

void __fastcall vChangeWndObjs(struct SURFACE *a1, PDEV *a2, struct SURFACE *a3, PDEV *a4)
{
  __int64 v8; // rcx
  _QWORD *i; // rbx
  struct SURFACE *v10; // rax
  __int64 j; // rdi
  __int64 k; // rdi
  HSEMAPHORE v13; // [rsp+20h] [rbp-28h] BYREF
  PDEV *v14; // [rsp+58h] [rbp+10h] BYREF
  PDEV *v15; // [rsp+68h] [rbp+20h] BYREF

  v13 = ghsemWndobj;
  EngAcquireSemaphore(ghsemWndobj);
  v14 = a2;
  v15 = a4;
  for ( i = *(_QWORD **)GetgptoWrap(v8); i; i = (_QWORD *)i[1] )
  {
    v10 = (struct SURFACE *)i[4];
    if ( v10 == a1 )
    {
      for ( j = i[3]; j; j = *(_QWORD *)(j + 160) )
      {
        PDEVOBJ::vReferencePdev((PDEVOBJ *)&v15);
        PDEVOBJ::vUnreferencePdev(&v14, 0);
      }
    }
    else if ( v10 == a3 )
    {
      for ( k = i[3]; k; k = *(_QWORD *)(k + 160) )
      {
        PDEVOBJ::vReferencePdev((PDEVOBJ *)&v14);
        PDEVOBJ::vUnreferencePdev(&v15, 0);
      }
    }
  }
  SEMOBJ::vUnlock((PERESOURCE *)&v13);
}
