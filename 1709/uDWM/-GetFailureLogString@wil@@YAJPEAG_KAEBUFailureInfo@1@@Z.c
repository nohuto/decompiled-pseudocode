/*
 * XREFs of ?GetFailureLogString@wil@@YAJPEAG_KAEBUFailureInfo@1@@Z @ 0x1800668DC
 * Callers:
 *     ?LogFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@JPEBG_NPEAG_KPEAD6PEAUFailureInfo@2@@Z @ 0x180066E6C (-LogFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@JPEBG_NPEAG_KPEAD6PEAUFailureInfo@2@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x180045230 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180046790 (_guard_dispatch_icall_nop.c)
 *     ?LogStringPrintf@details@wil@@YAPEAGPEAGPEBG1ZZ @ 0x18006711C (-LogStringPrintf@details@wil@@YAPEAGPEAGPEBG1ZZ.c)
 */

__int64 __fastcall wil::GetFailureLogString(
        STRSAFE_LPWSTR pszDest,
        unsigned __int16 *a2,
        __int64 a3,
        const struct wil::FailureInfo *a4)
{
  void (__fastcall *v7)(__int64, STRSAFE_LPWSTR, unsigned __int16 *, const struct wil::FailureInfo *); // rax
  const char *v8; // rbp
  DWORD v9; // r8d
  const unsigned __int16 *v10; // r9
  unsigned __int16 *v11; // rdi
  __int64 v12; // rax
  wchar_t *v13; // rax
  const unsigned __int16 *v14; // r9
  wchar_t *v15; // rsi
  DWORD CurrentThreadId; // eax
  wchar_t *v17; // rax
  const unsigned __int16 *v18; // r9
  wchar_t *v19; // rax
  const unsigned __int16 *v20; // r9
  const unsigned __int16 *v21; // r9
  const unsigned __int16 *v22; // r9
  LPWSTR lpBuffer; // [rsp+20h] [rbp-258h]
  LPWSTR lpBuffera; // [rsp+20h] [rbp-258h]
  DWORD nSize[2]; // [rsp+28h] [rbp-250h]
  va_list *Arguments; // [rsp+30h] [rbp-248h]
  WCHAR Buffer[256]; // [rsp+40h] [rbp-238h] BYREF

  if ( a2 )
  {
    if ( pszDest )
    {
      v7 = (void (__fastcall *)(__int64, STRSAFE_LPWSTR, unsigned __int16 *, const struct wil::FailureInfo *))g_pfnResultLoggingCallback;
      *pszDest = 0;
      if ( !v7 || !wil::details::g_resultMessageCallbackSet || (v7(a3, pszDest, a2, a4), !*pszDest) )
      {
        v8 = (const char *)&word_1800A9FDA;
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
        v10 = *(const unsigned __int16 **)(a3 + 48);
        v11 = &pszDest[(_QWORD)a2];
        v12 = *(_QWORD *)(a3 + 128);
        if ( v10 )
        {
          LODWORD(lpBuffer) = *(_DWORD *)(a3 + 56);
          v13 = wil::details::LogStringPrintf(
                  pszDest,
                  v11,
                  L"%hs(%d)\\%hs!%p: ",
                  v10,
                  lpBuffer,
                  *(_QWORD *)(a3 + 120),
                  v12);
        }
        else
        {
          v13 = wil::details::LogStringPrintf(pszDest, v11, L"%hs!%p: ", *(const unsigned __int16 **)(a3 + 120), v12);
        }
        v14 = *(const unsigned __int16 **)(a3 + 136);
        v15 = v13;
        if ( v14 )
          v15 = wil::details::LogStringPrintf(v13, v11, L"(caller: %p) ", v14);
        CurrentThreadId = GetCurrentThreadId();
        LODWORD(Arguments) = *(_DWORD *)(a3 + 4);
        nSize[0] = CurrentThreadId;
        LODWORD(lpBuffera) = *(_DWORD *)(a3 + 60);
        v17 = wil::details::LogStringPrintf(
                v15,
                v11,
                L"%hs(%d) tid(%x) %08X %ws",
                (const unsigned __int16 *)v8,
                lpBuffera,
                *(_QWORD *)nSize,
                Arguments,
                Buffer);
        if ( *(_QWORD *)(a3 + 16) || *(_QWORD *)(a3 + 64) || *(_QWORD *)(a3 + 40) )
        {
          v19 = wil::details::LogStringPrintf(v17, v11, L"    ", v18);
          v20 = *(const unsigned __int16 **)(a3 + 16);
          if ( v20 )
            v19 = wil::details::LogStringPrintf(v19, v11, L"Msg:[%ws] ", v20);
          v21 = *(const unsigned __int16 **)(a3 + 64);
          if ( v21 )
            v19 = wil::details::LogStringPrintf(v19, v11, L"CallContext:[%hs] ", v21);
          v22 = *(const unsigned __int16 **)(a3 + 40);
          if ( *(_QWORD *)(a3 + 32) )
          {
            wil::details::LogStringPrintf(v19, v11, L"[%hs(%hs)]\n", v22, *(_QWORD *)(a3 + 32));
          }
          else if ( v22 )
          {
            wil::details::LogStringPrintf(v19, v11, L"[%hs]\n", v22);
          }
          else
          {
            wil::details::LogStringPrintf(v19, v11, L"\n", 0LL);
          }
        }
      }
    }
  }
  return 0LL;
}
