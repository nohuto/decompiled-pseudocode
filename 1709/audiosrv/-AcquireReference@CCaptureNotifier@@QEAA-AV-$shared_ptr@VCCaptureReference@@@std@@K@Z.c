/*
 * XREFs of ?AcquireReference@CCaptureNotifier@@QEAA?AV?$shared_ptr@VCCaptureReference@@@std@@K@Z @ 0x18009D55C
 * Callers:
 *     ?AcquirePowerReferenceForStream@CPowerReferenceManager@@QEAA?AV?$shared_ptr@VCPowerReference@@@std@@PEAVCVADServer@@@Z @ 0x18002CBE0 (-AcquirePowerReferenceForStream@CPowerReferenceManager@@QEAA-AV-$shared_ptr@VCPowerReference@@@s.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18002A270 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x18002B220 (--2@YAPEAX_K@Z.c)
 *     ?_Reset0@?$_Ptr_base@VWorkItem@CWorkFifo@@@std@@QEAAXPEAVWorkItem@CWorkFifo@@PEAV_Ref_count_base@2@@Z @ 0x18005AFA0 (-_Reset0@-$_Ptr_base@VWorkItem@CWorkFifo@@@std@@QEAAXPEAVWorkItem@CWorkFifo@@PEAV_Ref_count_base.c)
 *     ?UpdateAudioCaptureStatus@CCaptureNotifier@@AEAAXW4REFERENCE_OPERATION@@K@Z @ 0x18009D8E8 (-UpdateAudioCaptureStatus@CCaptureNotifier@@AEAAXW4REFERENCE_OPERATION@@K@Z.c)
 */

// Hidden C++ exception states: #wind=4
_QWORD *__fastcall CCaptureNotifier::AcquireReference(_Mtx_t a1, _QWORD *a2, unsigned int a3)
{
  _QWORD *v4; // rdi
  _DWORD *v6; // rax
  int v7; // eax
  std::_Ref_count_base *v8; // rbx
  std::_Ref_count_base *v9; // rcx
  int v10; // eax
  unsigned int v11; // r8d
  const char *v12; // r9
  std::_Ref_count_base *v14[2]; // [rsp+30h] [rbp-28h] BYREF
  __int128 v15; // [rsp+40h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v4 = a2;
  *a2 = 0LL;
  a2[1] = 0LL;
  try
  {
    v6 = operator new(0x20uLL);
    if ( v6 )
    {
      v6[2] = 1;
      v6[3] = 1;
      *(_QWORD *)v6 = &std::_Ref_count_obj<CCaptureReference>::`vftable';
      if ( v6 != (_DWORD *)-16LL )
      {
        *((_QWORD *)v6 + 2) = a1;
        v6[6] = a3;
      }
    }
    *(_OWORD *)v14 = 0LL;
    std::_Ptr_base<CWorkFifo::WorkItem>::_Reset0(v14, (__int64)(v6 + 4), (__int64)v6);
    v7 = _Mtx_lock(a1);
    if ( v7 )
      std::_Throw_C_error(v7);
    CCaptureNotifier::UpdateAudioCaptureStatus(a1, 0LL, a3);
    v15 = 0LL;
    v8 = v14[1];
    if ( v14[1] )
    {
      _InterlockedIncrement((volatile signed __int32 *)v14[1] + 2);
      v8 = v14[1];
    }
    std::_Ptr_base<CWorkFifo::WorkItem>::_Reset0(&v15, (__int64)v14[0], (__int64)v8);
    v9 = (std::_Ref_count_base *)v4[1];
    *(_OWORD *)v4 = v15;
    if ( v9 )
      std::_Ref_count_base::_Decref(v9);
    v10 = _Mtx_unlock(a1);
    if ( v10 )
      std::_Throw_C_error(v10);
    if ( v8 )
      std::_Ref_count_base::_Decref(v8);
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(retaddr, (void *)0x196, v11, v12);
    return a2;
  }
  return v4;
}
