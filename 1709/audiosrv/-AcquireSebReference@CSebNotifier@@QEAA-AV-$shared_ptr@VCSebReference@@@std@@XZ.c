/*
 * XREFs of ?AcquireSebReference@CSebNotifier@@QEAA?AV?$shared_ptr@VCSebReference@@@std@@XZ @ 0x18002B618
 * Callers:
 *     ?AcquirePowerReferenceForStream@CPowerReferenceManager@@QEAA?AV?$shared_ptr@VCPowerReference@@@std@@PEAVCVADServer@@@Z @ 0x18002CBE0 (-AcquirePowerReferenceForStream@CPowerReferenceManager@@QEAA-AV-$shared_ptr@VCPowerReference@@@s.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18002A270 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?PublishSebEvent@CSebNotifier@@AEAAXE@Z @ 0x18002B46C (-PublishSebEvent@CSebNotifier@@AEAAXE@Z.c)
 *     ?CancelDeferredSebReferenceRelease@CSebNotifier@@AEAAXXZ @ 0x18002B74C (-CancelDeferredSebReferenceRelease@CSebNotifier@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=3
volatile signed __int32 **__fastcall CSebNotifier::AcquireSebReference(
        CSebNotifier *this,
        volatile signed __int32 **a2)
{
  volatile signed __int32 **v2; // rsi
  HANDLE ProcessHeap; // rax
  char *v5; // rax
  volatile signed __int32 *v6; // rdi
  _QWORD *v7; // rax
  volatile signed __int32 *v8; // r15
  int v9; // eax
  int v10; // r12d
  int v11; // eax
  std::_Ref_count_base *v12; // rcx

  v2 = a2;
  *a2 = 0LL;
  a2[1] = 0LL;
  try
  {
    ProcessHeap = GetProcessHeap();
    v5 = (char *)HeapAlloc(ProcessHeap, 0, 0x18uLL);
    v6 = (volatile signed __int32 *)v5;
    if ( v5 )
    {
      *((_DWORD *)v5 + 2) = 1;
      *((_DWORD *)v5 + 3) = 1;
      *(_QWORD *)v5 = &std::_Ref_count_obj<CSebReference>::`vftable';
      v7 = v5 + 16;
      if ( v6 != (volatile signed __int32 *)-16LL )
        *v7 = this;
    }
    else
    {
      v6 = 0LL;
    }
    v8 = v6 + 4;
    v9 = _Mtx_lock((CSebNotifier *)((char *)this + 8));
    if ( v9 )
      std::_Throw_C_error(v9);
    v10 = ++*(_DWORD *)this;
    if ( *(_DWORD *)this == 1 )
      CSebNotifier::PublishSebEvent(this, 1u);
    v11 = _Mtx_unlock((CSebNotifier *)((char *)this + 8));
    if ( v11 )
      std::_Throw_C_error(v11);
    if ( v10 == 1 )
      CSebNotifier::CancelDeferredSebReferenceRelease(this);
    if ( v6 )
    {
      _InterlockedIncrement(v6 + 2);
      v8 = v6 + 4;
    }
    v12 = (std::_Ref_count_base *)v2[1];
    v2[1] = v6;
    *v2 = v8;
    if ( v12 )
      std::_Ref_count_base::_Decref(v12);
    if ( v6 )
      std::_Ref_count_base::_Decref((std::_Ref_count_base *)v6);
  }
  catch ( std::bad_alloc )
  {
    AudSrvTraceLoggingErrorHelper("CSebNotifier::AcquireSebReference", 0xB2u, -2147024882);
    return a2;
  }
  return v2;
}
