/*
 * XREFs of ?vChangeWndObjs@@YAXPEAVSURFACE@@PEAUHDEV__@@01@Z @ 0x1C006E5F8
 * Callers:
 *     bDynamicModeChange @ 0x1C006BCF4 (bDynamicModeChange.c)
 * Callees:
 *     ?vUnreferencePdev@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@@Z @ 0x1C003CFC0 (-vUnreferencePdev@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@@Z.c)
 *     ?vReferencePdev@PDEVOBJ@@QEAAXXZ @ 0x1C003D0D0 (-vReferencePdev@PDEVOBJ@@QEAAXXZ.c)
 *     EngAcquireSemaphore @ 0x1C003E250 (EngAcquireSemaphore.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C0042C5C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 */

void __fastcall vChangeWndObjs(struct SURFACE *a1, PDEV **a2, struct SURFACE *a3, PDEV **a4)
{
  __int64 v8; // rcx
  _QWORD *i; // rbx
  struct SURFACE *v10; // rax
  __int64 j; // rdi
  int v12; // r8d
  __int64 k; // rdi
  int v14; // r8d
  HSEMAPHORE v15; // [rsp+20h] [rbp-28h] BYREF
  PDEV **v16; // [rsp+58h] [rbp+10h] BYREF
  PDEV **v17; // [rsp+68h] [rbp+20h] BYREF

  v15 = ghsemWndobj;
  EngAcquireSemaphore(ghsemWndobj);
  v16 = a2;
  v17 = a4;
  for ( i = *(_QWORD **)GetgptoWrap(v8); i; i = (_QWORD *)i[1] )
  {
    v10 = (struct SURFACE *)i[4];
    if ( v10 == a1 )
    {
      for ( j = i[3]; j; j = *(_QWORD *)(j + 160) )
      {
        PDEVOBJ::vReferencePdev((PDEVOBJ *)&v17);
        PDEVOBJ::vUnreferencePdev(&v16, 0, v12);
      }
    }
    else if ( v10 == a3 )
    {
      for ( k = i[3]; k; k = *(_QWORD *)(k + 160) )
      {
        PDEVOBJ::vReferencePdev((PDEVOBJ *)&v16);
        PDEVOBJ::vUnreferencePdev(&v17, 0, v14);
      }
    }
  }
  SEMOBJ::vUnlock((PERESOURCE *)&v15);
}
