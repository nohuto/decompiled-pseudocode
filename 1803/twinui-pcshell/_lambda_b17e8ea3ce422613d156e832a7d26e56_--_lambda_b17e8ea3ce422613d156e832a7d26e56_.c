/*
 * XREFs of _lambda_b17e8ea3ce422613d156e832a7d26e56_::_lambda_b17e8ea3ce422613d156e832a7d26e56_ @ 0x1800A0340
 * Callers:
 *     ?AddCallback@MonitorFrame@@AEAAXXZ @ 0x180208C30 (-AddCallback@MonitorFrame@@AEAAXXZ.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180003FA4 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 */

__int64 *__fastcall lambda_b17e8ea3ce422613d156e832a7d26e56_::_lambda_b17e8ea3ce422613d156e832a7d26e56_(
        __int64 *a1,
        __int64 *a2)
{
  *a1 = *a2;
  Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef(a1);
  return a1;
}
