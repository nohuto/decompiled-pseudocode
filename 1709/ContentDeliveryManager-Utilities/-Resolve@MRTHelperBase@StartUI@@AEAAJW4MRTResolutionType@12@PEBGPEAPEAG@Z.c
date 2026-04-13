/*
 * XREFs of ?Resolve@MRTHelperBase@StartUI@@AEAAJW4MRTResolutionType@12@PEBGPEAPEAG@Z @ 0x180088DC4
 * Callers:
 *     ?RuntimeClassInitialize@ContentDeliveryManagerAppDisplayInfo@ApplicationModel@Extensions@Internal@Windows@@QEAAJPEBGPEAUIAppDisplayInfo@25@@Z @ 0x180089158 (-RuntimeClassInitialize@ContentDeliveryManagerAppDisplayInfo@ApplicationModel@Extensions@Interna.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002E8C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180018B48 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800261F8 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?TryRemoveImplicitResourcesPrefixFromShortenedMsResourceUri@DataStoreCache@@YAJPEAUHSTRING__@@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x1800888DC (-TryRemoveImplicitResourcesPrefixFromShortenedMsResourceUri@DataStoreCache@@YAJPEAUHSTRING__@@AE.c)
 *     ?InitializeMRTObjects@MRTHelperBase@StartUI@@AEAAJXZ @ 0x180088A48 (-InitializeMRTObjects@MRTHelperBase@StartUI@@AEAAJXZ.c)
 *     __security_check_cookie @ 0x1800B39D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800B4D50 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=12
__int64 __fastcall StartUI::MRTHelperBase::Resolve(__int64 a1, __int64 a2, __int64 a3, char *a4)
{
  HRESULT v6; // eax
  HRESULT v7; // ebx
  __int64 v8; // rdx
  __int64 result; // rax
  const WCHAR *StringRawBuffer; // rax
  char v11; // bl
  __int64 v12; // rbx
  int v13; // ebx
  int v14; // eax
  __int64 v15; // rbx
  void **v16; // r8
  HRESULT v17; // eax
  LPVOID v18; // rax
  LPVOID pv; // [rsp+38h] [rbp-49h] BYREF
  __int64 v20; // [rsp+40h] [rbp-41h]
  __int64 v21; // [rsp+48h] [rbp-39h]
  UINT32 length[2]; // [rsp+58h] [rbp-29h] BYREF
  __int64 v23; // [rsp+68h] [rbp-19h]
  void *v24[2]; // [rsp+70h] [rbp-11h] BYREF
  __int64 v25; // [rsp+80h] [rbp-1h]
  unsigned __int64 v26; // [rsp+88h] [rbp+7h]
  _BYTE v27[24]; // [rsp+90h] [rbp+Fh] BYREF
  HSTRING string; // [rsp+A8h] [rbp+27h]
  wil::details::in1diag3 *retaddr; // [rsp+E0h] [rbp+5Fh]

  v23 = -2LL;
  *(_QWORD *)length = L"ms-resource:ActionCenterGroupName";
  *(_QWORD *)a4 = 0LL;
  v6 = StartUI::MRTHelperBase::InitializeMRTObjects((StartUI::MRTHelperBase *)a1, a2, a3, a4);
  v7 = v6;
  if ( *(_BYTE *)(a1 + 38) && v6 == -2147024894 )
  {
    v7 = PathAllocCombine(*(PCWSTR *)(a1 + 64), L"ms-resource:ActionCenterGroupName", 0, (PWSTR *)a4);
    if ( v7 >= 0 )
      return 0LL;
    v8 = 162LL;
  }
  else
  {
    result = 2147942405LL;
    if ( v7 == -2147024891 )
      return result;
    if ( v7 >= 0 )
    {
      pv = 0LL;
      v20 = 0LL;
      v21 = 0LL;
      Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)v27, (const WCHAR **)length);
      length[0] = 0;
      StringRawBuffer = WindowsGetStringRawBuffer(string, length);
      if ( length[0] < 0xC || (v11 = 1, CompareStringOrdinal(StringRawBuffer, 12, L"ms-resource:", 12, 1) != 2) )
        v11 = 0;
      if ( v11 )
      {
        v12 = *(_QWORD *)(a1 + 8);
        v20 = -1LL;
        v21 = -1LL;
        v13 = (*(__int64 (__fastcall **)(__int64, _QWORD, const WCHAR *, LPVOID *))(*(_QWORD *)v12 + 48LL))(
                v12,
                *(_QWORD *)(a1 + 16),
                L"ms-resource:ActionCenterGroupName",
                &pv);
        if ( v13 < 0 )
        {
          v26 = 7LL;
          v25 = 0LL;
          LOWORD(v24[0]) = 0;
          v14 = DataStoreCache::TryRemoveImplicitResourcesPrefixFromShortenedMsResourceUri(string, (__int64)v24);
          if ( v14 >= 0 )
          {
            if ( v25 )
            {
              v15 = *(_QWORD *)(a1 + 8);
              if ( pv )
              {
                CoTaskMemFree(pv);
                pv = 0LL;
              }
              v20 = -1LL;
              v21 = -1LL;
              v16 = v24;
              if ( v26 >= 8 )
                v16 = (void **)v24[0];
              v13 = (*(__int64 (__fastcall **)(__int64, _QWORD, void **, LPVOID *))(*(_QWORD *)v15 + 48LL))(
                      v15,
                      *(_QWORD *)(a1 + 16),
                      v16,
                      &pv);
            }
          }
          else
          {
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              (void *)0xEE,
              (__int64)"shellcommon\\shell\\windows.ui.shell\\startui\\common\\shellmrthelper.h",
              (const char *)(unsigned int)v14);
          }
          if ( v13 < 0 )
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              (void *)0xF4,
              (__int64)"shellcommon\\shell\\windows.ui.shell\\startui\\common\\shellmrthelper.h",
              (const char *)(unsigned int)v13);
          if ( v26 >= 8 )
            operator delete(v24[0]);
          v26 = 7LL;
          v25 = 0LL;
          LOWORD(v24[0]) = 0;
        }
      }
      else
      {
        v13 = -2147024809;
      }
      string = 0LL;
      if ( v13 >= 0 )
        goto LABEL_35;
      if ( pv )
      {
        CoTaskMemFree(pv);
        pv = 0LL;
      }
      v20 = -1LL;
      v21 = -1LL;
      v17 = SHStrDupW(L"ms-resource:ActionCenterGroupName", (LPWSTR *)&pv);
      v7 = v17;
      if ( v17 >= 0 )
      {
LABEL_35:
        v18 = pv;
        pv = 0LL;
        v21 = 0LL;
        v20 = 0LL;
        *(_QWORD *)a4 = v18;
        v7 = 0;
      }
      else
      {
        wil::details::in1diag3::Return_Hr_NoOriginate(
          retaddr,
          (void *)0x121,
          (__int64)"shellcommon\\shell\\windows.ui.shell\\startui\\common\\shellmrthelper.h",
          (const char *)(unsigned int)v17);
        if ( pv )
        {
          CoTaskMemFree(pv);
          pv = 0LL;
        }
      }
      v20 = 0LL;
      v21 = 0LL;
      return (unsigned int)v7;
    }
    v8 = 166LL;
  }
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)v8,
    (__int64)"shellcommon\\shell\\windows.ui.shell\\startui\\common\\shellmrthelper.h",
    (const char *)(unsigned int)v7);
  return (unsigned int)v7;
}
