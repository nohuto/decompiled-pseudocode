/*
 * XREFs of ?Compile_WorkerThread@CEffectCompilationTask@@AEAAXXZ @ 0x180006090
 * Callers:
 *     _lambda_150d5d81640f42c693c65612364f9ad2_::_lambda_invoker_cdecl_ @ 0x180024470 (_lambda_150d5d81640f42c693c65612364f9ad2_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ?OnTaskCompleted_AnyThread@CEffectCompilationService@@AEAAXPEAVCEffectCompilationTask@@_N@Z @ 0x180005260 (-OnTaskCompleted_AnyThread@CEffectCompilationService@@AEAAXPEAVCEffectCompilationTask@@_N@Z.c)
 *     ??0CCompiledEffectCache@@QEAA@PEAUICompiledEffect@Composition@UI@Windows@@PEAX@Z @ 0x1800183D8 (--0CCompiledEffectCache@@QEAA@PEAUICompiledEffect@Composition@UI@Windows@@PEAX@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     Template_x @ 0x18013BE18 (Template_x.c)
 *     ??_GCCompiledEffectCache@@QEAAPEAXI@Z @ 0x180152C58 (--_GCCompiledEffectCache@@QEAAPEAXI@Z.c)
 *     ?GetRestrictedErrorDescription@CEffectCompilationTask@@SAJPEAPEAG@Z @ 0x180152D3C (-GetRestrictedErrorDescription@CEffectCompilationTask@@SAJPEAPEAG@Z.c)
 */

void __fastcall CEffectCompilationTask::Compile_WorkerThread(CEffectCompilationTask *this)
{
  __int64 v2; // rcx
  int v3; // eax
  int v4; // edi
  CCompiledEffectCache *v5; // rax
  unsigned int v6; // edx
  CCompiledEffectCache *v7; // rsi
  CCompiledEffectCache *v8; // rcx
  CEffectCompilationService *v9; // rcx
  struct Windows::UI::Composition::ICompiledEffect *v10; // rcx
  struct Windows::UI::Composition::ICompiledEffect *v11; // [rsp+40h] [rbp+8h] BYREF

  v11 = 0LL;
  SetRestrictedErrorInfo(0LL);
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    Template_x(v2, &EVTDESC_COMPILE_EFFECT_Start, this);
  v3 = CompileEffectDescription(*((_QWORD *)this + 6), &v11);
  v4 = v3;
  if ( v3 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, 0xB4u);
  }
  else
  {
    v5 = (CCompiledEffectCache *)HeapAlloc(WPF::g_processHeap, 0, 0x28uLL);
    if ( v5 )
      v7 = CCompiledEffectCache::CCompiledEffectCache(v5, v11, this);
    else
      v7 = 0LL;
    v8 = (CCompiledEffectCache *)*((_QWORD *)this + 9);
    if ( v7 != v8 )
    {
      if ( v8 )
        CCompiledEffectCache::`scalar deleting destructor'(v8, v6);
      *((_QWORD *)this + 9) = v7;
    }
    if ( !*((_QWORD *)this + 9) )
    {
      v4 = -2147024882;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0xB8u);
    }
  }
  if ( *((int *)this + 22) < 0 )
    CEffectCompilationTask::GetRestrictedErrorDescription((unsigned __int16 **)this + 10);
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    Template_x(v8, &EVTDESC_COMPILE_EFFECT_Stop, this);
  v9 = (CEffectCompilationService *)*((_QWORD *)this + 1);
  *((_DWORD *)this + 22) = v4;
  *((_DWORD *)this + 16) = (v4 >> 31) + 3;
  CEffectCompilationService::OnTaskCompleted_AnyThread(v9, this, 0);
  v10 = v11;
  if ( v11 )
  {
    v11 = 0LL;
    (*(void (__fastcall **)(struct Windows::UI::Composition::ICompiledEffect *))(*(_QWORD *)v10 + 8LL))(v10);
  }
}
