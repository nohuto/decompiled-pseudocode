/*
 * XREFs of ?CreateInstance@XamlLauncherFactory@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x18014A300
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003FE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     XamlLauncher_CreateInstance @ 0x18014A3E0 (XamlLauncher_CreateInstance.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall XamlLauncherFactory::CreateInstance(
        XamlLauncherFactory *this,
        struct IUnknown *a2,
        const struct _GUID *a3,
        void **a4)
{
  int v7; // eax
  __int64 (__fastcall ***v8)(_QWORD, const struct _GUID *, void **); // rbx
  unsigned int v9; // edi
  int v10; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 (__fastcall ***v12)(_QWORD, const struct _GUID *, void **); // [rsp+38h] [rbp+10h] BYREF

  *a4 = 0LL;
  if ( a2 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x9C,
      (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.h",
      (const char *)0x80040110LL);
    return 2147746064LL;
  }
  else
  {
    v12 = 0LL;
    v7 = XamlLauncher_CreateInstance(&v12);
    v8 = v12;
    v9 = v7;
    if ( v7 >= 0 )
    {
      v10 = (**v12)(v12, a3, a4);
      v9 = v10;
      if ( v10 < 0 )
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xA0,
          (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.h",
          (const char *)(unsigned int)v10);
    }
    else
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x9F,
        (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.h",
        (const char *)(unsigned int)v7);
    }
    if ( v8 )
      ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, const struct _GUID *, void **)))(*v8)[2])(v8);
    return v9;
  }
}
