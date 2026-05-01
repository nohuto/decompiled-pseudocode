/*
 * XREFs of ?v_OnWindowCreated@LegacyViewWrapper@@EEAAXW4WindowCreatedType@@@Z @ 0x18013AEA0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18009D91C (-_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?SendVisibilityToWindow@LegacyViewWrapper@@AEAAXW4Visibility@@@Z @ 0x18013B09C (-SendVisibilityToWindow@LegacyViewWrapper@@AEAAXW4Visibility@@@Z.c)
 *     ?SendViewStateToWindow@LegacyViewWrapper@@AEAAX_N@Z @ 0x18013B128 (-SendViewStateToWindow@LegacyViewWrapper@@AEAAX_N@Z.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall LegacyViewWrapper::v_OnWindowCreated(__int64 a1, int a2)
{
  const char *v3; // r9
  __int64 v4; // rax
  __int64 v5; // rdx
  _OWORD v6[3]; // [rsp+20h] [rbp-48h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  if ( *(_DWORD *)(a1 + 544) )
  {
    if ( a2 != 1 )
    {
      if ( *(_DWORD *)(a1 + 560) == 1 && !GetWindowRect(*(HWND *)(a1 + 264), (LPRECT)(a1 + 200)) )
        wil::details::in1diag3::_Log_GetLastError(
          retaddr,
          (void *)0xA8,
          (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\ntuserviewwrapper.cpp",
          v3);
      LegacyViewWrapper::SendViewStateToWindow((LegacyViewWrapper *)(a1 - 8), 0);
      v4 = *(unsigned int *)(a1 + 544);
      v6[0] = _mm_load_si128((const __m128i *)&_xmm);
      v6[2] = _mm_load_si128((const __m128i *)&_xmm);
      v6[1] = _mm_load_si128((const __m128i *)&_xmm);
      LegacyViewWrapper::SendVisibilityToWindow(a1 - 8, *((_DWORD *)v6 + 2 * v4 + 1) >= 2);
      v5 = *(_QWORD *)(a1 + 192);
      if ( v5 )
        (*(void (__fastcall **)(_QWORD, __int64, _QWORD))(**(_QWORD **)(*(_QWORD *)(a1 + 176) + 520LL) + 144LL))(
          *(_QWORD *)(*(_QWORD *)(a1 + 176) + 520LL),
          v5,
          *(unsigned int *)(a1 + 264));
    }
  }
  else
  {
    PostMessageW(*(HWND *)(a1 + 264), 0x10u, 0LL, 0LL);
  }
}
