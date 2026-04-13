/*
 * XREFs of ?GetFriendlySubscriptionNameFromPlacementId@SubscribedContentUtils@CreativeFramework@@YA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@PEB_W@Z @ 0x18007F01C
 * Callers:
 *     ?GetSourceTileIdentifier@SwapStartTileService@Actions@CreativeFramework@@AEAA?AV?$com_ptr_t@UIUnifiedTileIdentifier@UnifiedTile@Shell@WindowsInternal@@Uerr_exception_policy@wil@@@wil@@XZ @ 0x180080054 (-GetSourceTileIdentifier@SwapStartTileService@Actions@CreativeFramework@@AEAA-AV-$com_ptr_t@UIUn.c)
 *     ?CreateTargetedContentTileIdentifier@SwapStartTileService@Actions@CreativeFramework@@AEAA?AV?$com_ptr_t@UIUnifiedTileIdentifier@UnifiedTile@Shell@WindowsInternal@@Uerr_exception_policy@wil@@@wil@@PEB_W0@Z @ 0x180080640 (-CreateTargetedContentTileIdentifier@SwapStartTileService@Actions@CreativeFramework@@AEAA-AV-$co.c)
 *     ??0AddTileToCollectionService@Actions@CreativeFramework@@QEAA@PEB_WAEBUPinToStartProperties@12@@Z @ 0x1800811B8 (--0AddTileToCollectionService@Actions@CreativeFramework@@QEAA@PEB_WAEBUPinToStartProperties@12@@.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003310 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Assign_rv@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAX$$QEAV12@@Z @ 0x18003681C (-_Assign_rv@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAX$$QEAV12@@Z.c)
 *     ?assign@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@AEBV12@_K1@Z @ 0x180062B1C (-assign@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@AEBV12@_K1@Z.c)
 *     ?assign@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z @ 0x180062D20 (-assign@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z.c)
 *     ?find@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEBA_KPEB_W_K1@Z @ 0x180082968 (-find@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEBA_KPEB_W_K1@Z.c)
 *     __security_check_cookie @ 0x1800C0A20 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=4
_QWORD *__fastcall CreativeFramework::SubscribedContentUtils::GetFriendlySubscriptionNameFromPlacementId(
        _QWORD *a1,
        char *a2)
{
  unsigned __int64 v3; // rbx
  unsigned __int64 v4; // r8
  __int64 v5; // rax
  const WCHAR *v6; // r14
  const wchar_t near *const *v7; // rdi
  char *v8; // rdx
  void **v9; // rdx
  char v10; // bl
  char v11; // bl
  void *v13[2]; // [rsp+48h] [rbp-59h] BYREF
  __int64 v14; // [rsp+58h] [rbp-49h]
  unsigned __int64 v15; // [rsp+60h] [rbp-41h]
  void *v16[2]; // [rsp+68h] [rbp-39h] BYREF
  __int64 v17; // [rsp+78h] [rbp-29h]
  unsigned __int64 v18; // [rsp+80h] [rbp-21h]
  void *v19[2]; // [rsp+88h] [rbp-19h] BYREF
  __int64 v20; // [rsp+98h] [rbp-9h]
  unsigned __int64 v21; // [rsp+A0h] [rbp-1h]
  LPCWSTR lpStringSource[3]; // [rsp+A8h] [rbp+7h] BYREF
  unsigned __int64 v23; // [rsp+C0h] [rbp+1Fh]
  wil::details::in1diag3 *retaddr; // [rsp+100h] [rbp+5Fh]

  v15 = 7LL;
  v14 = 0LL;
  LOWORD(v13[0]) = 0;
  v3 = -1LL;
  if ( *(_WORD *)a2 )
  {
    v4 = -1LL;
    do
      ++v4;
    while ( *(_WORD *)&a2[2 * v4] );
  }
  else
  {
    v4 = 0LL;
  }
  std::wstring::assign(v13, a2, v4);
  v5 = std::wstring::find(v13, L"-", 0LL, 1LL);
  if ( v5 == -1 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0xE,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\subscribedcontentutils.h",
      (const char *)0x80070057LL);
    JUMPOUT(0x18007F28ELL);
  }
  v23 = 7LL;
  lpStringSource[2] = 0LL;
  LOWORD(lpStringSource[0]) = 0;
  std::wstring::assign((void **)lpStringSource, v13, v5 + 1, 0xFFFFFFFFFFFFFFFFuLL);
  if ( v15 >= 8 )
    operator delete(v13[0]);
  v15 = 7LL;
  v14 = 0LL;
  LOWORD(v13[0]) = 0;
  v6 = (const WCHAR *)lpStringSource;
  if ( v23 >= 8 )
    v6 = lpStringSource[0];
  v7 = &off_1800EA920;
  while ( FindStringOrdinal(0x200000u, v6, -1, v7[2], -1, 1) < 0
       && FindStringOrdinal(0x200000u, v6, -1, v7[1], -1, 1) < 0 )
  {
    v7 += 3;
    if ( v7 == (const wchar_t near *const *)&unk_1800EAAB8 )
    {
      v8 = 0LL;
      goto LABEL_16;
    }
  }
  v8 = (char *)*v7;
LABEL_16:
  if ( v8 )
  {
    v18 = 7LL;
    v17 = 0LL;
    LOWORD(v16[0]) = 0;
    if ( *(_WORD *)v8 )
    {
      do
        ++v3;
      while ( *(_WORD *)&v8[2 * v3] );
    }
    else
    {
      v3 = 0LL;
    }
    std::wstring::assign(v16, v8, v3);
    v9 = v16;
    v10 = 26;
  }
  else
  {
    v21 = 7LL;
    v20 = 0LL;
    LOWORD(v19[0]) = 0;
    std::wstring::assign(v19, (void **)lpStringSource, 0LL, 0xFFFFFFFFFFFFFFFFuLL);
    v9 = v19;
    v10 = 25;
  }
  a1[3] = 7LL;
  a1[2] = 0LL;
  *(_WORD *)a1 = 0;
  std::wstring::_Assign_rv(a1, v9);
  v11 = v10 | 4;
  if ( (v11 & 2) != 0 )
  {
    v11 &= ~2u;
    if ( v18 >= 8 )
      operator delete(v16[0]);
    v18 = 7LL;
    v17 = 0LL;
    LOWORD(v16[0]) = 0;
  }
  if ( (v11 & 1) != 0 )
  {
    if ( v21 >= 8 )
      operator delete(v19[0]);
    v21 = 7LL;
    v20 = 0LL;
    LOWORD(v19[0]) = 0;
  }
  if ( v23 >= 8 )
    operator delete((void *)lpStringSource[0]);
  return a1;
}
