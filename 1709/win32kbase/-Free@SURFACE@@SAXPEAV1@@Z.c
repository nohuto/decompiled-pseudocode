/*
 * XREFs of ?Free@SURFACE@@SAXPEAV1@@Z @ 0x1C004240C
 * Callers:
 *     ?bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x1C001F6F0 (-bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 *     ??1SURFMEM@@QEAA@XZ @ 0x1C00418C0 (--1SURFMEM@@QEAA@XZ.c)
 *     ?bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z @ 0x1C0041B80 (-bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z.c)
 * Callees:
 *     Win32FreePool @ 0x1C0041890 (Win32FreePool.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AB7F0 (_guard_dispatch_icall_nop.c)
 *     ?ReleaseReferenceCountedObjectHandle@@YAXW4ReferenceTrackerCountedType@@PEAX@Z @ 0x1C00FDFA4 (-ReleaseReferenceCountedObjectHandle@@YAXW4ReferenceTrackerCountedType@@PEAX@Z.c)
 */

void __fastcall SURFACE::Free(PSLIST_ENTRY ListEntry)
{
  __int64 v2; // rcx
  PSLIST_HEADER v3; // rdi
  union _SLIST_HEADER *v4; // rcx

  if ( *((_QWORD *)&ListEntry[38].Next + 1) )
    ReleaseReferenceCountedObjectHandle(0LL);
  if ( LOBYTE(ListEntry[39].Next) )
  {
    v2 = *((_QWORD *)&ListEntry[4].Next + 1);
    if ( v2 )
    {
      Win32FreePool(v2);
      *((_QWORD *)&ListEntry[4].Next + 1) = 0LL;
    }
  }
  v3 = g_pIsolatedSurfaceLookaside;
  v4 = g_pIsolatedSurfaceLookaside;
  ++*((_DWORD *)&g_pIsolatedSurfaceLookaside[1].HeaderX64 + 3);
  if ( ExQueryDepthSList(v4) < LOWORD(v3[1].Alignment) )
  {
    ExpInterlockedPushEntrySList(v3, ListEntry);
  }
  else
  {
    ++LODWORD(v3[2].Alignment);
    ((void (__fastcall *)(PSLIST_ENTRY, PSLIST_HEADER))v3[3].Region)(ListEntry, v3);
  }
}
