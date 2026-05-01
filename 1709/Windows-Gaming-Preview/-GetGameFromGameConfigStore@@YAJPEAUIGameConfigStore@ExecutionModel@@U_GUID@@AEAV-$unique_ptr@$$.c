/*
 * XREFs of ?GetGameFromGameConfigStore@@YAJPEAUIGameConfigStore@ExecutionModel@@U_GUID@@AEAV?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@std@@@std@@AEAI@Z @ 0x180014354
 * Callers:
 *     ?DoWorkOnGameConfigStore@@YAJPEAUIGameConfigStore@ExecutionModel@@$$QEAV?$function@$$A6AJU_GUID@@$$QEAV?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@@Z@std@@@Z @ 0x180014468 (-DoWorkOnGameConfigStore@@YAJPEAUIGameConfigStore@ExecutionModel@@$$QEAV-$function@$$A6AJU_GUID@.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002DB4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x1800415E4 (--3@YAXPEAX_K@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180041990 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800428B0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall GetGameFromGameConfigStore(__int64 *a1, __int128 *a2, void **a3, _DWORD *a4)
{
  __int64 v8; // rax
  unsigned int v9; // ebx
  __int64 v10; // rax
  void *v11; // rax
  unsigned __int64 v12; // rdx
  void *v13; // rcx
  void *v14; // r8
  __int64 v15; // rax
  __int128 v17; // [rsp+30h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  if ( !*a3 )
    *a4 = 0;
  v8 = *a1;
  v17 = *a2;
  v9 = (*(__int64 (__fastcall **)(__int64 *, __int128 *))(v8 + 24))(a1, &v17);
  if ( v9 == -2147023162 )
  {
    *a4 = 0;
    v10 = *a1;
    v17 = *a2;
    v9 = (*(__int64 (__fastcall **)(__int64 *, __int128 *, _QWORD, _DWORD *))(v10 + 24))(a1, &v17, 0LL, a4);
  }
  if ( v9 == -2147024662 )
  {
    v11 = operator new[]((unsigned int)*a4, (const struct std::nothrow_t *)&std::nothrow);
    v13 = *a3;
    *a3 = v11;
    if ( v13 )
      operator delete(v13, v12);
    v14 = *a3;
    if ( !*a3 )
    {
      v9 = -2147024882;
LABEL_12:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x57,
        (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigutils.cpp",
        (const char *)v9);
      return v9;
    }
    v15 = *a1;
    v17 = *a2;
    v9 = (*(__int64 (__fastcall **)(__int64 *, __int128 *, void *, _DWORD *))(v15 + 24))(a1, &v17, v14, a4);
  }
  if ( (v9 & 0x80000000) != 0 )
    goto LABEL_12;
  return v9;
}
