/*
 * XREFs of ?IsEqualByAppUserModelId@CWin32ApplicationView@@UEAAJPEBGPEAH@Z @ 0x18002AA30
 * Callers:
 *     ?OnApplicationViewChanged@PeoplePaneViewManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x1800216A0 (-OnApplicationViewChanged@PeoplePaneViewManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_C.c)
 * Callees:
 *     ?GetAppUserModelId@CClassicWindowExternal@@UEAAJPEAPEAG@Z @ 0x180005860 (-GetAppUserModelId@CClassicWindowExternal@@UEAAJPEAPEAG@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWin32ApplicationView::IsEqualByAppUserModelId(
        CWin32ApplicationView *this,
        const unsigned __int16 *a2,
        int *a3)
{
  CClassicWindowExternal *v5; // rcx
  __int64 (__fastcall *v6)(CClassicWindowExternal *, unsigned __int16 **); // rax
  int AppUserModelId; // eax
  unsigned int v8; // ebx
  int v9; // r9d
  const WCHAR *v10; // r10
  __int64 v11; // rax
  LPCWCH lpString1; // [rsp+38h] [rbp-20h] BYREF
  int cchCount1[2]; // [rsp+40h] [rbp-18h]
  __int64 v15; // [rsp+48h] [rbp-10h]

  *a3 = 0;
  lpString1 = 0LL;
  *(_QWORD *)cchCount1 = -1LL;
  v15 = -1LL;
  v5 = (CClassicWindowExternal *)*((_QWORD *)this + 26);
  v6 = *(__int64 (__fastcall **)(CClassicWindowExternal *, unsigned __int16 **))(*(_QWORD *)v5 + 32LL);
  if ( v6 == CClassicWindowExternal::GetAppUserModelId )
    AppUserModelId = CClassicWindowExternal::GetAppUserModelId(v5, (unsigned __int16 **)&lpString1);
  else
    AppUserModelId = v6(v5, (unsigned __int16 **)&lpString1);
  v8 = AppUserModelId;
  if ( AppUserModelId >= 0 )
  {
    v9 = -(a2 != 0LL);
    v10 = &word_18035ABCC;
    if ( !a2 )
      a2 = &word_18035ABCC;
    LODWORD(v11) = cchCount1[0];
    if ( *(_QWORD *)cchCount1 == -1LL )
    {
      if ( lpString1 )
      {
        v11 = -1LL;
        do
          ++v11;
        while ( lpString1[v11] );
      }
      else
      {
        LODWORD(v11) = 0;
      }
    }
    if ( lpString1 )
      v10 = lpString1;
    *a3 = CompareStringOrdinal(v10, v11, a2, v9, 1) == 2;
    v8 = 0;
  }
  if ( lpString1 )
    CoTaskMemFree((LPVOID)lpString1);
  return v8;
}
