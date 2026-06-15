/*
 * XREFs of ?RegisterForApplicationPolicyChanges@CSpatialAudioResourceManager@Sarm@@AEAAJK@Z @ 0x1800F3D50
 * Callers:
 *     ?AddStream@CSpatialAudioResourceManager@Sarm@@AEAAJPEAUIAudioStreamInfo@@KPEBU_GUID@@PEBUSPATIAL_STREAM_PROPERTIES@@PEAVCEndpointResourcePool@2@@Z @ 0x1800F2598 (-AddStream@CSpatialAudioResourceManager@Sarm@@AEAAJPEAUIAudioStreamInfo@@KPEBU_GUID@@PEBUSPATIAL.c)
 * Callees:
 *     ?InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z @ 0x18002DEE0 (-InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18004A07C (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005D83C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     ??$emplace_back@UAppPolicyChangeSubscription@CSpatialAudioResourceManager@Sarm@@@?$vector@UAppPolicyChangeSubscription@CSpatialAudioResourceManager@Sarm@@V?$allocator@UAppPolicyChangeSubscription@CSpatialAudioResourceManager@Sarm@@@std@@@std@@QEAAX$$QEAUAppPolicyChangeSubscription@CSpatialAudioResourceManager@Sarm@@@Z @ 0x1800F1B1C (--$emplace_back@UAppPolicyChangeSubscription@CSpatialAudioResourceManager@Sarm@@@-$vector@UAppPo.c)
 *     ?LogSubscribe@CSpatialAudioResourceManagerTraceLogger@@QEAAXK_NI@Z @ 0x1800F5F04 (-LogSubscribe@CSpatialAudioResourceManagerTraceLogger@@QEAAXK_NI@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Sarm::CSpatialAudioResourceManager::RegisterForApplicationPolicyChanges(
        Sarm::CSpatialAudioResourceManager *this,
        unsigned int a2)
{
  _DWORD *v4; // rax
  unsigned __int64 *v5; // r15
  _DWORD *i; // rbx
  unsigned int v7; // r9d
  Sarm::CSpatialAudioResourceManager *v8; // rbx
  const struct _GUID *v9; // rcx
  const struct _GUID *v10; // rcx
  __int64 v11; // rax
  Sarm::CSpatialAudioResourceManager *v12; // rcx
  int v13; // edi
  unsigned __int64 v14; // r9
  __int64 v15; // rdx
  int v16; // eax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  Sarm::CSpatialAudioResourceManager *v19; // [rsp+50h] [rbp+8h] BYREF
  __int64 v20; // [rsp+60h] [rbp+18h] BYREF

  v4 = (_DWORD *)*((_QWORD *)this + 40);
  v5 = (unsigned __int64 *)((char *)this + 312);
  for ( i = (_DWORD *)*((_QWORD *)this + 39); i != v4 && *i != a2; i += 2 )
    ;
  if ( i == v4 )
    v7 = 0;
  else
    v7 = i[1];
  CSpatialAudioResourceManagerTraceLogger::LogSubscribe(this, a2, i != v4, v7);
  if ( (_DWORD *)v5[1] != i )
  {
    ++i[1];
    return 0LL;
  }
  v8 = 0LL;
  v19 = 0LL;
  if ( InlineIsEqualGUID(&GUID_e60ae324_1652_4fcc_a7f2_36aab2a4f68b, &GUID_00000000_0000_0000_c000_000000000046) )
  {
    v8 = this;
    v11 = *(_QWORD *)this;
    v12 = this;
  }
  else
  {
    if ( InlineIsEqualGUID(v9, &GUID_2c794bb5_12d9_433a_b0a1_e3e5c6f54b6b) )
    {
      v8 = this;
    }
    else
    {
      if ( !InlineIsEqualGUID(v10, v10) )
      {
        v13 = -2147467262;
        goto LABEL_18;
      }
      v8 = (Sarm::CSpatialAudioResourceManager *)((char *)this + 8);
    }
    v11 = *(_QWORD *)v8;
    v12 = v8;
  }
  v19 = v8;
  (*(void (__fastcall **)(Sarm::CSpatialAudioResourceManager *))(v11 + 8))(v12);
  v13 = 0;
LABEL_18:
  if ( v13 < 0 )
  {
    v14 = (unsigned int)v13;
    v15 = 721LL;
    goto LABEL_22;
  }
  try
  {
    v20 = a2 | 0x100000000LL;
    std::vector<Sarm::CSpatialAudioResourceManager::AppPolicyChangeSubscription>::emplace_back<Sarm::CSpatialAudioResourceManager::AppPolicyChangeSubscription>(
      v5,
      &v20);
  }
  catch ( std::bad_alloc )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2D9,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\spatialaudioresourcemanager.cpp",
      (const char *)0x8007000ELL);
    v13 = -2147024882;
    goto LABEL_24;
  }
  v16 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, Sarm::CSpatialAudioResourceManager *))(**((_QWORD **)this + 42)
                                                                                        + 280LL))(
          *((_QWORD *)this + 42),
          a2,
          v8);
  v13 = v16;
  if ( v16 >= 0 )
  {
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v19);
    return 0LL;
  }
  *((_QWORD *)this + 40) -= 8LL;
  v14 = (unsigned int)v16;
  v15 = 736LL;
LABEL_22:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v15,
    (__int64)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\spatialaudioresourcemanager.cpp",
    (const char *)v14);
LABEL_24:
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v19);
  return (unsigned int)v13;
}
