/*
 * XREFs of ?v_OnMessage@CFallbackWindow@@MEAA_JI_K_JPEA_N@Z @ 0x18002D320
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180026DDC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
LONG_PTR __fastcall CFallbackWindow::v_OnMessage(CFallbackWindow *this, int a2, WPARAM a3, __int64 a4, bool *ppvOut)
{
  bool *v6; // r14
  __int64 v7; // rsi
  char *v8; // rbx
  unsigned __int64 v9; // rdi
  int v10; // eax
  bool *v11; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  int v14; // [rsp+58h] [rbp+10h] BYREF

  v6 = ppvOut;
  *ppvOut = 1;
  v7 = 0LL;
  switch ( a2 )
  {
    case 6:
      if ( a3 == 1 )
      {
        v8 = (char *)this - 16;
        v9 = (unsigned __int64)this + 56;
        UiaRaiseAutomationEvent(
          (IRawElementProviderSimple *)(((unsigned __int64)this + 56) & -(__int64)(this != (CFallbackWindow *)16)),
          20005);
        UiaRaiseAutomationEvent((IRawElementProviderSimple *)(v9 & -(__int64)(v8 != 0LL)), 30005);
        *v6 = 0;
        if ( *((_QWORD *)this + 12) )
        {
          if ( *((_DWORD *)this + 4) == 12 && *((HWND *)this + 1) == GetForegroundWindow() )
          {
            v14 = 0;
            if ( (*(int (__fastcall **)(_QWORD, int *))(**((_QWORD **)this + 12) + 56LL))(*((_QWORD *)this + 12), &v14) >= 0
              && v14 == 1 )
            {
              ppvOut = 0LL;
              if ( IUnknown_QueryService(
                     *((IUnknown **)this - 1),
                     &GUID_1053bc09_f82c_4d8b_b1cc_928287cf7445,
                     &GUID_1053bc09_f82c_4d8b_b1cc_928287cf7445,
                     (void **)&ppvOut) >= 0 )
              {
                v10 = (*(__int64 (__fastcall **)(bool *))(*(_QWORD *)ppvOut + 48LL))(ppvOut);
                if ( v10 < 0 )
                  wil::details::in1diag3::_Log_Hr(
                    retaddr,
                    (void *)0x1D1,
                    (__int64)"pcshell\\twinui\\appmanager\\lib\\iamspecialwnd.cpp",
                    (const char *)(unsigned int)v10);
                *v6 = 1;
              }
              v11 = ppvOut;
              if ( ppvOut )
              {
                ppvOut = 0LL;
                (*(void (__fastcall **)(bool *))(*(_QWORD *)v11 + 16LL))(v11);
              }
            }
          }
        }
      }
      break;
    case 61:
      if ( a4 == -25 )
        return UiaReturnRawElementProvider(
                 *((HWND *)this + 1),
                 a3,
                 -25LL,
                 (IRawElementProviderSimple *)(((unsigned __int64)this + 56) & -(__int64)(this != (CFallbackWindow *)16)));
      break;
    case 258:
      if ( a3 == 32 || a3 == 13 )
        (*(void (__fastcall **)(char *))(*((_QWORD *)this + 8) + 24LL))((char *)this + 64);
      break;
    default:
      *v6 = 0;
      break;
  }
  return v7;
}
