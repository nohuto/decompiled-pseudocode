/*
 * XREFs of ?TryBackForView@ViewManagerBridge@@UEAAJPEAUIUnknown@@@Z @ 0x1801094A0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003FE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180017E54 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     ??$TryBackForView@AEAI@ViewManagerInteropTraceLogging@@SAXAEAI@Z @ 0x18010D250 (--$TryBackForView@AEAI@ViewManagerInteropTraceLogging@@SAXAEAI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ViewManagerBridge::TryBackForView(ViewManagerBridge *this, struct IUnknown *a2)
{
  unsigned int v4; // ebx
  struct IUnknownVtbl *lpVtbl; // rbx
  __int64 *v6; // rax
  int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  unsigned int v12; // [rsp+40h] [rbp+8h] BYREF
  __int64 v13; // [rsp+50h] [rbp+18h] BYREF

  if ( *((_BYTE *)this + 137) )
  {
    v4 = -2147417848;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1B2,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
      (const char *)0x80010108LL);
    return v4;
  }
  v13 = 0LL;
  lpVtbl = a2->lpVtbl;
  v6 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>(&v13);
  ((void (__fastcall *)(struct IUnknown *, GUID *, __int64 *))lpVtbl->QueryInterface)(
    a2,
    &GUID_884eb994_3fdf_40ff_8800_aa1176f0f45e,
    v6);
  v7 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v13 + 152LL))(v13, &v12);
  v4 = v7;
  if ( v7 < 0 )
  {
    v8 = 440LL;
LABEL_7:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v8,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
      (const char *)(unsigned int)v7);
    goto LABEL_9;
  }
  ViewManagerInteropTraceLogging::TryBackForView<unsigned int &>(&v12);
  v7 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(**((_QWORD **)this + 12) + 152LL))(
         *((_QWORD *)this + 12),
         v12,
         1LL);
  v4 = v7;
  if ( v7 < 0 )
  {
    v8 = 446LL;
    goto LABEL_7;
  }
  v4 = 0;
LABEL_9:
  v9 = v13;
  if ( v13 )
  {
    v13 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
  return v4;
}
