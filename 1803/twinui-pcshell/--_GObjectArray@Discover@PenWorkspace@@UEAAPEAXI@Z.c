/*
 * XREFs of ??_GObjectArray@Discover@PenWorkspace@@UEAAPEAXI@Z @ 0x180191920
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18006D640 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x180092334 (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180098AB4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

PenWorkspace::Discover::ObjectArray *__fastcall PenWorkspace::Discover::ObjectArray::`scalar deleting destructor'(
        PenWorkspace::Discover::ObjectArray *this,
        char a2)
{
  CWinRTApplicationView **v2; // rdi
  CWinRTApplicationView **v5; // rsi

  v2 = (CWinRTApplicationView **)*((_QWORD *)this + 6);
  if ( v2 )
  {
    v5 = (CWinRTApplicationView **)*((_QWORD *)this + 7);
    if ( v2 != v5 )
    {
      do
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v2++);
      while ( v2 != v5 );
      v2 = (CWinRTApplicationView **)*((_QWORD *)this + 6);
    }
    std::_Deallocate((char *)v2, (__int64)(*((_QWORD *)this + 8) - (_QWORD)v2) >> 3, 8uLL);
    *((_QWORD *)this + 6) = 0LL;
    *((_QWORD *)this + 7) = 0LL;
    *((_QWORD *)this + 8) = 0LL;
  }
  *((_DWORD *)this + 11) = -1073741823;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 3);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x48);
  return this;
}
