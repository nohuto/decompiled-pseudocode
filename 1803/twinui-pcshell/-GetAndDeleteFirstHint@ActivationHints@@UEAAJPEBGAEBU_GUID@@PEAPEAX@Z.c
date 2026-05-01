/*
 * XREFs of ?GetAndDeleteFirstHint@ActivationHints@@UEAAJPEBGAEBU_GUID@@PEAPEAX@Z @ 0x1802B1220
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??1?$com_ptr_t@VAppViewTitleChangeListener@DataEngine@TaskFlow@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800F81DC (--1-$com_ptr_t@VAppViewTitleChangeListener@DataEngine@TaskFlow@Shell@Internal@Windows@@Uerr_exce.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800FFA38 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$com_ptr_t@UIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1802233CC (--0-$com_ptr_t@UIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@Uerr_exception_pol.c)
 *     std::find_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_ActivationHints::Hint_______lambda_0a52f427c5b5bf7050ffc8143780caa2___ @ 0x1802B0CB0 (std--find_if_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_ActivationHints--Hint____.c)
 *     ?erase@?$vector@UHint@ActivationHints@@V?$allocator@UHint@ActivationHints@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UHint@ActivationHints@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@UHint@ActivationHints@@@std@@@std@@@2@@Z @ 0x1802B159C (-erase@-$vector@UHint@ActivationHints@@V-$allocator@UHint@ActivationHints@@@std@@@std@@QEAA-AV-$.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall ActivationHints::GetAndDeleteFirstHint(
        ActivationHints *this,
        const unsigned __int16 *a2,
        const struct _GUID *a3,
        void **a4)
{
  const char *v7; // r9
  __int64 result; // rax
  RTL_SRWLOCK *v9; // rdi
  __int64 v10; // rax
  __int64 v11; // rbx
  int v12; // eax
  __int64 v13[4]; // [rsp+20h] [rbp-58h] BYREF
  _QWORD v14[2]; // [rsp+40h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  const unsigned __int16 *v16; // [rsp+88h] [rbp+10h] BYREF
  int v17; // [rsp+98h] [rbp+20h] BYREF

  v16 = a2;
  v13[1] = -2LL;
  try
  {
    *a4 = 0LL;
    if ( !a2 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x35,
        (__int64)"pcshell\\twinui\\apppositioner\\lib\\activationhints.cpp",
        (const char *)0x80070057LL);
      return 2147942487LL;
    }
    v9 = (RTL_SRWLOCK *)((char *)this + 48);
    AcquireSRWLockExclusive((PSRWLOCK)this + 6);
    v13[2] = (__int64)v9;
    v10 = -1LL;
    do
      ++v10;
    while ( v16[v10] );
    v17 = v10;
    v14[0] = &v16;
    v14[1] = &v17;
    std::find_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_ActivationHints::Hint_______lambda_0a52f427c5b5bf7050ffc8143780caa2___(
      v13,
      *((_QWORD *)this + 7),
      *((_QWORD *)this + 8),
      (__int64)v14);
    v11 = v13[0];
    if ( v13[0] == *((_QWORD *)this + 8) )
      goto LABEL_12;
    wil::com_ptr_t<Windows::Internal::Shell::ViewManagerInterop::IClientWindowState,wil::err_exception_policy>::com_ptr_t<Windows::Internal::Shell::ViewManagerInterop::IClientWindowState,wil::err_exception_policy>(
      v13,
      *(_QWORD *)(v13[0] + 40));
    std::vector<ActivationHints::Hint>::erase((char *)this + 56, v14, v11);
    if ( v13[0] )
    {
      v12 = (**(__int64 (__fastcall ***)(__int64, const struct _GUID *, void **))v13[0])(v13[0], a3, a4);
      if ( v12 >= 0 )
      {
LABEL_11:
        wil::com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>::~com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>(v13);
LABEL_12:
        if ( v9 )
          ReleaseSRWLockExclusive(v9);
        return 0LL;
      }
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        5691LL,
        (__int64)"internal\\sdk\\inc\\wil\\resultmacros.h",
        (const char *)(unsigned int)v12);
    }
    *a4 = 0LL;
    goto LABEL_11;
  }
  catch ( ... )
  {
    LODWORD(v16) = wil::details::in1diag3::Return_CaughtException(
                     retaddr,
                     (void *)0x4B,
                     (__int64)"pcshell\\twinui\\apppositioner\\lib\\activationhints.cpp",
                     v7);
    return (unsigned int)v16;
  }
  return result;
}
