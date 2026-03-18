/*
 * XREFs of DestroyCacheDCEntries @ 0x1C007B04C
 * Callers:
 *     DestroyThreadsObjects @ 0x1C0040A10 (DestroyThreadsObjects.c)
 *     CleanupGDI @ 0x1C00787E8 (CleanupGDI.c)
 * Callees:
 *     GreLockVisRgn @ 0x1C0037BE0 (GreLockVisRgn.c)
 *     DestroyCacheDC @ 0x1C0044760 (DestroyCacheDC.c)
 */

__int64 __fastcall DestroyCacheDCEntries(__int64 a1, int a2, int a3)
{
  int v4; // r8d
  CCursorClip *v5; // rcx
  __int64 *v6; // rdi
  __int64 v7; // rbx

  GreLockVisRgn(*((_QWORD *)gpDispInfo + 4), a2, a3);
  v5 = gpDispInfo;
  v6 = (__int64 *)((char *)gpDispInfo + 16);
  v7 = *((_QWORD *)gpDispInfo + 2);
  if ( v7 )
  {
    do
    {
      if ( a1 == *(_QWORD *)(v7 + 72) && (*(_DWORD *)(v7 + 64) & 0x80000002) == 2 )
        DestroyCacheDC(v6, *(_QWORD *)(v7 + 8), v4);
      if ( v7 == *v6 )
        v6 = (__int64 *)v7;
      v7 = *v6;
    }
    while ( *v6 );
    v5 = gpDispInfo;
  }
  return GreUnlockVisRgn(*((_QWORD *)v5 + 4));
}
