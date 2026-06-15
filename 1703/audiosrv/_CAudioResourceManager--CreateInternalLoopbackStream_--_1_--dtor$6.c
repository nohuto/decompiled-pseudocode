/*
 * XREFs of _CAudioResourceManager::CreateInternalLoopbackStream_::_1_::dtor$6 @ 0x1800AB83A
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CAudioResourceManager::CreateInternalLoopbackStream_::_1_::dtor_6(__int64 a1, __int64 a2)
{
  std::unique_ptr<StreamGroupParams>::~unique_ptr<StreamGroupParams>((LPVOID **)(a2 + 248));
}
