/*
 * XREFs of ShellPositionerHelpers::Details::ShellPositionerCallback__lambda_ced84d1d4e9be799504b2d8f0a09c0c9___::Invoke @ 0x1800255C0
 * Callers:
 *     ?PerformSyncCallback@ShellPositionerProxy@@UEAAJPEAUIShellPositionerCallback@@@Z @ 0x1800254C0 (-PerformSyncCallback@ShellPositionerProxy@@UEAAJPEAUIShellPositionerCallback@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ShellPositionerHelpers::Details::ShellPositionerCallback__lambda_ced84d1d4e9be799504b2d8f0a09c0c9___::Invoke(
        __int64 a1,
        int (__fastcall ***a2)(_QWORD, GUID *, __int64 *))
{
  int (__fastcall **v2)(_QWORD, GUID *, __int64 *); // rax
  __int64 v4; // rcx
  unsigned int v5; // ebx
  int v7; // eax
  int v8; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v10; // [rsp+30h] [rbp+8h] BYREF

  v2 = *a2;
  v10 = 0LL;
  if ( (*v2)(a2, &GUID_c3be436b_5a20_4bff_bc39_12e4e36bd775, &v10) < 0
    || (**(_BYTE **)(a1 + 64) = 1,
        v7 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v10 + 24LL))(
               v10,
               *(_QWORD *)(a1 + 48),
               *(_QWORD *)(a1 + 56)),
        v5 = v7,
        v7 >= 0) )
  {
    v4 = v10;
    if ( v10 )
    {
      v10 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
    }
    return 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xED,
      (unsigned int)"pcshell\\twinui\\fullscreenmanager\\lib\\fullscreenmanager.cpp",
      (const char *)(unsigned int)v7,
      v8);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v10);
  }
  return v5;
}
