/*
 * XREFs of ??1CAppViewManager@@UEAA@XZ @ 0x18011D900
 * Callers:
 *     ??_GCAppViewManager@@UEAAPEAXI@Z @ 0x18011E130 (--_GCAppViewManager@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180003FC4 (-InternalRelease@-$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAsyncCallback@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800167C0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAs_ea_1800167C0.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??_G?$ComPtr@V?$CRefCountedObject@UPRESENTED_WINDOW_CALLBACK_TRIGGER@CAppViewManager@@@@@WRL@Microsoft@@QEAAPEAXI@Z @ 0x1800F8FE4 (--_G-$ComPtr@V-$CRefCountedObject@UPRESENTED_WINDOW_CALLBACK_TRIGGER@CAppViewManager@@@@@WRL@Mic.c)
 */

void __fastcall CAppViewManager::~CAppViewManager(CAppViewManager *this)
{
  void *v2; // rcx
  unsigned __int64 v3; // rdi
  __int64 v4; // rax
  char *v5; // rcx
  unsigned int (__fastcall *v6)(char *, volatile int *); // rax
  void *v7; // rcx
  unsigned __int64 v8; // rdi

  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 26);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 25);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 24);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 23);
  v2 = (void *)*((_QWORD *)this + 17);
  if ( v2 )
  {
    v3 = 0LL;
    if ( *((_QWORD *)this + 18) )
    {
      do
      {
        v4 = *((_QWORD *)this + 17);
        v5 = *(char **)(v4 + 8 * v3);
        if ( v5 )
        {
          *(_QWORD *)(v4 + 8 * v3) = 0LL;
          v6 = *(unsigned int (__fastcall **)(char *, volatile int *))(*(_QWORD *)v5 + 16LL);
          if ( v6 == Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAsyncCallback,Microsoft::WRL::FtmBase>::Release )
            Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAsyncCallback,Microsoft::WRL::FtmBase>::Release(
              v5,
              (volatile int *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAsyncCallback,Microsoft::WRL::FtmBase>::Release);
          else
            ((void (__fastcall *)(char *))v6)(v5);
        }
        ++v3;
      }
      while ( v3 < *((_QWORD *)this + 18) );
      v2 = (void *)*((_QWORD *)this + 17);
    }
    CoTaskMemFree(v2);
    *((_QWORD *)this + 17) = 0LL;
  }
  *((_QWORD *)this + 18) = 0LL;
  *((_QWORD *)this + 20) = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)this + 15);
  v7 = (void *)*((_QWORD *)this + 11);
  if ( v7 )
  {
    v8 = 0LL;
    if ( *((_QWORD *)this + 12) )
    {
      do
        Microsoft::WRL::ComPtr<CRefCountedObject<CAppViewManager::PRESENTED_WINDOW_CALLBACK_TRIGGER>>::`scalar deleting destructor'((char **)(*((_QWORD *)this + 11) + 8 * v8++));
      while ( v8 < *((_QWORD *)this + 12) );
      v7 = (void *)*((_QWORD *)this + 11);
    }
    LocalFree(v7);
    *((_QWORD *)this + 11) = 0LL;
  }
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  *((_DWORD *)this + 19) = -1073741823;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 3);
}
