/*
 * XREFs of ?SetTempAppVisuals@CAppLayoutOperation@@UEAAXPEAUITemporaryAppVisualArray@@@Z @ 0x18030FE60
 * Callers:
 *     ?SetTempAppVisuals@AppResizeOperation@@WII@EAAXPEAUITemporaryAppVisualArray@@@Z @ 0x1800AFB90 (-SetTempAppVisuals@AppResizeOperation@@WII@EAAXPEAUITemporaryAppVisualArray@@@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180003FA4 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall CAppLayoutOperation::SetTempAppVisuals(CAppLayoutOperation *this, struct ITemporaryAppVisualArray *a2)
{
  struct ITemporaryAppVisualArray *v4; // [rsp+30h] [rbp+8h] BYREF

  if ( *((struct ITemporaryAppVisualArray **)this + 7) != a2 )
  {
    v4 = a2;
    Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef((__int64 *)&v4);
    v4 = (struct ITemporaryAppVisualArray *)*((_QWORD *)this + 7);
    *((_QWORD *)this + 7) = a2;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v4);
  }
}
