/*
 * XREFs of ?UnRegisterNotifiers@CDcompRenderTargetGroup@@UEAAXXZ @ 0x1800C8260
 * Callers:
 *     ??1CDcompRenderTargetGroup@@MEAA@XZ @ 0x1800C82A8 (--1CDcompRenderTargetGroup@@MEAA@XZ.c)
 *     ?ProcessUpdate@CDcompRenderTargetGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_DCOMPRENDERTARGETGROUP@@PEBXI@Z @ 0x1800C82D0 (-ProcessUpdate@CDcompRenderTargetGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_DCOMPRENDERTARGETGRO.c)
 * Callees:
 *     ?UnRegisterNNotifiersInternal@CResource@@AEAAXPEAPEAV1@I@Z @ 0x180051A84 (-UnRegisterNNotifiersInternal@CResource@@AEAAXPEAPEAV1@I@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18007312C (--3@YAXPEAX@Z.c)
 */

void __fastcall CDcompRenderTargetGroup::UnRegisterNotifiers(CDcompRenderTargetGroup *this)
{
  struct CResource **v1; // rdx

  v1 = (struct CResource **)*((_QWORD *)this + 8);
  if ( v1 )
  {
    CResource::UnRegisterNNotifiersInternal(this, v1, *((_DWORD *)this + 14));
    operator delete(*((void **)this + 8));
    *((_QWORD *)this + 8) = 0LL;
    *((_DWORD *)this + 14) = 0;
  }
}
