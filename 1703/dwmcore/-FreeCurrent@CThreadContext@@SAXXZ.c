/*
 * XREFs of ?FreeCurrent@CThreadContext@@SAXXZ @ 0x1800C6C58
 * Callers:
 *     ?DwmCoreDllMain@@YAHPEAUHINSTANCE__@@K@Z @ 0x1800C6BF8 (-DwmCoreDllMain@@YAHPEAUHINSTANCE__@@K@Z.c)
 * Callees:
 *     ??_GCThreadContext@@AEAAPEAXI@Z @ 0x180185FDC (--_GCThreadContext@@AEAAPEAXI@Z.c)
 */

void CThreadContext::FreeCurrent(void)
{
  CThreadContext *Value; // rax
  unsigned int v1; // edx

  Value = (CThreadContext *)TlsGetValue(CThreadContext::s_dwTlsIndex);
  if ( Value )
  {
    CThreadContext::`scalar deleting destructor'(Value, v1);
    TlsSetValue(CThreadContext::s_dwTlsIndex, 0LL);
  }
}
