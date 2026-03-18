/*
 * XREFs of ?BeginCompile@CEffectCompilationService@@QEAAJPEAVCCompiledEffectTemplate@@PEAUIEffectDescription@Composition@UI@Windows@@PEAPEAVCEffectCompilationTask@@@Z @ 0x180005394
 * Callers:
 *     ?ProcessUpdate@CCompiledEffectTemplate@@QEAAJPEAVCResourceTable@@PEBUMILCMD_COMPILEDEFFECTTEMPLATE@@@Z @ 0x180005D98 (-ProcessUpdate@CCompiledEffectTemplate@@QEAAJPEAVCResourceTable@@PEBUMILCMD_COMPILEDEFFECTTEMPLA.c)
 * Callees:
 *     ??$emplace@AEAUEffectDescriptionKey@@PEAVCEffectCompilationTask@@@?$_Hash@V?$_Umap_traits@UEffectDescriptionKey@@PEAVCEffectCompilationTask@@V?$_Uhash_compare@UEffectDescriptionKey@@U?$hash@UEffectDescriptionKey@@@std@@U?$equal_to@UEffectDescriptionKey@@@3@@std@@V?$allocator@U?$pair@$$CBUEffectDescriptionKey@@PEAVCEffectCompilationTask@@@std@@@4@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUEffectDescriptionKey@@PEAVCEffectCompilationTask@@@std@@@std@@@std@@@std@@_N@1@AEAUEffectDescriptionKey@@$$QEAPEAVCEffectCompilationTask@@@Z @ 0x1800027B0 (--$emplace@AEAUEffectDescriptionKey@@PEAVCEffectCompilationTask@@@-$_Hash@V-$_Umap_traits@UEffec.c)
 *     ?lower_bound@?$_Hash@V?$_Umap_traits@UEffectDescriptionKey@@PEAVCEffectCompilationTask@@V?$_Uhash_compare@UEffectDescriptionKey@@U?$hash@UEffectDescriptionKey@@@std@@U?$equal_to@UEffectDescriptionKey@@@3@@std@@V?$allocator@U?$pair@$$CBUEffectDescriptionKey@@PEAVCEffectCompilationTask@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUEffectDescriptionKey@@PEAVCEffectCompilationTask@@@std@@@std@@@std@@@2@AEBUEffectDescriptionKey@@@Z @ 0x180002864 (-lower_bound@-$_Hash@V-$_Umap_traits@UEffectDescriptionKey@@PEAVCEffectCompilationTask@@V-$_Uhas.c)
 *     ?TryReviveDeadTask@CEffectCompilationService@@AEAAXPEBVCEffectCompilationTask@@@Z @ 0x1800050F8 (-TryReviveDeadTask@CEffectCompilationService@@AEAAXPEBVCEffectCompilationTask@@@Z.c)
 *     ??4?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@QEAAAEAV012@PEAVCEffectCompilationTask@@@Z @ 0x180005C1C (--4-$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@QEAAAEAV012@PEAVCEffectCompilationTask@@@Z.c)
 *     ??0CEffectCompilationTask@@AEAA@PEAVCEffectCompilationService@@PEAUIEffectDescription@Composition@UI@Windows@@@Z @ 0x180006020 (--0CEffectCompilationTask@@AEAA@PEAVCEffectCompilationService@@PEAUIEffectDescription@Compositio.c)
 *     ?AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z @ 0x1800576D8 (-AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180071260 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x18007F27C (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ModuleFailFastForHRESULT @ 0x1800D50A8 (ModuleFailFastForHRESULT.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ?erase@?$_Hash@V?$_Umap_traits@UEffectDescriptionKey@@PEAVCEffectCompilationTask@@V?$_Uhash_compare@UEffectDescriptionKey@@U?$hash@UEffectDescriptionKey@@@std@@U?$equal_to@UEffectDescriptionKey@@@3@@std@@V?$allocator@U?$pair@$$CBUEffectDescriptionKey@@PEAVCEffectCompilationTask@@@std@@@4@$0A@@std@@@std@@QEAA_KAEBUEffectDescriptionKey@@@Z @ 0x180145824 (-erase@-$_Hash@V-$_Umap_traits@UEffectDescriptionKey@@PEAVCEffectCompilationTask@@V_ea_180145824.c)
 *     Template_pdsddt @ 0x180145904 (Template_pdsddt.c)
 */

