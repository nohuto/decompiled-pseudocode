/*
 * XREFs of ?ReserveUserSessionViews@@YAJPEAPEAX0@Z @ 0x1C00B1F20
 * Callers:
 *     ?UserInitialize@@YAJXZ @ 0x1C00B23A4 (-UserInitialize@@YAJXZ.c)
 * Callees:
 *     ?ReserveUserSessionViewsWorker@@YAJPEAPEAX0@Z @ 0x1C00B1F7C (-ReserveUserSessionViewsWorker@@YAJPEAPEAX0@Z.c)
 */

int __fastcall ReserveUserSessionViews(void **a1, void **a2)
{
  int result; // eax

  gbUsingDefaultSectionSize = 0;
  result = ReserveUserSessionViewsWorker(a1, a2);
  if ( result < 0 )
  {
    gdwNOIOSectionSize = 128;
    gdwDesktopSectionSize = 512;
    gbUsingDefaultSectionSize = 1;
    return ReserveUserSessionViewsWorker(a1, a2);
  }
  return result;
}
