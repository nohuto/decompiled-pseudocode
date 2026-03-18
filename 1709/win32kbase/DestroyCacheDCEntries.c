/*
 * XREFs of DestroyCacheDCEntries @ 0x1C007C05C
 * Callers:
 *     DestroyThreadsObjects @ 0x1C003ED90 (DestroyThreadsObjects.c)
 *     CleanupGDI @ 0x1C006398C (CleanupGDI.c)
 * Callees:
 *     GreLockVisRgn @ 0x1C003E280 (GreLockVisRgn.c)
 *     GreUnlockVisRgn @ 0x1C003FD70 (GreUnlockVisRgn.c)
 *     DestroyCacheDC @ 0x1C0057280 (DestroyCacheDC.c)
 */

__int64 __fastcall DestroyCacheDCEntries(__int64 a1, int a2, int a3)
{
  __int64 v4; // rdx
  int v5; // r8d
  __int64 *v6; // rdi
  __int64 *i; // rbx

  GreLockVisRgn(*(_QWORD *)(gpDispInfo + 32), a2, a3);
  v6 = (__int64 *)(gpDispInfo + 16);
  for ( i = *(__int64 **)(gpDispInfo + 16); i; i = (__int64 *)*i )
  {
    if ( a1 == i[9] && (i[8] & 0x80000002) == 2 )
      DestroyCacheDC(v6, i[1], v5);
    if ( i != (__int64 *)*v6 )
      i = v6;
    v6 = i;
  }
  return GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 32), v4, v5);
}
