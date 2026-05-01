/*
 * XREFs of ?OnEditControlPositionChanged@TabTipAdapter@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerEditControlPositionChangedEventArgs@34567@@Z @ 0x18016E840
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall TabTipAdapter::OnEditControlPositionChanged(
        TabTipAdapter *this,
        struct Windows::UI::Internal::Text::Core::ICoreKeyboardManager *a2,
        struct Windows::UI::Internal::Text::Core::ICoreKeyboardManagerEditControlPositionChangedEventArgs *a3)
{
  __int64 v3; // rax
  int v5; // ebx
  __int64 v6; // rdx
  __int64 v8; // rcx
  _DWORD v9[4]; // [rsp+20h] [rbp-30h] BYREF
  __int128 v10; // [rsp+30h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+8h]

  v3 = *(_QWORD *)a3;
  v10 = 0LL;
  v5 = (*(__int64 (__fastcall **)(struct Windows::UI::Internal::Text::Core::ICoreKeyboardManagerEditControlPositionChangedEventArgs *, __int128 *))(v3 + 48))(
         a3,
         &v10);
  if ( v5 < 0 )
  {
    v6 = 185LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v6,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
      (const char *)(unsigned int)v5);
    return (unsigned int)v5;
  }
  v8 = *((_QWORD *)this + 4);
  v9[0] = (int)*(float *)&v10;
  v9[1] = (int)*((float *)&v10 + 1);
  v9[2] = (int)(float)(*((float *)&v10 + 2) + *(float *)&v10);
  v9[3] = (int)(float)(*((float *)&v10 + 3) + *((float *)&v10 + 1));
  if ( v8 )
  {
    v5 = (*(__int64 (__fastcall **)(__int64, _DWORD *))(*(_QWORD *)v8 + 48LL))(v8, v9);
    if ( v5 < 0 )
    {
      v6 = 194LL;
      goto LABEL_3;
    }
  }
  return 0LL;
}
