/*
 * XREFs of CDCompBatchAnimationCallback__lambda_55e0f220ed6030f2589a6e9858a32f89___::_CDCompBatchAnimationCallback__lambda_55e0f220ed6030f2589a6e9858a32f89___ @ 0x1802979A8
 * Callers:
 *     ??_G?$CDCompBatchAnimationCallback@V_lambda_55e0f220ed6030f2589a6e9858a32f89_@@@@UEAAPEAXI@Z @ 0x180297CA0 (--_G-$CDCompBatchAnimationCallback@V_lambda_55e0f220ed6030f2589a6e9858a32f89_@@@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18006D640 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall CDCompBatchAnimationCallback__lambda_55e0f220ed6030f2589a6e9858a32f89___::_CDCompBatchAnimationCallback__lambda_55e0f220ed6030f2589a6e9858a32f89___(
        __int64 a1)
{
  __int64 result; // rax

  *(_QWORD *)a1 = off_1803423A8;
  result = Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((CWinRTApplicationView **)(a1 + 16));
  *(_DWORD *)(a1 + 12) = -1073741823;
  return result;
}
