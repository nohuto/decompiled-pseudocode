/*
 * XREFs of ?DwmCoreDllMain@@YAHPEAUHINSTANCE__@@K@Z @ 0x1800CEF68
 * Callers:
 *     DllMain @ 0x1800DCF5C (DllMain.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?Startup@@YAJXZ @ 0x1800CE7C4 (-Startup@@YAJXZ.c)
 *     ?FreeCurrent@CThreadContext@@SAXXZ @ 0x1800CEFC8 (-FreeCurrent@CThreadContext@@SAXXZ.c)
 *     ?RegisterDwmGuidWithEtw@@YAXXZ @ 0x1800CF0B4 (-RegisterDwmGuidWithEtw@@YAXXZ.c)
 *     McGenEventUnregister @ 0x1801C5A34 (McGenEventUnregister.c)
 *     ?CleanupD3DReferences@CD3DModuleLoaderInternal@@AEAAXXZ @ 0x1801C8B4C (-CleanupD3DReferences@CD3DModuleLoaderInternal@@AEAAXXZ.c)
 */

__int64 __fastcall DwmCoreDllMain(HINSTANCE a1, int a2)
{
  unsigned int v2; // ebx
  int v3; // edx
  int v5; // eax
  int v6; // ebx
  CD3DModuleLoaderInternal *v7; // rcx

  v2 = 1;
  if ( a2 )
  {
    v3 = a2 - 1;
    if ( v3 )
    {
      if ( v3 == 2 )
        CThreadContext::FreeCurrent();
    }
    else
    {
      CThreadContext::s_dwTlsIndex = TlsAlloc();
      if ( CThreadContext::s_dwTlsIndex == -1 )
      {
        v6 = -2147024882;
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x49u);
      }
      else
      {
        v5 = Startup();
        v6 = v5;
        if ( v5 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, 0x4Bu);
        }
        else
        {
          v6 = 0;
          RegisterDwmGuidWithEtw();
        }
      }
      return v6 >= 0;
    }
  }
  else
  {
    McGenEventUnregister(a1);
    EventUnregister(RegHandle);
    RegHandle = 0LL;
    dword_1802D3FE0 = 0;
    EventUnregister(qword_1802D3F80);
    qword_1802D3F80 = 0LL;
    dword_1802D3F60 = 0;
    EventUnregister(qword_1802D3FC0);
    qword_1802D3FC0 = 0LL;
    dword_1802D3FA0 = 0;
    EventUnregister(qword_1802D3F40);
    qword_1802D3F40 = 0LL;
    hProvider = 0;
    CD3DModuleLoaderInternal::CleanupD3DReferences(v7);
    if ( CThreadContext::s_dwTlsIndex != -1 )
    {
      CThreadContext::FreeCurrent();
      TlsFree(CThreadContext::s_dwTlsIndex);
      CThreadContext::s_dwTlsIndex = -1;
    }
  }
  return v2;
}
