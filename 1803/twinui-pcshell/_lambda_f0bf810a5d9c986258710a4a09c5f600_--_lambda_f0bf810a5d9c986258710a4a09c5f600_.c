/*
 * XREFs of _lambda_f0bf810a5d9c986258710a4a09c5f600_::_lambda_f0bf810a5d9c986258710a4a09c5f600_ @ 0x1800A11B4
 * Callers:
 *     ?OnCommand@TouchKeyboardExperienceManager@@UEAAJPEAUIApplicationFrame@@PEBU_GUID@@@Z @ 0x18023F580 (-OnCommand@TouchKeyboardExperienceManager@@UEAAJPEAUIApplicationFrame@@PEBU_GUID@@@Z.c)
 * Callees:
 *     ??0WeakRef@WRL@Microsoft@@QEAA@AEBV?$ComPtr@UIWeakReference@@@12@@Z @ 0x1800F5C4C (--0WeakRef@WRL@Microsoft@@QEAA@AEBV-$ComPtr@UIWeakReference@@@12@@Z.c)
 */

_QWORD *__fastcall lambda_f0bf810a5d9c986258710a4a09c5f600_::_lambda_f0bf810a5d9c986258710a4a09c5f600_(
        _QWORD *a1,
        _QWORD *a2,
        _QWORD *a3,
        __int64 a4,
        _QWORD *a5)
{
  _QWORD *result; // rax

  *a1 = *a2;
  a1[1] = *a3;
  Microsoft::WRL::WeakRef::WeakRef(a1 + 2, a4);
  result = a1;
  a1[3] = *a5;
  return result;
}
