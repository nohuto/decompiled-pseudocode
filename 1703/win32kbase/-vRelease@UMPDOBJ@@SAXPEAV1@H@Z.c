/*
 * XREFs of ?vRelease@UMPDOBJ@@SAXPEAV1@H@Z @ 0x1C007D0A0
 * Callers:
 *     ?vUMPDThreadCleanup@@YAXPEAU_W32THREAD@@@Z @ 0x1C0028424 (-vUMPDThreadCleanup@@YAXPEAU_W32THREAD@@@Z.c)
 * Callees:
 *     HmgDecrementShareReferenceCount @ 0x1C002F950 (HmgDecrementShareReferenceCount.c)
 *     Win32FreePool @ 0x1C0040090 (Win32FreePool.c)
 */

void __fastcall UMPDOBJ::vRelease(struct UMPDOBJ *a1, int a2)
{
  __int64 v4; // rdx
  struct UMPDOBJ **v5; // rcx
  int v6; // eax

  if ( (int)IsFreeNonCachedUserMemSupported() >= 0 )
    FreeNonCachedUserMemWrap(a1);
  if ( a2 )
  {
    v4 = *((_QWORD *)a1 + 5);
    v5 = (struct UMPDOBJ **)*((_QWORD *)a1 + 6);
    if ( *(struct UMPDOBJ **)(v4 + 8) != (struct UMPDOBJ *)((char *)a1 + 40)
      || *v5 != (struct UMPDOBJ *)((char *)a1 + 40) )
    {
      __fastfail(3u);
    }
    *v5 = (struct UMPDOBJ *)v4;
    *(_QWORD *)(v4 + 8) = v5;
  }
  if ( a1 )
  {
    HmgDecrementShareReferenceCount((__int64)a1);
    if ( (int)IsUMPDOBJ_bCleanupSupported() < 0 )
      v6 = 0;
    else
      v6 = UMPDOBJ_bCleanupWrap(a1);
    if ( v6 )
      Win32FreePool((__int64)a1);
  }
}
