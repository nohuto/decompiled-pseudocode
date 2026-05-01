/*
 * XREFs of ?GetFailureLogString@wil@@YAJPEA_W_KAEBUFailureInfo@1@@Z @ 0x1801470DC
 * Callers:
 *     _wil::details::ResultFromCaughtException_WinRt_::_1_::catch$4 @ 0x1801EF721 (_wil--details--ResultFromCaughtException_WinRt_--_1_--catch$4.c)
 *     _wil::details::ResultFromCaughtException_WinRt_::_1_::catch$8 @ 0x1801EF833 (_wil--details--ResultFromCaughtException_WinRt_--_1_--catch$8.c)
 * Callees:
 *     ?LogStringPrintf@details@wil@@YAPEA_WPEA_WPEB_W1ZZ @ 0x18014705C (-LogStringPrintf@details@wil@@YAPEA_WPEA_WPEB_W1ZZ.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wil::GetFailureLogString(wil *this, wchar_t *a2, __int64 a3, const struct wil::FailureInfo *a4)
{
  void (__fastcall *v7)(__int64, wil *, wchar_t *, const struct wil::FailureInfo *); // rax
  const char *v8; // rbp
  DWORD v9; // r8d
  const wchar_t *v10; // r9
  wchar_t *v11; // rdi
  __int64 v12; // rax
  wchar_t *v13; // rax
  const wchar_t *v14; // r9
  wil::details *v15; // rsi
  DWORD CurrentThreadId; // eax
  wil::details *v17; // rax
  const wchar_t *v18; // r9
  wchar_t *v19; // rax
  const wchar_t *v20; // r9
  const wchar_t *v21; // r9
  const wchar_t *v22; // r9
  LPWSTR lpBuffer; // [rsp+20h] [rbp-258h]
  LPWSTR lpBuffera; // [rsp+20h] [rbp-258h]
  DWORD nSize[2]; // [rsp+28h] [rbp-250h]
  va_list *Arguments; // [rsp+30h] [rbp-248h]
  WCHAR Buffer[256]; // [rsp+40h] [rbp-238h] BYREF

  if ( a2 )
  {
    if ( this )
    {
      v7 = (void (__fastcall *)(__int64, wil *, wchar_t *, const struct wil::FailureInfo *))g_pfnResultLoggingCallback;
      *(_WORD *)this = 0;
      if ( !v7 || !wil::details::g_resultMessageCallbackSet || (v7(a3, this, a2, a4), !*(_WORD *)this) )
      {
        v8 = (const char *)&`DesktopSingleViewShellExperiencePersonality::GetTypeId'::`2'::unique;
        if ( *(_DWORD *)a3 )
        {
          switch ( *(_DWORD *)a3 )
          {
            case 1:
              v8 = "ReturnHr";
              break;
            case 2:
              v8 = "LogHr";
              break;
            case 3:
              v8 = "FailFast";
              break;
          }
        }
        else
        {
          v8 = "Exception";
        }
        v9 = *(_DWORD *)(a3 + 4);
        Buffer[0] = 0;
        FormatMessageW(0x1200u, 0LL, v9, 0x400u, Buffer, 0x100u, 0LL);
        v10 = *(const wchar_t **)(a3 + 48);
        v11 = (wchar_t *)((char *)this + 2 * (_QWORD)a2);
        v12 = *(_QWORD *)(a3 + 128);
        if ( v10 )
        {
          LODWORD(lpBuffer) = *(_DWORD *)(a3 + 56);
          v13 = wil::details::LogStringPrintf(
                  this,
                  v11,
                  L"%hs(%d)\\%hs!%p: ",
                  v10,
                  lpBuffer,
                  *(_QWORD *)(a3 + 120),
                  v12);
        }
        else
        {
          v13 = wil::details::LogStringPrintf(this, v11, L"%hs!%p: ", *(const wchar_t **)(a3 + 120), v12);
        }
        v14 = *(const wchar_t **)(a3 + 136);
        v15 = (wil::details *)v13;
        if ( v14 )
          v15 = (wil::details *)wil::details::LogStringPrintf((wil::details *)v13, v11, L"(caller: %p) ", v14);
        CurrentThreadId = GetCurrentThreadId();
        LODWORD(Arguments) = *(_DWORD *)(a3 + 4);
        nSize[0] = CurrentThreadId;
        LODWORD(lpBuffera) = *(_DWORD *)(a3 + 60);
        v17 = (wil::details *)wil::details::LogStringPrintf(
                                v15,
                                v11,
                                L"%hs(%d) tid(%x) %08X %ws",
                                (const wchar_t *)v8,
                                lpBuffera,
                                *(_QWORD *)nSize,
                                Arguments,
                                Buffer);
        if ( *(_QWORD *)(a3 + 16) || *(_QWORD *)(a3 + 64) || *(_QWORD *)(a3 + 40) )
        {
          v19 = wil::details::LogStringPrintf(v17, v11, L"    ", v18);
          v20 = *(const wchar_t **)(a3 + 16);
          if ( v20 )
            v19 = wil::details::LogStringPrintf((wil::details *)v19, v11, L"Msg:[%ws] ", v20);
          v21 = *(const wchar_t **)(a3 + 64);
          if ( v21 )
            v19 = wil::details::LogStringPrintf((wil::details *)v19, v11, L"CallContext:[%hs] ", v21);
          v22 = *(const wchar_t **)(a3 + 40);
          if ( *(_QWORD *)(a3 + 32) )
          {
            wil::details::LogStringPrintf((wil::details *)v19, v11, L"[%hs(%hs)]\n", v22, *(_QWORD *)(a3 + 32));
          }
          else if ( v22 )
          {
            wil::details::LogStringPrintf((wil::details *)v19, v11, L"[%hs]\n", v22);
          }
          else
          {
            wil::details::LogStringPrintf((wil::details *)v19, v11, L"\n", 0LL);
          }
        }
      }
    }
  }
  return 0LL;
}
