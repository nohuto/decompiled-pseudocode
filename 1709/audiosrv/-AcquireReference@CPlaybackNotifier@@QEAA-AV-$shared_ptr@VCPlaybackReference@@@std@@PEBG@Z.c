/*
 * XREFs of ?AcquireReference@CPlaybackNotifier@@QEAA?AV?$shared_ptr@VCPlaybackReference@@@std@@PEBG@Z @ 0x18000F638
 * Callers:
 *     ?AcquirePowerReferenceForStream@CPowerReferenceManager@@QEAA?AV?$shared_ptr@VCPowerReference@@@std@@PEAVCVADServer@@@Z @ 0x18002CBE0 (-AcquirePowerReferenceForStream@CPowerReferenceManager@@QEAA-AV-$shared_ptr@VCPowerReference@@@s.c)
 * Callees:
 *     ?UpdateAudioPlaybackStatus@CPlaybackNotifier@@AEAAXW4REFERENCE_OPERATION@@PEBG@Z @ 0x18000F4C0 (-UpdateAudioPlaybackStatus@CPlaybackNotifier@@AEAAXW4REFERENCE_OPERATION@@PEBG@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18002A270 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??$make_shared@VCPlaybackReference@@PEAVCPlaybackNotifier@@AEAPEBG@std@@YA?AV?$shared_ptr@VCPlaybackReference@@@0@$$QEAPEAVCPlaybackNotifier@@AEAPEBG@Z @ 0x18002AB30 (--$make_shared@VCPlaybackReference@@PEAVCPlaybackNotifier@@AEAPEBG@std@@YA-AV-$shared_ptr@VCPlay.c)
 */

// Hidden C++ exception states: #wind=4
_QWORD *__fastcall CPlaybackNotifier::AcquireReference(_Mtx_t a1, _QWORD *a2, _WORD *a3)
{
  _QWORD *v3; // rbx
  int v5; // eax
  std::_Ref_count_base *v6; // rdi
  std::_Ref_count_base *v7; // rcx
  int v8; // eax
  unsigned int v9; // r8d
  const char *v10; // r9
  __int64 v12; // [rsp+30h] [rbp-28h] BYREF
  std::_Ref_count_base *v13; // [rsp+38h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  _Mtx_t v15; // [rsp+60h] [rbp+8h] BYREF
  _QWORD *v16; // [rsp+68h] [rbp+10h]
  _WORD *v17; // [rsp+70h] [rbp+18h] BYREF
  _Mtx_t v18; // [rsp+78h] [rbp+20h]

  v17 = a3;
  v16 = a2;
  v3 = a2;
  *a2 = 0LL;
  a2[1] = 0LL;
  try
  {
    v15 = a1;
    std::make_shared<CPlaybackReference,CPlaybackNotifier *,unsigned short const * &>(&v12, &v15, &v17);
    v18 = a1;
    v5 = _Mtx_lock(a1);
    if ( v5 )
      std::_Throw_C_error(v5);
    CPlaybackNotifier::UpdateAudioPlaybackStatus(a1, 0, v17);
    v6 = v13;
    if ( v13 )
    {
      _InterlockedIncrement((volatile signed __int32 *)v13 + 2);
      v6 = v13;
    }
    v7 = (std::_Ref_count_base *)v3[1];
    v3[1] = v6;
    *v3 = v12;
    if ( v7 )
      std::_Ref_count_base::_Decref(v7);
    v8 = _Mtx_unlock(a1);
    if ( v8 )
      std::_Throw_C_error(v8);
    if ( v6 )
      std::_Ref_count_base::_Decref(v6);
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(retaddr, (void *)0x104, v9, v10);
    return v16;
  }
  return v3;
}
