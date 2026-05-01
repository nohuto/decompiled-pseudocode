/*
 * XREFs of CDCompBatchAnimationCallback__lambda_d996df4ae651642ba189a9f5cbef4ddb___::_CDCompBatchAnimationCallback__lambda_d996df4ae651642ba189a9f5cbef4ddb___ @ 0x1802DA098
 * Callers:
 *     ??_E?$CDCompBatchAnimationCallback@V_lambda_d996df4ae651642ba189a9f5cbef4ddb_@@@@UEAAPEAXI@Z @ 0x1802DA3A0 (--_E-$CDCompBatchAnimationCallback@V_lambda_d996df4ae651642ba189a9f5cbef4ddb_@@@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VWindowArrangementView@@@WRL@Microsoft@@IEAAKXZ @ 0x1802DBD14 (-InternalRelease@-$ComPtr@VWindowArrangementView@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall CDCompBatchAnimationCallback__lambda_d996df4ae651642ba189a9f5cbef4ddb___::_CDCompBatchAnimationCallback__lambda_d996df4ae651642ba189a9f5cbef4ddb___(
        __int64 a1)
{
  __int64 result; // rax

  *(_QWORD *)a1 = off_180349010;
  result = Microsoft::WRL::ComPtr<WindowArrangementView>::InternalRelease(a1 + 16);
  *(_DWORD *)(a1 + 12) = -1073741823;
  return result;
}
