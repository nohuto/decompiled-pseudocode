/*
 * XREFs of ??_E?$CCachableStorage@VCDrawListPrimitive4@@$0BA@@PrimitiveStorage@@UEAAPEAXI@Z @ 0x1800B3C40
 * Callers:
 *     ?Render@CHWCallbackRenderer@@UEAAJXZ @ 0x18001BBE0 (-Render@CHWCallbackRenderer@@UEAAJXZ.c)
 *     ??_GCHWDrawListEntry@@EEAAPEAXI@Z @ 0x180023CF0 (--_GCHWDrawListEntry@@EEAAPEAXI@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18000A3E8 (--2@YAPEAX_K@Z.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1800C584C (ModuleFailFastForHRESULT.c)
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
      v5 = operator new(0xA8uLL);
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
        v5[19] = 0LL;
        v5[20] = 0LL;
      }
      else
      {
        Value = 0LL;
      }
      if ( !Value )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x8007000E, 0x42u);
        ModuleFailFastForHRESULT(2147942414LL, retaddr);
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
