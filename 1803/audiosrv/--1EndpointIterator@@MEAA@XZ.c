/*
 * XREFs of ??1EndpointIterator@@MEAA@XZ @ 0x1801174CC
 * Callers:
 *     ??_GEndpointIterator@@MEAAPEAXI@Z @ 0x180117594 (--_GEndpointIterator@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@EndpointDevice@@UEAAKXZ @ 0x180056840 (-Release@EndpointDevice@@UEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall EndpointIterator::~EndpointIterator(EndpointIterator *this)
{
  struct _RTL_CRITICAL_SECTION *v2; // rcx
  __int64 v3; // rcx
  EndpointDevice *v4; // rcx
  __int64 (__fastcall *v5)(EndpointDevice *); // rax

  *(_QWORD *)this = &EndpointIterator::`vftable'{for `IEndpointIterator'};
  *((_QWORD *)this + 1) = &EndpointIterator::`vftable'{for `CUnknown'};
  v2 = (struct _RTL_CRITICAL_SECTION *)*((_QWORD *)this + 4);
  if ( v2 )
  {
    LeaveCriticalSection(v2 + 2);
    v3 = *((_QWORD *)this + 4);
    if ( v3 )
    {
      *((_QWORD *)this + 4) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
      v4 = (EndpointDevice *)*((_QWORD *)this + 4);
      if ( v4 )
      {
        v5 = *(__int64 (__fastcall **)(EndpointDevice *))(*(_QWORD *)v4 + 16LL);
        if ( v5 == EndpointDevice::Release )
          EndpointDevice::Release(v4);
        else
          v5(v4);
      }
    }
  }
  *((_QWORD *)this + 1) = &CUnknown::`vftable';
}
