/*
 * XREFs of ?UnregisterContent@CSpatialVisualContentManager@@QEAAXPEAVCSpatialVisualContent@@@Z @ 0x1801AD608
 * Callers:
 *     ??1CSpatialVisual@@MEAA@XZ @ 0x1801A3FD8 (--1CSpatialVisual@@MEAA@XZ.c)
 *     ?ProcessSetCommonID@CSpatialVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_SPATIALVISUAL_SETCOMMONID@@@Z @ 0x1801A40F0 (-ProcessSetCommonID@CSpatialVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_SPATIALVISUAL_SETCOMMONI.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CSpatialVisualContentManager::UnregisterContent(
        struct CSpatialVisualContent ***this,
        struct CSpatialVisualContent *a2)
{
  struct CSpatialVisualContent **i; // rbx

  for ( i = *this; i != this[1] && *i != a2; ++i )
    ;
  if ( i != this[1] )
  {
    (*(void (__fastcall **)(struct CSpatialVisualContent *))(*(_QWORD *)a2 + 16LL))(a2);
    memmove(i, i + 1, (char *)this[1]-- - (char *)(i + 1));
  }
}
