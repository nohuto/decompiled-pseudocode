/*
 * XREFs of ??1EndpointIterator@@MEAA@XZ @ 0x1800E8360
 * Callers:
 *     ??_GEndpointIterator@@MEAAPEAXI@Z @ 0x1800E8408 (--_GEndpointIterator@@MEAAPEAXI@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall EndpointIterator::~EndpointIterator(EndpointIterator *this)
{
  struct _RTL_CRITICAL_SECTION *v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rcx

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
    }
  }
  v4 = *((_QWORD *)this + 4);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  *((_QWORD *)this + 1) = &CUnknown::`vftable';
}
