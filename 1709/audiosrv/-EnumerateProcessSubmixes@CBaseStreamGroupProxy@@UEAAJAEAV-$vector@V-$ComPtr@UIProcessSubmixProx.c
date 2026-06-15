/*
 * XREFs of ?EnumerateProcessSubmixes@CBaseStreamGroupProxy@@UEAAJAEAV?$vector@V?$ComPtr@UIProcessSubmixProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIProcessSubmixProxy@@@WRL@Microsoft@@@std@@@std@@@Z @ 0x1800933A0
 * Callers:
 *     <none>
 * Callees:
 *     ?PruneStaleProcessSubmixes@CBaseStreamGroupProxy@@IEAAXXZ @ 0x18000DB18 (-PruneStaleProcessSubmixes@CBaseStreamGroupProxy@@IEAAXXZ.c)
 *     std::_For_each_unchecked_Microsoft::WRL::WeakRef_const_____ptr64__lambda_3ea8e7556f72cf8b3f162dbd37187d30___ @ 0x180091F64 (std--_For_each_unchecked_Microsoft--WRL--WeakRef_const_____ptr64__lambda_3ea8e7556f72cf8b3f162db.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CBaseStreamGroupProxy::EnumerateProcessSubmixes(
        Microsoft::WRL::Details::WeakReferenceImpl ***this,
        __int64 a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rbx
  const char *v5; // r9
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v8; // [rsp+40h] [rbp+8h] BYREF
  struct _RTL_CRITICAL_SECTION *v9; // [rsp+48h] [rbp+10h]

  try
  {
    v4 = (struct _RTL_CRITICAL_SECTION *)(this + 19);
    EnterCriticalSection((LPCRITICAL_SECTION)(this + 19));
    v9 = v4;
    CBaseStreamGroupProxy::PruneStaleProcessSubmixes((CBaseStreamGroupProxy *)this);
    v8 = a2;
    std::_For_each_unchecked_Microsoft::WRL::WeakRef_const_____ptr64__lambda_3ea8e7556f72cf8b3f162dbd37187d30___(
      this[27],
      this[28],
      &v8);
    if ( v4 )
      LeaveCriticalSection(v4);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x1FD,
                           (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
                           v5);
  }
  return result;
}
