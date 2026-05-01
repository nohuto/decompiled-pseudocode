/*
 * XREFs of ?DestroyFrame@CApplicationFrameService@@UEAAJPEAUIApplicationFrameProxy@@@Z @ 0x18004E7D0
 * Callers:
 *     <none>
 * Callees:
 *     ?RemoveAt@?$CTSimpleArray@V?$ComPtr@VCApplicationFrameWrapper@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@VCApplicationFrameWrapper@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@VCApplicationFrameWrapper@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@VCApplicationFrameWrapper@@@WRL@Microsoft@@@@@@QEAAJ_K@Z @ 0x18005030C (-RemoveAt@-$CTSimpleArray@V-$ComPtr@VCApplicationFrameWrapper@@@WRL@Microsoft@@$0PPPPPPPO@V-$CTP.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CApplicationFrameService::DestroyFrame(
        CApplicationFrameService *this,
        struct IApplicationFrameProxy *a2)
{
  int v4; // esi
  __int64 v5; // rbx
  unsigned __int64 v6; // rdi
  __int64 v7; // rdx
  volatile signed __int32 *v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rdi
  __int64 v12; // [rsp+78h] [rbp+20h]

  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v4 = -2147023728;
  v5 = 0LL;
  v12 = 0LL;
  v6 = 0LL;
  do
  {
    if ( v6 >= *((_QWORD *)this + 14) )
      break;
    if ( (*(unsigned __int8 (__fastcall **)(struct IApplicationFrameProxy *, _QWORD))(*(_QWORD *)a2 + 232LL))(
           a2,
           *(_QWORD *)(*((_QWORD *)this + 13) + 8 * v6)) )
    {
      v4 = 0;
      v7 = *(_QWORD *)(*((_QWORD *)this + 13) + 8 * v6);
      if ( v5 != v7 )
      {
        if ( v7 )
        {
          _InterlockedIncrement((volatile signed __int32 *)(v7 + 52));
          v5 = v12;
        }
        v8 = (volatile signed __int32 *)v5;
        v5 = v7;
        v12 = v7;
        if ( v8 )
        {
          if ( _InterlockedExchangeAdd(v8 + 13, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v8 + 256LL))(v8, 1LL);
            if ( Microsoft::WRL::Details::ModuleBase::module_ )
              (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                                   + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
          }
          v5 = v12;
        }
      }
      if ( v6 < *((_QWORD *)this + 14) )
        CTSimpleArray<Microsoft::WRL::ComPtr<CApplicationFrameWrapper>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<CApplicationFrameWrapper>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<CApplicationFrameWrapper>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<CApplicationFrameWrapper>>>::RemoveAt(
          (char *)this + 104,
          v6);
    }
    ++v6;
  }
  while ( v4 < 0 );
  ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  if ( v4 >= 0 )
  {
    v9 = *(_QWORD *)(v5 + 96);
    if ( v9 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
    v10 = *(_QWORD *)(v5 + 96);
    v4 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 18) + 32LL))(*((_QWORD *)this + 18), v10);
    if ( v10 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  }
  if ( v5 )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v5 + 52), 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v12 + 256LL))(v12, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
    }
  }
  return (unsigned int)v4;
}
