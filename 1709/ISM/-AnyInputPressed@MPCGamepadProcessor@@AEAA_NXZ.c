/*
 * XREFs of ?AnyInputPressed@MPCGamepadProcessor@@AEAA_NXZ @ 0x180039054
 * Callers:
 *     ?Process3DInput@MPCGamepadProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x180037730 (-Process3DInput@MPCGamepadProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 *     ?IsStartOfCapture@MPCGamepadProcessor@@UEAA_NPEAUInputInfo@@@Z @ 0x180039030 (-IsStartOfCapture@MPCGamepadProcessor@@UEAA_NPEAUInputInfo@@@Z.c)
 *     ?IsEndOfCapture@MPCGamepadProcessor@@UEAA_NPEAUInputInfo@@@Z @ 0x180039040 (-IsEndOfCapture@MPCGamepadProcessor@@UEAA_NPEAUInputInfo@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall MPCGamepadProcessor::AnyInputPressed(MPCGamepadProcessor *this)
{
  bool result; // al
  double v2; // xmm1_8
  double v3; // xmm1_8

  result = 0;
  if ( *((_DWORD *)this + 866) )
    return 1;
  v2 = *((float *)this + 978);
  if ( COERCE_DOUBLE(*((_QWORD *)this + 439) & _xmm) > v2 )
    return 1;
  if ( COERCE_DOUBLE(*((_QWORD *)this + 438) & _xmm) > v2 )
    return 1;
  if ( COERCE_DOUBLE(*((_QWORD *)this + 436) & _xmm) > v2 )
    return 1;
  if ( COERCE_DOUBLE(*((_QWORD *)this + 437) & _xmm) > v2 )
    return 1;
  v3 = *((float *)this + 979);
  if ( *((double *)this + 434) > v3 || *((double *)this + 435) > v3 )
    return 1;
  return result;
}
