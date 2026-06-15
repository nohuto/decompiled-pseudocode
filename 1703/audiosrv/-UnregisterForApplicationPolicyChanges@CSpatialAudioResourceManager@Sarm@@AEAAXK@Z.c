/*
 * XREFs of ?UnregisterForApplicationPolicyChanges@CSpatialAudioResourceManager@Sarm@@AEAAXK@Z @ 0x1800C4A00
 * Callers:
 *     ?RemoveStream@CSpatialAudioResourceManager@Sarm@@AEAAXPEAVCStreamResource@2@@Z @ 0x1800C3FE0 (-RemoveStream@CSpatialAudioResourceManager@Sarm@@AEAAXPEAVCStreamResource@2@@Z.c)
 * Callees:
 *     ?InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z @ 0x180008C40 (-InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z.c)
 *     ??1?$com_ptr_t@UIAudioSessionInfo@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800393B0 (--1-$com_ptr_t@UIAudioSessionInfo@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800AD6F4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?LogUnsubscribe@CSpatialAudioResourceManagerTraceLogger@@QEAAXK_NI@Z @ 0x1800C70B0 (-LogUnsubscribe@CSpatialAudioResourceManagerTraceLogger@@QEAAXK_NI@Z.c)
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
  int v11; // esi
  wil::details::in1diag3 *v12; // rcx
  unsigned __int64 v13; // r9
  __int64 v14; // rdx
  int v15; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  Sarm::CSpatialAudioResourceManager *v17; // [rsp+40h] [rbp+8h] BYREF

  v4 = (_DWORD *)*((_QWORD *)this + 35);
  for ( i = (_DWORD *)*((_QWORD *)this + 34); i != v4 && *i != a2; i += 2 )
    ;
  if ( i == v4 )
    v6 = 0;
  else
    v6 = i[1];
  CSpatialAudioResourceManagerTraceLogger::LogUnsubscribe(this, a2, i != v4, v6);
  if ( i != *((_DWORD **)this + 35) && i[1]-- == 1 )
  {
    memmove(i, i + 2, *((_QWORD *)this + 35) - (_QWORD)(i + 2));
    *((_QWORD *)this + 35) -= 8LL;
    v8 = 0LL;
    v17 = 0LL;
    if ( InlineIsEqualGUID(&GUID_e60ae324_1652_4fcc_a7f2_36aab2a4f68b, &GUID_00000000_0000_0000_c000_000000000046) )
    {
      v8 = this;
      v17 = this;
      (*(void (__fastcall **)(Sarm::CSpatialAudioResourceManager *))(*(_QWORD *)this + 8LL))(this);
      v11 = 0;
    }
    else
    {
      if ( InlineIsEqualGUID(v9, &GUID_7f299b05_3e79_4c05_b9ac_9418573ffd42) )
      {
        v8 = this;
LABEL_15:
        v11 = 0;
        v17 = v8;
        (*(void (__fastcall **)(Sarm::CSpatialAudioResourceManager *))(*(_QWORD *)v8 + 8LL))(v8);
        goto LABEL_18;
      }
      if ( InlineIsEqualGUID(v10, v10) )
      {
        v8 = (Sarm::CSpatialAudioResourceManager *)((char *)this + 8);
        goto LABEL_15;
      }
      v11 = -2147467262;
    }
LABEL_18:
    v12 = retaddr;
    if ( v11 >= 0 )
    {
      v15 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, Sarm::CSpatialAudioResourceManager *))(**((_QWORD **)this + 37)
                                                                                            + 304LL))(
              *((_QWORD *)this + 37),
              a2,
              v8);
      v12 = retaddr;
      if ( v15 >= 0 )
      {
LABEL_23:
        wil::com_ptr_t<IAudioSessionInfo,wil::err_returncode_policy>::~com_ptr_t<IAudioSessionInfo,wil::err_returncode_policy>((__int64 *)&v17);
        return;
      }
      v13 = (unsigned int)v15;
      v14 = 650LL;
    }
    else
    {
      v13 = (unsigned int)v11;
      v14 = 648LL;
    }
    wil::details::in1diag3::_Log_Hr(
      v12,
      (void *)v14,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\spatialaudioresourcemanager.cpp",
      (const char *)v13);
    goto LABEL_23;
  }
}
