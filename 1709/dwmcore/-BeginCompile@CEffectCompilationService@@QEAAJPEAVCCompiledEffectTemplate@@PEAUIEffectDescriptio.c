/*
 * XREFs of ?BeginCompile@CEffectCompilationService@@QEAAJPEAVCCompiledEffectTemplate@@PEAUIEffectDescription@Composition@UI@Windows@@PEAPEAVCEffectCompilationTask@@@Z @ 0x180083CC8
 * Callers:
 *     ?ProcessUpdate@CCompiledEffectTemplate@@QEAAJPEAVCResourceTable@@PEBUMILCMD_COMPILEDEFFECTTEMPLATE@@@Z @ 0x180084658 (-ProcessUpdate@CCompiledEffectTemplate@@QEAAJPEAVCResourceTable@@PEBUMILCMD_COMPILEDEFFECTTEMPLA.c)
 * Callees:
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x1800106C4 (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180068800 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?TryReviveDeadTask@CEffectCompilationService@@AEAAXPEBVCEffectCompilationTask@@@Z @ 0x180083A38 (-TryReviveDeadTask@CEffectCompilationService@@AEAAXPEBVCEffectCompilationTask@@@Z.c)
 *     ??4?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@QEAAAEAV012@PEAVCEffectCompilationTask@@@Z @ 0x180084544 (--4-$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@QEAAAEAV012@PEAVCEffectCompilationTask@@@Z.c)
 *     ??0CEffectCompilationTask@@AEAA@PEAVCEffectCompilationService@@PEAUIEffectDescription@Composition@UI@Windows@@@Z @ 0x1800849C0 (--0CEffectCompilationTask@@AEAA@PEAVCEffectCompilationService@@PEAUIEffectDescription@Compositio.c)
 *     ??$emplace@AEAUEffectDescriptionKey@@PEAVCEffectCompilationTask@@@?$_Hash@V?$_Umap_traits@UEffectDescriptionKey@@PEAVCEffectCompilationTask@@V?$_Uhash_compare@UEffectDescriptionKey@@U?$hash@UEffectDescriptionKey@@@std@@U?$equal_to@UEffectDescriptionKey@@@3@@std@@V?$allocator@U?$pair@$$CBUEffectDescriptionKey@@PEAVCEffectCompilationTask@@@std@@@4@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUEffectDescriptionKey@@PEAVCEffectCompilationTask@@@std@@@std@@@std@@@std@@_N@1@AEAUEffectDescriptionKey@@$$QEAPEAVCEffectCompilationTask@@@Z @ 0x180085FB8 (--$emplace@AEAUEffectDescriptionKey@@PEAVCEffectCompilationTask@@@-$_Hash@V-$_Umap_traits@UEffec.c)
 *     ?lower_bound@?$_Hash@V?$_Umap_traits@UEffectDescriptionKey@@PEAVCEffectCompilationTask@@V?$_Uhash_compare@UEffectDescriptionKey@@U?$hash@UEffectDescriptionKey@@@std@@U?$equal_to@UEffectDescriptionKey@@@3@@std@@V?$allocator@U?$pair@$$CBUEffectDescriptionKey@@PEAVCEffectCompilationTask@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUEffectDescriptionKey@@PEAVCEffectCompilationTask@@@std@@@std@@@std@@@2@AEBUEffectDescriptionKey@@@Z @ 0x1800860F8 (-lower_bound@-$_Hash@V-$_Umap_traits@UEffectDescriptionKey@@PEAVCEffectCompilationTask@@V-$_Uhas.c)
 *     ?AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z @ 0x1800950C8 (-AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z.c)
 *     ?InternalRelease@?$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x1800BB1A4 (-InternalRelease@-$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ModuleFailFastForHRESULT @ 0x1800C584C (ModuleFailFastForHRESULT.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?erase@?$_Hash@V?$_Umap_traits@UEffectDescriptionKey@@PEAVCEffectCompilationTask@@V?$_Uhash_compare@UEffectDescriptionKey@@U?$hash@UEffectDescriptionKey@@@std@@U?$equal_to@UEffectDescriptionKey@@@3@@std@@V?$allocator@U?$pair@$$CBUEffectDescriptionKey@@PEAVCEffectCompilationTask@@@std@@@4@$0A@@std@@@std@@QEAA_KAEBUEffectDescriptionKey@@@Z @ 0x1801321B8 (-erase@-$_Hash@V-$_Umap_traits@UEffectDescriptionKey@@PEAVCEffectCompilationTask@@V_ea_1801321B8.c)
 *     McTemplateU0pdsddt @ 0x180132298 (McTemplateU0pdsddt.c)
 */

