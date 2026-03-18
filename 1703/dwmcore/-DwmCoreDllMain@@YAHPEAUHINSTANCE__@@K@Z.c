/*
 * XREFs of ?DwmCoreDllMain@@YAHPEAUHINSTANCE__@@K@Z @ 0x1800C6BF8
 * Callers:
 *     DllMain @ 0x1800D45D8 (DllMain.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?FreeCurrent@CThreadContext@@SAXXZ @ 0x1800C6C58 (-FreeCurrent@CThreadContext@@SAXXZ.c)
 *     ?RegisterDwmGuidWithEtw@@YAXXZ @ 0x1800C6C78 (-RegisterDwmGuidWithEtw@@YAXXZ.c)
 *     ?Startup@@YAJXZ @ 0x1800C6E38 (-Startup@@YAJXZ.c)
 *     McGenEventUnregister @ 0x180185C80 (McGenEventUnregister.c)
 *     ?CleanupD3DReferences@CD3DModuleLoaderInternal@@AEAAXXZ @ 0x180188518 (-CleanupD3DReferences@CD3DModuleLoaderInternal@@AEAAXXZ.c)
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
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x49u);
      }
      else
      {
        v5 = Startup();
        v6 = v5;
        if ( v5 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x4Bu);
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
    dword_18023D7F0 = 0;
    EventUnregister(qword_18023D7D0);
    qword_18023D7D0 = 0LL;
    hProvider = 0;
    EventUnregister(qword_18023D740);
    qword_18023D740 = 0LL;
    dword_18023D720 = 0;
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
