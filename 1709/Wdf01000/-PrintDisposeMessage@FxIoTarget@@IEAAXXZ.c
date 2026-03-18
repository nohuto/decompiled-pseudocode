/*
 * XREFs of ?PrintDisposeMessage@FxIoTarget@@IEAAXXZ @ 0x1C008851C
 * Callers:
 *     ?DecrementIoCount@FxIoTarget@@IEAAXXZ @ 0x1C000610C (-DecrementIoCount@FxIoTarget@@IEAAXXZ.c)
 * Callees:
 *     WPP_IFR_SF_qq @ 0x1C00140BC (WPP_IFR_SF_qq.c)
 */

void __fastcall FxIoTarget::PrintDisposeMessage(FxIoTarget *this)
{
  const void *_a1; // rdx
  bool v2; // zf
  FxCREvent *_a2; // rax
  _FX_DRIVER_GLOBALS *m_Globals; // rcx

  _a1 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
  v2 = this->m_ObjectSize == 0;
  _a2 = this->m_DisposeEvent;
  m_Globals = this->m_Globals;
  if ( v2 )
    _a1 = 0LL;
  WPP_IFR_SF_qq(m_Globals, 4u, 0xEu, 0xAu, WPP_FxIoTarget_cpp_Traceguids, _a1, _a2);
}
