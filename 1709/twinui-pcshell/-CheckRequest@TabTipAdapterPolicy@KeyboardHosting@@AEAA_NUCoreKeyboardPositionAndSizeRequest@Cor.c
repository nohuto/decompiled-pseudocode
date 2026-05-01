/*
 * XREFs of ?CheckRequest@TabTipAdapterPolicy@KeyboardHosting@@AEAA_NUCoreKeyboardPositionAndSizeRequest@Core@Text@Internal@UI@Windows@@@Z @ 0x1801ABFD0
 * Callers:
 *     ?VerifyInputAppRequestedShow@TabTipAdapterPolicy@KeyboardHosting@@UEAAJUCoreKeyboardPositionAndSizeRequest@Core@Text@Internal@UI@Windows@@IPEAIPEAURect@Foundation@8@PEAE@Z @ 0x1801AACE0 (-VerifyInputAppRequestedShow@TabTipAdapterPolicy@KeyboardHosting@@UEAAJUCoreKeyboardPositionAndS.c)
 * Callees:
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180027778 (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetPositionAndSizeOptions@TabTipAdapterPolicy@KeyboardHosting@@AEAAJPEAPEAU?$IVectorView@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@Collections@Foundation@Windows@@@Z @ 0x1801AB48C (-GetPositionAndSizeOptions@TabTipAdapterPolicy@KeyboardHosting@@AEAAJPEAPEAU-$IVectorView@UCoreK.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1 #try_helpers=1
char __fastcall KeyboardHosting::TabTipAdapterPolicy::CheckRequest(__int64 a1, __int64 a2)
{
  int PositionAndSizeOptions; // eax
  int v4; // eax
  unsigned int i; // edi
  int v6; // eax
  unsigned int v7; // eax
  unsigned int v8; // eax
  __int64 v9; // rcx
  __int64 v11; // rcx
  __int64 v12; // [rsp+20h] [rbp-58h] BYREF
  unsigned int v13; // [rsp+28h] [rbp-50h] BYREF
  __int64 v14; // [rsp+30h] [rbp-48h]
  _DWORD v15[2]; // [rsp+38h] [rbp-40h] BYREF
  char v16; // [rsp+40h] [rbp-38h]
  char v17; // [rsp+41h] [rbp-37h]
  unsigned int v18; // [rsp+44h] [rbp-34h]
  unsigned int v19; // [rsp+48h] [rbp-30h]
  unsigned int v20; // [rsp+54h] [rbp-24h]
  unsigned int v21; // [rsp+58h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  v14 = -2LL;
  v12 = 0LL;
  PositionAndSizeOptions = KeyboardHosting::TabTipAdapterPolicy::GetPositionAndSizeOptions(a1, &v12);
  if ( PositionAndSizeOptions < 0 )
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x2B2,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapterpolicy.cpp",
      (const char *)(unsigned int)PositionAndSizeOptions);
  v13 = 0;
  v4 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v12 + 56LL))(v12, &v13);
  if ( v4 < 0 )
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x2B4,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapterpolicy.cpp",
      (const char *)(unsigned int)v4);
  for ( i = 0; i < v13; ++i )
  {
    v6 = (*(__int64 (__fastcall **)(__int64, _QWORD, _DWORD *))(*(_QWORD *)v12 + 48LL))(v12, i, v15);
    if ( v6 < 0 )
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0x2B9,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapterpolicy.cpp",
        (const char *)(unsigned int)v6);
    if ( *(_DWORD *)a2 == v15[0] && *(_DWORD *)(a2 + 20) == v15[1] )
    {
      v7 = *(_DWORD *)(a2 + 8);
      if ( v21 <= v7 && v7 <= v19 )
      {
        v8 = *(_DWORD *)(a2 + 4);
        if ( v20 <= v8 && v8 <= v18 && *(_BYTE *)(a2 + 24) == v16 && *(_BYTE *)(a2 + 25) == v17 )
        {
          v9 = v12;
          if ( v12 )
          {
            v12 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
          }
          return 1;
        }
      }
    }
  }
  v11 = v12;
  if ( v12 )
  {
    v12 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  }
  return 0;
}
