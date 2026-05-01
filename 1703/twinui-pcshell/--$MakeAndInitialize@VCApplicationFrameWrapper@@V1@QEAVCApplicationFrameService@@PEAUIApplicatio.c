/*
 * XREFs of ??$MakeAndInitialize@VCApplicationFrameWrapper@@V1@QEAVCApplicationFrameService@@PEAUIApplicationFrameManager@@PEAUIApplicationFrame@@AEAV?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEBK@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@VCApplicationFrameWrapper@@@WRL@Microsoft@@@012@$$QEBQEAVCApplicationFrameService@@$$QEAPEAUIApplicationFrameManager@@$$QEAPEAUIApplicationFrame@@AEAV?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEBK@Z @ 0x18004E218
 * Callers:
 *     ?BeginFrameRecovery@CApplicationFrameService@@UEAAJXZ @ 0x18004B6C0 (-BeginFrameRecovery@CApplicationFrameService@@UEAAJXZ.c)
 * Callees:
 *     ??0CApplicationFrameWrapper@@QEAA@XZ @ 0x18004AA5C (--0CApplicationFrameWrapper@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@CApplicationFrameWrapper@@QEAAJPEAUIApplicationFrameService@@PEAUIApplicationFrameManager@@PEAUIApplicationFrame@@@Z @ 0x18004B090 (-RuntimeClassInitialize@CApplicationFrameWrapper@@QEAAJPEAUIApplicationFrameService@@PEAUIApplic.c)
 *     ?Initialize@CApplicationFrameWrapper@@QEAAJPEBGK@Z @ 0x18004B1E4 (-Initialize@CApplicationFrameWrapper@@QEAAJPEBGK@Z.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@U?$ChainInterfaces@UIApplicationFrameProxy@@UIApplicationFrame@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@WRL@Microsoft@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@23@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18004DF10 (-Release@-$RuntimeClass@U-$InterfaceList@U-$ChainInterfaces@UIApplicationFrameProxy@@UIApplicati.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180194338 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CApplicationFrameWrapper,CApplicationFrameWrapper,CApplicationFrameService * const,IApplicationFrameManager *,IApplicationFrame *,Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>> &,unsigned long const &>(
        volatile signed __int32 **a1,
        __int64 *a2,
        struct IApplicationFrameManager **a3,
        struct IApplicationFrame **a4,
        const unsigned __int16 **a5,
        unsigned int *a6)
{
  volatile signed __int32 *v10; // rcx
  unsigned int v11; // edi
  CApplicationFrameWrapper *v12; // rax
  volatile signed __int32 *v13; // rsi
  __int64 v14; // r9
  const unsigned __int16 *v15; // r14
  unsigned int v16; // r15d
  int v17; // ebp
  signed __int32 v18; // eax

  v10 = *a1;
  v11 = 0;
  if ( v10 )
  {
    *a1 = 0LL;
    Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::ChainInterfaces<IApplicationFrameProxy,IApplicationFrame,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(v10);
  }
  *a1 = 0LL;
  v12 = (CApplicationFrameWrapper *)operator new(0x90uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v12 )
  {
    v13 = (volatile signed __int32 *)CApplicationFrameWrapper::CApplicationFrameWrapper(v12);
    v14 = *a2;
    v15 = *a5;
    v16 = *a6;
    v17 = CApplicationFrameWrapper::RuntimeClassInitialize(
            (CApplicationFrameWrapper *)v13,
            (struct IApplicationFrameService *)((v14 + 32) & -(__int64)(v14 != 0)),
            *a3,
            *a4);
    if ( v17 < 0 || (v17 = CApplicationFrameWrapper::Initialize((CApplicationFrameWrapper *)v13, v15, v16), v17 < 0) )
    {
      if ( v13 )
        Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::ChainInterfaces<IApplicationFrameProxy,IApplicationFrame,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(v13);
      return (unsigned int)v17;
    }
    else
    {
      if ( v13 )
      {
        do
          v18 = *((_DWORD *)v13 + 9);
        while ( v18 != 0x7FFFFFFF && v18 != _InterlockedCompareExchange(v13 + 9, v18 + 1, v18) );
      }
      *a1 = v13;
      if ( v13 )
        Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::ChainInterfaces<IApplicationFrameProxy,IApplicationFrame,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(v13);
    }
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v11;
}
