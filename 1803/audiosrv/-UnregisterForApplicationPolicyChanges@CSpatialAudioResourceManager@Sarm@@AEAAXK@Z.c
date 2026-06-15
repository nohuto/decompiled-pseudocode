/*
 * XREFs of ?UnregisterForApplicationPolicyChanges@CSpatialAudioResourceManager@Sarm@@AEAAXK@Z @ 0x1800F4EA8
 * Callers:
 *     ?RemoveStream@CSpatialAudioResourceManager@Sarm@@AEAAXPEAVCStreamResource@2@@Z @ 0x1800F447C (-RemoveStream@CSpatialAudioResourceManager@Sarm@@AEAAXPEAVCStreamResource@2@@Z.c)
 * Callees:
 *     ?InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z @ 0x18002DEE0 (-InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18004A07C (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800A66F8 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?LogUnsubscribe@CSpatialAudioResourceManagerTraceLogger@@QEAAXK_NI@Z @ 0x1800F61D8 (-LogUnsubscribe@CSpatialAudioResourceManagerTraceLogger@@QEAAXK_NI@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Sarm::CSpatialAudioResourceManager::UnregisterForApplicationPolicyChanges(
        Sarm::CSpatialAudioResourceManager *this,
        unsigned int a2)
{
  _DWORD *v4; // rax
  _DWORD *i; // rbx
  unsigned int v6; // r9d
  Sarm::CSpatialAudioResourceManager *v8; // rbx
  const struct _GUID *v9; // rcx
  const struct _GUID *v10; // rcx
  __int64 v11; // rax
  Sarm::CSpatialAudioResourceManager *v12; // rcx
  __int64 v13; // r9
  wil::details::in1diag3 *v14; // rcx
  __int64 v15; // rdx
  int v16; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  Sarm::CSpatialAudioResourceManager *v18; // [rsp+40h] [rbp+8h] BYREF

  v4 = (_DWORD *)*((_QWORD *)this + 40);
  for ( i = (_DWORD *)*((_QWORD *)this + 39); i != v4 && *i != a2; i += 2 )
    ;
  if ( i == v4 )
    v6 = 0;
  else
    v6 = i[1];
  CSpatialAudioResourceManagerTraceLogger::LogUnsubscribe(this, a2, i != v4, v6);
  if ( i != *((_DWORD **)this + 40) && i[1]-- == 1 )
  {
    memmove(i, i + 2, *((_QWORD *)this + 40) - (_QWORD)(i + 2));
    *((_QWORD *)this + 40) -= 8LL;
    v8 = 0LL;
    v18 = 0LL;
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
          v13 = 2147500034LL;
          goto LABEL_19;
        }
        v8 = (Sarm::CSpatialAudioResourceManager *)((char *)this + 8);
      }
      v11 = *(_QWORD *)v8;
      v12 = v8;
    }
    v18 = v8;
    (*(void (__fastcall **)(Sarm::CSpatialAudioResourceManager *))(v11 + 8))(v12);
    v13 = 0LL;
LABEL_19:
    v14 = retaddr;
    if ( (int)v13 >= 0 )
    {
      v16 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, Sarm::CSpatialAudioResourceManager *))(**((_QWORD **)this + 42)
                                                                                            + 288LL))(
              *((_QWORD *)this + 42),
              a2,
              v8);
      v14 = retaddr;
      if ( v16 >= 0 )
      {
LABEL_24:
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v18);
        return;
      }
      v13 = (unsigned int)v16;
      v15 = 768LL;
    }
    else
    {
      v15 = 766LL;
    }
    wil::details::in1diag3::_Log_Hr(
      v14,
      v15,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\spatialaudioresourcemanager.cpp",
      (const char *)v13);
    goto LABEL_24;
  }
}
