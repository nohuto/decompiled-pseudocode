/*
 * XREFs of ??1XamlBaseViewController@@IE$AAA@XZ @ 0x1801437C4
 * Callers:
 *     ?__abi_Release@?QObject@Platform@@XamlAltTabViewController@@UE$AAAKXZ @ 0x180143840 (-__abi_Release@-QObject@Platform@@XamlAltTabViewController@@UE$AAAKXZ.c)
 *     ?__abi_Release@?QObject@Platform@@XamlSnapAssistViewController@@UE$AAAKXZ @ 0x180145290 (-__abi_Release@-QObject@Platform@@XamlSnapAssistViewController@@UE$AAAKXZ.c)
 *     ?__abi_Release@?QObject@Platform@@XamlBaseViewController@@UE$AAAKXZ @ 0x180146D00 (-__abi_Release@-QObject@Platform@@XamlBaseViewController@@UE$AAAKXZ.c)
 * Callees:
 *     ?Release@?$RuntimeClass@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18001E470 (-Release@-$RuntimeClass@U-$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Mi.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall XamlBaseViewController::~XamlBaseViewController(_QWORD *a1)
{
  volatile signed __int32 *v2; // rcx
  __int64 result; // rax
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx

  v2 = (volatile signed __int32 *)a1[10];
  if ( v2 )
    result = Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(v2);
  v4 = a1[9];
  if ( v4 )
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  v5 = a1[8];
  if ( v5 )
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  v6 = a1[7];
  if ( v6 )
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  v7 = a1[6];
  if ( v7 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  return result;
}
