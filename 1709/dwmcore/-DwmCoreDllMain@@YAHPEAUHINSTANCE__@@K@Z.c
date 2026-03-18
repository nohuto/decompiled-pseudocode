/*
 * XREFs of ?DwmCoreDllMain@@YAHPEAUHINSTANCE__@@K@Z @ 0x1800BFF28
 * Callers:
 *     DllMain @ 0x1800C4A28 (DllMain.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?FreeCurrent@CThreadContext@@SAXXZ @ 0x1800BFF58 (-FreeCurrent@CThreadContext@@SAXXZ.c)
 *     McGenEventUnregister @ 0x18018DD84 (McGenEventUnregister.c)
 *     ?Startup@@YAJXZ @ 0x18018E4E8 (-Startup@@YAJXZ.c)
 *     ?RegisterDwmGuidWithEtw@@YAXXZ @ 0x18018EF54 (-RegisterDwmGuidWithEtw@@YAXXZ.c)
 *     ?CleanupD3DReferences@CD3DModuleLoaderInternal@@AEAAXXZ @ 0x180191D64 (-CleanupD3DReferences@CD3DModuleLoaderInternal@@AEAAXXZ.c)
 */

__int64 __fastcall DwmCoreDllMain(HINSTANCE a1, int a2)
{
  unsigned int v2; // ebx
  int v3; // edx
  int v5; // ebx
  signed int v6; // eax
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
        v5 = -2147024882;
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x8007000E, 0x49u);
      }
      else
      {
        v6 = Startup();
        v5 = v6;
        if ( v6 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v6, 0x4Bu);
        }
        else
        {
          v5 = 0;
          RegisterDwmGuidWithEtw();
        }
      }
      return v5 >= 0;
    }
  }
  else
  {
    McGenEventUnregister(a1);
    EventUnregister(RegHandle);
    RegHandle = 0LL;
    dword_18026D7B0 = 0;
    EventUnregister(qword_18026D810);
    qword_18026D810 = 0LL;
    dword_18026D7F0 = 0;
    EventUnregister(qword_18026D790);
    qword_18026D790 = 0LL;
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
