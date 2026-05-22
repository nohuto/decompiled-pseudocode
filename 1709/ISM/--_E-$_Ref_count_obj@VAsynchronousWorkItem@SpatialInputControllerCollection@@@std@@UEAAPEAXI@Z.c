/*
 * XREFs of ??_E?$_Ref_count_obj@VAsynchronousWorkItem@SpatialInputControllerCollection@@@std@@UEAAPEAXI@Z @ 0x180098F00
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800CBCC8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

_QWORD *__fastcall std::_Ref_count_obj<SpatialInputControllerCollection::AsynchronousWorkItem>::`vector deleting destructor'(
        _QWORD *a1,
        char a2)
{
  *a1 = &std::_Ref_count_base::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
