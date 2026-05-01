/*
 * XREFs of ?SecurityShim_SharedMessagePortSecurityCleanup@@YAXPEAX@Z @ 0x1802FB9F8
 * Callers:
 *     ?Initialize@SharedMessagePortRefPtr@@QEAAJW4InputCapability@@@Z @ 0x1802FB758 (-Initialize@SharedMessagePortRefPtr@@QEAAJW4InputCapability@@@Z.c)
 *     wil::details::lambda_call__lambda_26a40d8ff18b49dcc861860eae32045c___::_lambda_call__lambda_26a40d8ff18b49dcc861860eae32045c___ @ 0x18030B970 (wil--details--lambda_call__lambda_26a40d8ff18b49dcc861860eae32045c___--_lambda_call__lambda_26a4.c)
 *     ?Initialize@EyeControlApp@@QEAAJPEAUIEyeControlManager@@@Z @ 0x18030B990 (-Initialize@EyeControlApp@@QEAAJPEAUIEyeControlManager@@@Z.c)
 * Callees:
 *     ?IsPhone@@YA_NXZ @ 0x1802FB940 (-IsPhone@@YA_NXZ.c)
 */

void __fastcall SecurityShim_SharedMessagePortSecurityCleanup(void *a1)
{
  if ( IsPhone() )
    FreeTransientObjectSecurityDescriptor(a1);
  else
    LocalFree(a1);
}
