/*
 * XREFs of ?OnNewProcessSubmix@CProcessSubmixManager@@UEAAJPEAUIProcessSubmixProxy@@@Z @ 0x180022CF0
 * Callers:
 *     ?WorkCallback@CSerialWorkQueue@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x18001C590 (-WorkCallback@CSerialWorkQueue@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 *     std::_Func_impl_no_alloc__lambda_7ec12844dd892c2137a8dee196d89f16__void_::_Do_call @ 0x18001FC90 (std--_Func_impl_no_alloc__lambda_7ec12844dd892c2137a8dee196d89f16__void_--_Do_call.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     ?Find@?$CAtlList@KV?$CElementTraits@K@ATL@@@ATL@@QEBAPEAU__POSITION@@KPEAU3@@Z @ 0x1800CC8B4 (-Find@-$CAtlList@KV-$CElementTraits@K@ATL@@@ATL@@QEBAPEAU__POSITION@@KPEAU3@@Z.c)
 *     _lambda_43698c41cf4338565ce00927154dde27_::operator()_std::unique_ptr_CAppSubmixClientContext_std::default_delete_CAppSubmixClientContext____const__ @ 0x1800D5BF0 (_lambda_43698c41cf4338565ce00927154dde27_--operator()_std--unique_ptr_CAppSubmixClientContext_st.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CProcessSubmixManager::OnNewProcessSubmix(
        CProcessSubmixManager *this,
        struct IProcessSubmixProxy *a2)
{
  struct _RTL_CRITICAL_SECTION *v3; // rdi
  const char *v4; // r9
  __int64 result; // rax
  const WCHAR **v6; // rsi
  __int64 v7; // rax
  const WCHAR *v8; // rsi
  const WCHAR *v9; // rax
  const WCHAR **v10; // rsi
  const WCHAR ***i; // rbx
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  struct IProcessSubmixProxy **v13; // [rsp+60h] [rbp+8h] BYREF
  struct IProcessSubmixProxy *v14; // [rsp+68h] [rbp+10h] BYREF
  struct _RTL_CRITICAL_SECTION *v15; // [rsp+70h] [rbp+18h]

  v14 = a2;
  try
  {
    v3 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 16);
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
    v15 = v3;
    v13 = &v14;
    for ( i = (const WCHAR ***)*((_QWORD *)this + 7); ; ++i )
    {
      if ( i == *((const WCHAR ****)this + 8) )
      {
        if ( v3 )
          LeaveCriticalSection(v3);
        return 0LL;
      }
      v6 = *i;
      if ( *((_DWORD *)*i + 3) == 2 )
      {
        v7 = (*(__int64 (__fastcall **)(struct IProcessSubmixProxy *))(*(_QWORD *)v14 + 104LL))(v14);
        if ( ATL::CAtlList<unsigned long,ATL::CElementTraits<unsigned long>>::Find(v7, *((unsigned int *)*i + 2)) )
          goto LABEL_14;
      }
      else if ( *((_DWORD *)v6 + 2)
             && *((_DWORD *)v6 + 2) == (*(unsigned int (__fastcall **)(struct IProcessSubmixProxy *))(*(_QWORD *)v14 + 96LL))(v14)
             || (v8 = **i,
                 v9 = (const WCHAR *)(*(__int64 (__fastcall **)(struct IProcessSubmixProxy *))(*(_QWORD *)v14 + 160LL))(v14),
                 CompareStringOrdinal(v8, -1, v9, -1, 1) == 2)
             && (v10 = *i,
                 *((_DWORD *)v10 + 4) == (*(unsigned int (__fastcall **)(struct IProcessSubmixProxy *))(*(_QWORD *)v14 + 168LL))(v14)) )
      {
LABEL_14:
        lambda_43698c41cf4338565ce00927154dde27_::operator()_std::unique_ptr_CAppSubmixClientContext_std::default_delete_CAppSubmixClientContext____const__(
          &v13,
          i);
        continue;
      }
    }
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x22D,
                           (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\applicationsubmix.cpp",
                           v4);
  }
  return result;
}
