/*
 * XREFs of ??1SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@QEAA@XZ @ 0x180068FC0
 * Callers:
 *     _Microsoft::WRL::Singleton_Windows::Internal::Holographic::SpatialGraphNodeReferenceFactory_Windows::Internal::Holographic::SpatialGraphNodeReferenceFactory_::_Create_Windows::Internal::Holographic::ISpatialGraphNodeReferenceFactory__::_1_::dtor$3 @ 0x1800D1EF7 (_Microsoft--WRL--Singleton_Windows--Internal--Holographic--SpatialGraphNodeReferenc_ea_1800D1EF7.c)
 * Callees:
 *     <none>
 */

void __fastcall Microsoft::WRL::Wrappers::Details::SyncLockExclusive::~SyncLockExclusive(RTL_SRWLOCK **this)
{
  RTL_SRWLOCK *v2; // rcx

  v2 = *this;
  if ( v2 )
  {
    ReleaseSRWLockExclusive(v2);
    *this = 0LL;
  }
}
