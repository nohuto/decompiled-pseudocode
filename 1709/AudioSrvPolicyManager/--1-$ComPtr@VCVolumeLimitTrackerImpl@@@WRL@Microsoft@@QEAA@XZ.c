/*
 * XREFs of ??1?$ComPtr@VCVolumeLimitTrackerImpl@@@WRL@Microsoft@@QEAA@XZ @ 0x1800230F0
 * Callers:
 *     _CVolumeLimitTrackerFactory::CreateInstance_::_1_::dtor$2 @ 0x180028E0F (_CVolumeLimitTrackerFactory--CreateInstance_--_1_--dtor$2.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180027AD0 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall Microsoft::WRL::ComPtr<CVolumeLimitTrackerImpl>::~ComPtr<CVolumeLimitTrackerImpl>(_QWORD *a1)
{
  _QWORD *result; // rax
  __int64 v2; // rcx

  result = a1;
  v2 = *a1;
  if ( v2 )
  {
    *result = 0LL;
    return (_QWORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  return result;
}
