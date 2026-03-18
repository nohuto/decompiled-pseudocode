/*
 * XREFs of ?UnRegisterNotifiers@CMeshGeometry2D@@UEAAXXZ @ 0x180174F80
 * Callers:
 *     ?ProcessUpdate@CMeshGeometry2D@@QEAAJPEAVCResourceTable@@PEBUMILCMD_MESHGEOMETRY2D@@PEBXI@Z @ 0x18012EE54 (-ProcessUpdate@CMeshGeometry2D@@QEAAJPEAVCResourceTable@@PEBUMILCMD_MESHGEOMETRY2D@@PEBXI@Z.c)
 *     ??1CMeshGeometry2D@@MEAA@XZ @ 0x18016518C (--1CMeshGeometry2D@@MEAA@XZ.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 */

void __fastcall CMeshGeometry2D::UnRegisterNotifiers(CMeshGeometry2D *this)
{
  void *v2; // rcx
  void *v3; // rcx
  void *v4; // rcx
  void *v5; // rcx

  v2 = (void *)*((_QWORD *)this + 15);
  if ( v2 )
  {
    WPF::ProcessHeapImpl::Free(v2);
    *((_QWORD *)this + 15) = 0LL;
  }
  *((_DWORD *)this + 28) = 0;
  v3 = (void *)*((_QWORD *)this + 17);
  if ( v3 )
  {
    WPF::ProcessHeapImpl::Free(v3);
    *((_QWORD *)this + 17) = 0LL;
  }
  *((_DWORD *)this + 32) = 0;
  v4 = (void *)*((_QWORD *)this + 19);
  if ( v4 )
  {
    WPF::ProcessHeapImpl::Free(v4);
    *((_QWORD *)this + 19) = 0LL;
  }
  *((_DWORD *)this + 36) = 0;
  v5 = (void *)*((_QWORD *)this + 21);
  if ( v5 )
  {
    WPF::ProcessHeapImpl::Free(v5);
    *((_QWORD *)this + 21) = 0LL;
  }
  *((_DWORD *)this + 40) = 0;
}
