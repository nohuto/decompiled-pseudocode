/*
 * XREFs of ?AcquireSebReference@CSebNotifier@@QEAA?AV?$shared_ptr@VCSebReference@@@std@@XZ @ 0x180026EC4
 * Callers:
 *     ?AcquirePowerReferenceForStream@CPowerReferenceManager@@QEAA?AV?$shared_ptr@VCPowerReference@@@std@@PEAVCVADServer@@@Z @ 0x180026C54 (-AcquirePowerReferenceForStream@CPowerReferenceManager@@QEAA-AV-$shared_ptr@VCPowerReference@@@s.c)
 * Callees:
 *     ?PublishSebEvent@CSebNotifier@@AEAAXE@Z @ 0x180026DA4 (-PublishSebEvent@CSebNotifier@@AEAAXE@Z.c)
 *     ??$make_shared@VCSebReference@@QEAVCSebNotifier@@@std@@YA?AV?$shared_ptr@VCSebReference@@@0@$$QEBQEAVCSebNotifier@@@Z @ 0x180026FD8 (--$make_shared@VCSebReference@@QEAVCSebNotifier@@@std@@YA-AV-$shared_ptr@VCSebReference@@@0@$$QE.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18002AA50 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
_QWORD *__fastcall CSebNotifier::AcquireSebReference(PTP_TIMER *this, _QWORD *a2)
{
  _QWORD *v2; // rdi
  int v4; // eax
  int v5; // r14d
  int v6; // eax
  struct _TP_TIMER *v7; // rcx
  volatile signed __int32 *v8; // rbx
  std::_Ref_count_base *v9; // rcx
  volatile signed __int32 *v11; // rbx
  __int64 v12; // [rsp+30h] [rbp-38h] BYREF
  volatile signed __int32 *v13; // [rsp+38h] [rbp-30h]
  std::_Ref_count_base *v14; // [rsp+48h] [rbp-20h]
  PTP_TIMER *v15; // [rsp+70h] [rbp+8h] BYREF
  _QWORD *v16; // [rsp+78h] [rbp+10h]

  v16 = a2;
  v2 = a2;
  *a2 = 0LL;
  a2[1] = 0LL;
  try
  {
    v15 = this;
    std::make_shared<CSebReference,CSebNotifier * const>(&v12, &v15);
    v4 = _Mtx_lock((_Mtx_t)(this + 1));
    if ( v4 )
      std::_Throw_C_error(v4);
    v5 = ++*(_DWORD *)this;
    if ( *(_DWORD *)this == 1 )
      CSebNotifier::PublishSebEvent((CSebNotifier *)this, 1);
    v6 = _Mtx_unlock((_Mtx_t)(this + 1));
    if ( v6 )
      std::_Throw_C_error(v6);
    if ( v5 == 1 )
    {
      v7 = this[12];
      if ( v7 )
      {
        SetThreadpoolTimer(v7, 0LL, 0, 0);
        WaitForThreadpoolTimerCallbacks(this[12], 1);
      }
    }
    v8 = v13;
    if ( v13 )
    {
      _InterlockedIncrement(v13 + 2);
      v8 = v13;
    }
    v14 = (std::_Ref_count_base *)v2[1];
    v9 = v14;
    v2[1] = v8;
    *v2 = v12;
    if ( v9 )
      std::_Ref_count_base::_Decref(v9);
    if ( v8 )
    {
      if ( _InterlockedExchangeAdd(v8 + 2, 0xFFFFFFFF) == 1 )
      {
        v11 = v13;
        (**(void (__fastcall ***)(volatile signed __int32 *))v13)(v13);
        if ( _InterlockedExchangeAdd(v11 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v13 + 8LL))(v13);
      }
    }
  }
  catch ( std::bad_alloc )
  {
    AudSrvTraceLoggingErrorHelper("CSebNotifier::AcquireSebReference", 0xA3u, -2147024882);
    return v16;
  }
  return v2;
}
