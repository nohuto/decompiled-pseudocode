/*
 * XREFs of _dynamic_atexit_destructor_for__Sarm::CEndpointResourcePool::s_sharedPool__ @ 0x18006B690
 * Callers:
 *     <none>
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x1800494E0 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 */

void dynamic_atexit_destructor_for__Sarm::CEndpointResourcePool::s_sharedPool__()
{
  if ( qword_18018B188 )
    std::_Ref_count_base::_Decref(qword_18018B188);
}
