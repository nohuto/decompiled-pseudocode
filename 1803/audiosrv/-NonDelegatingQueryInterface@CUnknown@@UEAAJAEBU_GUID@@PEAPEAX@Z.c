/*
 * XREFs of ?NonDelegatingQueryInterface@CUnknown@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800FAAF0
 * Callers:
 *     ?NonDelegatingQueryInterface@PhoneCallAudio@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180036ED0 (-NonDelegatingQueryInterface@PhoneCallAudio@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?NonDelegatingQueryInterface@AudioDeviceMgr@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800563C0 (-NonDelegatingQueryInterface@AudioDeviceMgr@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?NonDelegatingQueryInterface@EndpointCollection@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180056740 (-NonDelegatingQueryInterface@EndpointCollection@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?NonDelegatingQueryInterface@EndpointDevice@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180057830 (-NonDelegatingQueryInterface@EndpointDevice@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?NonDelegatingQueryInterface@EndpointIterator@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180117D70 (-NonDelegatingQueryInterface@EndpointIterator@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?NonDelegatingQueryInterface@PhoneTopology@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180119600 (-NonDelegatingQueryInterface@PhoneTopology@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?NonDelegatingQueryInterface@TelephonyController@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18011BBA0 (-NonDelegatingQueryInterface@TelephonyController@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?NonDelegatingQueryInterface@TelephonyControllerCallInstance@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18011C730 (-NonDelegatingQueryInterface@TelephonyControllerCallInstance@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CUnknown::NonDelegatingQueryInterface(CUnknown *this, const struct _GUID *a2, void **a3)
{
  __int64 v4; // rax

  if ( !a3 )
    return 2147942487LL;
  v4 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&IID_IUnknown.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&IID_IUnknown.Data1 )
    v4 = *(_QWORD *)a2->Data4 - *(_QWORD *)IID_IUnknown.Data4;
  if ( v4 )
  {
    *a3 = 0LL;
    return 2147500034LL;
  }
  else
  {
    *a3 = this;
    (*(void (__fastcall **)(CUnknown *))(*(_QWORD *)this + 8LL))(this);
    return 0LL;
  }
}
