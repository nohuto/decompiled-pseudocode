/*
 * XREFs of ?UnRegisterNotifiers@CMeshGeometry2D@@UEAAXXZ @ 0x1801AC2C0
 * Callers:
 *     ??1CMeshGeometry2D@@MEAA@XZ @ 0x18019B268 (--1CMeshGeometry2D@@MEAA@XZ.c)
 *     ?ProcessUpdate@CMeshGeometry2D@@QEAAJPEAVCResourceTable@@PEBUMILCMD_MESHGEOMETRY2D@@PEBXI@Z @ 0x1801AB5E0 (-ProcessUpdate@CMeshGeometry2D@@QEAAJPEAVCResourceTable@@PEBUMILCMD_MESHGEOMETRY2D@@PEBXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18007312C (--3@YAXPEAX@Z.c)
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
    operator delete(v2);
    *((_QWORD *)this + 15) = 0LL;
    *((_DWORD *)this + 28) = 0;
  }
  v3 = (void *)*((_QWORD *)this + 17);
  if ( v3 )
  {
    operator delete(v3);
    *((_QWORD *)this + 17) = 0LL;
    *((_DWORD *)this + 32) = 0;
  }
  v4 = (void *)*((_QWORD *)this + 19);
  if ( v4 )
  {
    operator delete(v4);
    *((_QWORD *)this + 19) = 0LL;
    *((_DWORD *)this + 36) = 0;
  }
  v5 = (void *)*((_QWORD *)this + 21);
  if ( v5 )
  {
    operator delete(v5);
    *((_QWORD *)this + 21) = 0LL;
    *((_DWORD *)this + 40) = 0;
  }
}
