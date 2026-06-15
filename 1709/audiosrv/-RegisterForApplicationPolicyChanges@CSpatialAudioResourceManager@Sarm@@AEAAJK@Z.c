/*
 * XREFs of ?RegisterForApplicationPolicyChanges@CSpatialAudioResourceManager@Sarm@@AEAAJK@Z @ 0x1800C1540
 * Callers:
 *     ?AddStream@CSpatialAudioResourceManager@Sarm@@AEAAJPEAUIAudioStreamInfo@@KPEBU_GUID@@PEBUSPATIAL_STREAM_PROPERTIES@@PEAVCEndpointResourcePool@2@@Z @ 0x1800BFD4C (-AddStream@CSpatialAudioResourceManager@Sarm@@AEAAJPEAUIAudioStreamInfo@@KPEBU_GUID@@PEBUSPATIAL.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180007BA0 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z @ 0x18000D0D4 (-InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800353A0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005E7F8 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$emplace_back@UAppPolicyChangeSubscription@CSpatialAudioResourceManager@Sarm@@@?$vector@UAppPolicyChangeSubscription@CSpatialAudioResourceManager@Sarm@@V?$allocator@UAppPolicyChangeSubscription@CSpatialAudioResourceManager@Sarm@@@std@@@std@@QEAAX$$QEAUAppPolicyChangeSubscription@CSpatialAudioResourceManager@Sarm@@@Z @ 0x1800BEF24 (--$emplace_back@UAppPolicyChangeSubscription@CSpatialAudioResourceManager@Sarm@@@-$vector@UAppPo.c)
 *     ?LogSubscribe@CSpatialAudioResourceManagerTraceLogger@@QEAAXK_NI@Z @ 0x1800C3A84 (-LogSubscribe@CSpatialAudioResourceManagerTraceLogger@@QEAAXK_NI@Z.c)
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
  int v11; // edi
  int v12; // eax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  Sarm::CSpatialAudioResourceManager *v15; // [rsp+50h] [rbp+8h] BYREF
  __int64 v16; // [rsp+60h] [rbp+18h] BYREF

  v4 = (_DWORD *)*((_QWORD *)this + 40);
  v5 = (unsigned __int64 *)((char *)this + 312);
  for ( i = (_DWORD *)*((_QWORD *)this + 39); i != v4 && *i != a2; i += 2 )
    ;
  if ( i == v4 )
    v7 = 0;
  else
    v7 = i[1];
  CSpatialAudioResourceManagerTraceLogger::LogSubscribe(this, a2, i != v4, v7);
  if ( *((_DWORD **)this + 40) == i )
  {
    v8 = 0LL;
    v15 = 0LL;
    if ( InlineIsEqualGUID(&GUID_e60ae324_1652_4fcc_a7f2_36aab2a4f68b, &GUID_00000000_0000_0000_c000_000000000046) )
    {
      v8 = this;
      v15 = this;
      (*(void (__fastcall **)(Sarm::CSpatialAudioResourceManager *))(*(_QWORD *)this + 8LL))(this);
    }
    else
    {
      if ( InlineIsEqualGUID(v9, &GUID_7f299b05_3e79_4c05_b9ac_9418573ffd42) )
      {
        v8 = this;
        v15 = this;
      }
      else
      {
        if ( InlineIsEqualGUID(v10, v10) )
        {
          v8 = (Sarm::CSpatialAudioResourceManager *)((char *)this + 8);
          v15 = (Sarm::CSpatialAudioResourceManager *)((char *)this + 8);
          v11 = 0;
        }
        else
        {
          v11 = -2147467262;
        }
        if ( v11 < 0 )
        {
          wil::details::in1diag3::Return_Hr_NoOriginate(
            retaddr,
            (void *)0x2CE,
            (__int64)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\spatialaudioresourcemanager.cpp",
            (const char *)(unsigned int)v11);
LABEL_22:
          wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v15);
          return (unsigned int)v11;
        }
      }
      (*(void (__fastcall **)(Sarm::CSpatialAudioResourceManager *))(*(_QWORD *)v8 + 8LL))(v8);
    }
    try
    {
      v16 = a2 | 0x100000000LL;
      std::vector<Sarm::CSpatialAudioResourceManager::AppPolicyChangeSubscription>::emplace_back<Sarm::CSpatialAudioResourceManager::AppPolicyChangeSubscription>(
        v5,
        &v16);
    }
    catch ( std::bad_alloc )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x2D6,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\spatialaudioresourcemanager.cpp",
        (const char *)0x8007000ELL);
      v11 = -2147024882;
      goto LABEL_22;
    }
    v12 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, Sarm::CSpatialAudioResourceManager *))(**((_QWORD **)this + 42)
                                                                                          + 296LL))(
            *((_QWORD *)this + 42),
            a2,
            v8);
    v11 = v12;
    if ( v12 < 0 )
    {
      *((_QWORD *)this + 40) -= 8LL;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x2DD,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\spatialaudioresourcemanager.cpp",
        (const char *)(unsigned int)v12);
      goto LABEL_22;
    }
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v15);
  }
  else
  {
    ++i[1];
  }
  return 0LL;
}
