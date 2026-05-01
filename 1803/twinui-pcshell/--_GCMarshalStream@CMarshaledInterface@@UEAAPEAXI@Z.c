/*
 * XREFs of ??_GCMarshalStream@CMarshaledInterface@@UEAAPEAXI@Z @ 0x1800710D0
 * Callers:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180054260 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18006D640 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180098AB4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

CMarshaledInterface::CMarshalStream *__fastcall CMarshaledInterface::CMarshalStream::`scalar deleting destructor'(
        CMarshaledInterface::CMarshalStream *this,
        char a2)
{
  LPSTREAM *v4; // rdi
  __int64 v5; // rcx
  LPSTREAM v6; // rcx
  IStream *v8; // rcx
  LPVOID ppv; // [rsp+40h] [rbp+8h] BYREF

  *(_QWORD *)this = &CMarshaledInterface::CMarshalStream::`vftable';
  v4 = (LPSTREAM *)((char *)this + 16);
  if ( *((_QWORD *)this + 2) )
  {
    if ( *((_DWORD *)this + 10) == GetCurrentThreadId() )
    {
      CoReleaseMarshalData(*v4);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v4);
    }
    else
    {
      ppv = 0LL;
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((CWinRTApplicationView **)&ppv);
      v8 = *v4;
      *v4 = 0LL;
      CoGetInterfaceAndReleaseStream(v8, &GUID_00000000_0000_0000_c000_000000000046, &ppv);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((CWinRTApplicationView **)&ppv);
    }
  }
  v5 = *((_QWORD *)this + 4);
  if ( v5 )
  {
    *((_QWORD *)this + 4) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  v6 = *v4;
  if ( *v4 )
  {
    *v4 = 0LL;
    (*(void (__fastcall **)(LPSTREAM))(*(_QWORD *)v6 + 16LL))(v6);
  }
  *((_DWORD *)this + 3) = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x30);
  return this;
}
