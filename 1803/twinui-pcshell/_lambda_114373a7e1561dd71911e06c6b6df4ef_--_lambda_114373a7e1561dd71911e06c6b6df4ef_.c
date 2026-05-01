/*
 * XREFs of _lambda_114373a7e1561dd71911e06c6b6df4ef_::_lambda_114373a7e1561dd71911e06c6b6df4ef_ @ 0x1800A10E0
 * Callers:
 *     ?OnInputAppRequestedShow@TouchKeyboardExperienceManager@@QEAAJIUtagRECT@@_N11@Z @ 0x18023FB50 (-OnInputAppRequestedShow@TouchKeyboardExperienceManager@@QEAAJIUtagRECT@@_N11@Z.c)
 * Callees:
 *     ??0WeakRef@WRL@Microsoft@@QEAA@AEBV?$ComPtr@UIWeakReference@@@12@@Z @ 0x1800F5C4C (--0WeakRef@WRL@Microsoft@@QEAA@AEBV-$ComPtr@UIWeakReference@@@12@@Z.c)
 */

__int64 __fastcall lambda_114373a7e1561dd71911e06c6b6df4ef_::_lambda_114373a7e1561dd71911e06c6b6df4ef_(
        __int64 a1,
        _DWORD *a2,
        _OWORD *a3,
        _BYTE *a4,
        _BYTE *a5,
        _BYTE *a6,
        __int64 a7,
        _QWORD *a8)
{
  __int64 result; // rax

  *(_DWORD *)a1 = *a2;
  *(_OWORD *)(a1 + 4) = *a3;
  *(_BYTE *)(a1 + 20) = *a4;
  *(_BYTE *)(a1 + 21) = *a5;
  *(_BYTE *)(a1 + 22) = *a6;
  Microsoft::WRL::WeakRef::WeakRef(a1 + 24, a7);
  result = a1;
  *(_QWORD *)(a1 + 32) = *a8;
  return result;
}
