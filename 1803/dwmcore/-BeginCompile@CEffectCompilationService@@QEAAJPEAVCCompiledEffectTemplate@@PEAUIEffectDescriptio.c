/*
 * XREFs of ?BeginCompile@CEffectCompilationService@@QEAAJPEAVCCompiledEffectTemplate@@PEAUIEffectDescription@Composition@UI@Windows@@PEAPEAVCEffectCompilationTask@@@Z @ 0x180035184
 * Callers:
 *     ?ProcessUpdate@CCompiledEffectTemplate@@QEAAJPEAVCResourceTable@@PEBUMILCMD_COMPILEDEFFECTTEMPLATE@@@Z @ 0x180037340 (-ProcessUpdate@CCompiledEffectTemplate@@QEAAJPEAVCResourceTable@@PEBUMILCMD_COMPILEDEFFECTTEMPLA.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x18001F244 (-InternalRelease@-$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z @ 0x18002B3E4 (-AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z.c)
 *     ?TryReviveDeadTask@CEffectCompilationService@@AEAAXPEBVCEffectCompilationTask@@@Z @ 0x180034E24 (-TryReviveDeadTask@CEffectCompilationService@@AEAAXPEBVCEffectCompilationTask@@@Z.c)
 *     ??4?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@QEAAAEAV012@PEAVCEffectCompilationTask@@@Z @ 0x1800357E4 (--4-$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@QEAAAEAV012@PEAVCEffectCompilationTask@@@Z.c)
 *     ??0CEffectCompilationTask@@AEAA@PEAVCEffectCompilationService@@PEAUIEffectDescription@Composition@UI@Windows@@@Z @ 0x180037620 (--0CEffectCompilationTask@@AEAA@PEAVCEffectCompilationService@@PEAUIEffectDescription@Compositio.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18007968C (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x180089DE4 (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ??$emplace@AEAUEffectDescriptionKey@@PEAVCEffectCompilationTask@@@?$_Hash@V?$_Umap_traits@UEffectDescriptionKey@@PEAVCEffectCompilationTask@@V?$_Uhash_compare@UEffectDescriptionKey@@U?$hash@UEffectDescriptionKey@@@std@@U?$equal_to@UEffectDescriptionKey@@@3@@std@@V?$allocator@U?$pair@$$CBUEffectDescriptionKey@@PEAVCEffectCompilationTask@@@std@@@4@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUEffectDescriptionKey@@PEAVCEffectCompilationTask@@@std@@@std@@@std@@@std@@_N@1@AEAUEffectDescriptionKey@@$$QEAPEAVCEffectCompilationTask@@@Z @ 0x1800C40DC (--$emplace@AEAUEffectDescriptionKey@@PEAVCEffectCompilationTask@@@-$_Hash@V-$_Umap_traits@UEffec.c)
 *     ?lower_bound@?$_Hash@V?$_Umap_traits@UEffectDescriptionKey@@PEAVCEffectCompilationTask@@V?$_Uhash_compare@UEffectDescriptionKey@@U?$hash@UEffectDescriptionKey@@@std@@U?$equal_to@UEffectDescriptionKey@@@3@@std@@V?$allocator@U?$pair@$$CBUEffectDescriptionKey@@PEAVCEffectCompilationTask@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUEffectDescriptionKey@@PEAVCEffectCompilationTask@@@std@@@std@@@std@@@2@AEBUEffectDescriptionKey@@@Z @ 0x1800C4210 (-lower_bound@-$_Hash@V-$_Umap_traits@UEffectDescriptionKey@@PEAVCEffectCompilationTask@@V-$_Uhas.c)
 *     ModuleFailFastForHRESULT @ 0x1800DD014 (ModuleFailFastForHRESULT.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?erase@?$_Hash@V?$_Umap_traits@UEffectDescriptionKey@@PEAVCEffectCompilationTask@@V?$_Uhash_compare@UEffectDescriptionKey@@U?$hash@UEffectDescriptionKey@@@std@@U?$equal_to@UEffectDescriptionKey@@@3@@std@@V?$allocator@U?$pair@$$CBUEffectDescriptionKey@@PEAVCEffectCompilationTask@@@std@@@4@$0A@@std@@@std@@QEAA_KAEBUEffectDescriptionKey@@@Z @ 0x180155208 (-erase@-$_Hash@V-$_Umap_traits@UEffectDescriptionKey@@PEAVCEffectCompilationTask@@V_ea_180155208.c)
 *     McTemplateU0pdsddt @ 0x1801552E0 (McTemplateU0pdsddt.c)
 */

