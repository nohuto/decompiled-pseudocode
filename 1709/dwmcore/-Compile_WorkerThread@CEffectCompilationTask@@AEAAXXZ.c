/*
 * XREFs of ?Compile_WorkerThread@CEffectCompilationTask@@AEAAXXZ @ 0x180084A40
 * Callers:
 *     _lambda_150d5d81640f42c693c65612364f9ad2_::_lambda_invoker_cdecl_ @ 0x1800C0DC0 (_lambda_150d5d81640f42c693c65612364f9ad2_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?OnTaskCompleted_AnyThread@CEffectCompilationService@@AEAAXPEAVCEffectCompilationTask@@_N@Z @ 0x180083B94 (-OnTaskCompleted_AnyThread@CEffectCompilationService@@AEAAXPEAVCEffectCompilationTask@@_N@Z.c)
 *     ??0CCompiledEffectCache@@QEAA@PEAUICompiledEffect@Composition@UI@Windows@@PEAX@Z @ 0x180085C90 (--0CCompiledEffectCache@@QEAA@PEAUICompiledEffect@Composition@UI@Windows@@PEAX@Z.c)
 *     ?InternalRelease@?$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x1800BB1A4 (-InternalRelease@-$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??_GCCompiledEffectCache@@QEAAPEAXI@Z @ 0x180145644 (--_GCCompiledEffectCache@@QEAAPEAXI@Z.c)
 *     ?GetRestrictedErrorDescription@CEffectCompilationTask@@SAJPEAPEAG@Z @ 0x180145718 (-GetRestrictedErrorDescription@CEffectCompilationTask@@SAJPEAPEAG@Z.c)
 *     McTemplateU0p @ 0x180145834 (McTemplateU0p.c)
 */

void __fastcall CEffectCompilationTask::Compile_WorkerThread(CEffectCompilationTask *this)
{
  __int64 v2; // rcx
  int v3; // esi
  CCompiledEffectCache *v4; // rax
  unsigned int v5; // edx
  CCompiledEffectCache *v6; // rbx
  CCompiledEffectCache *v7; // rcx
  CEffectCompilationService *v8; // rcx
  OLECHAR *v9; // rbp
  DWORD LastError; // ebx
  struct Windows::UI::Composition::ICompiledEffect *v11; // [rsp+50h] [rbp+8h] BYREF

  v11 = 0LL;
  SetRestrictedErrorInfo(0LL);
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    McTemplateU0p(v2, &EVTDESC_COMPILE_EFFECT_Start, this);
  Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease(&v11);
  v3 = CompileEffectDescription(*((_QWORD *)this + 6), &v11);
  if ( v3 < 0 )
  {
    v9 = (OLECHAR *)*((_QWORD *)this + 10);
    if ( v9 )
    {
      LastError = GetLastError();
      SysFreeString(v9);
      SetLastError(LastError);
    }
    *((_QWORD *)this + 10) = 0LL;
    CEffectCompilationTask::GetRestrictedErrorDescription((unsigned __int16 **)this + 10);
  }
  else
  {
    v4 = (CCompiledEffectCache *)HeapAlloc(WPF::g_processHeap, 0, 0x28uLL);
    if ( v4 )
      v6 = CCompiledEffectCache::CCompiledEffectCache(v4, v11, this);
    else
      v6 = 0LL;
    v7 = (CCompiledEffectCache *)*((_QWORD *)this + 9);
    if ( v6 != v7 )
    {
      if ( v7 )
        CCompiledEffectCache::`scalar deleting destructor'(v7, v5);
      *((_QWORD *)this + 9) = v6;
    }
    if ( !*((_QWORD *)this + 9) )
    {
      v3 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x8007000E, 0xBAu);
    }
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    McTemplateU0p(v7, &EVTDESC_COMPILE_EFFECT_Stop, this);
  v8 = (CEffectCompilationService *)*((_QWORD *)this + 1);
  *((_DWORD *)this + 22) = v3;
  *((_DWORD *)this + 16) = (v3 >> 31) + 3;
  CEffectCompilationService::OnTaskCompleted_AnyThread(v8, this, 0);
  Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease(&v11);
}
