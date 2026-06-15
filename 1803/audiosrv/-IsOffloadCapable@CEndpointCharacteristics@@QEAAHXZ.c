/*
 * XREFs of ?IsOffloadCapable@CEndpointCharacteristics@@QEAAHXZ @ 0x180095530
 * Callers:
 *     _lambda_f3af0907113bf748eb1a6fb65ef667f3_::operator() @ 0x18004FEDC (_lambda_f3af0907113bf748eb1a6fb65ef667f3_--operator().c)
 *     AudioServerIsOffloadCapable @ 0x1800C53B0 (AudioServerIsOffloadCapable.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     ??0?$CComQIPtr@UIMMEndpointInternal@@$1?_GUID_419e19f7_d318_4c05_b705_2f17133c55da@@3U__s_GUID@@B@ATL@@QEAA@PEAUIUnknown@@@Z @ 0x180098760 (--0-$CComQIPtr@UIMMEndpointInternal@@$1-_GUID_419e19f7_d318_4c05_b705_2f17133c55da@@3U__s_GUID@@.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CEndpointCharacteristics::IsOffloadCapable(CEndpointCharacteristics *this)
{
  __int64 v1; // rcx
  unsigned int v2; // ebx
  unsigned int v4; // [rsp+40h] [rbp+8h] BYREF
  __int64 v5; // [rsp+48h] [rbp+10h] BYREF

  v4 = 0;
  ATL::CComQIPtr<IMMEndpointInternal,&__s_GUID const _GUID_419e19f7_d318_4c05_b705_2f17133c55da>::CComQIPtr<IMMEndpointInternal,&__s_GUID const _GUID_419e19f7_d318_4c05_b705_2f17133c55da>(
    &v5,
    *((_QWORD *)this + 2));
  v1 = v5;
  if ( v5 )
  {
    (*(void (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v5 + 88LL))(v5, &v4);
    v1 = v5;
  }
  v2 = v4;
  if ( v1 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
  return v2;
}
