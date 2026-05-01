/*
 * XREFs of ?GetPositionAndSizeOptions@TabTipAdapterPolicy@KeyboardHosting@@AEAAJPEAPEAU?$IVectorView@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@Collections@Foundation@Windows@@@Z @ 0x1801AB48C
 * Callers:
 *     ?HandleEditControlPositionChanged@TabTipAdapterPolicy@KeyboardHosting@@UEAAJURect@Foundation@Windows@@PEAPEAU?$IVectorView@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@Collections@45@PEAW4ShellRequestType@Text@Shell@Internal@5@@Z @ 0x1801AA930 (-HandleEditControlPositionChanged@TabTipAdapterPolicy@KeyboardHosting@@UEAAJURect@Foundation@Win.c)
 *     ?HandleFramePositionAndSizeUpdateCompleted@TabTipAdapterPolicy@KeyboardHosting@@UEAAJURect@Foundation@Windows@@PEAPEAU?$IVectorView@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@Collections@45@PEAW4ShellRequestType@Text@Shell@Internal@5@@Z @ 0x1801AAB40 (-HandleFramePositionAndSizeUpdateCompleted@TabTipAdapterPolicy@KeyboardHosting@@UEAAJURect@Found.c)
 *     ?HandleShellRequestedShow@TabTipAdapterPolicy@KeyboardHosting@@UEAAJPEAPEAU?$IVectorView@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@Collections@Foundation@Windows@@PEAW4ShellRequestType@Text@Shell@Internal@6@@Z @ 0x1801AB2A0 (-HandleShellRequestedShow@TabTipAdapterPolicy@KeyboardHosting@@UEAAJPEAPEAU-$IVectorView@UCoreKe.c)
 *     ?HandleWorkAreaChanged@TabTipAdapterPolicy@KeyboardHosting@@UEAAJAEBUtagRECT@@PEAPEAU?$IVectorView@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@Collections@Foundation@Windows@@PEAW4ShellRequestType@Text@Shell@Internal@7@@Z @ 0x1801AB300 (-HandleWorkAreaChanged@TabTipAdapterPolicy@KeyboardHosting@@UEAAJAEBUtagRECT@@PEAPEAU-$IVectorVi.c)
 *     ?HandleDpiChanged@TabTipAdapterPolicy@KeyboardHosting@@UEAAJPEAPEAU?$IVectorView@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@Collections@Foundation@Windows@@PEAW4ShellRequestType@Text@Shell@Internal@6@@Z @ 0x1801AB400 (-HandleDpiChanged@TabTipAdapterPolicy@KeyboardHosting@@UEAAJPEAPEAU-$IVectorView@UCoreKeyboardPo.c)
 *     ?CheckRequest@TabTipAdapterPolicy@KeyboardHosting@@AEAA_NUCoreKeyboardPositionAndSizeRequest@Core@Text@Internal@UI@Windows@@@Z @ 0x1801ABFD0 (-CheckRequest@TabTipAdapterPolicy@KeyboardHosting@@AEAA_NUCoreKeyboardPositionAndSizeRequest@Cor.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetPositionAndSizeOptions@PositionAndSizeOptionsProvider@KeyboardHosting@@UEAAJURect@Foundation@Windows@@PEAPEAU?$IVectorView@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@Collections@45@@Z @ 0x1801AC970 (-GetPositionAndSizeOptions@PositionAndSizeOptionsProvider@KeyboardHosting@@UEAAJURect@Foundation.c)
 */

__int64 __fastcall KeyboardHosting::TabTipAdapterPolicy::GetPositionAndSizeOptions(__int64 a1, _QWORD *a2)
{
  __int64 v4; // rdx
  unsigned __int64 v5; // r8
  __int128 v6; // xmm2
  __int128 v7; // xmm3
  __int128 v8; // xmm4
  __int64 v9; // xmm5_8
  unsigned int v10; // ecx
  __int64 v11; // xmm1_8
  __int64 v12; // rcx
  int PositionAndSizeOptions; // eax
  unsigned int v14; // ebx
  int v16[4]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  *a2 = 0LL;
  v4 = *(_QWORD *)(a1 + 168);
  v5 = -(__int64)(*(_BYTE *)(a1 + 361) != 0) & 0xFFFFFFFFFFFFFF90uLL;
  v6 = *(_OWORD *)(v5 + a1 + 304);
  v7 = *(_OWORD *)(v5 + a1 + 320);
  v8 = *(_OWORD *)(v5 + a1 + 336);
  v9 = *(_QWORD *)(v5 + a1 + 352);
  v10 = *(_BYTE *)(a1 + 400) != 0 ? 0x38 : 0;
  *(_OWORD *)(v4 + 32) = *(_OWORD *)(v10 + a1 + 192);
  *(_OWORD *)(v4 + 48) = *(_OWORD *)(v10 + a1 + 208);
  *(_OWORD *)(v4 + 64) = *(_OWORD *)(v10 + a1 + 224);
  v11 = *(_QWORD *)(v10 + a1 + 240);
  *(_OWORD *)(v4 + 88) = v6;
  *(_OWORD *)(v4 + 104) = v7;
  *(_OWORD *)(v4 + 120) = v8;
  *(_QWORD *)(v4 + 136) = v9;
  *(_QWORD *)(v4 + 80) = v11;
  v12 = *(_QWORD *)(a1 + 168);
  *(_OWORD *)v16 = *(_OWORD *)(a1 + 112);
  PositionAndSizeOptions = KeyboardHosting::PositionAndSizeOptionsProvider::GetPositionAndSizeOptions(v12, v16, a2);
  v14 = PositionAndSizeOptions;
  if ( PositionAndSizeOptions >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)0x183,
    (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapterpolicy.cpp",
    (const char *)(unsigned int)PositionAndSizeOptions);
  return v14;
}
