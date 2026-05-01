/*
 * XREFs of ?_ObliterateOperation@CAppViewManager@@AEAAJAEBU_GUID@@@Z @ 0x180126888
 * Callers:
 *     wil::details::ScopeExitFn__lambda_f9c9d82077cc2726e9c79a56f048e710___::_ScopeExitFn__lambda_f9c9d82077cc2726e9c79a56f048e710___ @ 0x18011D8E0 (wil--details--ScopeExitFn__lambda_f9c9d82077cc2726e9c79a56f048e710___--_ScopeExitFn__lambda_f9c9.c)
 *     _lambda_60cdd79d6ef93393eeddedcffed22f52_::operator() @ 0x18011DF60 (_lambda_60cdd79d6ef93393eeddedcffed22f52_--operator().c)
 *     ?DragCancel@CAppViewManager@@UEAAJAEBU_GUID@@@Z @ 0x18011F090 (-DragCancel@CAppViewManager@@UEAAJAEBU_GUID@@@Z.c)
 *     ?WindowProvided@CAppViewManager@@UEAAJAEBU_GUID@@PEAUHWND__@@@Z @ 0x180125720 (-WindowProvided@CAppViewManager@@UEAAJAEBU_GUID@@PEAUHWND__@@@Z.c)
 *     ?_WindowProvidedWorker@CAppViewManager@@AEAAJAEBU_GUID@@PEAUHWND__@@@Z @ 0x180127E04 (-_WindowProvidedWorker@CAppViewManager@@AEAAJAEBU_GUID@@PEAUHWND__@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$As@UIImmersiveApplicationInternal@@@?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@Details@12@@Z @ 0x18008CBD0 (--$As@UIImmersiveApplicationInternal@@@-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D044 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?_TransferAllWindowsToNextGlomWorker@CAppViewManager@@AEAAJPEAUIImmersiveApplicationInternal@@PEAUIImmersiveApplication@@W4ApplicationDisappearReason@@@Z @ 0x180127CF0 (-_TransferAllWindowsToNextGlomWorker@CAppViewManager@@AEAAJPEAUIImmersiveApplicationInternal@@PE.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CAppViewManager::_ObliterateOperation(CAppViewManager *this, const struct _GUID *a2)
{
  RTL_SRWLOCK *v4; // rbx
  int v5; // eax
  unsigned int v6; // edi
  __int64 v7; // rdi
  int v8; // eax
  int GlomWorker; // eax
  int v10; // eax
  int v11; // eax
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+28h]
  int v14; // [rsp+60h] [rbp+30h] BYREF
  __int64 v15; // [rsp+70h] [rbp+40h] BYREF
  __int64 v16; // [rsp+78h] [rbp+48h] BYREF

  v4 = CApplicationManagerUtility::g_pIAMGlobals;
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v5 = (*(__int64 (__fastcall **)(_QWORD, const struct _GUID *, int *))(**((_QWORD **)this + 23) + 24LL))(
         *((_QWORD *)this + 23),
         a2,
         &v14);
  v6 = v5;
  if ( v5 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x53F,
      (__int64)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
      (const char *)(unsigned int)v5);
    goto LABEL_17;
  }
  if ( v14 )
  {
    v16 = 0LL;
    v7 = *((_QWORD *)this + 23);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v16);
    (*(void (__fastcall **)(__int64, const struct _GUID *, __int64 *))(*(_QWORD *)v7 + 64LL))(v7, a2, &v16);
    if ( v16 )
    {
      v15 = 0LL;
      v8 = Microsoft::WRL::ComPtr<IUnknown>::As<IImmersiveApplicationInternal>(&v16, &v15);
      v6 = v8;
      if ( v8 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x54A,
          (__int64)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
          (const char *)(unsigned int)v8);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v15);
LABEL_15:
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v16);
        goto LABEL_17;
      }
      GlomWorker = CAppViewManager::_TransferAllWindowsToNextGlomWorker(this, v15, 0LL, 4294967293LL, -2LL);
      if ( GlomWorker < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          1355LL,
          (__int64)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
          (const char *)(unsigned int)GlomWorker);
      v10 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 15) + 176LL))(*((_QWORD *)this + 15), v15);
      if ( v10 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          1359LL,
          (__int64)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
          (const char *)(unsigned int)v10);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v15);
    }
    v11 = (*(__int64 (__fastcall **)(_QWORD, const struct _GUID *))(**((_QWORD **)this + 23) + 88LL))(
            *((_QWORD *)this + 23),
            a2);
    if ( v11 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        1362LL,
        (__int64)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
        (const char *)(unsigned int)v11);
    v6 = 0;
    goto LABEL_15;
  }
  v6 = -2147023728;
LABEL_17:
  if ( v4 )
    ReleaseSRWLockExclusive(v4);
  return v6;
}
