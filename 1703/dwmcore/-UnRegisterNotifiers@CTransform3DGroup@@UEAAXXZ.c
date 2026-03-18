/*
 * XREFs of ?UnRegisterNotifiers@CTransform3DGroup@@UEAAXXZ @ 0x180004290
 * Callers:
 *     ??1CTransformGroup@@MEAA@XZ @ 0x180004304 (--1CTransformGroup@@MEAA@XZ.c)
 *     ?ProcessUpdate@CTransformGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_TRANSFORMGROUP@@PEBXI@Z @ 0x180004384 (-ProcessUpdate@CTransformGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_TRANSFORMGROUP@@PEBXI@Z.c)
 *     ?ProcessUpdate@CTransform3DGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_TRANSFORM3DGROUP@@PEBXI@Z @ 0x180128A80 (-ProcessUpdate@CTransform3DGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_TRANSFORM3DGROUP@@PEBXI@Z.c)
 *     ??1CTransform3DGroup@@MEAA@XZ @ 0x18017AF9C (--1CTransform3DGroup@@MEAA@XZ.c)
 * Callees:
 *     ?UnRegisterNNotifiersInternal@CResource@@AEAAXPEAPEAV1@I@Z @ 0x180034E50 (-UnRegisterNNotifiersInternal@CResource@@AEAAXPEAPEAV1@I@Z.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 */

void __fastcall CTransform3DGroup::UnRegisterNotifiers(CTransform3DGroup *this)
{
  struct CResource **v1; // rdx

  v1 = (struct CResource **)*((_QWORD *)this + 23);
  if ( v1 )
  {
    CResource::UnRegisterNNotifiersInternal(this, v1, *((_DWORD *)this + 44));
    WPF::ProcessHeapImpl::Free(*((void **)this + 23));
    *((_QWORD *)this + 23) = 0LL;
  }
  *((_DWORD *)this + 44) = 0;
}
