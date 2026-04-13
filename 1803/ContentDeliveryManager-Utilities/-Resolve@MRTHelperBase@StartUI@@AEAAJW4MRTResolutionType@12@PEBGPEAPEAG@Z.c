/*
 * XREFs of ?Resolve@MRTHelperBase@StartUI@@AEAAJW4MRTResolutionType@12@PEBGPEAPEAG@Z @ 0x1800960E8
 * Callers:
 *     ?RuntimeClassInitialize@ContentDeliveryManagerAppDisplayInfo@ApplicationModel@Extensions@Internal@Windows@@QEAAJPEBGPEAUIAppDisplayInfo@25@@Z @ 0x1800965F8 (-RuntimeClassInitialize@ContentDeliveryManagerAppDisplayInfo@ApplicationModel@Extensions@Interna.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800031B4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18001B314 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180029864 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Initialize@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_K@Z @ 0x180058378 (-_Initialize@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_.c)
 *     ?TryRemoveImplicitResourcesPrefixFromShortenedMsResourceUri@DataStoreCache@@YAJPEAUHSTRING__@@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x180095BFC (-TryRemoveImplicitResourcesPrefixFromShortenedMsResourceUri@DataStoreCache@@YAJPEAUHSTRING__@@AE.c)
 *     ?InitializeMRTObjects@MRTHelperBase@StartUI@@AEAAJXZ @ 0x180095D68 (-InitializeMRTObjects@MRTHelperBase@StartUI@@AEAAJXZ.c)
 *     __security_check_cookie @ 0x1800C0A20 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C1AD0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=19
__int64 __fastcall StartUI::MRTHelperBase::Resolve(__int64 a1, __int64 a2, __int64 a3, char *a4)
{
  int v6; // eax
  unsigned int v7; // ebx
  HRESULT v8; // eax
  unsigned int v9; // edi
  int v11; // eax
  LPVOID v12; // rax
  const WCHAR *StringRawBuffer; // rax
  char v14; // si
  __int64 v15; // rsi
  int v16; // esi
  int v17; // eax
  __int64 v18; // rsi
  void *p_ppszPathOut; // r8
  HRESULT v20; // eax
  LPVOID v21; // rax
  LPVOID pv; // [rsp+38h] [rbp-49h] BYREF
  __int64 v23; // [rsp+40h] [rbp-41h]
  __int64 v24; // [rsp+48h] [rbp-39h]
  UINT32 length[2]; // [rsp+58h] [rbp-29h] BYREF
  __int64 v26; // [rsp+68h] [rbp-19h]
  PWSTR ppszPathOut; // [rsp+70h] [rbp-11h] BYREF
  __int64 v28; // [rsp+78h] [rbp-9h]
  __int64 v29; // [rsp+80h] [rbp-1h]
  unsigned __int64 v30; // [rsp+88h] [rbp+7h]
  _BYTE v31[24]; // [rsp+90h] [rbp+Fh] BYREF
  HSTRING string; // [rsp+A8h] [rbp+27h]
  wil::details::in1diag3 *retaddr; // [rsp+E0h] [rbp+5Fh]

  v26 = -2LL;
  *(_QWORD *)length = L"ms-resource:ActionCenterGroupName";
  *(_QWORD *)a4 = 0LL;
  pv = 0LL;
  v23 = 0LL;
  v24 = 0LL;
  v6 = StartUI::MRTHelperBase::InitializeMRTObjects((StartUI::MRTHelperBase *)a1, a2, a3, a4);
  v7 = v6;
  if ( !*(_BYTE *)(a1 + 38) || v6 != -2147024894 )
  {
    if ( v6 == -2147024891 )
    {
      v23 = 0LL;
      v24 = 0LL;
      return 2147942405LL;
    }
    if ( v6 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xAC,
        (__int64)"internal\\shellcommonshell\\private\\inc\\shellmrthelper.h",
        (const char *)(unsigned int)v6);
      v23 = 0LL;
      v24 = 0LL;
      return v7;
    }
    Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)v31, (const WCHAR **)length);
    length[0] = 0;
    StringRawBuffer = WindowsGetStringRawBuffer(string, length);
    if ( length[0] < 0xC || (v14 = 1, CompareStringOrdinal(StringRawBuffer, 12, L"ms-resource:", 12, 1) != 2) )
      v14 = 0;
    if ( v14 )
    {
      v15 = *(_QWORD *)(a1 + 8);
      v23 = -1LL;
      v24 = -1LL;
      v16 = (*(__int64 (__fastcall **)(__int64, _QWORD, const WCHAR *, LPVOID *))(*(_QWORD *)v15 + 48LL))(
              v15,
              *(_QWORD *)(a1 + 16),
              L"ms-resource:ActionCenterGroupName",
              &pv);
      if ( v16 < 0 )
      {
        v30 = 7LL;
        v29 = 0LL;
        LOWORD(ppszPathOut) = 0;
        v17 = DataStoreCache::TryRemoveImplicitResourcesPrefixFromShortenedMsResourceUri(string, (__int64)&ppszPathOut);
        if ( v17 >= 0 )
        {
          if ( v29 )
          {
            v18 = *(_QWORD *)(a1 + 8);
            if ( pv )
            {
              CoTaskMemFree(pv);
              pv = 0LL;
            }
            v23 = -1LL;
            v24 = -1LL;
            p_ppszPathOut = &ppszPathOut;
            if ( v30 >= 8 )
              p_ppszPathOut = ppszPathOut;
            v16 = (*(__int64 (__fastcall **)(__int64, _QWORD, void *, LPVOID *))(*(_QWORD *)v18 + 48LL))(
                    v18,
                    *(_QWORD *)(a1 + 16),
                    p_ppszPathOut,
                    &pv);
          }
        }
        else
        {
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0xF1,
            (__int64)"internal\\shellcommonshell\\private\\inc\\shellmrthelper.h",
            (const char *)(unsigned int)v17);
        }
        if ( v16 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0xF7,
            (__int64)"internal\\shellcommonshell\\private\\inc\\shellmrthelper.h",
            (const char *)(unsigned int)v16);
        if ( v30 >= 8 )
          operator delete(ppszPathOut);
        v30 = 7LL;
        v29 = 0LL;
        LOWORD(ppszPathOut) = 0;
      }
    }
    else
    {
      v16 = -2147024809;
    }
    string = 0LL;
    if ( v16 < 0 )
    {
      if ( pv )
      {
        CoTaskMemFree(pv);
        pv = 0LL;
      }
      v23 = -1LL;
      v24 = -1LL;
      v20 = SHStrDupW(L"ms-resource:ActionCenterGroupName", (LPWSTR *)&pv);
      v7 = v20;
      if ( v20 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x124,
          (__int64)"internal\\shellcommonshell\\private\\inc\\shellmrthelper.h",
          (const char *)(unsigned int)v20);
        if ( pv )
        {
          CoTaskMemFree(pv);
          pv = 0LL;
        }
        v23 = 0LL;
        v24 = 0LL;
        return v7;
      }
    }
    v21 = pv;
    pv = 0LL;
    *(_QWORD *)a4 = v21;
    v23 = 0LL;
    v24 = 0LL;
    return 0LL;
  }
  ppszPathOut = 0LL;
  v28 = -1LL;
  v29 = -1LL;
  v8 = PathAllocCombine(*(PCWSTR *)(a1 + 64), L"ms-resource:ActionCenterGroupName", 0, &ppszPathOut);
  v9 = v8;
  if ( v8 >= 0 )
  {
    v11 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Initialize(
            &pv,
            (__int64)ppszPathOut,
            0xFFFFFFFFFFFFFFFFuLL);
    v7 = v11;
    if ( v11 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xA7,
        (__int64)"internal\\shellcommonshell\\private\\inc\\shellmrthelper.h",
        (const char *)(unsigned int)v11);
      if ( ppszPathOut )
      {
        LocalFree(ppszPathOut);
        ppszPathOut = 0LL;
      }
      v28 = 0LL;
      v29 = 0LL;
      if ( pv )
      {
        CoTaskMemFree(pv);
        pv = 0LL;
      }
      v23 = 0LL;
      v24 = 0LL;
      return v7;
    }
    v12 = pv;
    pv = 0LL;
    v24 = 0LL;
    v23 = 0LL;
    *(_QWORD *)a4 = v12;
    if ( ppszPathOut )
    {
      LocalFree(ppszPathOut);
      ppszPathOut = 0LL;
    }
    v28 = 0LL;
    v29 = 0LL;
    if ( pv )
    {
      CoTaskMemFree(pv);
      pv = 0LL;
    }
    v23 = 0LL;
    v24 = 0LL;
    return 0LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xA6,
    (__int64)"internal\\shellcommonshell\\private\\inc\\shellmrthelper.h",
    (const char *)(unsigned int)v8);
  if ( ppszPathOut )
  {
    LocalFree(ppszPathOut);
    ppszPathOut = 0LL;
  }
  v28 = 0LL;
  v29 = 0LL;
  v23 = 0LL;
  v24 = 0LL;
  return v9;
}
