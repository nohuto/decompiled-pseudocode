/*
 * XREFs of ?vUMPDThreadCleanup@@YAXPEAU_W32THREAD@@@Z @ 0x1C001DE08
 * Callers:
 *     GdiThreadCallout @ 0x1C001DCC0 (GdiThreadCallout.c)
 * Callees:
 *     Win32FreePool @ 0x1C0041890 (Win32FreePool.c)
 *     ?vRelease@UMPDOBJ@@SAXPEAV1@H@Z @ 0x1C007DCD0 (-vRelease@UMPDOBJ@@SAXPEAV1@H@Z.c)
 */

void __fastcall vUMPDThreadCleanup(struct _W32THREAD *a1)
{
  struct _W32THREAD *v2; // rcx
  struct UMPDOBJ *v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // rcx

  while ( 1 )
  {
    if ( a1 && (v2 = (struct _W32THREAD *)*((_QWORD *)a1 + 5), v2 != (struct _W32THREAD *)((char *)a1 + 40)) )
      v3 = (struct _W32THREAD *)((char *)v2 - 40);
    else
      v3 = 0LL;
    if ( !v3 )
      break;
    UMPDOBJ::vRelease(v3, 1);
  }
  if ( (int)IsUMPDCachedResourceCleanupSupported() >= 0 )
    UMPDCachedResourceCleanupWrap(a1);
  v6 = *((_QWORD *)a1 + 9);
  if ( v6 )
  {
    Win32FreePool(v6, v4, v5);
    *((_QWORD *)a1 + 9) = 0LL;
  }
}
