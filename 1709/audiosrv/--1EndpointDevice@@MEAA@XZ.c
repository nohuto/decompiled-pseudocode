/*
 * XREFs of ??1EndpointDevice@@MEAA@XZ @ 0x1800E900C
 * Callers:
 *     ??_GEndpointDevice@@MEAAPEAXI@Z @ 0x1800E9148 (--_GEndpointDevice@@MEAAPEAXI@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall EndpointDevice::~EndpointDevice(EndpointDevice *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx

  *(_QWORD *)this = &EndpointDevice::`vftable'{for `IEndpointDevice'};
  *((_QWORD *)this + 1) = &EndpointDevice::`vftable'{for `CUnknown'};
  SysFreeString(*((BSTR *)this + 16));
  SysFreeString(*((BSTR *)this + 15));
  SysFreeString(*((BSTR *)this + 7));
  SysFreeString(*((BSTR *)this + 6));
  v2 = *((_QWORD *)this + 5);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  v3 = *((_QWORD *)this + 4);
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  *((_QWORD *)this + 1) = &CUnknown::`vftable';
}
