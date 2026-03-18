/*
 * XREFs of ?Compile_WorkerThread@CEffectCompilationTask@@AEAAXXZ @ 0x180037500
 * Callers:
 *     _lambda_150d5d81640f42c693c65612364f9ad2_::_lambda_invoker_cdecl_ @ 0x1800CA110 (_lambda_150d5d81640f42c693c65612364f9ad2_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x18001F244 (-InternalRelease@-$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?OnTaskCompleted_AnyThread@CEffectCompilationService@@AEAAXPEAVCEffectCompilationTask@@_N@Z @ 0x180035038 (-OnTaskCompleted_AnyThread@CEffectCompilationService@@AEAAXPEAVCEffectCompilationTask@@_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??0CCompiledEffectCache@@QEAA@PEAUICompiledEffect@Composition@UI@Windows@@PEAX@Z @ 0x1800D5C38 (--0CCompiledEffectCache@@QEAA@PEAUICompiledEffect@Composition@UI@Windows@@PEAX@Z.c)
 *     ??_GCCompiledEffectCache@@QEAAPEAXI@Z @ 0x18016CDC4 (--_GCCompiledEffectCache@@QEAAPEAXI@Z.c)
 *     ?GetRestrictedErrorDescription@CEffectCompilationTask@@SAJPEAPEAG@Z @ 0x18016CEA0 (-GetRestrictedErrorDescription@CEffectCompilationTask@@SAJPEAPEAG@Z.c)
 *     McTemplateU0p @ 0x18016CFBC (McTemplateU0p.c)
 */

void __fastcall CEffectCompilationTask::Compile_WorkerThread(CEffectCompilationTask *this)
{
  __int64 v2; // rcx
  int v3; // esi
  CCompiledEffectCache *v4; // rax
  unsigned int v5; // edx
  CCompiledEffectCache *v6; // rcx
  CEffectCompilationService *v7; // rcx
  OLECHAR *v8; // rbp
  DWORD LastError; // ebx
  struct Windows::UI::Composition::ICompiledEffect *v10; // [rsp+50h] [rbp+8h] BYREF

  v10 = 0LL;
  SetRestrictedErrorInfo(0LL);
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    McTemplateU0p(v2, &EVTDESC_COMPILE_EFFECT_Start, this);
  Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease((__int64 *)&v10);
  v3 = CompileEffectDescription(*((_QWORD *)this + 6), &v10);
  if ( v3 < 0 )
  {
    v8 = (OLECHAR *)*((_QWORD *)this + 10);
    if ( v8 )
    {
      LastError = GetLastError();
      SysFreeString(v8);
      SetLastError(LastError);
    }
    *((_QWORD *)this + 10) = 0LL;
    CEffectCompilationTask::GetRestrictedErrorDescription((unsigned __int16 **)this + 10);
  }
  else
  {
    v4 = (CCompiledEffectCache *)HeapAlloc(WPF::g_processHeap, 0, 0x28uLL);
    if ( v4 )
      v4 = CCompiledEffectCache::CCompiledEffectCache(v4, v10, this);
    v6 = (CCompiledEffectCache *)*((_QWORD *)this + 9);
    *((_QWORD *)this + 9) = v4;
    if ( v6 )
    {
      CCompiledEffectCache::`scalar deleting destructor'(v6, v5);
      v4 = (CCompiledEffectCache *)*((_QWORD *)this + 9);
    }
    if ( !v4 )
    {
      v3 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0xBAu);
    }
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    McTemplateU0p(v6, &EVTDESC_COMPILE_EFFECT_Stop, this);
  v7 = (CEffectCompilationService *)*((_QWORD *)this + 1);
  *((_DWORD *)this + 22) = v3;
  *((_DWORD *)this + 16) = (v3 >> 31) + 3;
  CEffectCompilationService::OnTaskCompleted_AnyThread(v7, this, 0);
  Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease((__int64 *)&v10);
}
