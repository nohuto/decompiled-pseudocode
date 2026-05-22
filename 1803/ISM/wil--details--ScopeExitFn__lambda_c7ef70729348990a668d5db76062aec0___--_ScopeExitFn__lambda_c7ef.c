/*
 * XREFs of wil::details::ScopeExitFn__lambda_c7ef70729348990a668d5db76062aec0___::_ScopeExitFn__lambda_c7ef70729348990a668d5db76062aec0___ @ 0x18007648C
 * Callers:
 *     _GazeHidDevice::TryUpdateDisplayMapping_::_1_::dtor$0 @ 0x1800E74A1 (_GazeHidDevice--TryUpdateDisplayMapping_--_1_--dtor$0.c)
 *     _GazeHidParser::CreateReportForProperty_::_1_::dtor$0 @ 0x1800E74AD (_GazeHidParser--CreateReportForProperty_--_1_--dtor$0.c)
 *     _GazeHidParser::Initialize_::_1_::dtor$0 @ 0x1800E92BA (_GazeHidParser--Initialize_--_1_--dtor$0.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800E1CF0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall wil::details::ScopeExitFn__lambda_c7ef70729348990a668d5db76062aec0___::_ScopeExitFn__lambda_c7ef70729348990a668d5db76062aec0___(
        __int64 a1)
{
  void *v1; // rcx

  if ( *(_BYTE *)(a1 + 8) )
  {
    *(_BYTE *)(a1 + 8) = 0;
    v1 = **(void ***)a1;
    if ( v1 )
      operator delete(v1);
  }
}
