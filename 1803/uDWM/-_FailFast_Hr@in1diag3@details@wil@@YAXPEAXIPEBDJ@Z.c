/*
 * XREFs of ?_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180070208
 * Callers:
 *     ??0CAnalogCompositorManager@@AEAA@XZ @ 0x1800316A0 (--0CAnalogCompositorManager@@AEAA@XZ.c)
 *     ??0HolographicDriverDetectedWatcher@Mirage@Windows@@QEAA@XZ @ 0x180031DF8 (--0HolographicDriverDetectedWatcher@Mirage@Windows@@QEAA@XZ.c)
 *     _lambda_f1fd7dcd3a18171c461af661371627e6_::operator() @ 0x18006FB88 (_lambda_f1fd7dcd3a18171c461af661371627e6_--operator().c)
 *     ?OnHolographicDisplayCalibrationDriverDetected@CAnalogCompositorManager@@AEAAXXZ @ 0x18006FE64 (-OnHolographicDisplayCalibrationDriverDetected@CAnalogCompositorManager@@AEAAXXZ.c)
 * Callees:
 *     ?ReportFailure_Hr@details@wil@@YAXPEAXIPEBD110W4FailureType@2@J@Z @ 0x18006E740 (-ReportFailure_Hr@details@wil@@YAXPEAXIPEBD110W4FailureType@2@J@Z.c)
 */

void __fastcall wil::details::in1diag3::_FailFast_Hr(
        wil::details::in1diag3 *this,
        void *a2,
        __int64 a3,
        const char *a4)
{
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  wil::details::ReportFailure_Hr((__int64)this, (unsigned int)a2, a3, 0LL, 0LL, retaddr, 3, (unsigned int)a4);
}
