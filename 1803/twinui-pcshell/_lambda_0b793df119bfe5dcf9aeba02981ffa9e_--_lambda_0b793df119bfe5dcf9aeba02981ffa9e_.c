/*
 * XREFs of _lambda_0b793df119bfe5dcf9aeba02981ffa9e_::_lambda_0b793df119bfe5dcf9aeba02981ffa9e_ @ 0x1800A10A8
 * Callers:
 *     ?OnChromeOffsetsChanged@TouchKeyboardExperienceManager@@UEAAJPEAUIApplicationFrame@@@Z @ 0x18023F370 (-OnChromeOffsetsChanged@TouchKeyboardExperienceManager@@UEAAJPEAUIApplicationFrame@@@Z.c)
 *     ?OnPositionChanged@TouchKeyboardExperienceManager@@UEAAJPEAUIApplicationFrame@@@Z @ 0x18023FCC0 (-OnPositionChanged@TouchKeyboardExperienceManager@@UEAAJPEAUIApplicationFrame@@@Z.c)
 * Callees:
 *     ??0WeakRef@WRL@Microsoft@@QEAA@AEBV?$ComPtr@UIWeakReference@@@12@@Z @ 0x1800F5C4C (--0WeakRef@WRL@Microsoft@@QEAA@AEBV-$ComPtr@UIWeakReference@@@12@@Z.c)
 */

_QWORD *__fastcall lambda_0b793df119bfe5dcf9aeba02981ffa9e_::_lambda_0b793df119bfe5dcf9aeba02981ffa9e_(
        _QWORD *a1,
        _QWORD *a2,
        __int64 a3,
        _QWORD *a4)
{
  *a1 = *a2;
  Microsoft::WRL::WeakRef::WeakRef(a1 + 1, a3);
  a1[2] = *a4;
  return a1;
}
