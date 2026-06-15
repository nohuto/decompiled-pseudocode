/*
 * XREFs of ?EnumerateProcessSubmixes@CBaseStreamGroupProxy@@UEAAJAEAV?$vector@V?$ComPtr@UIProcessSubmixProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIProcessSubmixProxy@@@WRL@Microsoft@@@std@@@std@@@Z @ 0x1800C9400
 * Callers:
 *     <none>
 * Callees:
 *     ?PruneStaleProcessSubmixes@CBaseStreamGroupProxy@@IEAAXXZ @ 0x180095EDC (-PruneStaleProcessSubmixes@CBaseStreamGroupProxy@@IEAAXXZ.c)
 *     std::for_each_std::_Vector_const_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::WeakRef_______lambda_3ea8e7556f72cf8b3f162dbd37187d30___ @ 0x1800C7B04 (std--for_each_std--_Vector_const_iterator_std--_Vector_val_std--_Simple_types_Microsoft--WRL--We.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CBaseStreamGroupProxy::EnumerateProcessSubmixes(CBaseStreamGroupProxy *this, _QWORD *a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rbx
  const char *v5; // r9
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v8; // [rsp+48h] [rbp+10h] BYREF

  try
  {
    v4 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 152);
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 152));
    CBaseStreamGroupProxy::PruneStaleProcessSubmixes(this);
    std::for_each_std::_Vector_const_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::WeakRef_______lambda_3ea8e7556f72cf8b3f162dbd37187d30___(
      &v8,
      *((_QWORD **)this + 27),
      *((_QWORD **)this + 28),
      a2);
    if ( v4 )
      LeaveCriticalSection(v4);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x1FE,
                           (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
                           v5);
  }
  return result;
}
