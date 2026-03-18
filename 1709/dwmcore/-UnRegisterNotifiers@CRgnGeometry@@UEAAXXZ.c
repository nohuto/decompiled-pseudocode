/*
 * XREFs of ?UnRegisterNotifiers@CRgnGeometry@@UEAAXXZ @ 0x18011A1A0
 * Callers:
 *     ?ProcessUpdate@CRgnGeometry@@QEAAJPEAVCResourceTable@@PEBUMILCMD_RGNGEOMETRY@@PEBXI@Z @ 0x180096934 (-ProcessUpdate@CRgnGeometry@@QEAAJPEAVCResourceTable@@PEBUMILCMD_RGNGEOMETRY@@PEBXI@Z.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 */

void __fastcall CRgnGeometry::UnRegisterNotifiers(CRgnGeometry *this)
{
  void *v2; // rcx

  v2 = (void *)*((_QWORD *)this + 14);
  if ( v2 )
  {
    WPF::ProcessHeapImpl::Free(v2);
    *((_QWORD *)this + 14) = 0LL;
    *((_DWORD *)this + 26) = 0;
  }
}
