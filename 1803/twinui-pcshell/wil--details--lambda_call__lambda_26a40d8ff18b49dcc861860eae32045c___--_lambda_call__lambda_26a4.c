/*
 * XREFs of wil::details::lambda_call__lambda_26a40d8ff18b49dcc861860eae32045c___::_lambda_call__lambda_26a40d8ff18b49dcc861860eae32045c___ @ 0x18030B970
 * Callers:
 *     _EyeControlApp::Initialize_::_1_::dtor$1 @ 0x18030BC2F (_EyeControlApp--Initialize_--_1_--dtor$1.c)
 * Callees:
 *     ?SecurityShim_SharedMessagePortSecurityCleanup@@YAXPEAX@Z @ 0x1802FB9F8 (-SecurityShim_SharedMessagePortSecurityCleanup@@YAXPEAX@Z.c)
 */

void __fastcall wil::details::lambda_call__lambda_26a40d8ff18b49dcc861860eae32045c___::_lambda_call__lambda_26a40d8ff18b49dcc861860eae32045c___(
        __int64 a1)
{
  if ( *(_BYTE *)(a1 + 8) )
  {
    *(_BYTE *)(a1 + 8) = 0;
    SecurityShim_SharedMessagePortSecurityCleanup(**(void ***)a1);
  }
}
