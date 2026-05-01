/*
 * XREFs of ?IsViewInArray@TabletModePositionerOperation@@AEAA_NPEAUIApplicationView@@PEAUIObjectArray@@@Z @ 0x1802D86CC
 * Callers:
 *     ?CreateSanitizedLayout@TabletModePositionerOperation@@UEAAJPEAUIApplicationView@@0PEAUIObjectArray@@W4CreateSanitizedLayoutFlags@@@Z @ 0x1802D7EF0 (-CreateSanitizedLayout@TabletModePositionerOperation@@UEAAJPEAUIApplicationView@@0PEAUIObjectArr.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEBAXXZ @ 0x18000AE8C (-InternalAddRef@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x18000AF60 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIObjectArray@@@WRL@Microsoft@@IEAAKXZ @ 0x18001D61C (-InternalRelease@-$ComPtr@UIObjectArray@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x180082D58 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ??0?$ObjectArrayAdapter@UIObservableObjectArrayChangedBeginEnd@@@@QEAA@PEAUIObjectArray@@@Z @ 0x18014F470 (--0-$ObjectArrayAdapter@UIObservableObjectArrayChangedBeginEnd@@@@QEAA@PEAUIObjectArray@@@Z.c)
 *     ?GetCurrentObject@Iterator@?$ObjectArrayAdapter@UIApplicationView@@@@AEAAXXZ @ 0x18015033C (-GetCurrentObject@Iterator@-$ObjectArrayAdapter@UIApplicationView@@@@AEAAXXZ.c)
 */

char __fastcall TabletModePositionerOperation::IsViewInArray(
        struct IUnknown *this,
        struct IUnknown *a2,
        struct IObjectArray *a3)
{
  char v4; // di
  CWinRTApplicationView **v5; // rcx
  struct IUnknown *v6; // rbx
  void *v8; // [rsp+20h] [rbp-40h] BYREF
  int v9; // [rsp+28h] [rbp-38h]
  CWinRTApplicationView *v10; // [rsp+30h] [rbp-30h] BYREF
  struct IUnknown *v11; // [rsp+38h] [rbp-28h] BYREF
  void **v12; // [rsp+40h] [rbp-20h]
  int v13; // [rsp+48h] [rbp-18h] BYREF
  CWinRTApplicationView *v14; // [rsp+50h] [rbp-10h] BYREF
  void **v15; // [rsp+58h] [rbp-8h]
  struct IUnknown *v16; // [rsp+70h] [rbp+10h] BYREF

  v16 = this;
  ObjectArrayAdapter<IObservableObjectArrayChangedBeginEnd>::ObjectArrayAdapter<IObservableObjectArrayChangedBeginEnd>(
    (__int64)&v8,
    (__int64)a3);
  v4 = 0;
  v12 = &v8;
  LODWORD(v10) = 0;
  v11 = 0LL;
  ObjectArrayAdapter<IApplicationView>::Iterator::GetCurrentObject(&v10);
  v5 = (CWinRTApplicationView **)&v13;
  v13 = v9;
  v15 = &v8;
  v14 = 0LL;
  while ( 1 )
  {
    ObjectArrayAdapter<IApplicationView>::Iterator::GetCurrentObject(v5);
    if ( (_DWORD)v10 == v13 && v12 == v15 )
      break;
    v6 = v11;
    v16 = v11;
    Microsoft::WRL::ComPtr<IApplicationView>::InternalAddRef((__int64 *)&v16);
    LODWORD(v6) = SHIsSameObject(a2, v6);
    Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((CWinRTApplicationView **)&v16);
    if ( (_DWORD)v6 )
    {
      v4 = 1;
      break;
    }
    LODWORD(v10) = (_DWORD)v10 + 1;
    v5 = &v10;
  }
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v14);
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((CWinRTApplicationView **)&v11);
  Microsoft::WRL::ComPtr<IObjectArray>::InternalRelease(&v8);
  return v4;
}
