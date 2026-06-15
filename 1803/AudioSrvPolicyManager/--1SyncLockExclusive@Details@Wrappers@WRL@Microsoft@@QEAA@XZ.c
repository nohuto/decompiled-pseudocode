/*
 * XREFs of ??1SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@QEAA@XZ @ 0x18001F8A8
 * Callers:
 *     _CApplicationManager::RpcGetProcess_::_1_::dtor$14 @ 0x1800373A5 (_CApplicationManager--RpcGetProcess_--_1_--dtor$14.c)
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
