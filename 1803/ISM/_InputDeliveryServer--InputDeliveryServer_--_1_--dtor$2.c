/*
 * XREFs of _InputDeliveryServer::InputDeliveryServer_::_1_::dtor$2 @ 0x1800E4371
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall InputDeliveryServer::InputDeliveryServer_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  InputAttemptedTargetManager::~InputAttemptedTargetManager(
    (InputAttemptedTargetManager *)(*(_QWORD *)(a2 + 192) + 64LL),
    a2);
}