__int64 __fastcall CEffectCompilationService::BeginCompile(
        HANDLE *this,
        struct CCompiledEffectTemplate *a2,
        struct Windows::UI::Composition::IEffectDescription *a3,
        struct CEffectCompilationTask **a4)
{
  __int64 v4; // rax
  char v6; // di
  struct CEffectCompilationTask **v7; // r13
  struct CCompiledEffectTemplate *v9; // rsi
  struct _RTL_CRITICAL_SECTION **v10; // r12
  PTP_WORK *v11; // rbx
  __int64 v12; // rcx
  unsigned int v13; // edx
  unsigned int v14; // eax
  signed int v15; // edi
  signed int v16; // eax
  __int64 *v17; // r14
  unsigned int v18; // edx
  __int64 v19; // rcx
  _QWORD *v20; // r8
  unsigned int v21; // edx
  unsigned int v22; // eax
  __int64 v23; // r9
  __int64 v24; // r8
  __int64 v25; // rcx
  struct CEffectCompilationTask *v26; // rax
  PVOID *v28; // rax
  CEffectCompilationTask *v29; // rax
  CEffectCompilationTask *v30; // rax
  PTP_WORK ThreadpoolWork; // rax
  signed int LastError; // eax
  const char *v33; // r13
  __int64 v34; // rcx
  int v35; // r12d
  char v36; // si
  char v37; // di
  char v38; // al
  int v39; // edx
  int v40; // ecx
  signed int v41; // eax
  struct _RTL_CRITICAL_SECTION *v42[2]; // [rsp+40h] [rbp-28h] BYREF
  int v43; // [rsp+50h] [rbp-18h] BYREF
  struct Windows::UI::Composition::IEffectDescription *v44; // [rsp+58h] [rbp-10h]
  void *retaddr; // [rsp+A8h] [rbp+40h]
  PVOID v46; // [rsp+B0h] [rbp+48h] BYREF
  struct CCompiledEffectTemplate *v47; // [rsp+B8h] [rbp+50h]
  PVOID pv; // [rsp+C0h] [rbp+58h] BYREF
  struct CEffectCompilationTask **v49; // [rsp+C8h] [rbp+60h]

