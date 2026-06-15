/*
 * XREFs of _dynamic_atexit_destructor_for__Sarm::CEndpointResourcePool::s_sharedPool__ @ 0x18003A600
 * Callers:
 *     <none>
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18002A270 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 */

void dynamic_atexit_destructor_for__Sarm::CEndpointResourcePool::s_sharedPool__()
{
  if ( qword_18014C460 )
    std::_Ref_count_base::_Decref(qword_18014C460);
}