__int64 __fastcall CEffectCompilationService::BeginCompile(
        CEffectCompilationService *this,
        struct CCompiledEffectTemplate *a2,
        struct Windows::UI::Composition::IEffectDescription *a3,
        struct CEffectCompilationTask **a4)
{
  __int64 v4; // rax
  char v6; // si
  struct CCompiledEffectTemplate *v8; // rdi
  _QWORD *v9; // r13
  PTP_WORK *v10; // rbx
  __int64 v11; // rcx
  unsigned int v12; // edx
  unsigned int v13; // eax
  signed int v14; // edi
  int v15; // eax
  __int64 *v16; // r14
  unsigned int v17; // ecx
  PVOID *v18; // rax
  __int64 v19; // rcx
  unsigned int v20; // edx
  unsigned int v21; // eax
  __int64 v22; // r9
  __int64 v23; // r8
  __int64 v24; // rcx
  struct CEffectCompilationTask *v25; // rax
  CEffectCompilationTask *v27; // rax
  CEffectCompilationTask *v28; // rax
  PTP_WORK ThreadpoolWork; // rax
  int v30; // eax
  signed int LastError; // eax
  __int64 v32; // rax
  int v33; // r13d
  char v34; // r14
  char v35; // si
  char v36; // di
  __int64 v37; // rax
  int v38; // edx
  int v39; // ecx
  _QWORD v40[2]; // [rsp+40h] [rbp-28h] BYREF
  __int128 v41; // [rsp+50h] [rbp-18h] BYREF
  void *retaddr; // [rsp+A8h] [rbp+40h]
  PVOID v43; // [rsp+B0h] [rbp+48h] BYREF
  struct CCompiledEffectTemplate *v44; // [rsp+B8h] [rbp+50h]
  PVOID pv; // [rsp+C0h] [rbp+58h] BYREF
  struct CEffectCompilationTask **v46; // [rsp+C8h] [rbp+60h]

