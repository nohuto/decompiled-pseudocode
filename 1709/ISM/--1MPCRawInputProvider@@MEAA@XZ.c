/*
 * XREFs of ??1MPCRawInputProvider@@MEAA@XZ @ 0x18006697C
 * Callers:
 *     ??_GMPCRawInputProvider@@MEAAPEAXI@Z @ 0x180066C20 (--_GMPCRawInputProvider@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003368 (-_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003388 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800077C0 (-_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetInstance@MPC3DStateHelper@@SAPEAV1@XZ @ 0x1800078D8 (-GetInstance@MPC3DStateHelper@@SAPEAV1@XZ.c)
 *     ?erase@?$_Tree@V?$_Tmap_traits@IV?$function@$$A6AX_N@Z@std@@U?$less@I@2@V?$allocator@U?$pair@$$CBIV?$function@$$A6AX_N@Z@std@@@std@@@2@$0A@@std@@@std@@QEAA_KAEBI@Z @ 0x180007EB0 (-erase@-$_Tree@V-$_Tmap_traits@IV-$function@$$A6AX_N@Z@std@@U-$less@I@2@V-$allocator@U-$pair@$$C.c)
 *     ??1?$vector@UInputInfo@@V?$allocator@UInputInfo@@@std@@@std@@QEAA@XZ @ 0x180067378 (--1-$vector@UInputInfo@@V-$allocator@UInputInfo@@@std@@@std@@QEAA@XZ.c)
 *     ??_GSpeechRuntimeListener@@QEAAPEAXI@Z @ 0x180067530 (--_GSpeechRuntimeListener@@QEAAPEAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=10
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
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  unsigned int v21; // [rsp+58h] [rbp+10h] BYREF

  *(_QWORD *)this = &MPCRawInputProvider::`vftable';
  v21 = *((_DWORD *)this + 688);
  MPC3DStateHelper::GetInstance();
  v3 = v2;
  AcquireSRWLockExclusive(v2);
  if ( std::_Tree<std::_Tmap_traits<unsigned int,std::function<void (bool)>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,std::function<void (bool)>>>,0>>::erase(
         (__int64 *)&v3[4],
         &v21) != 1 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x126,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpc3dstatehelper.cpp",
      v5);
    __debugbreak();
  }
  if ( v3 )
    ReleaseSRWLockExclusive(v3);
  v6 = (volatile signed __int32 *)*((_QWORD *)this + 331);
  if ( v6 )
  {
    *((_QWORD *)this + 331) = 0LL;
    if ( _InterlockedExchangeAdd(v6 + 3, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v6 + 32LL))(v6, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
    }
  }
  v7 = (SpeechRuntimeListener *)*((_QWORD *)this + 332);
  *((_QWORD *)this + 332) = 0LL;
  if ( v7 )
    SpeechRuntimeListener::`scalar deleting destructor'(v7, v4);
  if ( *((_QWORD *)this + 334) )
  {
    v8 = *((_QWORD *)this + 333);
    if ( v8 )
    {
      if ( *((_BYTE *)this + 2680) && (*(int (__fastcall **)(__int64))(*(_QWORD *)v8 + 280LL))(v8) >= 0 )
        *((_BYTE *)this + 2680) = 0;
    }
  }
  v9 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 333) + 232LL))(*((_QWORD *)this + 333));
  if ( v9 < 0 )
  {
    wil::details::in1diag3::_FailFast_Hr(
      retaddr,
      (void *)0x4E,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\mpc\\lib\\mpcrawinputprovider.cpp",
      (const char *)(unsigned int)v9);
    __debugbreak();
  }
  v10 = *((_QWORD *)this + 333);
  if ( v10 )
  {
    *((_QWORD *)this + 333) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  }
  v11 = *((_QWORD *)this + 2);
  if ( v11 && *((_BYTE *)this + 2681) )
    (*(void (__fastcall **)(__int64, char *))(*(_QWORD *)v11 + 56LL))(v11, (char *)this + 24);
  v12 = *((_QWORD *)this + 2);
  if ( v12 )
  {
    *((_QWORD *)this + 2) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 2712));
  std::vector<InputInfo>::~vector<InputInfo>((char *)this + 2688);
  v14 = (void *)*((_QWORD *)this + 334);
  if ( v14 && !CloseHandle(v14) )
    wil::details::in1diag3::_FailFast_GetLastError(
      retaddr,
      (void *)0x878,
      (__int64)"internal\\sdk\\inc\\wil\\resource.h",
      v15);
  v16 = *((_QWORD *)this + 333);
  if ( v16 )
  {
    *((_QWORD *)this + 333) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
  }
  v17 = (SpeechRuntimeListener *)*((_QWORD *)this + 332);
  if ( v17 )
    SpeechRuntimeListener::`scalar deleting destructor'(v17, v13);
  v18 = (volatile signed __int32 *)*((_QWORD *)this + 331);
  if ( v18 )
  {
    *((_QWORD *)this + 331) = 0LL;
    if ( !_InterlockedDecrement(v18 + 3) )
    {
      (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v18 + 32LL))(v18, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
    }
  }
  v19 = *((_QWORD *)this + 2);
  if ( v19 )
  {
    *((_QWORD *)this + 2) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
  }
  *((_DWORD *)this + 3) = -1073741823;
}
