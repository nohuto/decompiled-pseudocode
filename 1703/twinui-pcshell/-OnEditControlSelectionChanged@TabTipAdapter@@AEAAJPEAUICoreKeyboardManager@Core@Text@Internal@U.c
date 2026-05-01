/*
 * XREFs of ?OnEditControlSelectionChanged@TabTipAdapter@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerEditControlSelectionChangedEventArgs@34567@@Z @ 0x18016E920
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall TabTipAdapter::OnEditControlSelectionChanged(
        TabTipAdapter *this,
        struct Windows::UI::Internal::Text::Core::ICoreKeyboardManager *a2,
        struct Windows::UI::Internal::Text::Core::ICoreKeyboardManagerEditControlSelectionChangedEventArgs *a3)
{
  __int64 v3; // rax
  int v5; // ebx
  __int64 v6; // rdx
  __int64 *v8; // rcx
  __int128 v9; // xmm0
  __int64 v10; // rax
  __int128 v11; // [rsp+20h] [rbp-30h] BYREF
  __int128 v12; // [rsp+30h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+8h]

  v3 = *(_QWORD *)a3;
  v12 = 0LL;
  v5 = (*(__int64 (__fastcall **)(struct Windows::UI::Internal::Text::Core::ICoreKeyboardManagerEditControlSelectionChangedEventArgs *, __int128 *))(v3 + 48))(
         a3,
         &v12);
  if ( v5 < 0 )
  {
    v6 = 204LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v6,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
      (const char *)(unsigned int)v5);
    return (unsigned int)v5;
  }
  v8 = (__int64 *)*((_QWORD *)this + 4);
  LODWORD(v11) = (int)*(float *)&v12;
  DWORD1(v11) = (int)*((float *)&v12 + 1);
  DWORD2(v11) = (int)(float)(*((float *)&v12 + 2) + *(float *)&v12);
  HIDWORD(v11) = (int)(float)(*((float *)&v12 + 3) + *((float *)&v12 + 1));
  v9 = v11;
  *((_OWORD *)this + 5) = v11;
  if ( v8 )
  {
    v10 = *v8;
    v11 = v9;
    v5 = (*(__int64 (__fastcall **)(__int64 *, __int128 *))(v10 + 56))(v8, &v11);
    if ( v5 < 0 )
    {
      v6 = 214LL;
      goto LABEL_3;
    }
  }
  return 0LL;
}
