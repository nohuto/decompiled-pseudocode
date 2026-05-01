/*
 * XREFs of ?_WindowProvidedWorker@CAppViewManager@@AEAAJAEBU_GUID@@PEAUHWND__@@@Z @ 0x180127E04
 * Callers:
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_IAsyncCallback::_)(long)___ptr64_::DelegateInvokeHelper_IAsyncCallback__lambda_82653b4bf8fe7eb395fd3d07d923a539__&___ptr64__1_long_::Invoke @ 0x18009D8A0 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_IAsyncCallback--_)(long)___ea_18009D8A0.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_GetGlomForWindow@CAppViewManager@@AEAAJPEAUHWND__@@PEAPEAUIImmersiveApplicationInternal@@PEA_N@Z @ 0x180009F28 (-_GetGlomForWindow@CAppViewManager@@AEAAJPEAUHWND__@@PEAPEAUIImmersiveApplicationInternal@@PEA_N.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$As@UIImmersiveApplicationInternal@@@?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@Details@12@@Z @ 0x18008CBD0 (--$As@UIImmersiveApplicationInternal@@@-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?_ObliterateOperation@CAppViewManager@@AEAAJAEBU_GUID@@@Z @ 0x180126888 (-_ObliterateOperation@CAppViewManager@@AEAAJAEBU_GUID@@@Z.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CAppViewManager::_WindowProvidedWorker(CAppViewManager *this, const struct _GUID *a2, HWND a3)
{
  char v6; // r14
  RTL_SRWLOCK *v7; // rbx
  int v8; // eax
  unsigned int v9; // edi
  __int64 v10; // rdi
  int GlomForWindow; // eax
  __int64 v12; // r9
  __int64 v13; // rdx
  int v14; // eax
  __int64 v15; // rdx
  struct IImmersiveApplicationInternal *v17; // [rsp+30h] [rbp-40h] BYREF
  __int64 v18[2]; // [rsp+38h] [rbp-38h] BYREF
  __int128 v19; // [rsp+48h] [rbp-28h]
  __int128 v20; // [rsp+58h] [rbp-18h]
  char v21; // [rsp+68h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+38h]
  bool v23; // [rsp+B0h] [rbp+40h] BYREF
  int v24; // [rsp+B8h] [rbp+48h] BYREF
  __int64 v25; // [rsp+C8h] [rbp+58h] BYREF

  v18[1] = -2LL;
  *(_QWORD *)&v19 = this;
  *((_QWORD *)&v19 + 1) = a2;
  v20 = v19;
  v6 = 1;
  v21 = 1;
  v7 = CApplicationManagerUtility::g_pIAMGlobals;
  *(_QWORD *)&v19 = CApplicationManagerUtility::g_pIAMGlobals;
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v8 = (*(__int64 (__fastcall **)(_QWORD, const struct _GUID *, int *))(**((_QWORD **)this + 23) + 24LL))(
         *((_QWORD *)this + 23),
         a2,
         &v24);
  v9 = v8;
  if ( v8 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x512,
      (__int64)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
      (const char *)(unsigned int)v8);
    goto LABEL_15;
  }
  if ( v24 )
  {
    v18[0] = 0LL;
    v10 = *((_QWORD *)this + 23);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v18);
    (*(void (__fastcall **)(__int64, const struct _GUID *, __int64 *))(*(_QWORD *)v10 + 64LL))(v10, a2, v18);
    v17 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v17);
    GlomForWindow = CAppViewManager::_GetGlomForWindow(this, a3, &v17, &v23);
    v9 = GlomForWindow;
    if ( GlomForWindow < 0 )
    {
      v12 = (unsigned int)GlomForWindow;
      v13 = 1309LL;
LABEL_8:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v13,
        (__int64)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
        (const char *)v12);
LABEL_14:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v17);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v18);
LABEL_15:
      if ( v7 )
        ReleaseSRWLockExclusive(v7);
      goto LABEL_21;
    }
    if ( v23 )
    {
      v9 = -2147418113;
      v12 = 2147549183LL;
      v13 = 1314LL;
      goto LABEL_8;
    }
    v25 = 0LL;
    v14 = Microsoft::WRL::ComPtr<IUnknown>::As<IImmersiveApplicationInternal>(v18, &v25);
    v9 = v14;
    if ( v14 < 0 )
    {
      v15 = 1318LL;
LABEL_13:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v15,
        (__int64)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
        (const char *)(unsigned int)v14);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v25);
      goto LABEL_14;
    }
    v14 = (*(__int64 (__fastcall **)(_QWORD, HWND, struct IImmersiveApplicationInternal *, __int64, _QWORD))(**((_QWORD **)this + 15) + 96LL))(
            *((_QWORD *)this + 15),
            a3,
            v17,
            v25,
            0LL);
    v9 = v14;
    if ( v14 < 0 )
    {
      v15 = 1319LL;
      goto LABEL_13;
    }
    (*(void (__fastcall **)(_QWORD, const struct _GUID *, __int64, __int64))(**((_QWORD **)this + 23) + 48LL))(
      *((_QWORD *)this + 23),
      a2,
      2LL,
      2LL);
    (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 15) + 176LL))(*((_QWORD *)this + 15), v25);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v25);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v17);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v18);
  }
  if ( v7 )
    ReleaseSRWLockExclusive(v7);
  v6 = 0;
  v9 = 0;
LABEL_21:
  if ( v6 )
    CAppViewManager::_ObliterateOperation(this, a2);
  return v9;
}
