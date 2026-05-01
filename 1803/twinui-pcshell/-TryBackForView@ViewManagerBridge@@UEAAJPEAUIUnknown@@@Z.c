/*
 * XREFs of ?TryBackForView@ViewManagerBridge@@UEAAJPEAUIUnknown@@@Z @ 0x1801E0F40
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??$TryBackForView@AEAI@ViewManagerInteropTraceLogging@@SAXAEAI@Z @ 0x1801DB180 (--$TryBackForView@AEAI@ViewManagerInteropTraceLogging@@SAXAEAI@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ViewManagerBridge::TryBackForView(ViewManagerBridge *this, struct IUnknown *a2)
{
  unsigned int v4; // ebx
  int v5; // eax
  __int64 v6; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  unsigned int v9; // [rsp+40h] [rbp+8h] BYREF
  __int64 v10; // [rsp+50h] [rbp+18h] BYREF

  if ( !*((_BYTE *)this + 145) )
  {
    v10 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v10);
    ((void (__fastcall *)(struct IUnknown *, GUID *, __int64 *))a2->lpVtbl->QueryInterface)(
      a2,
      &GUID_884eb994_3fdf_40ff_8800_aa1176f0f45e,
      &v10);
    v5 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v10 + 152LL))(v10, &v9);
    v4 = v5;
    if ( v5 >= 0 )
    {
      ViewManagerInteropTraceLogging::TryBackForView<unsigned int &>((int *)&v9);
      v5 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(**((_QWORD **)this + 13) + 152LL))(
             *((_QWORD *)this + 13),
             v9,
             1LL);
      v4 = v5;
      if ( v5 >= 0 )
      {
        v4 = 0;
        goto LABEL_9;
      }
      v6 = 435LL;
    }
    else
    {
      v6 = 429LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
      (const char *)(unsigned int)v5);
LABEL_9:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v10);
    return v4;
  }
  v4 = -2147417848;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x1A7,
    (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
    (const char *)0x80010108LL);
  return v4;
}
