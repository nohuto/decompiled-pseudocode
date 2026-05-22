/*
 * XREFs of ??1MPCRawInputProvider@@MEAA@XZ @ 0x18005DCF4
 * Callers:
 *     ??_GMPCRawInputProvider@@MEAAPEAXI@Z @ 0x18005DF60 (--_GMPCRawInputProvider@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800030F8 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003128 (-_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003148 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?GetInstance@MPC3DStateHelper@@SAPEAV1@XZ @ 0x18000766C (-GetInstance@MPC3DStateHelper@@SAPEAV1@XZ.c)
 *     ?erase@?$_Tree@V?$_Tmap_traits@IV?$function@$$A6AX_N@Z@std@@U?$less@I@2@V?$allocator@U?$pair@$$CBIV?$function@$$A6AX_N@Z@std@@@std@@@2@$0A@@std@@@std@@QEAA_KAEBI@Z @ 0x18000809C (-erase@-$_Tree@V-$_Tmap_traits@IV-$function@$$A6AX_N@Z@std@@U-$less@I@2@V-$allocator@U-$pair@$$C.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U?$ITypedEventHandler@PEAVSpatialGestureRecognizer@Spatial@Input@UI@Windows@@PEAVSpatialNavigationUpdatedEventArgs@2345@@Foundation@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18002A0E0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U-$ITypedEventHan.c)
 *     ??1?$vector@ULegacyInputInfo@@V?$allocator@ULegacyInputInfo@@@std@@@std@@QEAA@XZ @ 0x18005E8F0 (--1-$vector@ULegacyInputInfo@@V-$allocator@ULegacyInputInfo@@@std@@@std@@QEAA@XZ.c)
 *     ??_GSpeechRuntimeListener@@QEAAPEAXI@Z @ 0x18005EA78 (--_GSpeechRuntimeListener@@QEAAPEAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

void __fastcall MPCRawInputProvider::~MPCRawInputProvider(MPCRawInputProvider *this)
{
  RTL_SRWLOCK *v2; // rax
  RTL_SRWLOCK *v3; // rdi
  unsigned int v4; // edx
  const char *v5; // r9
  volatile signed __int32 *v6; // rcx
  SpeechRuntimeListener *v7; // rcx
  __int64 v8; // rcx
  int v9; // eax
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rcx
  unsigned int v13; // edx
  void *v14; // rcx
  const char *v15; // r9
  __int64 v16; // rcx
  SpeechRuntimeListener *v17; // rcx
  volatile signed __int32 *v18; // rcx
  __int64 v19; // rcx
  unsigned int v20; // edx
  MPCRawInputProvider *v21; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  unsigned int v23; // [rsp+40h] [rbp+8h] BYREF

  *(_QWORD *)this = &MPCRawInputProvider::`vftable';
  v23 = *((_DWORD *)this + 524);
  MPC3DStateHelper::GetInstance();
  v3 = v2;
  AcquireSRWLockExclusive(v2);
  if ( std::_Tree<std::_Tmap_traits<unsigned int,std::function<void (bool)>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,std::function<void (bool)>>>,0>>::erase(
         (__int64 ***)&v3[4],
         &v23) != 1 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x127,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpc3dstatehelper.cpp",
      v5);
LABEL_33:
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x51,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\mpc\\lib\\mpcrawinputprovider.cpp",
      (const char *)(unsigned int)v9);
LABEL_34:
    wil::details::in1diag3::_FailFast_GetLastError(
      retaddr,
      (void *)0x879,
      (__int64)"internal\\sdk\\inc\\wil\\resource.h",
      v15);
    MPCRawInputProvider::`scalar deleting destructor'(v21, v20);
    return;
  }
  if ( v3 )
    ReleaseSRWLockExclusive(v3);
  v6 = (volatile signed __int32 *)*((_QWORD *)this + 249);
  if ( v6 )
  {
    *((_QWORD *)this + 249) = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Foundation::ITypedEventHandler<Windows::UI::Input::Spatial::SpatialGestureRecognizer *,Windows::UI::Input::Spatial::SpatialNavigationUpdatedEventArgs *>>::Release(v6);
  }
  v7 = (SpeechRuntimeListener *)*((_QWORD *)this + 250);
  *((_QWORD *)this + 250) = 0LL;
  if ( v7 )
    SpeechRuntimeListener::`scalar deleting destructor'(v7, v4);
  if ( *((_QWORD *)this + 252) )
  {
    v8 = *((_QWORD *)this + 251);
    if ( v8 )
    {
      if ( *((_BYTE *)this + 2024) && (*(int (__fastcall **)(__int64))(*(_QWORD *)v8 + 280LL))(v8) >= 0 )
        *((_BYTE *)this + 2024) = 0;
    }
  }
  v9 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 251) + 232LL))(*((_QWORD *)this + 251));
  if ( v9 < 0 )
    goto LABEL_33;
  v10 = *((_QWORD *)this + 251);
  if ( v10 )
  {
    *((_QWORD *)this + 251) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  }
  v11 = *((_QWORD *)this + 2);
  if ( v11 && *((_BYTE *)this + 2025) )
  {
    (*(void (__fastcall **)(__int64, char *))(*(_QWORD *)v11 + 56LL))(v11, (char *)this + 24);
    (*(void (__fastcall **)(_QWORD, char *))(**((_QWORD **)this + 2) + 56LL))(
      *((_QWORD *)this + 2),
      (char *)this + 1008);
  }
  v12 = *((_QWORD *)this + 2);
  if ( v12 )
  {
    *((_QWORD *)this + 2) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 2056));
  std::vector<LegacyInputInfo>::~vector<LegacyInputInfo>((char *)this + 2032);
  v14 = (void *)*((_QWORD *)this + 252);
  if ( v14 && !CloseHandle(v14) )
    goto LABEL_34;
  v16 = *((_QWORD *)this + 251);
  if ( v16 )
  {
    *((_QWORD *)this + 251) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
  }
  v17 = (SpeechRuntimeListener *)*((_QWORD *)this + 250);
  if ( v17 )
    SpeechRuntimeListener::`scalar deleting destructor'(v17, v13);
  v18 = (volatile signed __int32 *)*((_QWORD *)this + 249);
  if ( v18 )
  {
    *((_QWORD *)this + 249) = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Foundation::ITypedEventHandler<Windows::UI::Input::Spatial::SpatialGestureRecognizer *,Windows::UI::Input::Spatial::SpatialNavigationUpdatedEventArgs *>>::Release(v18);
  }
  v19 = *((_QWORD *)this + 2);
  if ( v19 )
  {
    *((_QWORD *)this + 2) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
  }
  *((_DWORD *)this + 3) = -1073741823;
}
