/*
 * XREFs of ??$MakeAndInitialize@VCApplicationFrameWrapper@@V1@PEAVCApplicationFrameService@@PEAUIApplicationFrameManager@@PEAUIApplicationFrame@@AEAV?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEBK@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@VCApplicationFrameWrapper@@@WRL@Microsoft@@@012@$$QEAPEAVCApplicationFrameService@@$$QEAPEAUIApplicationFrameManager@@$$QEAPEAUIApplicationFrame@@AEAV?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEBK@Z @ 0x1800508D8
 * Callers:
 *     ?BeginFrameRecovery@CApplicationFrameService@@UEAAJXZ @ 0x18004DAF0 (-BeginFrameRecovery@CApplicationFrameService@@UEAAJXZ.c)
 * Callees:
 *     ??0CApplicationFrameWrapper@@QEAA@XZ @ 0x18004CF1C (--0CApplicationFrameWrapper@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@CApplicationFrameWrapper@@QEAAJPEAUIApplicationFrameService@@PEAUIApplicationFrameManager@@PEAUIApplicationFrame@@@Z @ 0x18004D560 (-RuntimeClassInitialize@CApplicationFrameWrapper@@QEAAJPEAUIApplicationFrameService@@PEAUIApplic.c)
 *     ?Initialize@CApplicationFrameWrapper@@QEAAJPEBGK@Z @ 0x18004D6B4 (-Initialize@CApplicationFrameWrapper@@QEAAJPEBGK@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801E2388 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CApplicationFrameWrapper,CApplicationFrameWrapper,CApplicationFrameService *,IApplicationFrameManager *,IApplicationFrame *,Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>> &,unsigned long const &>(
        volatile signed __int32 **a1,
        __int64 *a2,
        struct IApplicationFrameManager **a3,
        struct IApplicationFrame **a4,
        const unsigned __int16 **a5,
        unsigned int *a6)
{
  volatile signed __int32 *v10; // rcx
  unsigned int v11; // esi
  CApplicationFrameWrapper *v12; // rax
  volatile signed __int32 *v13; // rdi
  __int64 v14; // rcx
  const unsigned __int16 *v15; // r14
  unsigned int v16; // r15d
  int v17; // ebp

  v10 = *a1;
  v11 = 0;
  if ( v10 )
  {
    *a1 = 0LL;
    if ( _InterlockedExchangeAdd(v10 + 13, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v10 + 256LL))(v10, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
    }
  }
  *a1 = 0LL;
  v12 = (CApplicationFrameWrapper *)operator new(0xA0uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v12 )
  {
    v13 = (volatile signed __int32 *)CApplicationFrameWrapper::CApplicationFrameWrapper(v12);
    v14 = *a2;
    v15 = *a5;
    v16 = *a6;
    v17 = CApplicationFrameWrapper::RuntimeClassInitialize(
            (CApplicationFrameWrapper *)v13,
            (struct IApplicationFrameService *)((v14 + 40) & -(__int64)(v14 != 0)),
            *a3,
            *a4);
    if ( v17 < 0 || (v17 = CApplicationFrameWrapper::Initialize((CApplicationFrameWrapper *)v13, v15, v16), v17 < 0) )
    {
      if ( v13 )
      {
        if ( _InterlockedExchangeAdd(v13 + 13, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v13 + 256LL))(v13, 1LL);
          if ( Microsoft::WRL::Details::ModuleBase::module_ )
            (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                                 + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
        }
      }
      return (unsigned int)v17;
    }
    else
    {
      if ( v13 )
        _InterlockedIncrement(v13 + 13);
      *a1 = v13;
      if ( v13 )
      {
        if ( _InterlockedExchangeAdd(v13 + 13, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v13 + 256LL))(v13, 1LL);
          if ( Microsoft::WRL::Details::ModuleBase::module_ )
            (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                                 + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
        }
      }
    }
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v11;
}
