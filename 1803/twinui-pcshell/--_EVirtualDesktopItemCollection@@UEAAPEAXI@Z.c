/*
 * XREFs of ??_EVirtualDesktopItemCollection@@UEAAPEAXI@Z @ 0x18027AB80
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??3@YAXPEAX@Z @ 0x180098FA8 (--3@YAXPEAX@Z.c)
 *     ??1VirtualDesktopNotificationListener@@QEAA@XZ @ 0x1802076EC (--1VirtualDesktopNotificationListener@@QEAA@XZ.c)
 *     ??1ObservableObjectArray@@QEAA@XZ @ 0x18027979C (--1ObservableObjectArray@@QEAA@XZ.c)
 */

VirtualDesktopItemCollection *__fastcall VirtualDesktopItemCollection::`vector deleting destructor'(
        VirtualDesktopItemCollection *this,
        char a2)
{
  VirtualDesktopNotificationListener::~VirtualDesktopNotificationListener((VirtualDesktopItemCollection *)((char *)this + 176));
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 21);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 20);
  *((_DWORD *)this + 39) = -1073741823;
  ObservableObjectArray::~ObservableObjectArray(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
