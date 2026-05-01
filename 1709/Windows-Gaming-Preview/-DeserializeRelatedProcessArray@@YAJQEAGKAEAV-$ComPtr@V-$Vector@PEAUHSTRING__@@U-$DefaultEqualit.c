/*
 * XREFs of ?DeserializeRelatedProcessArray@@YAJQEAGKAEAV?$ComPtr@V?$Vector@PEAUHSTRING__@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@3456@U?$DefaultVectorOptions@PEAUHSTRING__@@@3456@@Internal@Collections@Foundation@Windows@@@WRL@Microsoft@@@Z @ 0x180015128
 * Callers:
 *     ?GetRelatedProcessesFromGameConfigStore@@YAJPEAUIGameConfigStore@ExecutionModel@@U_GUID@@AEAV?$ComPtr@V?$Vector@PEAUHSTRING__@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@3456@U?$DefaultVectorOptions@PEAUHSTRING__@@@3456@@Internal@Collections@Foundation@Windows@@@WRL@Microsoft@@@Z @ 0x1800152B4 (-GetRelatedProcessesFromGameConfigStore@@YAJPEAUIGameConfigStore@ExecutionModel@@U_GUID@@AEAV-$C.c)
 *     ?GetGlobalRelatedProcessesFromGameConfigStore@@YAJPEAUIGameConfigStore@ExecutionModel@@AEAV?$ComPtr@V?$Vector@PEAUHSTRING__@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@3456@U?$DefaultVectorOptions@PEAUHSTRING__@@@3456@@Internal@Collections@Foundation@Windows@@@WRL@Microsoft@@@Z @ 0x180015648 (-GetGlobalRelatedProcessesFromGameConfigStore@@YAJPEAUIGameConfigStore@ExecutionModel@@AEAV-$Com.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002DB4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002E30 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$Vector@PEAUHSTRING__@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@3456@U?$DefaultVectorOptions@PEAUHSTRING__@@@3456@@Internal@Collections@Foundation@Windows@@QEAA@AEBU?$DefaultEqualityPredicate@PEAUHSTRING__@@@1234@Upermission@01234@@Z @ 0x1800177A8 (--0-$Vector@PEAUHSTRING__@@U-$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Col_ea_1800177A8.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180041970 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800428B0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall DeserializeRelatedProcessArray(const WCHAR *sourceString, unsigned int a2, __int64 *a3)
{
  const WCHAR *v4; // rsi
  __int64 v5; // rdx
  unsigned int v6; // ebx
  __int64 v7; // rcx
  void *v8; // rax
  __int64 v9; // rax
  __int64 v10; // rbx
  HRESULT v11; // eax
  unsigned int v12; // edi
  __int64 v13; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  HSTRING string; // [rsp+68h] [rbp+20h] BYREF

  v4 = sourceString;
  if ( a2 < 4 )
  {
    v5 = 459LL;
LABEL_3:
    v6 = -2147418113;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigutils.cpp",
      (const char *)0x8000FFFFLL);
    return v6;
  }
  if ( *(_DWORD *)((char *)sourceString + a2 - 4) )
  {
    v5 = 463LL;
    goto LABEL_3;
  }
  v7 = *a3;
  if ( *a3 )
  {
    *a3 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  *a3 = 0LL;
  v8 = operator new(0x68uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( !v8
    || (v9 = Windows::Foundation::Collections::Internal::Vector<HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<HSTRING__ *>>::Vector<HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<HSTRING__ *>>(v8)) == 0 )
  {
    v6 = -2147024882;
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x1D1,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigutils.cpp",
      (const char *)0x8007000ELL);
    return v6;
  }
  *a3 = v9;
  v10 = -1LL;
  do
    ++v10;
  while ( v4[v10] );
  while ( 1 )
  {
    if ( !v10 )
      return 0LL;
    string = 0LL;
    WindowsDeleteString(0LL);
    string = 0LL;
    v11 = WindowsCreateString(v4, v10, &string);
    v12 = v11;
    if ( v11 < 0 )
      break;
    v11 = (*(__int64 (__fastcall **)(__int64, HSTRING))(*(_QWORD *)*a3 + 104LL))(*a3, string);
    v12 = v11;
    if ( v11 < 0 )
    {
      v13 = 473LL;
      goto LABEL_22;
    }
    v4 += v10 + 1;
    v10 = -1LL;
    do
      ++v10;
    while ( v4[v10] );
    WindowsDeleteString(string);
  }
  v13 = 472LL;
LABEL_22:
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)v13,
    (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigutils.cpp",
    (const char *)(unsigned int)v11);
  WindowsDeleteString(string);
  return v12;
}