__int64 __fastcall CEffectCompilationService::BeginCompile(
        CEffectCompilationService *this,
        struct CCompiledEffectTemplate *a2,
        struct Windows::UI::Composition::IEffectDescription *a3,
        struct CEffectCompilationTask **a4)
{
  __int64 v4; // rax
  char v6; // di
  struct CEffectCompilationTask **v7; // r13
  struct CCompiledEffectTemplate *v9; // rsi
  char *v10; // r12
  PTP_WORK *v11; // rbx
  __int64 v12; // rax
  unsigned int v13; // edx
  signed int v14; // edi
  int v15; // eax
  __int64 *v16; // r15
  unsigned int v17; // edx
  __int64 v18; // rax
  __int64 v19; // r8
  unsigned int v20; // ecx
  __int64 v21; // r9
  __int64 v22; // r8
  __int64 v23; // rcx
  struct CEffectCompilationTask *v24; // rax
  PVOID *v26; // rcx
  CEffectCompilationTask *v27; // rax
  CEffectCompilationTask *v28; // rax
  PTP_WORK ThreadpoolWork; // rax
  int v30; // eax
  signed int LastError; // eax
  const char *v32; // r13
  __int64 v33; // rcx
  int v34; // r12d
  char v35; // si
  char v36; // di
  char v37; // al
  int v38; // edx
  int v39; // ecx
  _QWORD v40[2]; // [rsp+40h] [rbp-28h] BYREF
  int v41; // [rsp+50h] [rbp-18h] BYREF
  struct Windows::UI::Composition::IEffectDescription *v42; // [rsp+58h] [rbp-10h]
  void *retaddr; // [rsp+A8h] [rbp+40h]
  PVOID v44; // [rsp+B0h] [rbp+48h] BYREF
  struct CCompiledEffectTemplate *v45; // [rsp+B8h] [rbp+50h]
  PVOID pv; // [rsp+C0h] [rbp+58h] BYREF
  struct CEffectCompilationTask **v47; // [rsp+C8h] [rbp+60h]

