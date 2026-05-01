/*
 * XREFs of _lambda_4d39dc8836a747feab7d20b0af3bfeac_::__lambda_4d39dc8836a747feab7d20b0af3bfeac_ @ 0x1800F8E28
 * Callers:
 *     _CIAMGlobals::QueueViewManagementTask__lambda_2dd20bac4e5d2f5df658143d4108a795____::_1_::dtor$1 @ 0x1800B12EC (_CIAMGlobals--QueueViewManagementTask__lambda_2dd20bac4e5d2f5df658143d4108a795____--_1_--dtor$1.c)
 *     _CIAMGlobals::QueueViewManagementTask__lambda_01ecc1ce60960621f93f7968cdbd2e3b____::_1_::dtor$1 @ 0x180119609 (_CIAMGlobals--QueueViewManagementTask__lambda_01ecc1ce60960621f93f7968cdbd2e3b____--_1_--dtor$1.c)
 *     _CIAMGlobals::QueueViewManagementTask__lambda_17fa972c2310d7312f81a78f2bb80b5c____::_1_::dtor$1 @ 0x1801196DD (_CIAMGlobals--QueueViewManagementTask__lambda_17fa972c2310d7312f81a78f2bb80b5c____--_1_--dtor$1.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIClassicWindow@@@WRL@Microsoft@@IEAAKXZ @ 0x180005208 (-InternalRelease@-$ComPtr@UIClassicWindow@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall lambda_4d39dc8836a747feab7d20b0af3bfeac_::__lambda_4d39dc8836a747feab7d20b0af3bfeac_(__int64 *a1)
{
  Microsoft::WRL::ComPtr<IClassicWindow>::InternalRelease(a1 + 1);
  return Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(a1);
}
