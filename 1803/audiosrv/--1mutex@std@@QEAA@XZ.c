/*
 * XREFs of ??1mutex@std@@QEAA@XZ @ 0x18009CB1C
 * Callers:
 *     _CPowerReferenceManager::CPowerReferenceManager_::_1_::dtor$5 @ 0x180069980 (_CPowerReferenceManager--CPowerReferenceManager_--_1_--dtor$5.c)
 *     _CPowerReferenceManager::CPowerReferenceManager_::_1_::dtor$15 @ 0x1800699AC (_CPowerReferenceManager--CPowerReferenceManager_--_1_--dtor$15.c)
 *     _CPowerReferenceManager::CPowerReferenceManager_::_1_::dtor$29 @ 0x1800699CB (_CPowerReferenceManager--CPowerReferenceManager_--_1_--dtor$29.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __cdecl std::mutex::~mutex(_Mtx_t a1)
{
  _Mtx_destroy_in_situ(a1);
}
