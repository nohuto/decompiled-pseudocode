/*
 * XREFs of ??1?$ComPtr@VMPCSixDofProcessor@@@WRL@Microsoft@@QEAA@XZ @ 0x1800522CC
 * Callers:
 *     _MPCSixDofProcessor::Create_::_1_::dtor$1 @ 0x1800CEAE3 (_MPCSixDofProcessor--Create_--_1_--dtor$1.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_MPCProcessor_IInputProcessor_InputProcessorCreateParams_____ptr64_&___ptr64__::_1_::dtor$2 @ 0x1800CED4F (_Microsoft--WRL--Details--MakeAndInitialize_MPCProcessor_IInputProcessor_InputProce_ea_1800CED4F.c)
 *     _MPCClickerProcessor::Create_::_1_::dtor$1 @ 0x1800CEDE7 (_MPCClickerProcessor--Create_--_1_--dtor$1.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<MPCSixDofProcessor>::~ComPtr<MPCSixDofProcessor>(
        volatile signed __int32 **a1)
{
  __int64 result; // rax
  volatile signed __int32 *v2; // rcx

  result = (__int64)a1;
  v2 = *a1;
  if ( v2 )
  {
    *(_QWORD *)result = 0LL;
    result = (unsigned int)_InterlockedExchangeAdd(v2 + 141, 0xFFFFFFFF);
    if ( (_DWORD)result == 1 )
    {
      result = (*(__int64 (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v2 + 64LL))(v2, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        return (*(__int64 (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                                       + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
    }
  }
  return result;
}
