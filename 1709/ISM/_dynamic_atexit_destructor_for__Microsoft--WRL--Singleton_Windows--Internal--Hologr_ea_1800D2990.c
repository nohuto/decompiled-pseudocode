/*
 * XREFs of _dynamic_atexit_destructor_for__Microsoft::WRL::Singleton_Windows::Internal::Holographic::SpatialGraphNodeReferenceFactory_Windows::Internal::Holographic::SpatialGraphNodeReferenceFactory_::m_wpDestructorFinishedEvent__ @ 0x1800D2990
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

__int64 dynamic_atexit_destructor_for__Microsoft::WRL::Singleton_Windows::Internal::Holographic::SpatialGraphNodeReferenceFactory_Windows::Internal::Holographic::SpatialGraphNodeReferenceFactory_::m_wpDestructorFinishedEvent__()
{
  __int64 v0; // rcx
  __int64 result; // rax

  v0 = qword_180110680;
  if ( qword_180110680 )
  {
    result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)(qword_180110680 + 12), 0xFFFFFFFF);
    if ( (_DWORD)result == 1 )
      return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v0 + 8LL))(v0);
  }
  return result;
}
