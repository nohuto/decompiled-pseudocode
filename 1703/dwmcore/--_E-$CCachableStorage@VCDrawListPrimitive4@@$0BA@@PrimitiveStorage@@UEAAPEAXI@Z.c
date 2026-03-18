/*
 * XREFs of ??_E?$CCachableStorage@VCDrawListPrimitive4@@$0BA@@PrimitiveStorage@@UEAAPEAXI@Z @ 0x1800AECC0
 * Callers:
 *     ?Render@CHWCallbackRenderer@@UEAAJXZ @ 0x18008E060 (-Render@CHWCallbackRenderer@@UEAAJXZ.c)
 *     ??_GCHWDrawListEntry@@EEAAPEAXI@Z @ 0x1800AB6D0 (--_GCHWDrawListEntry@@EEAAPEAXI@Z.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18004F8CC (--2@YAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1800D50A8 (ModuleFailFastForHRESULT.c)
 */

_QWORD *__fastcall PrimitiveStorage::CCachableStorage<CDrawListPrimitive4,16>::`vector deleting destructor'(
        _QWORD *lpMem,
        char a2)
{
  LPVOID Value; // rbx
  _QWORD *v5; // rax
  void *retaddr; // [rsp+38h] [rbp+0h]

  --CHWDrawListEngineMetrics::s_cDrawListPrimitives;
  if ( (a2 & 1) != 0 )
  {
    Value = TlsGetValue(CThreadContext::s_dwTlsIndex);
    if ( !Value )
    {
      v5 = operator new(0x98uLL);
      Value = v5;
      if ( v5 )
      {
        *v5 = 0LL;
        v5[1] = 0LL;
        v5[2] = 0LL;
        v5[3] = 0LL;
        v5[4] = 0LL;
        v5[5] = 0LL;
        v5[6] = 0LL;
        v5[7] = 0LL;
        v5[8] = 0LL;
        v5[9] = 0LL;
        v5[10] = 0LL;
        v5[11] = 0LL;
        v5[12] = 0LL;
        v5[13] = 0LL;
        v5[14] = 0LL;
        v5[15] = 0LL;
        v5[16] = 0LL;
        v5[17] = 0LL;
        v5[18] = 0LL;
      }
      else
      {
        Value = 0LL;
      }
      if ( !Value )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x42u);
        ModuleFailFastForHRESULT(2147942414LL, retaddr);
        __debugbreak();
      }
      TlsSetValue(CThreadContext::s_dwTlsIndex, Value);
    }
    if ( *((_DWORD *)Value + 15) >= *((_DWORD *)Value + 14) )
    {
      WPF::ProcessHeapImpl::Free(lpMem);
    }
    else
    {
      *lpMem = *((_QWORD *)Value + 8);
      ++*((_DWORD *)Value + 15);
      *((_QWORD *)Value + 8) = lpMem;
    }
  }
  return lpMem;
}
