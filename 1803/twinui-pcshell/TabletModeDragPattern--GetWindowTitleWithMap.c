/*
 * XREFs of TabletModeDragPattern::GetWindowTitleWithMap @ 0x1802E547C
 * Callers:
 *     TabletModeDragPattern::GenerateStringWithMap @ 0x1802E4F0C (TabletModeDragPattern--GenerateStringWithMap.c)
 * Callees:
 *     ?GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x18002BF80 (-GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     ?s_LookupEntry@?$CSimpleHashTable@PEAUHWND__@@V?$ComPtr@UISwitchItemElement@@@WRL@Microsoft@@V?$CDefaultHashPolicy@PEAUHWND__@@@@V?$CDefaultKeyCompare@PEAUHWND__@@@@VCDefaultResizePolicy@@VCDefaultRehashPolicy@@@@CAAEAVHashBucket@1@PEAV21@IAEBQEAUHWND__@@@Z @ 0x18029969C (-s_LookupEntry@-$CSimpleHashTable@PEAUHWND__@@V-$ComPtr@UISwitchItemElement@@@WRL@Microsoft@@V-$.c)
 *     ?_AddUpdateItem@?$CSimpleHashTable@PEAUIApplicationView@@PEBGV?$CDefaultHashPolicy@PEAUIApplicationView@@@@V?$CDefaultKeyCompare@PEAUIApplicationView@@@@VCDefaultResizePolicy@@VCDefaultRehashPolicy@@@@AEAAJHAEBQEAUIApplicationView@@AEBQEBGPEAPEBG@Z @ 0x1802E5600 (-_AddUpdateItem@-$CSimpleHashTable@PEAUIApplicationView@@PEBGV-$CDefaultHashPolicy@PEAUIApplicat.c)
 */

__int64 __fastcall TabletModeDragPattern::GetWindowTitleWithMap(
        __int64 (__fastcall ***this)(CWin32ApplicationView *this, struct _GUID *a2, void **a3),
        __int64 a2,
        LPWSTR *a3)
{
  __int64 v5; // rcx
  HRESULT v7; // ebx
  __int64 v8; // rcx
  const WCHAR *v9; // rcx
  __int64 v10; // rdx
  HWND WindowForView; // rax
  __int64 v12; // rdx
  LPCWSTR psz; // [rsp+30h] [rbp-248h] BYREF
  __int64 (__fastcall ***v15)(CWin32ApplicationView *, struct _GUID *, void **); // [rsp+38h] [rbp-240h] BYREF
  WCHAR pString[264]; // [rsp+40h] [rbp-238h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+278h] [rbp+0h]

  *a3 = 0LL;
  v15 = this;
  v5 = *(_QWORD *)(a2 + 16);
  v7 = v5 == 0 ? 0x8002802B : 0;
  if ( v5
    && (v8 = CSimpleHashTable<HWND__ *,Microsoft::WRL::ComPtr<ISwitchItemElement>,CDefaultHashPolicy<HWND__ *>,CDefaultKeyCompare<HWND__ *>,CDefaultResizePolicy,CDefaultRehashPolicy>::s_LookupEntry(
               v5,
               *(_DWORD *)(a2 + 4),
               &v15),
        v7 = *(_DWORD *)v8 != 1 ? 0x8002802B : 0,
        *(_DWORD *)v8 == 1) )
  {
    v9 = *(const WCHAR **)(v8 + 16);
  }
  else
  {
    v9 = psz;
  }
  if ( v7 < 0 )
  {
    if ( v7 != -2147319765 )
    {
      v10 = 42LL;
      goto LABEL_17;
    }
    WindowForView = ApplicationViewHelpers::GetWindowForView(this, (struct IApplicationView *)a2);
    if ( !WindowForView )
    {
      v7 = -2147467259;
      v10 = 26LL;
      goto LABEL_17;
    }
    InternalGetWindowText(WindowForView, pString, 260);
    if ( SHStrDupW(pString, (LPWSTR *)&psz) >= 0
      && (int)CSimpleHashTable<IApplicationView *,unsigned short const *,CDefaultHashPolicy<IApplicationView *>,CDefaultKeyCompare<IApplicationView *>,CDefaultResizePolicy,CDefaultRehashPolicy>::_AddUpdateItem(
                a2,
                v12,
                &v15,
                &psz) < 0 )
    {
      CoTaskMemFree((LPVOID)psz);
    }
    v7 = SHStrDupW(pString, a3);
    if ( v7 < 0 )
    {
      v10 = 40LL;
      goto LABEL_17;
    }
  }
  else
  {
    v7 = SHStrDupW(v9, a3);
    if ( v7 < 0 )
    {
      v10 = 21LL;
LABEL_17:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v10,
        (__int64)"pcshell\\twinui\\tabletmode\\lib\\dragpattern.cpp",
        (const char *)(unsigned int)v7);
    }
  }
  return (unsigned int)v7;
}
