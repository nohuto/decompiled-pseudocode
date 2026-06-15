/*
 * XREFs of ?AcquireReference@CCaptureNotifier@@QEAA?AV?$shared_ptr@VCCaptureReference@@@std@@K@Z @ 0x1800D4DFC
 * Callers:
 *     ?AcquirePowerReferenceForStream@CPowerReferenceManager@@QEAA?AV?$shared_ptr@VCPowerReference@@@std@@PEAVCVADServer@@@Z @ 0x1800260A0 (-AcquirePowerReferenceForStream@CPowerReferenceManager@@QEAA-AV-$shared_ptr@VCPowerReference@@@s.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18000B390 (--2@YAPEAX_K@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x1800494E0 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?UpdateAudioCaptureStatus@CCaptureNotifier@@AEAAXW4REFERENCE_OPERATION@@K@Z @ 0x1800D4F7C (-UpdateAudioCaptureStatus@CCaptureNotifier@@AEAAXW4REFERENCE_OPERATION@@K@Z.c)
 */

// Hidden C++ exception states: #wind=6
volatile signed __int32 **__fastcall CCaptureNotifier::AcquireReference(
        _Mtx_t a1,
        volatile signed __int32 **a2,
        unsigned int a3)
{
  volatile signed __int32 **v4; // rdi
  volatile signed __int32 *v6; // rax
  volatile signed __int32 *v7; // rbx
  volatile signed __int32 *v8; // r14
  int v9; // eax
  std::_Ref_count_base *v10; // rcx
  int v11; // eax
  const char *v12; // r9
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v4 = a2;
  *a2 = 0LL;
  a2[1] = 0LL;
  try
  {
    v6 = (volatile signed __int32 *)operator new(0x20uLL);
    v7 = v6;
    if ( v6 )
    {
      *((_DWORD *)v6 + 2) = 1;
      *((_DWORD *)v6 + 3) = 1;
      *(_QWORD *)v6 = &std::_Ref_count_obj<CCaptureReference>::`vftable';
      *((_QWORD *)v6 + 2) = a1;
      *((_DWORD *)v6 + 6) = a3;
    }
    else
    {
      v7 = 0LL;
    }
    v8 = v7 + 4;
    v9 = _Mtx_lock(a1);
    if ( v9 )
      std::_Throw_C_error(v9);
    CCaptureNotifier::UpdateAudioCaptureStatus(a1, 0LL, a3);
    if ( v7 )
    {
      _InterlockedIncrement(v7 + 2);
      v8 = v7 + 4;
    }
    *v4 = v8;
    v10 = (std::_Ref_count_base *)v4[1];
    v4[1] = v7;
    if ( v10 )
      std::_Ref_count_base::_Decref(v10);
    v11 = _Mtx_unlock(a1);
    if ( v11 )
      std::_Throw_C_error(v11);
    if ( v7 )
      std::_Ref_count_base::_Decref((std::_Ref_count_base *)v7);
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0x194,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\powerreference.cpp",
      v12);
    return a2;
  }
  return v4;
}
