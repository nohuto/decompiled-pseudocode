/*
 * XREFs of ?Release@?$RuntimeClass@U?$InterfaceList@UIBuffer@Streams@Storage@Windows@@U?$InterfaceList@U?$CloakedIid@UIBufferByteAccess@Streams@Storage@Windows@@@WRL@Microsoft@@U?$InterfaceList@U?$CloakedIid@UIMarshal@@@WRL@Microsoft@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@23@@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$0BD@@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18010F280
 * Callers:
 *     ?Release@?$CBuffer@P6AXPEAX@ZUDefaultMarshaler@Streams@Storage@Windows@@@Streams@Storage@Windows@@UEAAKXZ @ 0x18010ECB0 (-Release@-$CBuffer@P6AXPEAX@ZUDefaultMarshaler@Streams@Storage@Windows@@@Streams@Storage@Windows.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIBuffer@Streams@Storage@Windows@@U?$InterfaceList@U?$CloakedIid@UIBufferByteAccess@Streams@Storage@Windows@@@WRL@Microsoft@@U?$InterfaceList@U?$CloakedIid@UIMarshal@@@WRL@Microsoft@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@23@@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$0BD@@34@$00$00$0A@@Details@WRL@Microsoft@@W7EAAKXZ @ 0x18010F0B0 (-Release@-$RuntimeClass@U-$InterfaceList@UIBuffer@Streams@Storage@Windows@@U-$InterfaceList@U-$C.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIBuffer@Streams@Storage@Windows@@U?$InterfaceList@U?$CloakedIid@UIBufferByteAccess@Streams@Storage@Windows@@@WRL@Microsoft@@U?$InterfaceList@U?$CloakedIid@UIMarshal@@@WRL@Microsoft@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@23@@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$0BD@@34@$00$00$0A@@Details@WRL@Microsoft@@WBA@EAAKXZ @ 0x18010F0D0 (-Release@-$RuntimeClass@U-$InterfaceList@UIBuffer@Streams@Storage@Windows@@U-$Inter_ea_18010F0D0.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIBuffer@Streams@Storage@Windows@@U?$InterfaceList@U?$CloakedIid@UIBufferByteAccess@Streams@Storage@Windows@@@WRL@Microsoft@@U?$InterfaceList@U?$CloakedIid@UIMarshal@@@WRL@Microsoft@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@23@@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$0BD@@34@$00$00$0A@@Details@WRL@Microsoft@@WBI@EAAKXZ @ 0x18010F0F0 (-Release@-$RuntimeClass@U-$InterfaceList@UIBuffer@Streams@Storage@Windows@@U-$Inter_ea_18010F0F0.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIBuffer@Streams@Storage@Windows@@U?$InterfaceList@U?$CloakedIid@UIBufferByteAccess@Streams@Storage@Windows@@@WRL@Microsoft@@U?$InterfaceList@U?$CloakedIid@UIMarshal@@@WRL@Microsoft@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@23@@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$0BD@@34@$00$00$0A@@Details@WRL@Microsoft@@WCA@EAAKXZ @ 0x18010F110 (-Release@-$RuntimeClass@U-$InterfaceList@UIBuffer@Streams@Storage@Windows@@U-$Inter_ea_18010F110.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Windows::Storage::Streams::IBuffer,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::CloakedIid<Windows::Storage::Streams::IBufferByteAccess>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::CloakedIid<IMarshal>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>>>,Microsoft::WRL::RuntimeClassFlags<19>,1,1,0>::Release(
        volatile signed __int64 *a1)
{
  signed __int64 v1; // rdx
  unsigned __int32 v2; // ebx
  bool v3; // zf
  __int64 v4; // rax
  signed __int32 v5; // r8d

  v1 = *((_QWORD *)a1 + 8);
  if ( v1 < 0 )
  {
    do
LABEL_8:
      v5 = *(_DWORD *)(2 * v1 + 0x10);
    while ( v5 != 0x7FFFFFFF && v5 != _InterlockedCompareExchange((volatile signed __int32 *)(2 * v1 + 16), v5 - 1, v5) );
    v2 = v5 - 1;
LABEL_10:
    if ( !v2 )
    {
      if ( a1 )
        (*(void (__fastcall **)(volatile signed __int64 *, __int64))(*a1 + 72))(a1, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
    }
  }
  else
  {
    while ( (_DWORD)v1 != 0x7FFFFFFF )
    {
      v2 = v1 - 1;
      v4 = _InterlockedCompareExchange64(a1 + 8, v1 - 1, v1);
      v3 = v1 == v4;
      v1 = v4;
      if ( v3 )
        goto LABEL_10;
      if ( v4 < 0 )
        goto LABEL_8;
    }
    return 2147483646;
  }
  return v2;
}
