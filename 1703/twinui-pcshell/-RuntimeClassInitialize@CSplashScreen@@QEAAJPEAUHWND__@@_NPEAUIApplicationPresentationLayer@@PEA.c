/*
 * XREFs of ?RuntimeClassInitialize@CSplashScreen@@QEAAJPEAUHWND__@@_NPEAUIApplicationPresentationLayer@@PEAUIInspectable@@@Z @ 0x18006F218
 * Callers:
 *     ??$MakeAndInitialize@VCSplashScreen@@V1@AEAPEAUHWND__@@AEA_NPEAUIApplicationPresentationLayer@@PEAUIInspectable@@@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@VCSplashScreen@@@WRL@Microsoft@@@012@AEAPEAUHWND__@@AEA_N$$QEAPEAUIApplicationPresentationLayer@@$$QEAPEAUIInspectable@@@Z @ 0x18005BAA4 (--$MakeAndInitialize@VCSplashScreen@@V1@AEAPEAUHWND__@@AEA_NPEAUIApplicationPresentationLayer@@P.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CSplashScreen::RuntimeClassInitialize(
        CSplashScreen *this,
        HWND a2,
        char a3,
        struct IApplicationPresentationLayer *a4,
        struct IInspectable *a5)
{
  __int64 v8; // rcx
  __int64 v9; // rcx
  int v10; // eax
  __int64 v11; // rcx
  int v12; // ebx
  struct IInspectable *v13; // rcx
  struct IInspectable *v14; // rdx
  struct IInspectable *v15; // rbx
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v19; // [rsp+30h] [rbp+10h] BYREF

  *((_QWORD *)this + 17) = a2;
  if ( *((struct IApplicationPresentationLayer **)this + 14) != a4 )
  {
    if ( a4 )
      (*(void (__fastcall **)(struct IApplicationPresentationLayer *))(*(_QWORD *)a4 + 8LL))(a4);
    v8 = *((_QWORD *)this + 14);
    *((_QWORD *)this + 14) = a4;
    if ( v8 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  *((_BYTE *)this + 160) = a3;
  v9 = *((_QWORD *)this + 19);
  *((_QWORD *)this + 19) = 0LL;
  if ( v9 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  v19 = 0LL;
  v10 = ((__int64 (__fastcall *)(struct IInspectable *, GUID *, __int64 *))a5->lpVtbl->QueryInterface)(
          a5,
          &_uuidof__AUIWeakReferenceSource_Details_Platform__,
          &v19);
  v11 = v19;
  v12 = v10;
  if ( v10 < 0 )
    goto LABEL_9;
  a5 = 0LL;
  v12 = (*(__int64 (__fastcall **)(__int64, struct IInspectable **))(*(_QWORD *)v19 + 24LL))(v19, &a5);
  if ( v12 < 0 )
  {
    v13 = a5;
    if ( a5 )
    {
      a5 = 0LL;
      ((void (__fastcall *)(struct IInspectable *))v13->lpVtbl->Release)(v13);
    }
    v11 = v19;
LABEL_9:
    if ( v11 )
    {
      v19 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
    }
    return (unsigned int)v12;
  }
  v14 = a5;
  v15 = a5;
  if ( a5 )
  {
    ((void (__fastcall *)(struct IInspectable *))a5->lpVtbl->AddRef)(a5);
    v14 = a5;
  }
  v16 = *((_QWORD *)this + 19);
  *((_QWORD *)this + 19) = v15;
  if ( v16 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
    v14 = a5;
  }
  if ( v14 )
  {
    a5 = 0LL;
    ((void (__fastcall *)(struct IInspectable *))v14->lpVtbl->Release)(v14);
  }
  v17 = v19;
  if ( v19 )
  {
    v19 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
  }
  return 0;
}
