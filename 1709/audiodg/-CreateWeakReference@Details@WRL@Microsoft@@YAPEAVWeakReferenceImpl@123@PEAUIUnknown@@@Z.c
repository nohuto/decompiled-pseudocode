/*
 * XREFs of ?CreateWeakReference@Details@WRL@Microsoft@@YAPEAVWeakReferenceImpl@123@PEAUIUnknown@@@Z @ 0x14004C0D0
 * Callers:
 *     ?GetWeakReference@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U?$IAsyncOperation@PEAVModuleCommandResult@Devices@Media@Windows@@@Foundation@Windows@@V?$AsyncBaseFTM@U?$IAsyncOperationCompletedHandler@PEAVModuleCommandResult@Devices@Media@Windows@@@Foundation@Windows@@$00U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@6@@Details@WRL@Microsoft@@UEAAJPEAPEAUIWeakReference@@@Z @ 0x14004DB40 (-GetWeakReference@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U-$IAsync.c)
 *     ?GetWeakReference@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U?$IIterator@PEAUIBuffer@Streams@Storage@Windows@@@Collections@Foundation@Windows@@@Details@WRL@Microsoft@@UEAAJPEAPEAUIWeakReference@@@Z @ 0x14004DC10 (-GetWeakReference@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U-$IItera.c)
 *     ?GetWeakReference@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U?$IVectorView@PEAVAudioDeviceModule@Devices@Media@Windows@@@Collections@Foundation@Windows@@U?$IIterable@PEAVAudioDeviceModule@Devices@Media@Windows@@@567@@Details@WRL@Microsoft@@UEAAJPEAPEAUIWeakReference@@@Z @ 0x14004DCE0 (-GetWeakReference@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U-$IVecto.c)
 *     ?GetWeakReference@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIAudioDeviceBroker@Internal@Devices@Media@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAJPEAPEAUIWeakReference@@@Z @ 0x14004DDB0 (-GetWeakReference@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIAudioDe.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x14001D278 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0WeakReferenceImpl@Details@WRL@Microsoft@@QEAA@PEAUIUnknown@@@Z @ 0x14004AF88 (--0WeakReferenceImpl@Details@WRL@Microsoft@@QEAA@PEAUIUnknown@@@Z.c)
 */

struct Microsoft::WRL::Details::WeakReferenceImpl *__fastcall Microsoft::WRL::Details::CreateWeakReference(
        struct IUnknown *this,
        struct IUnknown *a2)
{
  __int64 v3; // rbx
  Microsoft::WRL::Details::WeakReferenceImpl *v4; // rax

  v3 = 0LL;
  v4 = (Microsoft::WRL::Details::WeakReferenceImpl *)operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v4 )
    return Microsoft::WRL::Details::WeakReferenceImpl::WeakReferenceImpl(v4, this);
  return (struct Microsoft::WRL::Details::WeakReferenceImpl *)v3;
}
