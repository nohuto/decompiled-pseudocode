/*
 * XREFs of ?UnRegisterNotifiers@CTransform3DGroup@@UEAAXXZ @ 0x1801AC350
 * Callers:
 *     ?ProcessUpdate@CTransform3DGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_TRANSFORM3DGROUP@@PEBXI@Z @ 0x1801ABB38 (-ProcessUpdate@CTransform3DGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_TRANSFORM3DGROUP@@PEBXI@Z.c)
 *     ??1CTransform3DGroup@@MEAA@XZ @ 0x1801B6D1C (--1CTransform3DGroup@@MEAA@XZ.c)
 * Callees:
 *     ?UnRegisterNNotifiersInternal@CResource@@AEAAXPEAPEAV1@I@Z @ 0x180051A84 (-UnRegisterNNotifiersInternal@CResource@@AEAAXPEAPEAV1@I@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18007312C (--3@YAXPEAX@Z.c)
 */

void __fastcall CTransform3DGroup::UnRegisterNotifiers(CTransform3DGroup *this)
{
  struct CResource **v1; // rdx

  v1 = (struct CResource **)*((_QWORD *)this + 23);
  if ( v1 )
  {
    CResource::UnRegisterNNotifiersInternal(this, v1, *((_DWORD *)this + 44));
    operator delete(*((void **)this + 23));
    *((_QWORD *)this + 23) = 0LL;
    *((_DWORD *)this + 44) = 0;
  }
}
