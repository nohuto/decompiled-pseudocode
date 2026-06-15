/*
 * XREFs of ?Reallocate@CWin32Heap@ATL@@UEAAPEAXPEAX_K@Z @ 0x180043B10
 * Callers:
 *     ?Reallocate@CAtlStringMgr@ATL@@UEAAPEAUCStringData@2@PEAU32@HH@Z @ 0x180043A80 (-Reallocate@CAtlStringMgr@ATL@@UEAAPEAUCStringData@2@PEAU32@HH@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 */

LPVOID __fastcall ATL::CWin32Heap::Reallocate(HANDLE *this, void *a2, SIZE_T a3)
{
  if ( !a2 )
    return (LPVOID)(*(__int64 (__fastcall **)(HANDLE *, SIZE_T))*this)(this, a3);
  if ( a3 )
    return HeapReAlloc(this[1], 0, a2, a3);
  (*((void (__fastcall **)(HANDLE *))*this + 1))(this);
  return 0LL;
}
