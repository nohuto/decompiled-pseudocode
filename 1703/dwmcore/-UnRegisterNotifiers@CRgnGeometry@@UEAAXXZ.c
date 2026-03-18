/*
 * XREFs of ?UnRegisterNotifiers@CRgnGeometry@@UEAAXXZ @ 0x1801298C0
 * Callers:
 *     ?ProcessUpdate@CRgnGeometry@@QEAAJPEAVCResourceTable@@PEBUMILCMD_RGNGEOMETRY@@PEBXI@Z @ 0x1800583C4 (-ProcessUpdate@CRgnGeometry@@QEAAJPEAVCResourceTable@@PEBUMILCMD_RGNGEOMETRY@@PEBXI@Z.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 */

void __fastcall CRgnGeometry::UnRegisterNotifiers(CRgnGeometry *this)
{
  void *v2; // rcx

  v2 = (void *)*((_QWORD *)this + 14);
  if ( v2 )
  {
    WPF::ProcessHeapImpl::Free(v2);
    *((_QWORD *)this + 14) = 0LL;
  }
  *((_DWORD *)this + 26) = 0;
}
