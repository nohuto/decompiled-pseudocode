/*
 * XREFs of ?Allocate@SURFACE@@SAPEAV1@_KG@Z @ 0x1C0042494
 * Callers:
 *     ?bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z @ 0x1C0041B80 (-bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z.c)
 * Callees:
 *     ?AcquireReferenceCountedObjectHandle@@YA_NW4ReferenceTrackerCountedType@@PEAXPEAPEAX@Z @ 0x1C0042544 (-AcquireReferenceCountedObjectHandle@@YA_NW4ReferenceTrackerCountedType@@PEAXPEAPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AB7F0 (_guard_dispatch_icall_nop.c)
 */

struct _SLIST_ENTRY *__fastcall SURFACE::Allocate()
{
  PSLIST_HEADER v0; // rdi
  union _SLIST_HEADER *v1; // rcx
  struct _SLIST_ENTRY *v2; // rbx
  PSLIST_HEADER v4; // rdi
  union _SLIST_HEADER *v5; // rcx

  v0 = g_pIsolatedSurfaceLookaside;
  v1 = g_pIsolatedSurfaceLookaside;
  ++*((_DWORD *)&g_pIsolatedSurfaceLookaside[1].HeaderX64 + 1);
  v2 = ExpInterlockedPopEntrySList(v1);
  if ( !v2 )
  {
    ++*((_DWORD *)&v0[1].HeaderX64 + 2);
    v2 = (struct _SLIST_ENTRY *)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, PSLIST_HEADER))v0[3].Alignment)(
                                  *((unsigned int *)&v0[2].HeaderX64 + 1),
                                  *((unsigned int *)&v0[2].HeaderX64 + 3),
                                  *((unsigned int *)&v0[2].HeaderX64 + 2),
                                  v0);
  }
  if ( !v2 )
    return 0LL;
  if ( !(unsigned __int8)AcquireReferenceCountedObjectHandle(0LL, v2, &v2[38].Next + 1) )
  {
    v4 = g_pIsolatedSurfaceLookaside;
    v5 = g_pIsolatedSurfaceLookaside;
    ++*((_DWORD *)&g_pIsolatedSurfaceLookaside[1].HeaderX64 + 3);
    if ( ExQueryDepthSList(v5) < LOWORD(v4[1].Alignment) )
    {
      ExpInterlockedPushEntrySList(v4, v2);
    }
    else
    {
      ++LODWORD(v4[2].Alignment);
      ((void (__fastcall *)(struct _SLIST_ENTRY *, PSLIST_HEADER))v4[3].Region)(v2, v4);
    }
    return 0LL;
  }
  return v2;
}
