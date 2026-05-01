/*
 * XREFs of ?PerformDelayedInitialization@ShellPositionerManager@@UEAAJXZ @ 0x1802B9700
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x18000AF60 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIObjectArray@@@WRL@Microsoft@@IEAAKXZ @ 0x18001D61C (-InternalRelease@-$ComPtr@UIObjectArray@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall ShellPositionerManager::PerformDelayedInitialization(ShellPositionerManager *this)
{
  __int64 v2; // rbx
  int v3; // eax
  unsigned int v4; // ebx
  __int64 v5; // rdx
  unsigned int i; // edi
  void *v7; // rbx
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+20h]
  unsigned int v10; // [rsp+70h] [rbp+28h] BYREF
  CWinRTApplicationView *v11; // [rsp+78h] [rbp+30h] BYREF
  void *v12; // [rsp+80h] [rbp+38h] BYREF
  __int64 v13; // [rsp+88h] [rbp+40h] BYREF

  v12 = 0LL;
  v2 = *((_QWORD *)this + 17);
  Microsoft::WRL::ComPtr<IObjectArray>::InternalRelease(&v12);
  v3 = (*(__int64 (__fastcall **)(__int64, void **))(*(_QWORD *)v2 + 24LL))(v2, &v12);
  v4 = v3;
  if ( v3 < 0 )
  {
    v5 = 212LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (__int64)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
      (const char *)(unsigned int)v3);
    goto LABEL_13;
  }
  v3 = (*(__int64 (__fastcall **)(void *, unsigned int *))(*(_QWORD *)v12 + 24LL))(v12, &v10);
  v4 = v3;
  if ( v3 < 0 )
  {
    v5 = 215LL;
    goto LABEL_5;
  }
  for ( i = 0; i < v10; ++i )
  {
    v11 = 0LL;
    v7 = v12;
    Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v11);
    if ( (*(int (__fastcall **)(void *, _QWORD, GUID *, CWinRTApplicationView **))(*(_QWORD *)v7 + 32LL))(
           v7,
           i,
           &GUID_871f602a_2b58_42b4_8c4b_6c43d642c06f,
           &v11) >= 0 )
    {
      v13 = 0LL;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v13);
      if ( (*(int (__fastcall **)(char *, CWinRTApplicationView *, GUID *, __int64 *))(*((_QWORD *)this + 9) + 24LL))(
             (char *)this + 72,
             v11,
             &GUID_ee010e17_919a_4068_868b_675acf787303,
             &v13) >= 0 )
        (*(void (__fastcall **)(__int64, CWinRTApplicationView *))(*(_QWORD *)v13 + 88LL))(v13, v11);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v13);
    }
    Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v11);
  }
  v4 = 0;
LABEL_13:
  Microsoft::WRL::ComPtr<IObjectArray>::InternalRelease(&v12);
  return v4;
}
