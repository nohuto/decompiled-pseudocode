/*
 * XREFs of ??1InputAttemptedTargetManager@@QEAA@XZ @ 0x180023904
 * Callers:
 *     _InputDeliveryServer::InputDeliveryServer_::_1_::dtor$2 @ 0x1800E4371 (_InputDeliveryServer--InputDeliveryServer_--_1_--dtor$2.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

void __fastcall InputAttemptedTargetManager::~InputAttemptedTargetManager(
        InputAttemptedTargetManager *this,
        __int64 a2)
{
  __int64 v3; // rcx

  v3 = *((_QWORD *)this + 3);
  if ( v3 )
  {
    *((_QWORD *)this + 3) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  std::vector<Microsoft::WRL::ComPtr<InputSiteElementProxy>>::~vector<Microsoft::WRL::ComPtr<InputSiteElementProxy>>(
    (__int64)this,
    a2);
}
