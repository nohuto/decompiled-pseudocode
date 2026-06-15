/*
 * XREFs of ??1EndpointDevice@@MEAA@XZ @ 0x180117FCC
 * Callers:
 *     ??_GEndpointDevice@@MEAAPEAXI@Z @ 0x1801180A8 (--_GEndpointDevice@@MEAAPEAXI@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall EndpointDevice::~EndpointDevice(EndpointDevice *this)
{
  __int64 v2; // rcx

  *(_QWORD *)this = &EndpointDevice::`vftable'{for `IEndpointDevice'};
  *((_QWORD *)this + 1) = &EndpointDevice::`vftable'{for `CUnknown'};
  SysFreeString(*((BSTR *)this + 11));
  SysFreeString(*((BSTR *)this + 10));
  SysFreeString(*((BSTR *)this + 6));
  SysFreeString(*((BSTR *)this + 5));
  v2 = *((_QWORD *)this + 4);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  *((_QWORD *)this + 1) = &CUnknown::`vftable';
}
