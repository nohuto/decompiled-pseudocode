/*
 * XREFs of ?v_OnWindowCreated@LegacyViewWrapper@@EEAAXW4WindowCreatedType@@@Z @ 0x180110BF0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180097AAC (-_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?SendVisibilityToWindow@LegacyViewWrapper@@AEAAXW4Visibility@@@Z @ 0x180110DEC (-SendVisibilityToWindow@LegacyViewWrapper@@AEAAXW4Visibility@@@Z.c)
 *     ?SendViewStateToWindow@LegacyViewWrapper@@AEAAX_N@Z @ 0x180110E78 (-SendViewStateToWindow@LegacyViewWrapper@@AEAAX_N@Z.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall LegacyViewWrapper::v_OnWindowCreated(__int64 a1, int a2)
{
  const char *v3; // r9
  __int64 v4; // rax
  __int64 v5; // rdx
  _OWORD v6[3]; // [rsp+20h] [rbp-48h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  if ( *(_DWORD *)(a1 + 520) )
  {
    if ( a2 != 1 )
    {
      if ( *(_DWORD *)(a1 + 536) == 1 && !GetWindowRect(*(HWND *)(a1 + 240), (LPRECT)(a1 + 176)) )
        wil::details::in1diag3::_Log_GetLastError(
          retaddr,
          (void *)0xA8,
          (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\ntuserviewwrapper.cpp",
          v3);
      LegacyViewWrapper::SendViewStateToWindow((LegacyViewWrapper *)(a1 - 8), 0);
      v4 = *(unsigned int *)(a1 + 520);
      v6[0] = _mm_load_si128((const __m128i *)&_xmm);
      v6[2] = _mm_load_si128((const __m128i *)&_xmm);
      v6[1] = _mm_load_si128((const __m128i *)&_xmm);
      LegacyViewWrapper::SendVisibilityToWindow(a1 - 8, *((_DWORD *)v6 + 2 * v4 + 1) >= 2);
      v5 = *(_QWORD *)(a1 + 168);
      if ( v5 )
        (*(void (__fastcall **)(_QWORD, __int64, _QWORD))(**(_QWORD **)(*(_QWORD *)(a1 + 152) + 448LL) + 144LL))(
          *(_QWORD *)(*(_QWORD *)(a1 + 152) + 448LL),
          v5,
          *(unsigned int *)(a1 + 240));
    }
  }
  else
  {
    PostMessageW(*(HWND *)(a1 + 240), 0x10u, 0LL, 0LL);
  }
}