  v47 = a4;
  v45 = a2;
  v4 = *(_QWORD *)a3;
  pv = 0LL;
  v6 = 1;
  LOBYTE(v44) = 1;
  v7 = a4;
  v42 = a3;
  v9 = a2;
  v10 = (char *)this + 112;
  v41 = (*(__int64 (__fastcall **)(struct Windows::UI::Composition::IEffectDescription *))(v4 + 136))(a3);
  std::_Hash<std::_Umap_traits<EffectDescriptionKey,CEffectCompilationTask *,std::_Uhash_compare<EffectDescriptionKey,std::hash<EffectDescriptionKey>,std::equal_to<EffectDescriptionKey>>,std::allocator<std::pair<EffectDescriptionKey const,CEffectCompilationTask *>>,0>>::lower_bound(
    v10,
    v40,
    &v41);
  if ( v40[0] == *((_QWORD *)this + 15) )
  {
    v27 = (CEffectCompilationTask *)WPF::ProcessHeapImpl::AllocClear(0x68uLL);
    if ( !v27 )
      ModuleFailFastForHRESULT(2147942414LL, retaddr);
    v28 = CEffectCompilationTask::CEffectCompilationTask(v27, this, a3);
    Microsoft::WRL::ComPtr<CEffectCompilationTask>::operator=(&pv, v28);
    v11 = (PTP_WORK *)pv;
    if ( !pv )
    {
      v14 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x8Cu);
      return (unsigned int)v14;
    }
    if ( CCommonRegistryData::m_fEnableEffectCaching )
    {
      v44 = pv;
      std::_Hash<std::_Umap_traits<EffectDescriptionKey,CEffectCompilationTask *,std::_Uhash_compare<EffectDescriptionKey,std::hash<EffectDescriptionKey>,std::equal_to<EffectDescriptionKey>>,std::allocator<std::pair<EffectDescriptionKey const,CEffectCompilationTask *>>,0>>::emplace<EffectDescriptionKey &,CEffectCompilationTask *>(
        (char *)this + 112,
        v40,
        &v41,
        &v44);
    }
    ThreadpoolWork = CreateThreadpoolWork(lambda_150d5d81640f42c693c65612364f9ad2_::_lambda_invoker_cdecl_, v11, 0LL);
    v11[7] = ThreadpoolWork;
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
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v14, 0x93u);
      goto LABEL_19;
    }
    v6 = 0;
    LOBYTE(v44) = 0;
  }
  else
  {
    Microsoft::WRL::ComPtr<CEffectCompilationTask>::operator=(&pv, *(_QWORD *)(v40[0] + 32LL));
    v11 = (PTP_WORK *)pv;
    CEffectCompilationService::TryReviveDeadTask(this, (const struct CEffectCompilationTask *)pv);
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
  {
    pv = 0LL;
    v32 = "null";
    Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease((__int64 *)&pv);
    if ( (*(int (__fastcall **)(struct Windows::UI::Composition::IEffectDescription *, PVOID *))(*(_QWORD *)a3 + 120LL))(
           a3,
           &pv) >= 0 )
      v32 = (const char *)(*(__int64 (__fastcall **)(PVOID))(*(_QWORD *)pv + 16LL))(pv);
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    {
      v33 = *((_QWORD *)v9 + 6);
      if ( v33 )
        v34 = *(_DWORD *)(v33 + 68);
      else
        v34 = 0;
      v35 = v6;
      v36 = (*(__int64 (__fastcall **)(struct Windows::UI::Composition::IEffectDescription *))(*(_QWORD *)a3 + 48LL))(a3);
      v37 = (*(__int64 (__fastcall **)(struct Windows::UI::Composition::IEffectDescription *))(*(_QWORD *)a3 + 112LL))(a3);
      McTemplateU0pdsddt(v39, v38, (_DWORD)v11, v34, (__int64)v32, v37, v36, v35);
      v9 = v45;
      v10 = (char *)this + 112;
    }
    Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease((__int64 *)&pv);
    v7 = v47;
  }
  v12 = *((unsigned int *)v11 + 10);
  pv = v9;
  v13 = v12 + 1;
  v14 = (int)v12 + 1 < (unsigned int)v12 ? 0x80070216 : 0;
  if ( (int)v12 + 1 < (unsigned int)v12 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v14, 0xB5u);
  }
  else if ( v13 <= *((_DWORD *)v11 + 9) )
  {
    *((_QWORD *)v11[2] + v12) = pv;
    *((_DWORD *)v11 + 10) = v13;
  }
  else
  {
    v15 = DynArrayImpl<0>::AddMultipleAndSet(v11 + 2, 8LL, 1LL, &pv);
    v14 = v15;
    if ( v15 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v15, 0xC0u);
  }
  if ( v14 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v14, 0x80u);
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v14, 0xB0u);
  }
  else
  {
    v40[0] = (char *)this + 32;
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
    v16 = (__int64 *)((char *)this + 80);
    v17 = 0;
    v18 = *((unsigned int *)this + 26);
    v19 = *((_QWORD *)this + 10);
    if ( (_DWORD)v18 )
    {
      v26 = (PVOID *)*((_QWORD *)this + 10);
      while ( v11 != *v26 )
      {
        ++v17;
        ++v26;
        if ( v17 >= (unsigned int)v18 )
          goto LABEL_10;
      }
      goto LABEL_16;
    }
LABEL_10:
    v20 = v18 + 1;
    pv = v11;
    v14 = (int)v18 + 1 < (unsigned int)v18 ? 0x80070216 : 0;
    if ( (int)v18 + 1 < (unsigned int)v18 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v14, 0xB5u);
    }
    else if ( v20 > *((_DWORD *)this + 25) )
    {
      v30 = DynArrayImpl<0>::AddMultipleAndSet((char *)this + 80, 8LL, 1LL, &pv);
      v14 = v30;
      if ( v30 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v30, 0xC0u);
    }
    else
    {
      *(_QWORD *)(v19 + 8 * v18) = pv;
      *((_DWORD *)this + 26) = v20;
    }
    if ( v14 >= 0 )
    {
      if ( *((_BYTE *)v11 + 92) )
      {
        v21 = *v16;
        v22 = *((unsigned int *)this + 19);
        v23 = *(_QWORD *)(*v16 + 8LL * (unsigned int)(*((_DWORD *)this + 26) - 1));
        *(_QWORD *)(v21 + 8LL * (unsigned int)(*((_DWORD *)this + 26) - 1)) = *(_QWORD *)(*v16 + 8 * v22);
        *(_QWORD *)(v21 + 8 * v22) = v23;
        ++*((_DWORD *)this + 19);
        SetEvent(*((HANDLE *)this + 3));
      }
LABEL_16:
      CGuard<CCriticalSection>::~CGuard<CCriticalSection>(v40);
      if ( !(_BYTE)v44 )
        SubmitThreadpoolWork(v11[7]);
      v24 = (struct CEffectCompilationTask *)v11;
      v11 = 0LL;
      *v7 = v24;
      goto LABEL_19;
    }
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v14, 0xB8u);
    CGuard<CCriticalSection>::~CGuard<CCriticalSection>(v40);
  }
LABEL_19:
  if ( v14 < 0 )
  {
    if ( !v11 )
      return (unsigned int)v14;
    std::_Hash<std::_Umap_traits<EffectDescriptionKey,CEffectCompilationTask *,std::_Uhash_compare<EffectDescriptionKey,std::hash<EffectDescriptionKey>,std::equal_to<EffectDescriptionKey>>,std::allocator<std::pair<EffectDescriptionKey const,CEffectCompilationTask *>>,0>>::erase(
      v10,
      &v41);
  }
  if ( v11 )
    (*((void (__fastcall **)(PTP_WORK *))*v11 + 1))(v11);
  return (unsigned int)v14;
}
