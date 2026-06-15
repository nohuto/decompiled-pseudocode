/*
 * XREFs of ?RegisterAudioStateMonitor@AudioStateMonitorManager@@QEAAJPEAW4AUDIO_DIRECTION@@PEAW4_AUDIO_STREAM_CATEGORY@@PEBGPEA_K@Z @ 0x18002ED64
 * Callers:
 *     ?RegisterAudioStateMonitor@CProcess@@UEAAJPEAW4AUDIO_DIRECTION@@PEAW4_AUDIO_STREAM_CATEGORY@@PEBGPEA_K@Z @ 0x180016910 (-RegisterAudioStateMonitor@CProcess@@UEAAJPEAW4AUDIO_DIRECTION@@PEAW4_AUDIO_STREAM_CATEGORY@@PEB.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002C78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z @ 0x180017D14 (--$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z.c)
 *     ??1?$unique_ptr@UAudioStateMonitor@@U?$default_delete@UAudioStateMonitor@@@wistd@@@wistd@@QEAA@XZ @ 0x180019294 (--1-$unique_ptr@UAudioStateMonitor@@U-$default_delete@UAudioStateMonitor@@@wistd@@@wistd@@QEAA@X.c)
 *     ?GetSoundLevelForExtendedAudioCategory@AudioStateMonitorManager@@AEAA?AW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@PEAW4AUDIO_DIRECTION@@PEAKPEBG@Z @ 0x18002F2E0 (-GetSoundLevelForExtendedAudioCategory@AudioStateMonitorManager@@AEAA-AW4__MIDL___MIDL_itf_audio.c)
 *     ??$_Insert@AEAU?$pair@$$CB_KV?$unique_ptr@UAudioStateMonitor@@U?$default_delete@UAudioStateMonitor@@@wistd@@@wistd@@@std@@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KV?$unique_ptr@UAudioStateMonitor@@U?$default_delete@UAudioStateMonitor@@@wistd@@@wistd@@@std@@@std@@@std@@@2@@?$_Hash@V?$_Umap_traits@_KV?$unique_ptr@UAudioStateMonitor@@U?$default_delete@UAudioStateMonitor@@@wistd@@@wistd@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KV?$unique_ptr@UAudioStateMonitor@@U?$default_delete@UAudioStateMonitor@@@wistd@@@wistd@@@std@@@4@$0A@@std@@@std@@IEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KV?$unique_ptr@UAudioStateMonitor@@U?$default_delete@UAudioStateMonitor@@@wistd@@@wistd@@@std@@@std@@@std@@@std@@_N@1@AEAU?$pair@$$CB_KV?$unique_ptr@UAudioStateMonitor@@U?$default_delete@UAudioStateMonitor@@@wistd@@@wistd@@@1@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KV?$unique_ptr@UAudioStateMonitor@@U?$default_delete@UAudioStateMonitor@@@wistd@@@wistd@@@std@@@std@@@std@@@1@@Z @ 0x18002F46C (--$_Insert@AEAU-$pair@$$CB_KV-$unique_ptr@UAudioStateMonitor@@U-$default_delete@UAudioStateMonit.c)
 *     ??$_Buynode@AEA_KPEAUAudioStateMonitor@@@?$_List_buy@U?$pair@$$CB_KV?$unique_ptr@UAudioStateMonitor@@U?$default_delete@UAudioStateMonitor@@@wistd@@@wistd@@@std@@V?$allocator@U?$pair@$$CB_KV?$unique_ptr@UAudioStateMonitor@@U?$default_delete@UAudioStateMonitor@@@wistd@@@wistd@@@std@@@2@@std@@QEAAPEAU?$_List_node@U?$pair@$$CB_KV?$unique_ptr@UAudioStateMonitor@@U?$default_delete@UAudioStateMonitor@@@wistd@@@wistd@@@std@@PEAX@1@PEAU21@0AEA_K$$QEAPEAUAudioStateMonitor@@@Z @ 0x18002F6C4 (--$_Buynode@AEA_KPEAUAudioStateMonitor@@@-$_List_buy@U-$pair@$$CB_KV-$unique_ptr@UAudioStateMoni.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180035504 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180035538 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x180035A50 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800362D0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall AudioStateMonitorManager::RegisterAudioStateMonitor(
        AudioStateMonitorManager *this,
        enum AUDIO_DIRECTION *a2,
        enum _AUDIO_STREAM_CATEGORY *a3,
        const unsigned __int16 *a4,
        unsigned __int64 *a5)
{
  struct _RTL_CRITICAL_SECTION *v7; // r12
  void *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rdi
  __int64 v11; // rdx
  _DWORD *v12; // rax
  _DWORD *v13; // rsi
  void *v14; // rbx
  void *v15; // rcx
  void *v16; // rsi
  DWORD LastError; // ebx
  const unsigned __int16 *v18; // r8
  unsigned __int64 v19; // r9
  int v20; // eax
  unsigned int v21; // ebx
  _DWORD *v22; // rsi
  __int64 v23; // r9
  _DWORD *v24; // rcx
  enum AUDIO_DIRECTION *v25; // rdx
  AudioStateMonitorManager *v26; // r15
  int SoundLevelForExtendedAudioCategory; // ebx
  _DWORD *v28; // rax
  void *v29; // rcx
  _DWORD *v30; // rsi
  void *v31; // rbx
  void **v32; // r14
  __int64 v33; // rdi
  __int64 *v34; // rsi
  __int64 v35; // rdx
  __int64 v36; // rax
  __int64 v38; // [rsp+20h] [rbp-40h]
  __int64 v39; // [rsp+30h] [rbp-30h] BYREF
  _QWORD v40[5]; // [rsp+38h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+38h]
  AudioStateMonitorManager *v42; // [rsp+A0h] [rbp+40h] BYREF
  const unsigned __int16 *v43; // [rsp+B8h] [rbp+58h]

  v43 = a4;
  v42 = this;
  v40[2] = -2LL;
  v7 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 16);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
  v40[3] = v7;
  v8 = operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
  v10 = (__int64)v8;
  if ( v8 )
  {
    memset_0(v8, 0, 0x20uLL);
    *(_QWORD *)v10 = 0LL;
    *(_QWORD *)(v10 + 8) = 0LL;
    *(_QWORD *)(v10 + 16) = 0LL;
    *(_QWORD *)(v10 + 24) = 0LL;
  }
  else
  {
    v10 = 0LL;
  }
  v39 = v10;
  if ( !v10 )
  {
    v11 = 78LL;
LABEL_52:
    v21 = -2147024882;
    v23 = 2147942414LL;
    goto LABEL_53;
  }
  if ( a2 )
  {
    v12 = operator new(4uLL, (const struct std::nothrow_t *)&std::nothrow);
    v13 = v12;
    if ( v12 )
      *v12 = *(_DWORD *)a2;
    else
      v13 = 0LL;
    v14 = v13;
    if ( (_QWORD *)v10 != v40 )
    {
      v14 = 0LL;
      v15 = *(void **)v10;
      if ( v13 == *(_DWORD **)v10 )
        goto LABEL_17;
      if ( v15 )
        operator delete(v15, (const struct std::nothrow_t *)4);
      *(_QWORD *)v10 = v13;
      v13 = 0LL;
    }
    if ( v13 )
      operator delete(v14, (const struct std::nothrow_t *)4);
LABEL_17:
    if ( !*(_QWORD *)v10 )
    {
      v11 = 82LL;
      goto LABEL_52;
    }
  }
  v16 = *(void **)(v10 + 16);
  if ( v16 )
  {
    LastError = GetLastError();
    CoTaskMemFree(v16);
    SetLastError(LastError);
  }
  *(_QWORD *)(v10 + 16) = 0LL;
  v18 = (const unsigned __int16 *)&word_18003D478;
  if ( v43 )
    v18 = v43;
  v19 = -1LL;
  do
    ++v19;
  while ( v18[v19] );
  v20 = _AllocStringWorker<CTCoAllocPolicy>(0LL, v9, v18, v19, v38, (unsigned __int16 **)(v10 + 16));
  v21 = v20;
  if ( v20 < 0 )
  {
    v11 = 85LL;
LABEL_35:
    v23 = (unsigned int)v20;
LABEL_53:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\audiostatemonitormanager\\audiostatemonitormanager.cpp",
      (const char *)v23);
    goto LABEL_57;
  }
  if ( a3 )
  {
    v22 = operator new(4uLL, (const struct std::nothrow_t *)&std::nothrow);
    if ( v22 )
      *v22 = 0;
    else
      v22 = 0LL;
    if ( !v22 )
    {
      v11 = 91LL;
      goto LABEL_52;
    }
    v20 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD *))(**((_QWORD **)v42 + 15) + 104LL))(
            *((_QWORD *)v42 + 15),
            0LL,
            *(unsigned int *)a3,
            0LL,
            v22);
    v21 = v20;
    if ( v20 < 0 )
    {
      v11 = 92LL;
      goto LABEL_35;
    }
    v24 = *(_DWORD **)(v10 + 8);
    if ( v22 != v24 )
    {
      if ( v24 )
        operator delete(v24, (const struct std::nothrow_t *)4);
      *(_QWORD *)(v10 + 8) = v22;
    }
  }
  v25 = a2;
  v26 = v42;
  SoundLevelForExtendedAudioCategory = AudioStateMonitorManager::GetSoundLevelForExtendedAudioCategory(
                                         v42,
                                         v25,
                                         *(_QWORD *)(v10 + 8),
                                         v43);
  v28 = operator new(4uLL, (const struct std::nothrow_t *)&std::nothrow);
  v30 = v28;
  if ( v28 )
    *v28 = SoundLevelForExtendedAudioCategory;
  else
    v30 = 0LL;
  v31 = v30;
  v32 = (void **)(v10 + 24);
  if ( (AudioStateMonitorManager **)(v10 + 24) != &v42 )
  {
    v31 = 0LL;
    v29 = *v32;
    if ( v30 == *v32 )
      goto LABEL_50;
    if ( v29 )
      operator delete(v29, (const struct std::nothrow_t *)4);
    *v32 = v30;
    v30 = 0LL;
  }
  if ( v30 )
    operator delete(v31, (const struct std::nothrow_t *)4);
LABEL_50:
  if ( !*v32 )
  {
    v11 = 99LL;
    goto LABEL_52;
  }
  v42 = (AudioStateMonitorManager *)v10;
  v39 = 0LL;
  v40[0] = v10;
  v33 = **((_QWORD **)v26 + 8);
  v34 = *(__int64 **)(v33 + 8);
  v35 = std::_List_buy<std::pair<unsigned __int64 const,wistd::unique_ptr<AudioStateMonitor,wistd::default_delete<AudioStateMonitor>>>>::_Buynode<unsigned __int64 &,AudioStateMonitor *>(
          (_DWORD)v29,
          v33,
          (_DWORD)v34,
          (unsigned int)&v42,
          (__int64)v40);
  v36 = *((_QWORD *)v26 + 9);
  if ( v36 == 0x7FFFFFFFFFFFFFELL )
    std::_Xlength_error("list<T> too long");
  *((_QWORD *)v26 + 9) = v36 + 1;
  *(_QWORD *)(v33 + 8) = v35;
  *v34 = v35;
  std::_Hash<std::_Umap_traits<unsigned __int64,wistd::unique_ptr<AudioStateMonitor,wistd::default_delete<AudioStateMonitor>>,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,wistd::unique_ptr<AudioStateMonitor,wistd::default_delete<AudioStateMonitor>>>>,0>>::_Insert<std::pair<unsigned __int64 const,wistd::unique_ptr<AudioStateMonitor,wistd::default_delete<AudioStateMonitor>>> &,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned __int64 const,wistd::unique_ptr<AudioStateMonitor,wistd::default_delete<AudioStateMonitor>>>>>>>(
    (char *)v26 + 56,
    v40,
    **((_QWORD **)v26 + 8) + 16LL);
  *a5 = (unsigned __int64)v42;
  v21 = 0;
LABEL_57:
  wistd::unique_ptr<AudioStateMonitor,wistd::default_delete<AudioStateMonitor>>::~unique_ptr<AudioStateMonitor,wistd::default_delete<AudioStateMonitor>>(&v39);
  if ( v7 )
    LeaveCriticalSection(v7);
  return v21;
}
