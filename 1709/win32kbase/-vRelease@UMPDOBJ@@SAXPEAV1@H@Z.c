/*
 * XREFs of ?vRelease@UMPDOBJ@@SAXPEAV1@H@Z @ 0x1C007DCD0
 * Callers:
 *     ?vUMPDThreadCleanup@@YAXPEAU_W32THREAD@@@Z @ 0x1C001DE08 (-vUMPDThreadCleanup@@YAXPEAU_W32THREAD@@@Z.c)
 * Callees:
 *     HmgDecrementShareReferenceCountEx @ 0x1C003FE40 (HmgDecrementShareReferenceCountEx.c)
 *     Win32FreePool @ 0x1C0041890 (Win32FreePool.c)
 */

void __fastcall UMPDOBJ::vRelease(struct UMPDOBJ *a1, int a2)
{
  __int64 v4; // rcx
  struct UMPDOBJ **v5; // rdx
  int v6; // eax

  if ( (int)IsFreeNonCachedUserMemSupported() >= 0 )
    FreeNonCachedUserMemWrap(a1);
  if ( a2 )
  {
    v4 = *((_QWORD *)a1 + 5);
    if ( *(struct UMPDOBJ **)(v4 + 8) != (struct UMPDOBJ *)((char *)a1 + 40)
      || (v5 = (struct UMPDOBJ **)*((_QWORD *)a1 + 6), *v5 != (struct UMPDOBJ *)((char *)a1 + 40)) )
    {
      __fastfail(3u);
    }
    *v5 = (struct UMPDOBJ *)v4;
    *(_QWORD *)(v4 + 8) = v5;
  }
  if ( a1 )
  {
    HmgDecrementShareReferenceCountEx(a1, 0LL);
    if ( (int)IsUMPDOBJ_bCleanupSupported() < 0 )
      v6 = 0;
    else
      v6 = UMPDOBJ_bCleanupWrap(a1);
    if ( v6 )
      Win32FreePool((__int64)a1);
  }
}
