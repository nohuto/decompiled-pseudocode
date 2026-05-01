/*
 * XREFs of ?OnSizeConstraintsQueried@CApplicationViewManager@@UEAAXPEAUIApplicationView@@UtagSIZE@@1G@Z @ 0x180074090
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180026DDC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CApplicationViewManager::OnSizeConstraintsQueried(
        CApplicationViewManager *this,
        struct IApplicationView *a2,
        struct tagSIZE a3,
        struct tagSIZE a4,
        unsigned __int16 a5)
{
  __int64 v8; // rcx
  int v9; // eax
  int v10; // esi
  int v11; // eax
  __int64 v12; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v14; // [rsp+58h] [rbp+10h] BYREF

  v8 = 0LL;
  v14 = 0LL;
  if ( a2 )
  {
    (*(void (__fastcall **)(struct IApplicationView *))(*(_QWORD *)a2 + 8LL))(a2);
    v8 = v14;
  }
  if ( v8 )
  {
    v14 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  v9 = (**(__int64 (__fastcall ***)(struct IApplicationView *, GUID *, __int64 *))a2)(
         a2,
         &GUID_dcf504eb_598b_4411_ac89_cf48aba70af1,
         &v14);
  v10 = v9;
  if ( v9 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x2DD,
      (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanager.cpp",
      (const char *)(unsigned int)v9);
  (*(void (__fastcall **)(struct IApplicationView *))(*(_QWORD *)a2 + 16LL))(a2);
  if ( v10 >= 0 )
  {
    v11 = (*(__int64 (__fastcall **)(__int64, _QWORD, struct tagSIZE, struct tagSIZE))(*(_QWORD *)v14 + 24LL))(
            v14,
            a5,
            a3,
            a4);
    if ( v11 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x2DF,
        (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanager.cpp",
        (const char *)(unsigned int)v11);
  }
  v12 = v14;
  if ( v14 )
  {
    v14 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  }
}
