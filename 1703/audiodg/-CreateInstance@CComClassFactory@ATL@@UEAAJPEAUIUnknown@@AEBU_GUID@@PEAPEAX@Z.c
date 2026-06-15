/*
 * XREFs of ?CreateInstance@CComClassFactory@ATL@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x140004960
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x14001E780 (_guard_dispatch_icall_nop.c)
 *     ?InlineIsEqualUnknown@ATL@@YAHAEBU_GUID@@@Z @ 0x1400334AC (-InlineIsEqualUnknown@ATL@@YAHAEBU_GUID@@@Z.c)
 */

__int64 __fastcall ATL::CComClassFactory::CreateInstance(
        ATL::CComClassFactory *this,
        struct IUnknown *a2,
        const struct _GUID *a3,
        void **a4)
{
  struct IUnknown *v4; // r10
  ATL::CComClassFactory *v5; // rdx
  const struct _GUID *v6; // r11
  __int64 (__fastcall *v7)(__int64, __int64, void **); // rax

  v4 = a2;
  v5 = this;
  v6 = a3;
  if ( !a4 )
    return 2147500035LL;
  *a4 = 0LL;
  if ( v4 && !(unsigned int)ATL::InlineIsEqualUnknown(a3) )
    return 2147746064LL;
  v7 = (__int64 (__fastcall *)(__int64, __int64, void **))*((_QWORD *)v5 + 8);
  if ( (char *)v7 == (char *)ATL::CComCreator2<ATL::CComCreator<ATL::CComObject<CAPOWrapperSrv>>,ATL::CComCreator<ATL::CComAggObject<CAPOWrapperSrv>>>::CreateInstance )
    return ATL::CComCreator2<ATL::CComCreator<ATL::CComObject<CAPOWrapperSrv>>,ATL::CComCreator<ATL::CComAggObject<CAPOWrapperSrv>>>::CreateInstance(
             v4,
             v6,
             a4);
  if ( (char *)v7 == (char *)ATL::CComCreator2<ATL::CComCreator<ATL::CComObject<CStreamGroup>>,ATL::CComCreator<ATL::CComAggObject<CStreamGroup>>>::CreateInstance )
    return ATL::CComCreator2<ATL::CComCreator<ATL::CComObject<CStreamGroup>>,ATL::CComCreator<ATL::CComAggObject<CStreamGroup>>>::CreateInstance(
             (__int64)v4,
             (__int64)v6,
             a4);
  if ( (char *)v7 == (char *)ATL::CComCreator2<ATL::CComCreator<ATL::CComObject<CProcessSubmix>>,ATL::CComCreator<ATL::CComAggObject<CProcessSubmix>>>::CreateInstance )
    return ATL::CComCreator2<ATL::CComCreator<ATL::CComObject<CProcessSubmix>>,ATL::CComCreator<ATL::CComAggObject<CProcessSubmix>>>::CreateInstance(
             (__int64)v4,
             (__int64)v6,
             a4);
  if ( (char *)v7 == (char *)ATL::CComCreator2<ATL::CComCreator<ATL::CComObject<CAudioDeviceGraph>>,ATL::CComCreator<ATL::CComAggObject<CAudioDeviceGraph>>>::CreateInstance )
    return ATL::CComCreator2<ATL::CComCreator<ATL::CComObject<CAudioDeviceGraph>>,ATL::CComCreator<ATL::CComAggObject<CAudioDeviceGraph>>>::CreateInstance(
             (__int64)v4,
             (__int64)v6,
             a4);
  if ( (char *)v7 == (char *)ATL::CComCreator2<ATL::CComCreator<ATL::CComObject<CSystemAudioDeviceShared>>,ATL::CComCreator<ATL::CComAggObject<CSystemAudioDeviceShared>>>::CreateInstance )
    return ATL::CComCreator2<ATL::CComCreator<ATL::CComObject<CSystemAudioDeviceShared>>,ATL::CComCreator<ATL::CComAggObject<CSystemAudioDeviceShared>>>::CreateInstance(
             (__int64)v4,
             (__int64)v6,
             a4);
  return v7((__int64)v4, (__int64)v6, a4);
}
