/*
 * XREFs of ?QueryInterface@?$RuntimeClass@U?$InterfaceList@UIMMNotificationClient@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800A6E00
 * Callers:
 *     ?QueryInterface@?$RuntimeClass@U?$InterfaceList@UIMMNotificationClient@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180058490 (-QueryInterface@-$RuntimeClass@U-$InterfaceList@UIMMNotificationClient@@VNil@Details@WRL@Microso.c)
 *     ?QueryInterface@?$RuntimeClass@U?$InterfaceList@UIMMNotificationClient@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800584A0 (-QueryInterface@-$RuntimeClass@U-$InterfaceList@UIMMNotificationClient@@VNil@Detail_ea_1800584A0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IMMNotificationClient,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::QueryInterface(
        __int64 a1,
        const struct _GUID *a2,
        _QWORD *a3)
{
  return Microsoft::WRL::Details::RuntimeClassBaseT<3>::AsIID<Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IMMNotificationClient,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>>(
           a1,
           a2,
           a3);
}
