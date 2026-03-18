/*
 * XREFs of ?UnRegisterNotifiers@CTransformGroup@@UEAAXXZ @ 0x1800195A0
 * Callers:
 *     ??1CTransformGroup@@MEAA@XZ @ 0x180019630 (--1CTransformGroup@@MEAA@XZ.c)
 *     ?ProcessUpdate@CTransformGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_TRANSFORMGROUP@@PEBXI@Z @ 0x18001977C (-ProcessUpdate@CTransformGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_TRANSFORMGROUP@@PEBXI@Z.c)
 * Callees:
 *     ?UnRegisterNNotifiersInternal@CResource@@AEAAXPEAPEAV1@I@Z @ 0x180051A84 (-UnRegisterNNotifiersInternal@CResource@@AEAAXPEAPEAV1@I@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18007312C (--3@YAXPEAX@Z.c)
 */

void __fastcall CTransformGroup::UnRegisterNotifiers(CTransformGroup *this)
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
