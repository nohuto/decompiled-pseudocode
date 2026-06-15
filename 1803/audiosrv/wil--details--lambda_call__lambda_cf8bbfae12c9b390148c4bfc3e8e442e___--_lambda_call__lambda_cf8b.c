/*
 * XREFs of wil::details::lambda_call__lambda_cf8bbfae12c9b390148c4bfc3e8e442e___::_lambda_call__lambda_cf8bbfae12c9b390148c4bfc3e8e442e___ @ 0x180098874
 * Callers:
 *     _CVolumeStrip::RuntimeClassInitialize_::_1_::dtor$7 @ 0x1800669BF (_CVolumeStrip--RuntimeClassInitialize_--_1_--dtor$7.c)
 *     _CVolumeStrip::RuntimeClassInitialize_::_1_::dtor$9 @ 0x1800669EA (_CVolumeStrip--RuntimeClassInitialize_--_1_--dtor$9.c)
 *     _CVolumeStrip::RuntimeClassInitialize_::_1_::dtor$11 @ 0x1800669F6 (_CVolumeStrip--RuntimeClassInitialize_--_1_--dtor$11.c)
 *     _CVolumeStrip::RuntimeClassInitialize_::_1_::dtor$13 @ 0x180066A3D (_CVolumeStrip--RuntimeClassInitialize_--_1_--dtor$13.c)
 *     _CVolumeStrip::RuntimeClassInitialize_::_1_::dtor$15 @ 0x180066A49 (_CVolumeStrip--RuntimeClassInitialize_--_1_--dtor$15.c)
 *     _CVolumeStrip::RuntimeClassInitialize_::_1_::dtor$17 @ 0x180066A90 (_CVolumeStrip--RuntimeClassInitialize_--_1_--dtor$17.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wil::details::lambda_call__lambda_cf8bbfae12c9b390148c4bfc3e8e442e___::_lambda_call__lambda_cf8bbfae12c9b390148c4bfc3e8e442e___(
        _BYTE *a1)
{
  __int64 result; // rax

  if ( a1[8] )
  {
    a1[8] = 0;
    return (*(__int64 (__fastcall **)(_QWORD))(***(_QWORD ***)a1 + 16LL))(**(_QWORD **)a1);
  }
  return result;
}
