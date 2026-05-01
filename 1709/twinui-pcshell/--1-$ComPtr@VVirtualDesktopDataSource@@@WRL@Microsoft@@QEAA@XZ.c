/*
 * XREFs of ??1?$ComPtr@VVirtualDesktopDataSource@@@WRL@Microsoft@@QEAA@XZ @ 0x1801B5BC8
 * Callers:
 *     _VirtualDesktopDataSource_CreateInstance_::_1_::dtor$0 @ 0x1801F6CC2 (_VirtualDesktopDataSource_CreateInstance_--_1_--dtor$0.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$0BD@@WRL@Microsoft@@$00$00$0A@UIBuffer@Streams@Storage@Windows@@U?$CloakedIid@UIBufferByteAccess@Streams@Storage@Windows@@@23@U?$CloakedIid@UIMarshal@@@23@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180139680 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$0BD@@WRL@Microsoft@@$00$00$0A@UIB_ea_180139680.c)
 */

volatile signed __int64 *__fastcall Microsoft::WRL::ComPtr<VirtualDesktopDataSource>::~ComPtr<VirtualDesktopDataSource>(
        volatile signed __int64 **a1)
{
  volatile signed __int64 *result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return (volatile signed __int64 *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<19>,1,1,0,Windows::Storage::Streams::IBuffer,Microsoft::WRL::CloakedIid<Windows::Storage::Streams::IBufferByteAccess>,Microsoft::WRL::CloakedIid<IMarshal>,Microsoft::WRL::FtmBase>::Release(result);
  }
  return result;
}
