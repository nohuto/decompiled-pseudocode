/*
 * XREFs of _lambda_5e1669f70f5e626cb13f0ae9b344f394_::_lambda_5e1669f70f5e626cb13f0ae9b344f394_ @ 0x1800A1134
 * Callers:
 *     ?OnInputAppRequestedHide@TouchKeyboardExperienceManager@@QEAAJI_N@Z @ 0x18023F990 (-OnInputAppRequestedHide@TouchKeyboardExperienceManager@@QEAAJI_N@Z.c)
 * Callees:
 *     ??0WeakRef@WRL@Microsoft@@QEAA@AEBV?$ComPtr@UIWeakReference@@@12@@Z @ 0x1800F5C4C (--0WeakRef@WRL@Microsoft@@QEAA@AEBV-$ComPtr@UIWeakReference@@@12@@Z.c)
 */

__int64 __fastcall lambda_5e1669f70f5e626cb13f0ae9b344f394_::_lambda_5e1669f70f5e626cb13f0ae9b344f394_(
        __int64 a1,
        _DWORD *a2,
        _BYTE *a3,
        __int64 a4,
        _QWORD *a5)
{
  __int64 result; // rax

  *(_DWORD *)a1 = *a2;
  *(_BYTE *)(a1 + 4) = *a3;
  Microsoft::WRL::WeakRef::WeakRef(a1 + 8, a4);
  result = a1;
  *(_QWORD *)(a1 + 16) = *a5;
  return result;
}
