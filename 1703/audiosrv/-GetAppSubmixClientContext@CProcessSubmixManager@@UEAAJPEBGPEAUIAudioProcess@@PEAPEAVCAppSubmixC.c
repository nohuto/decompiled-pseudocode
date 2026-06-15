/*
 * XREFs of ?GetAppSubmixClientContext@CProcessSubmixManager@@UEAAJPEBGPEAUIAudioProcess@@PEAPEAVCAppSubmixClient@@@Z @ 0x1800AF180
 * Callers:
 *     <none>
 * Callees:
 *     ?Lock@CriticalSection@Wrappers@WRL@Microsoft@@QEAA?AVSyncLockCriticalSection@Details@234@XZ @ 0x18000C0E0 (-Lock@CriticalSection@Wrappers@WRL@Microsoft@@QEAA-AVSyncLockCriticalSection@Details@234@XZ.c)
 *     ??1?$com_ptr_t@UIAudioSessionInfo@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800393B0 (--1-$com_ptr_t@UIAudioSessionInfo@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x180039790 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180049338 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004B548 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007ECA8 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z @ 0x1800826D0 (--$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z.c)
 *     ?attach@?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@QEAAXPEAUIProcessSubmixProxy@@@Z @ 0x1800AD800 (-attach@-$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@QEAAXPEAUIProcessSub.c)
 *     ??$emplace_back@V?$unique_ptr@VCAppSubmixClient@@U?$default_delete@VCAppSubmixClient@@@std@@@std@@@?$vector@V?$unique_ptr@VCAppSubmixClient@@U?$default_delete@VCAppSubmixClient@@@std@@@std@@V?$allocator@V?$unique_ptr@VCAppSubmixClient@@U?$default_delete@VCAppSubmixClient@@@std@@@std@@@2@@std@@QEAAX$$QEAV?$unique_ptr@VCAppSubmixClient@@U?$default_delete@VCAppSubmixClient@@@std@@@1@@Z @ 0x1800AE760 (--$emplace_back@V-$unique_ptr@VCAppSubmixClient@@U-$default_delete@VCAppSubmixClient@@@std@@@std.c)
 *     ??$emplace_back@V?$unique_ptr@VCApplicationSubmix@@U?$default_delete@VCApplicationSubmix@@@std@@@std@@@?$vector@V?$unique_ptr@VCApplicationSubmix@@U?$default_delete@VCApplicationSubmix@@@std@@@std@@V?$allocator@V?$unique_ptr@VCApplicationSubmix@@U?$default_delete@VCApplicationSubmix@@@std@@@std@@@2@@std@@QEAAX$$QEAV?$unique_ptr@VCApplicationSubmix@@U?$default_delete@VCApplicationSubmix@@@std@@@1@@Z @ 0x1800AE9E0 (--$emplace_back@V-$unique_ptr@VCApplicationSubmix@@U-$default_delete@VCApplicationSubmix@@@std@@.c)
 *     std::find_if_std::_Vector_const_iterator_std::_Vector_val_std::_Simple_types_std::unique_ptr_CAppSubmixClient_std::default_delete_CAppSubmixClient___________lambda_bed0d40b1d996ef4e9b02a65721dba6d___ @ 0x1800AEB20 (std--find_if_std--_Vector_const_iterator_std--_Vector_val_std--_Simple_types_std--unique_ptr_CAp.c)
 *     ??$make_unique@VCAppSubmixClient@@AEAPEAUIAudioProcess@@PEAVCApplicationSubmix@@@std@@YA?AV?$unique_ptr@VCAppSubmixClient@@U?$default_delete@VCAppSubmixClient@@@std@@@0@AEAPEAUIAudioProcess@@$$QEAPEAVCApplicationSubmix@@@Z @ 0x1800AEC2C (--$make_unique@VCAppSubmixClient@@AEAPEAUIAudioProcess@@PEAVCApplicationSubmix@@@std@@YA-AV-$uni.c)
 *     ??$make_unique@VCApplicationSubmix@@$$V@std@@YA?AV?$unique_ptr@VCApplicationSubmix@@U?$default_delete@VCApplicationSubmix@@@std@@@0@XZ @ 0x1800AECE8 (--$make_unique@VCApplicationSubmix@@$$V@std@@YA-AV-$unique_ptr@VCApplicationSubmix@@U-$default_d.c)
 *     ??1CApplicationSubmix@@QEAA@XZ @ 0x1800AEE30 (--1CApplicationSubmix@@QEAA@XZ.c)
 *     ?erase@?$vector@V?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@2@0@Z @ 0x1800AF990 (-erase@-$vector@V-$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@V-$allocato.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CProcessSubmixManager::GetAppSubmixClientContext(
        CProcessSubmixManager *this,
        const unsigned __int16 *a2,
        struct IAudioProcess *a3,
        struct CAppSubmixClient **a4)
{
  LPCWCH **v6; // r14
  LPCWCH *v7; // rdi
  LPCWCH **v8; // rbx
  CApplicationSubmix *v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // rcx
  size_t v12; // rsi
  int v13; // eax
  unsigned int v14; // esi
  const char *v15; // r9
  __int64 result; // rax
  unsigned int v17; // eax
  int v18; // eax
  unsigned int v19; // esi
  __int64 *v20; // r15
  __int64 *i; // rsi
  __int64 *j; // r14
  __int64 *v23; // rcx
  __int64 v24; // rdx
  struct CAppSubmixClient *v25; // rsi
  void *v26; // rbx
  CApplicationSubmix *v27; // rbx
  __int64 v28; // rdx
  CApplicationSubmix *v29; // rdi
  __int64 bIgnoreCase; // [rsp+20h] [rbp-68h]
  void *v31; // [rsp+30h] [rbp-58h] BYREF
  CApplicationSubmix *v32; // [rsp+38h] [rbp-50h] BYREF
  LPCWCH v33[9]; // [rsp+40h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+90h] [rbp+8h] BYREF
  const unsigned __int16 *v36; // [rsp+98h] [rbp+10h]
  struct IAudioProcess *v37; // [rsp+A0h] [rbp+18h] BYREF

  v37 = a3;
  v36 = a2;
  v33[1] = (LPCWCH)-2LL;
  try
  {
    Microsoft::WRL::Wrappers::CriticalSection::Lock((__int64)this + 16, (__int64)&lpCriticalSection);
    v6 = (LPCWCH **)*((_QWORD *)this + 8);
    v8 = (LPCWCH **)*((_QWORD *)this + 7);
    v12 = -1LL;
    while ( v8 != v6 )
    {
      if ( CompareStringOrdinal(**v8, -1, v36, -1, 1) == 2 )
      {
        v7 = *v8;
        if ( *((_DWORD *)v7 + 2) == (*(unsigned int (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)v37 + 48LL))(v37) )
          break;
      }
      ++v8;
    }
    if ( v8 == *((LPCWCH ***)this + 8) )
    {
      std::make_unique<CApplicationSubmix,>(&v32);
      v9 = v32;
      wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,0,std::nullptr_t>>::reset(
        (void **)v32,
        0LL);
      do
        ++v12;
      while ( v36[v12] );
      v13 = _AllocStringWorker<CTCoAllocPolicy>(v11, v10, v36, v12, bIgnoreCase, (void **)v9);
      v14 = v13;
      if ( v13 < 0 )
      {
        wil::details::in1diag3::Return_Hr_NoOriginate(
          retaddr,
          (void *)0x117,
          (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\applicationsubmix.cpp",
          (const char *)(unsigned int)v13);
        if ( v9 )
        {
          CApplicationSubmix::~CApplicationSubmix(v9);
          operator delete(v9, (const struct std::nothrow_t *)0x40);
        }
        if ( lpCriticalSection )
          LeaveCriticalSection(lpCriticalSection);
        return v14;
      }
      v17 = (*(__int64 (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)v37 + 48LL))(v37);
      *((_DWORD *)v9 + 2) = v17;
      v18 = (*(__int64 (__fastcall **)(CDeviceGraphStore *, const unsigned __int16 *, _QWORD, __int64))(*(_QWORD *)g_DeviceGraphStore + 32LL))(
              g_DeviceGraphStore,
              v36,
              v17,
              (__int64)v9 + 16);
      v19 = v18;
      if ( v18 < 0 )
      {
        wil::details::in1diag3::Return_Hr_NoOriginate(
          retaddr,
          (void *)0x119,
          (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\applicationsubmix.cpp",
          (const char *)(unsigned int)v18);
        CApplicationSubmix::~CApplicationSubmix(v9);
        operator delete(v9, (const struct std::nothrow_t *)0x40);
        if ( lpCriticalSection )
          LeaveCriticalSection(lpCriticalSection);
        return v19;
      }
      v20 = (__int64 *)*((_QWORD *)v9 + 3);
      for ( i = (__int64 *)*((_QWORD *)v9 + 2); i != v20; ++i )
      {
        if ( !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)*i + 104LL))(*i) )
        {
          if ( i != v20 )
          {
            for ( j = i + 1; j != v20; ++j )
            {
              if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)*j + 104LL))(*j) )
              {
                v23 = i++;
                v24 = *j;
                *j = 0LL;
                wil::com_ptr_t<IProcessSubmixProxy,wil::err_returncode_policy>::attach(v23, v24);
              }
            }
          }
          break;
        }
      }
      std::vector<wil::com_ptr_t<IProcessSubmixProxy,wil::err_returncode_policy>>::erase(
        (char *)v9 + 16,
        v33,
        i,
        *((_QWORD *)v9 + 3));
      v33[0] = (LPCWCH)v9;
      std::make_unique<CAppSubmixClient,IAudioProcess * &,CApplicationSubmix *>(&v31, (__int64 *)&v37, (__int64 *)v33);
      v25 = (struct CAppSubmixClient *)v31;
      std::vector<std::unique_ptr<CAppSubmixClient>>::emplace_back<std::unique_ptr<CAppSubmixClient>>(
        (unsigned __int64 *)v9 + 5,
        (__int64 *)&v31);
      std::vector<std::unique_ptr<CApplicationSubmix>>::emplace_back<std::unique_ptr<CApplicationSubmix>>(
        (unsigned __int64 *)this + 7,
        (__int64 *)&v32);
      *a4 = v25;
      v26 = v31;
      if ( v31 )
      {
        wil::com_ptr_t<IAudioSessionInfo,wil::err_returncode_policy>::~com_ptr_t<IAudioSessionInfo,wil::err_returncode_policy>((__int64 *)v31);
        operator delete(v26, (const struct std::nothrow_t *)0x10);
      }
      v27 = v32;
      if ( !v32 )
        goto LABEL_40;
      CApplicationSubmix::~CApplicationSubmix(v32);
      v28 = 64LL;
      goto LABEL_39;
    }
    std::find_if_std::_Vector_const_iterator_std::_Vector_val_std::_Simple_types_std::unique_ptr_CAppSubmixClient_std::default_delete_CAppSubmixClient___________lambda_bed0d40b1d996ef4e9b02a65721dba6d___(
      v33,
      (_QWORD **)(*v8)[5],
      (_QWORD **)(*v8)[6],
      (__int64 *)&v37);
    if ( v33[0] == (*v8)[6] )
    {
      v33[0] = (LPCWCH)*v8;
      std::make_unique<CAppSubmixClient,IAudioProcess * &,CApplicationSubmix *>(&v32, (__int64 *)&v37, (__int64 *)v33);
      v29 = v32;
      std::vector<std::unique_ptr<CAppSubmixClient>>::emplace_back<std::unique_ptr<CAppSubmixClient>>(
        (unsigned __int64 *)*v8 + 5,
        (__int64 *)&v32);
      *a4 = v29;
      v27 = v32;
      if ( !v32 )
      {
LABEL_40:
        if ( lpCriticalSection )
          LeaveCriticalSection(lpCriticalSection);
        return 0LL;
      }
      wil::com_ptr_t<IAudioSessionInfo,wil::err_returncode_policy>::~com_ptr_t<IAudioSessionInfo,wil::err_returncode_policy>((__int64 *)v32);
      v28 = 16LL;
LABEL_39:
      operator delete(v27, (const struct std::nothrow_t *)v28);
      goto LABEL_40;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x139,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\applicationsubmix.cpp",
      (const char *)0x8000FFFFLL);
    if ( lpCriticalSection )
      LeaveCriticalSection(lpCriticalSection);
    result = 2147549183LL;
  }
  catch ( ... )
  {
    LODWORD(lpCriticalSection) = wil::details::in1diag3::Return_CaughtException(
                                   retaddr,
                                   (void *)0x145,
                                   (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\applicationsubmix.cpp",
                                   v15);
    return (unsigned int)lpCriticalSection;
  }
  return result;
}
