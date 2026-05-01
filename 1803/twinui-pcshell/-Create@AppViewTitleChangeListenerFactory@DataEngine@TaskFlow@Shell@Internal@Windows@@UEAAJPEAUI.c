/*
 * XREFs of ?Create@AppViewTitleChangeListenerFactory@DataEngine@TaskFlow@Shell@Internal@Windows@@UEAAJPEAUITaskDataArbiter@23456@PEAPEAUITaskDataListener@23456@@Z @ 0x1801A8070
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800FFA38 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$MakeAndInitialize@VAppViewTitleChangeListener@DataEngine@TaskFlow@Shell@Internal@Windows@@V123456@AEAPEAUITaskDataArbiter@23456@@Details@WRL@Microsoft@@YAJPEAPEAVAppViewTitleChangeListener@DataEngine@TaskFlow@Shell@Internal@Windows@@AEAPEAUITaskDataArbiter@45678@@Z @ 0x1801A7E20 (--$MakeAndInitialize@VAppViewTitleChangeListener@DataEngine@TaskFlow@Shell@Internal@Windows@@V12.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListenerFactory::Create(
        Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListenerFactory *this,
        struct Windows::Internal::Shell::TaskFlow::DataEngine::ITaskDataArbiter *a2,
        struct Windows::Internal::Shell::TaskFlow::DataEngine::ITaskDataListener **a3)
{
  int v4; // eax
  const char *v5; // r9
  __int64 v6; // rbx
  int v7; // eax
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct Windows::Internal::Shell::TaskFlow::DataEngine::ITaskDataArbiter *v10; // [rsp+48h] [rbp+10h] BYREF
  __int64 (__fastcall ***v11)(_QWORD, GUID *, struct Windows::Internal::Shell::TaskFlow::DataEngine::ITaskDataListener **); // [rsp+50h] [rbp+18h] BYREF

  v10 = a2;
  try
  {
    *a3 = 0LL;
    v11 = 0LL;
    v4 = Microsoft::WRL::Details::MakeAndInitialize<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,Windows::Internal::Shell::TaskFlow::DataEngine::ITaskDataArbiter * &>(
           (__int64 *)&v11,
           &v10);
    if ( v4 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        24LL,
        (__int64)"pcshell\\twinui\\taskflowbroker\\lib\\appviewtitlechangelistener.cpp",
        (const char *)(unsigned int)v4);
    v6 = (__int64)v11;
    if ( v11 )
    {
      v7 = (**v11)(v11, &GUID_e9821dd9_a9b2_47c8_9aac_7b6b042ef0b0, a3);
      if ( v7 >= 0 )
      {
LABEL_8:
        if ( v6 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
        return 0LL;
      }
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        5691LL,
        (__int64)"internal\\sdk\\inc\\wil\\resultmacros.h",
        (const char *)(unsigned int)v7);
    }
    *a3 = 0LL;
    goto LABEL_8;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x1D,
                           (__int64)"pcshell\\twinui\\taskflowbroker\\lib\\appviewtitlechangelistener.cpp",
                           v5);
  }
  return result;
}
