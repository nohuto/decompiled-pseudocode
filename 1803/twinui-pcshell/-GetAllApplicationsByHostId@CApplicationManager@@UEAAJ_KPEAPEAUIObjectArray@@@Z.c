/*
 * XREFs of ?GetAllApplicationsByHostId@CApplicationManager@@UEAAJ_KPEAPEAUIObjectArray@@@Z @ 0x180044950
 * Callers:
 *     ?_GetMostRecentlyUsedViewForAppInstance@CAppViewManager@@AEAAJ_KPEAUIImmersiveMonitor@@PEAPEAUIImmersiveApplicationInternal@@@Z @ 0x180009DA8 (-_GetMostRecentlyUsedViewForAppInstance@CAppViewManager@@AEAAJ_KPEAUIImmersiveMonitor@@PEAPEAUII.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetImmersiveApplicationArraySafe@CApplicationManager@@UEAAJPEAPEAUIImmersiveApplicationArray@@@Z @ 0x1800432E0 (-GetImmersiveApplicationArraySafe@CApplicationManager@@UEAAJPEAPEAUIImmersiveApplicationArray@@@.c)
 *     ?InternalRelease@?$ComPtr@UIImmersiveApplicationArrayPrivate@@@WRL@Microsoft@@IEAAKXZ @ 0x180080934 (-InternalRelease@-$ComPtr@UIImmersiveApplicationArrayPrivate@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U?$ChainInterfaces@UIImmersiveApplicationArrayPrivate@@UIImmersiveApplicationArray@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@UIImmersiveApplicationArray2@@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800809F0 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U-$ChainIn.c)
 *     ?GetAllApplicationsByHostId@CImmersiveAppArray@@UEAAJ_KPEAPEAUIObjectArray@@@Z @ 0x180080B40 (-GetAllApplicationsByHostId@CImmersiveAppArray@@UEAAJ_KPEAPEAUIObjectArray@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CApplicationManager::GetAllApplicationsByHostId(
        CApplicationManager *this,
        unsigned __int64 a2,
        struct IObjectArray **a3)
{
  int ImmersiveApplicationArraySafe; // eax
  unsigned int v7; // ebx
  __int64 (__fastcall *v8)(struct IImmersiveApplicationArray *, GUID *, CImmersiveAppArray **); // rax
  int v9; // eax
  int (*v10)(CImmersiveAppArray *__hidden, unsigned __int64, struct IObjectArray **); // rax
  int AllApplicationsByHostId; // eax
  __int64 v13; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  CImmersiveAppArray *v15; // [rsp+40h] [rbp+8h] BYREF
  struct IImmersiveApplicationArray *v16; // [rsp+50h] [rbp+18h] BYREF

  AcquireSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  *a3 = 0LL;
  v16 = 0LL;
  ImmersiveApplicationArraySafe = CApplicationManager::GetImmersiveApplicationArraySafe(
                                    (CApplicationManager *)((char *)this + 72),
                                    &v16);
  v7 = ImmersiveApplicationArraySafe;
  if ( ImmersiveApplicationArraySafe < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xFC6,
      (unsigned int)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
      (const char *)(unsigned int)ImmersiveApplicationArraySafe,
      -2);
    goto LABEL_9;
  }
  v15 = 0LL;
  v8 = **(__int64 (__fastcall ***)(struct IImmersiveApplicationArray *, GUID *, CImmersiveAppArray **))v16;
  if ( (char *)v8 == (char *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Microsoft::WRL::ChainInterfaces<IImmersiveApplicationArrayPrivate,IImmersiveApplicationArray,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,IImmersiveApplicationArray2>::QueryInterface )
    v9 = Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Microsoft::WRL::ChainInterfaces<IImmersiveApplicationArrayPrivate,IImmersiveApplicationArray,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,IImmersiveApplicationArray2>::QueryInterface(
           v16,
           &GUID_2e18eac3_3253_4bf0_be9f_38feb4360c34,
           &v15);
  else
    v9 = v8(v16, &GUID_2e18eac3_3253_4bf0_be9f_38feb4360c34, &v15);
  v7 = v9;
  if ( v9 < 0 )
  {
    v13 = 4040LL;
LABEL_14:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v13,
      (unsigned int)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
      (const char *)v7,
      -2);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v15);
    goto LABEL_9;
  }
  v10 = *(int (**)(CImmersiveAppArray *__hidden, unsigned __int64, struct IObjectArray **))(*(_QWORD *)v15 + 40LL);
  if ( v10 == CImmersiveAppArray::GetAllApplicationsByHostId )
    AllApplicationsByHostId = CImmersiveAppArray::GetAllApplicationsByHostId(v15, a2, a3);
  else
    AllApplicationsByHostId = ((__int64 (__fastcall *)(CImmersiveAppArray *, unsigned __int64, struct IObjectArray **))v10)(
                                v15,
                                a2,
                                a3);
  v7 = AllApplicationsByHostId;
  if ( AllApplicationsByHostId < 0 )
  {
    v13 = 4041LL;
    goto LABEL_14;
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v15);
  v7 = 0;
LABEL_9:
  Microsoft::WRL::ComPtr<IImmersiveApplicationArrayPrivate>::InternalRelease(&v16);
  ReleaseSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  return v7;
}