  v49 = a4;
  v47 = a2;
  v4 = *(_QWORD *)a3;
  pv = 0LL;
  v6 = 1;
  LOBYTE(v46) = 1;
  v7 = a4;
  v44 = a3;
  v9 = a2;
  v10 = (struct _RTL_CRITICAL_SECTION **)(this + 14);
  v43 = (*(__int64 (__fastcall **)(struct Windows::UI::Composition::IEffectDescription *))(v4 + 128))(a3);
  std::_Hash<std::_Umap_traits<EffectDescriptionKey,CEffectCompilationTask *,std::_Uhash_compare<EffectDescriptionKey,std::hash<EffectDescriptionKey>,std::equal_to<EffectDescriptionKey>>,std::allocator<std::pair<EffectDescriptionKey const,CEffectCompilationTask *>>,0>>::lower_bound(
    v10,
    v42,
    &v43);
  if ( v42[0] == *v10 )
  {
    v29 = (CEffectCompilationTask *)WPF::ProcessHeapImpl::AllocClear(0x68uLL);
    if ( !v29 )
      ModuleFailFastForHRESULT(2147942414LL, retaddr);
    v30 = CEffectCompilationTask::CEffectCompilationTask(v29, (struct CEffectCompilationService *)this, a3);
    Microsoft::WRL::ComPtr<CEffectCompilationTask>::operator=(&pv, v30);
    v11 = (PTP_WORK *)pv;
    if ( !pv )
    {
      v15 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x8007000E, 0x8Cu);
      return (unsigned int)v15;
    }
    if ( CCommonRegistryData::m_fEnableEffectCaching )
    {
      v46 = pv;
      std::_Hash<std::_Umap_traits<EffectDescriptionKey,CEffectCompilationTask *,std::_Uhash_compare<EffectDescriptionKey,std::hash<EffectDescriptionKey>,std::equal_to<EffectDescriptionKey>>,std::allocator<std::pair<EffectDescriptionKey const,CEffectCompilationTask *>>,0>>::emplace<EffectDescriptionKey &,CEffectCompilationTask *>(
        this + 14,
        v42,
        &v43,
        &v46);
    }
    ThreadpoolWork = CreateThreadpoolWork(lambda_150d5d81640f42c693c65612364f9ad2_::_lambda_invoker_cdecl_, v11, 0LL);
    v11[7] = ThreadpoolWork;
    if ( ThreadpoolWork )
    {
      v15 = 0;
    }
    else
    {
      LastError = GetLastError();
      v15 = LastError;
      if ( LastError > 0 )
        v15 = (unsigned __int16)LastError | 0x80070000;
    }
    if ( v15 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v15, 0x93u);
      goto LABEL_23;
    }
    v6 = 0;
    LOBYTE(v46) = 0;
  }
  else
  {
    Microsoft::WRL::ComPtr<CEffectCompilationTask>::operator=(&pv, v42[0]->SpinCount);
    v11 = (PTP_WORK *)pv;
    CEffectCompilationService::TryReviveDeadTask(
      (CEffectCompilationService *)this,
      (const struct CEffectCompilationTask *)pv);
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
  {
    pv = 0LL;
    v33 = "null";
    Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease(&pv);
    if ( (*(int (__fastcall **)(struct Windows::UI::Composition::IEffectDescription *, PVOID *))(*(_QWORD *)a3 + 112LL))(
           a3,
           &pv) >= 0 )
      v33 = (const char *)(*(__int64 (__fastcall **)(PVOID))(*(_QWORD *)pv + 16LL))(pv);
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    {
      v34 = *((_QWORD *)v9 + 6);
      if ( v34 )
        v35 = *(_DWORD *)(v34 + 68);
      else
        v35 = 0;
      v36 = v6;
      v37 = (*(__int64 (__fastcall **)(struct Windows::UI::Composition::IEffectDescription *))(*(_QWORD *)a3 + 48LL))(a3);
      v38 = (*(__int64 (__fastcall **)(struct Windows::UI::Composition::IEffectDescription *))(*(_QWORD *)a3 + 104LL))(a3);
      McTemplateU0pdsddt(v40, v39, (_DWORD)v11, v35, (__int64)v33, v38, v37, v36);
      v9 = v47;
      v10 = (struct _RTL_CRITICAL_SECTION **)(this + 14);
    }
    Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease(&pv);
    v7 = v49;
  }
  v12 = *((unsigned int *)v11 + 10);
  v13 = (unsigned int)v46;
  pv = v9;
  v14 = v12 + 1;
  if ( (int)v12 + 1 >= (unsigned int)v12 )
    v13 = v12 + 1;
  v15 = v14 < (unsigned int)v12 ? 0x80070216 : 0;
  if ( v14 < (unsigned int)v12 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v15, 0xB5u);
  }
  else if ( v13 <= *((_DWORD *)v11 + 9) )
  {
    *((_QWORD *)v11[2] + v12) = pv;
    *((_DWORD *)v11 + 10) = v13;
  }
  else
  {
    v16 = DynArrayImpl<0>::AddMultipleAndSet((__int64)(v11 + 2), 8u, 1, &pv);
    v15 = v16;
    if ( v16 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v16, 0xC0u);
  }
  if ( v15 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v15, 0x80u);
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v15, 0xB0u);
  }
  else
  {
    v42[0] = (struct _RTL_CRITICAL_SECTION *)(this + 4);
    EnterCriticalSection((LPCRITICAL_SECTION)(this + 4));
    v17 = (__int64 *)(this + 10);
    v18 = 0;
    v19 = *((unsigned int *)this + 26);
    v20 = this[10];
    if ( (_DWORD)v19 )
    {
      v28 = (PVOID *)this[10];
      while ( v11 != *v28 )
      {
        ++v18;
        ++v28;
        if ( v18 >= (unsigned int)v19 )
          goto LABEL_12;
      }
      goto LABEL_20;
    }
LABEL_12:
    v21 = (unsigned int)v46;
    v22 = v19 + 1;
    pv = v11;
    if ( (int)v19 + 1 >= (unsigned int)v19 )
      v21 = v19 + 1;
    v15 = v22 < (unsigned int)v19 ? 0x80070216 : 0;
    if ( v22 < (unsigned int)v19 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v15, 0xB5u);
    }
    else if ( v21 > *((_DWORD *)this + 25) )
    {
      v41 = DynArrayImpl<0>::AddMultipleAndSet((__int64)(this + 10), 8u, 1, &pv);
      v15 = v41;
      if ( v41 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v41, 0xC0u);
    }
    else
    {
      v20[v19] = pv;
      *((_DWORD *)this + 26) = v21;
    }
    if ( v15 >= 0 )
    {
      if ( *((_BYTE *)v11 + 92) )
      {
        v23 = *v17;
        v24 = *((unsigned int *)this + 19);
        v25 = *(_QWORD *)(*v17 + 8LL * (unsigned int)(*((_DWORD *)this + 26) - 1));
        *(_QWORD *)(v23 + 8LL * (unsigned int)(*((_DWORD *)this + 26) - 1)) = *(_QWORD *)(*v17 + 8 * v24);
        *(_QWORD *)(v23 + 8 * v24) = v25;
        ++*((_DWORD *)this + 19);
        SetEvent(this[3]);
      }
LABEL_20:
      CGuard<CCriticalSection>::~CGuard<CCriticalSection>(v42);
      if ( !(_BYTE)v46 )
        SubmitThreadpoolWork(v11[7]);
      v26 = (struct CEffectCompilationTask *)v11;
      v11 = 0LL;
      *v7 = v26;
      goto LABEL_23;
    }
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v15, 0xB8u);
    CGuard<CCriticalSection>::~CGuard<CCriticalSection>(v42);
  }
LABEL_23:
  if ( v15 < 0 )
  {
    if ( !v11 )
      return (unsigned int)v15;
    std::_Hash<std::_Umap_traits<EffectDescriptionKey,CEffectCompilationTask *,std::_Uhash_compare<EffectDescriptionKey,std::hash<EffectDescriptionKey>,std::equal_to<EffectDescriptionKey>>,std::allocator<std::pair<EffectDescriptionKey const,CEffectCompilationTask *>>,0>>::erase(
      v10,
      &v43);
  }
  if ( v11 )
    (*((void (__fastcall **)(PTP_WORK *))*v11 + 1))(v11);
  return (unsigned int)v15;
}
