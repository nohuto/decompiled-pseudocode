/*
 * XREFs of ?RecoverViews@WindowEventDispatcher@@UEAAJUEventRegistrationToken@@PEAPEAUIObjectArray@@@Z @ 0x1801D78C0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D044 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??1?$com_ptr_t@VAppViewTitleChangeListener@DataEngine@TaskFlow@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800F81DC (--1-$com_ptr_t@VAppViewTitleChangeListener@DataEngine@TaskFlow@Shell@Internal@Windows@@Uerr_exce.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800FFA38 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CreateInstance@CEnumerableObjectCollection@@SAJHAEBU_GUID@@PEAPEAX@Z @ 0x18010618C (-CreateInstance@CEnumerableObjectCollection@@SAJHAEBU_GUID@@PEAPEAX@Z.c)
 *     ??$emplace_back@AEBV?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@QEAAXAEBV?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x1801D1E1C (--$emplace_back@AEBV-$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@@-$vec.c)
 *     ?erase@?$vector@V?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@2@@Z @ 0x1801DA98C (-erase@-$vector@V-$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@V-$alloca.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall WindowEventDispatcher::RecoverViews(
        RTL_SRWLOCK *this,
        struct EventRegistrationToken a2,
        struct IObjectArray **a3)
{
  struct IObjectArray **v3; // r12
  RTL_SRWLOCK *v5; // r13
  RTL_SRWLOCK *v6; // rbx
  const struct _GUID *v7; // rdx
  RTL_SRWLOCK *v8; // rsi
  __int64 v9; // rbx
  unsigned __int64 v10; // rcx
  _QWORD *Ptr; // r8
  char v12; // al
  wil::details::in1diag3 *v13; // rcx
  int v14; // eax
  __int64 i; // r15
  __int64 v16; // rdi
  const WCHAR *v17; // rax
  RTL_SRWLOCK *v18; // rcx
  const WCHAR *v19; // rdi
  int v20; // eax
  char v21; // di
  int v22; // eax
  const char *v23; // r9
  int v24; // eax
  void *v25; // rcx
  int v26; // eax
  const char *v27; // r9
  __int64 result; // rax
  void *v29; // [rsp+30h] [rbp-98h] BYREF
  LPCWCH lpString2; // [rsp+38h] [rbp-90h] BYREF
  __int64 v31; // [rsp+40h] [rbp-88h] BYREF
  __int64 v32; // [rsp+48h] [rbp-80h]
  __int64 *v33; // [rsp+50h] [rbp-78h]
  char v34; // [rsp+58h] [rbp-70h]
  RTL_SRWLOCK *v35; // [rsp+60h] [rbp-68h]
  RTL_SRWLOCK *v36; // [rsp+68h] [rbp-60h]
  __int64 v37; // [rsp+70h] [rbp-58h]
  char v38[8]; // [rsp+78h] [rbp-50h] BYREF
  char v39[72]; // [rsp+80h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+0h]
  __int64 v43; // [rsp+E8h] [rbp+20h] BYREF

  v37 = -2LL;
  v3 = a3;
  v5 = this;
  try
  {
    *a3 = 0LL;
    v6 = this + 54;
    v36 = this + 54;
    AcquireSRWLockExclusive(this + 54);
    v8 = v6;
    v35 = v6;
    if ( LOBYTE(v5[57].Ptr) )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        1260LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
        (const char *)0x8007139FLL);
    v9 = 0LL;
    v31 = 0LL;
    v10 = 0LL;
    Ptr = v5[48].Ptr;
    while ( v10 < ((char *)v5[49].Ptr - (char *)Ptr) >> 3 )
    {
      v7 = (const struct _GUID *)Ptr[v10];
      if ( *(_QWORD *)v7[2].Data4 == a2.value )
      {
        v9 = Ptr[v10];
        v31 = v9;
        if ( v7 )
        {
          (*(void (__fastcall **)(const struct _GUID *))(*(_QWORD *)&v7->Data1 + 8LL))(v7);
          v12 = 0;
          goto LABEL_11;
        }
        break;
      }
      ++v10;
    }
    v12 = 1;
LABEL_11:
    v13 = retaddr;
    if ( v12 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        1273LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
        (const char *)0x80070490LL);
    v29 = 0LL;
    v14 = CEnumerableObjectCollection::CreateInstance((__int64)v13, v7, &v29);
    if ( v14 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        1278LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
        (const char *)(unsigned int)v14);
    for ( i = ((char *)v5[45].Ptr - (char *)v5[44].Ptr) >> 3; ; --i )
    {
      v32 = i;
      if ( !i )
        break;
      v16 = *((_QWORD *)v5[44].Ptr + i - 1);
      lpString2 = WindowsGetStringRawBuffer(*(HSTRING *)(v9 + 16), 0LL);
      v17 = (const WCHAR *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v16 + 232LL))(v16);
      if ( CompareStringOrdinal(v17, -1, lpString2, -1, 0) == 2 )
      {
        v18 = v5 + 44;
        v19 = (const WCHAR *)*((_QWORD *)v5[44].Ptr + i - 1);
        lpString2 = v19;
        if ( v19 )
        {
          (*(void (__fastcall **)(const WCHAR *))(*(_QWORD *)v19 + 8LL))(v19);
          v18 = v5 + 44;
        }
        std::vector<wil::com_ptr_t<IWindowWrapperInternal,wil::err_exception_policy>>::erase(
          v18,
          v38,
          (char *)v18->Ptr + 8 * i - 8);
        v43 = 0LL;
        v20 = (**(__int64 (__fastcall ***)(const WCHAR *, GUID *, __int64 *))v19)(
                v19,
                &GUID_8ab3bd56_9b4a_45da_b2fc_9b9d331c012e,
                &v43);
        if ( v20 < 0 )
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            5691LL,
            (__int64)"internal\\sdk\\inc\\wil\\resultmacros.h",
            (const char *)(unsigned int)v20);
        (*(void (__fastcall **)(const WCHAR *, __int64, __int64))(*(_QWORD *)v19 + 248LL))(v19, v9 + 8, 1LL);
        v33 = &v43;
        v21 = 1;
        v34 = 1;
        try
        {
          std::vector<wil::com_ptr_t<IWindowWrapperInternal,wil::err_exception_policy>>::emplace_back<wil::com_ptr_t<IWindowWrapperInternal,wil::err_exception_policy> const &>(
            (__int64)&v5[41],
            (__int64 *)&lpString2);
          v22 = (*(__int64 (__fastcall **)(void *, __int64))(*(_QWORD *)v29 + 40LL))(v29, v43);
          if ( v22 >= 0 )
          {
            v21 = 0;
            v34 = 0;
          }
          else
          {
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              1310LL,
              (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
              (const char *)(unsigned int)v22);
            std::vector<wil::com_ptr_t<IWindowWrapperInternal,wil::err_exception_policy>>::erase(
              &v5[41],
              v39,
              (char *)v5[42].Ptr - 8);
          }
        }
        catch ( ... )
        {
          wil::details::in1diag3::Log_CaughtException(
            retaddr,
            (void *)0x528,
            (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
            v23);
          v5 = this;
          v3 = a3;
          v8 = v35;
          v9 = v31;
          i = v32;
          v21 = v34;
        }
        if ( v21 )
        {
          v34 = 0;
          v24 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v43 + 336LL))(v43, 0LL);
          if ( v24 < 0 )
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              1303LL,
              (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
              (const char *)(unsigned int)v24);
        }
        wil::com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>::~com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>(&v43);
        wil::com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>::~com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>((__int64 *)&lpString2);
      }
    }
    v25 = v29;
    if ( v29 )
    {
      v26 = (**(__int64 (__fastcall ***)(void *, GUID *, struct IObjectArray **))v29)(
              v29,
              &GUID_92ca9dcd_5622_4bba_a805_5e9f541bd8c9,
              v3);
      if ( v26 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          5691LL,
          (__int64)"internal\\sdk\\inc\\wil\\resultmacros.h",
          (const char *)(unsigned int)v26);
      v25 = v29;
    }
    else
    {
      *v3 = 0LL;
    }
    if ( v25 )
      (*(void (__fastcall **)(void *))(*(_QWORD *)v25 + 16LL))(v25);
    wil::com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>::~com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>(&v31);
    if ( v36 )
      ReleaseSRWLockExclusive(v8);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x52F,
                           (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
                           v27);
  }
  return result;
}
