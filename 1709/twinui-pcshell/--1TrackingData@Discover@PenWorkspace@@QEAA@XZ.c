/*
 * XREFs of ??1TrackingData@Discover@PenWorkspace@@QEAA@XZ @ 0x1800E5914
 * Callers:
 *     _PenWorkspaceDiscoverBroker::RuntimeClassInitialize_::_1_::dtor$5 @ 0x1801EC237 (_PenWorkspaceDiscoverBroker--RuntimeClassInitialize_--_1_--dtor$5.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall PenWorkspace::Discover::TrackingData::~TrackingData(PenWorkspace::Discover::TrackingData *this)
{
  volatile signed __int32 *v1; // rbx

  v1 = (volatile signed __int32 *)*((_QWORD *)this + 2);
  if ( v1 && _InterlockedExchangeAdd(v1 + 2, 0xFFFFFFFF) == 1 )
  {
    (**(void (__fastcall ***)(volatile signed __int32 *))v1)(v1);
    if ( _InterlockedExchangeAdd(v1 + 3, 0xFFFFFFFF) == 1 )
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v1 + 8LL))(v1);
  }
}
