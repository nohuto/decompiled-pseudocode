/*
 * XREFs of ?Free@CWin32Heap@ATL@@UEAAXPEAX@Z @ 0x14001ACA0
 * Callers:
 *     ?Free@CAtlStringMgr@ATL@@UEAAXPEAUCStringData@2@@Z @ 0x14001ABA0 (-Free@CAtlStringMgr@ATL@@UEAAXPEAUCStringData@2@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall ATL::CWin32Heap::Free(HANDLE *this, void *a2)
{
  if ( a2 )
    HeapFree(this[1], 0, a2);
}
