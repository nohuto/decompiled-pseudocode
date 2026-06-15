/*
 * XREFs of ??1CAudioDGModule@@UEAA@XZ @ 0x14001B73C
 * Callers:
 *     _dynamic_atexit_destructor_for___AtlModule__ @ 0x140020C70 (_dynamic_atexit_destructor_for___AtlModule__.c)
 *     ??_GCAudioDGModule@@UEAAPEAXI@Z @ 0x140033CC0 (--_GCAudioDGModule@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?ExecuteObjectMain@CAtlComModule@ATL@@QEAAX_N@Z @ 0x14001AF6C (-ExecuteObjectMain@CAtlComModule@ATL@@QEAAX_N@Z.c)
 *     ?Term@CAtlComModule@ATL@@QEAAXXZ @ 0x14003482C (-Term@CAtlComModule@ATL@@QEAAXXZ.c)
 *     ?Term@CAtlModule@ATL@@QEAAXXZ @ 0x1400348A4 (-Term@CAtlModule@ATL@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall CAudioDGModule::~CAudioDGModule(CAudioDGModule *this)
{
  char *v2; // rcx
  char *v3; // rcx
  ATL::CAtlComModule *v4; // rcx

  *(_QWORD *)this = &CAudioDGModule::`vftable'{for `ATL::CAtlExeModuleT<CAudioDGModule>'};
  *((_QWORD *)this + 13) = &CAudioDGModule::`vftable'{for `IAudioHealthMonitor'};
  v2 = (char *)*((_QWORD *)this + 15);
  if ( (unsigned __int64)(v2 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    CloseHandle(v2);
    *((_QWORD *)this + 15) = 0LL;
  }
  v3 = (char *)*((_QWORD *)this + 16);
  if ( (unsigned __int64)(v3 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    CloseHandle(v3);
    *((_QWORD *)this + 16) = 0LL;
  }
  if ( g_fEventTracingEnabled )
  {
    EtwUnregisterTraceGuids(qword_140061020);
    qword_140061020 = 0LL;
    g_hAEWMITraceHandle = 0LL;
  }
  g_SysFxUtilTlp = 0LL;
  ATL::CAtlComModule::ExecuteObjectMain((ATL::CAtlComModule *)v3, 0);
  ATL::CAtlModule::Term(this);
  ATL::CAtlComModule::Term(v4);
  if ( *((_BYTE *)this + 98) )
    CoUninitialize();
  ATL::CAtlModule::Term(this);
}
