/*
 * XREFs of wil::details::ScopeExitFn__lambda_fba3040b98e5f3f806ab289a5414adfb___::_ScopeExitFn__lambda_fba3040b98e5f3f806ab289a5414adfb___ @ 0x1800C8AA0
 * Callers:
 *     _GazeHidParser::FindMonitorForEdid_::_1_::dtor$0 @ 0x1800D2455 (_GazeHidParser--FindMonitorForEdid_--_1_--dtor$0.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800CBCC8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall wil::details::ScopeExitFn__lambda_fba3040b98e5f3f806ab289a5414adfb___::_ScopeExitFn__lambda_fba3040b98e5f3f806ab289a5414adfb___(
        __int64 a1)
{
  void *v2; // rcx
  void *v3; // rcx

  if ( *(_BYTE *)(a1 + 16) )
  {
    *(_BYTE *)(a1 + 16) = 0;
    v2 = **(void ***)a1;
    if ( v2 )
      operator delete(v2);
    v3 = **(void ***)(a1 + 8);
    if ( v3 )
      operator delete(v3);
  }
}
