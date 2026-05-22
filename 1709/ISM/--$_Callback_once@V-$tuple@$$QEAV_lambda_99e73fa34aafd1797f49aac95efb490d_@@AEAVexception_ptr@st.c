/*
 * XREFs of ??$_Callback_once@V?$tuple@$$QEAV_lambda_99e73fa34aafd1797f49aac95efb490d_@@AEAVexception_ptr@std@@@std@@U?$integer_sequence@_K$0A@@2@$00@std@@YAHPEAX0PEAPEAX@Z @ 0x18005E590
 * Callers:
 *     <none>
 * Callees:
 *     ??0MPCManager@@QEAA@XZ @ 0x18005D4B8 (--0MPCManager@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800CB534 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800CBCC8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall std::_Callback_once<std::tuple<_lambda_99e73fa34aafd1797f49aac95efb490d_ &&,std::exception_ptr &>,std::integer_sequence<unsigned __int64,0>,1>(
        __int64 a1,
        void **a2)
{
  MPCManager *v2; // rbx
  MPCManager *v3; // rax
  MPCManager *v4; // rax
  void *v6; // rbx
  MPCManager *v7; // [rsp+30h] [rbp-28h]
  _QWORD v8[3]; // [rsp+40h] [rbp-18h] BYREF

  try
  {
    v2 = 0LL;
    v3 = (MPCManager *)operator new(0x80uLL, (const struct std::nothrow_t *)&std::nothrow);
    if ( v3 )
    {
      v8[0] = v3;
      v2 = MPCManager::MPCManager(v3);
    }
    v4 = MPCManager::s_instance;
    v7 = MPCManager::s_instance;
    MPCManager::s_instance = v2;
    if ( v7 )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)v4 + 3, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(MPCManager *, __int64))(*(_QWORD *)v7 + 40LL))(v7, 1LL);
        if ( Microsoft::WRL::Details::ModuleBase::module_ )
          (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                               + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
      }
    }
  }
  catch ( ... )
  {
    v6 = *a2;
    __ExceptionPtrCreate(v8);
    __ExceptionPtrCurrentException(v8);
    __ExceptionPtrAssign(v6, v8);
    __ExceptionPtrDestroy(v8);
    return 0LL;
  }
  return 1LL;
}