  v46 = a4;
  v44 = a2;
  v4 = *(_QWORD *)a3;
  pv = 0LL;
  v6 = 1;
  LOBYTE(v43) = 1;
  *((_QWORD *)&v41 + 1) = a3;
  v8 = a2;
  v9 = (_QWORD *)((char *)this + 112);
  LODWORD(v41) = (*(__int64 (__fastcall **)(struct Windows::UI::Composition::IEffectDescription *))(v4 + 128))(a3);
  std::_Hash<std::_Umap_traits<EffectDescriptionKey,CEffectCompilationTask *,std::_Uhash_compare<EffectDescriptionKey,std::hash<EffectDescriptionKey>,std::equal_to<EffectDescriptionKey>>,std::allocator<std::pair<EffectDescriptionKey const,CEffectCompilationTask *>>,0>>::lower_bound(
    v9,
    v40,
    &v41);
  if ( v40[0] == *v9 )
  {
    v27 = (CEffectCompilationTask *)WPF::ProcessHeapImpl::AllocClear(0x68uLL);
    if ( !v27 )
    {
      ModuleFailFastForHRESULT(2147942414LL, retaddr);
      __debugbreak();
    }
    v28 = CEffectCompilationTask::CEffectCompilationTask(v27, this, a3);
    Microsoft::WRL::ComPtr<CEffectCompilationTask>::operator=(&pv, v28);
    v10 = (PTP_WORK *)pv;
    if ( !pv )
    {
      v14 = -2147024882;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x8Du);
      return (unsigned int)v14;
    }
    if ( CCommonRegistryData::m_fEnableEffectCaching )
    {
      v43 = pv;
      std::_Hash<std::_Umap_traits<EffectDescriptionKey,CEffectCompilationTask *,std::_Uhash_compare<EffectDescriptionKey,std::hash<EffectDescriptionKey>,std::equal_to<EffectDescriptionKey>>,std::allocator<std::pair<EffectDescriptionKey const,CEffectCompilationTask *>>,0>>::emplace<EffectDescriptionKey &,CEffectCompilationTask *>(
        (float *)this + 28,
        v40,
        &v41,
        &v43);
    }
    ThreadpoolWork = CreateThreadpoolWork(lambda_150d5d81640f42c693c65612364f9ad2_::_lambda_invoker_cdecl_, v10, 0LL);
    v10[7] = ThreadpoolWork;
    if ( ThreadpoolWork )
    {
      v14 = 0;
    }
    else
    {
      LastError = GetLastError();
      v14 = LastError;
      if ( LastError > 0 )
        v14 = (unsigned __int16)LastError | 0x80070000;
    }
    if ( v14 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, 0x94u);
      goto LABEL_23;
    }
    v8 = v44;
    v6 = 0;
    LOBYTE(v43) = 0;
  }
  else
  {
    Microsoft::WRL::ComPtr<CEffectCompilationTask>::operator=(&pv, *(_QWORD *)(v40[0] + 32LL));
    v10 = (PTP_WORK *)pv;
    CEffectCompilationService::TryReviveDeadTask(this, (const struct CEffectCompilationTask *)pv);
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
  {
    v32 = *((_QWORD *)v8 + 6);
    if ( v32 )
      v33 = *(_DWORD *)(v32 + 60);
    else
      v33 = 0;
    v34 = v6;
    v35 = (*(__int64 (__fastcall **)(struct Windows::UI::Composition::IEffectDescription *))(*(_QWORD *)a3 + 48LL))(a3);
    v36 = (*(__int64 (__fastcall **)(struct Windows::UI::Composition::IEffectDescription *))(*(_QWORD *)a3 + 104LL))(a3);
    v37 = (*(__int64 (__fastcall **)(struct Windows::UI::Composition::IEffectDescription *))(*(_QWORD *)a3 + 136LL))(a3);
    Template_pdsddt(v39, v38, (_DWORD)v10, v33, v37, v36, v35, v34);
    v9 = (_QWORD *)((char *)this + 112);
  }
  v11 = *((unsigned int *)v10 + 10);
  v12 = (unsigned int)v43;
  pv = v44;
  v13 = v11 + 1;
  if ( (int)v11 + 1 >= (unsigned int)v11 )
    v12 = v11 + 1;
  v14 = v13 < (unsigned int)v11 ? 0x80070216 : 0;
  if ( v13 < (unsigned int)v11 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, 0xB5u);
  }
  else if ( v12 <= *((_DWORD *)v10 + 9) )
  {
    *((_QWORD *)v10[2] + v11) = pv;
    *((_DWORD *)v10 + 10) = v12;
  }
  else
  {
    v15 = DynArrayImpl<0>::AddMultipleAndSet(v10 + 2, 8LL, 1LL, &pv);
    v14 = v15;
    if ( v15 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v15, 0xC0u);
  }
  if ( v14 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, 0x81u);
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, 0xA6u);
  }
  else
  {
    v40[0] = (char *)this + 32;
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
    v16 = (__int64 *)((char *)this + 80);
    v17 = 0;
    v18 = (PVOID *)*((_QWORD *)this + 10);
    if ( *((_DWORD *)this + 26) )
    {
      while ( v10 != *v18 )
      {
        ++v17;
        ++v18;
        if ( v17 >= *((_DWORD *)this + 26) )
          goto LABEL_12;
      }
      goto LABEL_20;
    }
LABEL_12:
    v19 = *((unsigned int *)this + 26);
    v20 = (unsigned int)v43;
    pv = v10;
    v21 = v19 + 1;
    if ( (int)v19 + 1 >= (unsigned int)v19 )
      v20 = v19 + 1;
    v14 = v21 < (unsigned int)v19 ? 0x80070216 : 0;
    if ( v21 < (unsigned int)v19 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, 0xB5u);
    }
    else if ( v20 > *((_DWORD *)this + 25) )
    {
      v30 = DynArrayImpl<0>::AddMultipleAndSet((char *)this + 80, 8LL, 1LL, &pv);
      v14 = v30;
      if ( v30 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v30, 0xC0u);
    }
    else
    {
      *(_QWORD *)(*v16 + 8 * v19) = pv;
      *((_DWORD *)this + 26) = v20;
    }
    if ( v14 >= 0 )
    {
      if ( *((_BYTE *)v10 + 92) )
      {
        v22 = *v16;
        v23 = *((unsigned int *)this + 19);
        v24 = *(_QWORD *)(*v16 + 8LL * (unsigned int)(*((_DWORD *)this + 26) - 1));
        *(_QWORD *)(v22 + 8LL * (unsigned int)(*((_DWORD *)this + 26) - 1)) = *(_QWORD *)(*v16 + 8 * v23);
        *(_QWORD *)(v22 + 8 * v23) = v24;
        ++*((_DWORD *)this + 19);
        SetEvent(*((HANDLE *)this + 3));
      }
LABEL_20:
      CGuard<CCriticalSection>::~CGuard<CCriticalSection>(v40);
      if ( !(_BYTE)v43 )
        SubmitThreadpoolWork(v10[7]);
      v25 = (struct CEffectCompilationTask *)v10;
      v10 = 0LL;
      *v46 = v25;
      goto LABEL_23;
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, 0xAEu);
    CGuard<CCriticalSection>::~CGuard<CCriticalSection>(v40);
  }
LABEL_23:
  if ( v14 < 0 )
  {
    if ( !v10 )
      return (unsigned int)v14;
    std::_Hash<std::_Umap_traits<EffectDescriptionKey,CEffectCompilationTask *,std::_Uhash_compare<EffectDescriptionKey,std::hash<EffectDescriptionKey>,std::equal_to<EffectDescriptionKey>>,std::allocator<std::pair<EffectDescriptionKey const,CEffectCompilationTask *>>,0>>::erase(
      v9,
      &v41);
  }
  if ( v10 )
    (*((void (__fastcall **)(PTP_WORK *))*v10 + 1))(v10);
  return (unsigned int)v14;
}
