/*
 * XREFs of ?AcquireReference@CPlaybackNotifier@@QEAA?AV?$shared_ptr@VCPlaybackReference@@@std@@PEBG@Z @ 0x180019890
 * Callers:
 *     ?AcquirePowerReferenceForStream@CPowerReferenceManager@@QEAA?AV?$shared_ptr@VCPowerReference@@@std@@PEAVCVADServer@@@Z @ 0x1800260A0 (-AcquirePowerReferenceForStream@CPowerReferenceManager@@QEAA-AV-$shared_ptr@VCPowerReference@@@s.c)
 * Callees:
 *     ?UpdateAudioPlaybackStatus@CPlaybackNotifier@@AEAAXW4REFERENCE_OPERATION@@PEBG@Z @ 0x1800193A0 (-UpdateAudioPlaybackStatus@CPlaybackNotifier@@AEAAXW4REFERENCE_OPERATION@@PEBG@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x1800494E0 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x180097220 (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=6
volatile signed __int32 **__fastcall CPlaybackNotifier::AcquireReference(
        _Mtx_t a1,
        volatile signed __int32 **a2,
        _WORD *a3)
{
  HANDLE ProcessHeap; // rax
  volatile signed __int32 *v7; // rax
  volatile signed __int32 *v8; // rbx
  volatile signed __int32 *v9; // r15
  int v10; // eax
  std::_Ref_count_base *v11; // rcx
  volatile signed __int32 *v12; // r15
  int v13; // eax
  const char *v14; // r9
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  *a2 = 0LL;
  a2[1] = 0LL;
  try
  {
    ProcessHeap = GetProcessHeap();
    v7 = (volatile signed __int32 *)HeapAlloc(ProcessHeap, 0, 0x88uLL);
    v8 = v7;
    if ( v7 )
    {
      *((_DWORD *)v7 + 2) = 1;
      *((_DWORD *)v7 + 3) = 1;
      *(_QWORD *)v7 = &std::_Ref_count_obj<CPlaybackReference>::`vftable';
      *((_QWORD *)v7 + 16) = a1;
      _o_wcscpy_s(v7 + 4, 56LL, a3);
    }
    else
    {
      v8 = 0LL;
    }
    v9 = v8 + 4;
    v10 = _Mtx_lock(a1);
    if ( v10 )
      std::_Throw_C_error(v10);
    CPlaybackNotifier::UpdateAudioPlaybackStatus((__int64)a1, 0, a3);
    if ( v8 )
    {
      _InterlockedIncrement(v8 + 2);
      v9 = v8 + 4;
    }
    *a2 = v9;
    v11 = (std::_Ref_count_base *)a2[1];
    a2[1] = v8;
    v12 = v8 + 2;
    if ( v11 )
    {
      std::_Ref_count_base::_Decref(v11);
      v12 = v8 + 2;
    }
    v13 = _Mtx_unlock(a1);
    if ( v13 )
    {
      std::_Throw_C_error(v13);
      v12 = v8 + 2;
    }
    if ( v8 && _InterlockedExchangeAdd(v12, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v8)(v8);
      std::_Ref_count_base::_Decwref((std::_Ref_count_base *)v8);
    }
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0x102,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\powerreference.cpp",
      v14);
    return a2;
  }
  return a2;
}
