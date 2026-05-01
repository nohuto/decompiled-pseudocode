/*
 * XREFs of CDCompBatchAnimationCallback__lambda_eb168a4251134b138c4e1a8a58dc23dc___::_CDCompBatchAnimationCallback__lambda_eb168a4251134b138c4e1a8a58dc23dc___ @ 0x1802DA0C4
 * Callers:
 *     ??_E?$CDCompBatchAnimationCallback@V_lambda_eb168a4251134b138c4e1a8a58dc23dc_@@@@UEAAPEAXI@Z @ 0x1802DA3D0 (--_E-$CDCompBatchAnimationCallback@V_lambda_eb168a4251134b138c4e1a8a58dc23dc_@@@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VWindowArrangementView@@@WRL@Microsoft@@IEAAKXZ @ 0x1802DBD14 (-InternalRelease@-$ComPtr@VWindowArrangementView@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall CDCompBatchAnimationCallback__lambda_eb168a4251134b138c4e1a8a58dc23dc___::_CDCompBatchAnimationCallback__lambda_eb168a4251134b138c4e1a8a58dc23dc___(
        __int64 a1)
{
  __int64 result; // rax

  *(_QWORD *)a1 = off_180349080;
  result = Microsoft::WRL::ComPtr<WindowArrangementView>::InternalRelease(a1 + 16);
  *(_DWORD *)(a1 + 12) = -1073741823;
  return result;
}
