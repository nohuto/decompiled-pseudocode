/*
 * XREFs of ??_ENotificationDispatcher@@UEAAPEAXI@Z @ 0x18013B080
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAsyncCallback@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800167C0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAs_ea_1800167C0.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180098AB4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

NotificationDispatcher *__fastcall NotificationDispatcher::`vector deleting destructor'(
        NotificationDispatcher *this,
        char a2)
{
  void *v4; // rcx
  unsigned __int64 v5; // rdi
  __int64 v6; // rax
  char *v7; // rcx
  unsigned int (__fastcall *v8)(char *, volatile int *); // rax

  v4 = (void *)*((_QWORD *)this + 6);
  if ( v4 )
  {
    v5 = 0LL;
    if ( *((_QWORD *)this + 7) )
    {
      do
      {
        v6 = *((_QWORD *)this + 6);
        v7 = *(char **)(v6 + 8 * v5);
        if ( v7 )
        {
          *(_QWORD *)(v6 + 8 * v5) = 0LL;
          v8 = *(unsigned int (__fastcall **)(char *, volatile int *))(*(_QWORD *)v7 + 16LL);
          if ( v8 == Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAsyncCallback,Microsoft::WRL::FtmBase>::Release )
            Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAsyncCallback,Microsoft::WRL::FtmBase>::Release(
              v7,
              (volatile int *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAsyncCallback,Microsoft::WRL::FtmBase>::Release);
          else
            ((void (__fastcall *)(char *))v8)(v7);
        }
        ++v5;
      }
      while ( v5 < *((_QWORD *)this + 7) );
      v4 = (void *)*((_QWORD *)this + 6);
    }
    CoTaskMemFree(v4);
    *((_QWORD *)this + 6) = 0LL;
  }
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_DWORD *)this + 9) = -1073741823;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 3);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x60);
  return this;
}
