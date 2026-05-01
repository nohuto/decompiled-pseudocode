/*
 * XREFs of _lambda_b97f6338922ac33e763b003ae07478e0_::operator() @ 0x1802C27AC
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_b97f6338922ac33e763b003ae07478e0___::Run @ 0x1802C3040 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_b97f6338922ac33e763b003ae07478e0___--Run.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180003FA4 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIObjectArray@@@WRL@Microsoft@@IEAAKXZ @ 0x18001D61C (-InternalRelease@-$ComPtr@UIObjectArray@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D044 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrentObject@Iterator@?$ObjectArrayAdapter@UITabletModePositionerManagerNotification@@@@AEAAXXZ @ 0x1802C2AAC (-GetCurrentObject@Iterator@-$ObjectArrayAdapter@UITabletModePositionerManagerNotification@@@@AEA.c)
 */

unsigned int __fastcall lambda_b97f6338922ac33e763b003ae07478e0_::operator()(__int64 a1)
{
  void *v1; // rbx
  int v3; // eax
  int *v4; // rcx
  __int64 v5; // rbx
  void *v7; // [rsp+20h] [rbp-40h] BYREF
  int v8; // [rsp+28h] [rbp-38h] BYREF
  int v9; // [rsp+30h] [rbp-30h] BYREF
  __int64 v10; // [rsp+38h] [rbp-28h] BYREF
  void **v11; // [rsp+40h] [rbp-20h]
  int v12; // [rsp+48h] [rbp-18h] BYREF
  __int64 v13; // [rsp+50h] [rbp-10h] BYREF
  void **v14; // [rsp+58h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+8h]
  __int64 v16; // [rsp+70h] [rbp+10h] BYREF

  v7 = *(void **)a1;
  v1 = v7;
  Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef((__int64 *)&v7);
  v8 = 0;
  v3 = (*(__int64 (__fastcall **)(void *, int *))(*(_QWORD *)v1 + 24LL))(v1, &v8);
  if ( v3 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      13LL,
      (__int64)"internal\\shell\\private\\inc\\ObjectArrayAdapter.h",
      (const char *)(unsigned int)v3);
  v9 = 0;
  v10 = 0LL;
  v11 = &v7;
  ObjectArrayAdapter<ITabletModePositionerManagerNotification>::Iterator::GetCurrentObject(&v9);
  v4 = &v12;
  v13 = 0LL;
  v12 = v8;
  v14 = &v7;
  while ( 1 )
  {
    ObjectArrayAdapter<ITabletModePositionerManagerNotification>::Iterator::GetCurrentObject(v4);
    if ( v9 == v12 && v11 == v14 )
      break;
    v5 = v10;
    v16 = v10;
    if ( v10 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
    (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v5 + 24LL))(
      v5,
      *(_QWORD *)(a1 + 16),
      *(_QWORD *)(a1 + 8));
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v16);
    ++v9;
    v4 = &v9;
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v13);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v10);
  return Microsoft::WRL::ComPtr<IObjectArray>::InternalRelease(&v7);
}
