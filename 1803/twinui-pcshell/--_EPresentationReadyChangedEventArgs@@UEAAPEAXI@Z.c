/*
 * XREFs of ??_EPresentationReadyChangedEventArgs@@UEAAPEAXI@Z @ 0x1801B6490
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180098AB4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UIPresentationReadyChangedEventArgs@Holographic@Shell@Internal@Windows@@@Details@WRL@Microsoft@@UEAA@XZ @ 0x1801B5EF8 (--1-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UIPresentati.c)
 */

PresentationReadyChangedEventArgs *__fastcall PresentationReadyChangedEventArgs::`vector deleting destructor'(
        PresentationReadyChangedEventArgs *this,
        volatile int *a2)
{
  char v2; // bl

  v2 = (char)a2;
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Microsoft::WRL::FtmBase,Windows::Internal::Shell::Holographic::IPresentationReadyChangedEventArgs>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Microsoft::WRL::FtmBase,Windows::Internal::Shell::Holographic::IPresentationReadyChangedEventArgs>(
    (__int64)this,
    a2);
  if ( (v2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x50);
  return this;
}
