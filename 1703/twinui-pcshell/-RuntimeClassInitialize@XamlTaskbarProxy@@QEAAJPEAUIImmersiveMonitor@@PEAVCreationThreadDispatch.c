/*
 * XREFs of ?RuntimeClassInitialize@XamlTaskbarProxy@@QEAAJPEAUIImmersiveMonitor@@PEAVCreationThreadDispatcher@@PEAUIXamlTaskbarProxyHost@@@Z @ 0x180128838
 * Callers:
 *     ??$MakeAndInitializeOrThrow@VXamlTaskbarProxy@@AEAPEAUIImmersiveMonitor@@AEAPEAVCreationThreadDispatcher@@PEAUIXamlTaskbarProxyHost@@@wil@@YA?AV?$ComPtr@VXamlTaskbarProxy@@@WRL@Microsoft@@AEAPEAUIImmersiveMonitor@@AEAPEAVCreationThreadDispatcher@@$$QEAPEAUIXamlTaskbarProxyHost@@@Z @ 0x18011E848 (--$MakeAndInitializeOrThrow@VXamlTaskbarProxy@@AEAPEAUIImmersiveMonitor@@AEAPEAVCreationThreadDi.c)
 * Callees:
 *     ?Release@?$RuntimeClass@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18001E470 (-Release@-$RuntimeClass@U-$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Mi.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall XamlTaskbarProxy::RuntimeClassInitialize(
        XamlTaskbarProxy *this,
        struct IImmersiveMonitor *a2,
        struct CreationThreadDispatcher *a3,
        struct IXamlTaskbarProxyHost *a4)
{
  __int64 v8; // rcx
  __int64 v9; // rcx
  signed __int32 v10; // eax
  volatile signed __int32 *v11; // rcx

  if ( *((struct IXamlTaskbarProxyHost **)this + 5) != a4 )
  {
    if ( a4 )
      (*(void (__fastcall **)(struct IXamlTaskbarProxyHost *))(*(_QWORD *)a4 + 8LL))(a4);
    v8 = *((_QWORD *)this + 5);
    *((_QWORD *)this + 5) = a4;
    if ( v8 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  if ( *((struct IImmersiveMonitor **)this + 6) != a2 )
  {
    if ( a2 )
      (*(void (__fastcall **)(struct IImmersiveMonitor *))(*(_QWORD *)a2 + 8LL))(a2);
    v9 = *((_QWORD *)this + 6);
    *((_QWORD *)this + 6) = a2;
    if ( v9 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
  if ( *((struct CreationThreadDispatcher **)this + 10) != a3 )
  {
    if ( a3 )
    {
      do
        v10 = *((_DWORD *)a3 + 7);
      while ( v10 != 0x7FFFFFFF && v10 != _InterlockedCompareExchange((volatile signed __int32 *)a3 + 7, v10 + 1, v10) );
    }
    v11 = (volatile signed __int32 *)*((_QWORD *)this + 10);
    *((_QWORD *)this + 10) = a3;
    if ( v11 )
      Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(v11);
  }
  return 0LL;
}
