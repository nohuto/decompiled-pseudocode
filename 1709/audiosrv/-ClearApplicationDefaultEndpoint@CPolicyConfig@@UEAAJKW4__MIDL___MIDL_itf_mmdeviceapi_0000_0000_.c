/*
 * XREFs of ?ClearApplicationDefaultEndpoint@CPolicyConfig@@UEAAJKW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0002@@W4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@@Z @ 0x18007FC40
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ??0?$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z @ 0x18005BF24 (--0-$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18005F740 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?RemoveKey@?$CAtlMap@KV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@V?$CElementTraits@K@2@V?$CElementTraits@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@2@@ATL@@QEAA_NK@Z @ 0x180086D00 (-RemoveKey@-$CAtlMap@KV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@V-$CElement.c)
 */

__int64 __fastcall CPolicyConfig::ClearApplicationDefaultEndpoint(
        struct _RTL_CRITICAL_SECTION *this,
        unsigned int a2,
        enum __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0002 a3,
        unsigned int a4)
{
  __int64 v5; // rdi
  LPVOID v8; // rcx
  HRESULT v9; // ebx
  __int64 v10; // rcx
  HRESULT v11; // eax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+30h] [rbp-28h] BYREF
  char v14; // [rsp+38h] [rbp-20h]
  LPVOID ppv; // [rsp+60h] [rbp+8h] BYREF

  v5 = a3;
  ATL::CComCritSecLock<ATL::CComAutoCriticalSection>::CComCritSecLock<ATL::CComAutoCriticalSection>(
    (__int64)&lpCriticalSection,
    this + 3);
  v8 = 0LL;
  ppv = 0LL;
  if ( (unsigned int)v5 > 2 )
  {
    v9 = -2147024809;
    goto LABEL_9;
  }
  if ( a4 <= 1 )
  {
    v9 = CoCreateInstance(
           &GUID_06cca63e_9941_441b_b004_39f999ada412,
           0LL,
           0x17u,
           &GUID_05d42a27_61c9_4c18_8d4c_70b9764da1d6,
           &ppv);
    if ( v9 < 0 )
      goto LABEL_10;
    v10 = 8 * v5 + 20;
    if ( a4 )
      v10 = 8 * v5 + 83;
    ATL::CAtlMap<unsigned long,ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,ATL::CElementTraits<unsigned long>,ATL::CElementTraits<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>>>::RemoveKey(
      (char *)this + 8 * v5 + 8 * v10,
      a2);
    v11 = (*(__int64 (__fastcall **)(LPVOID, _QWORD, _QWORD, const WCHAR *, unsigned int))(*(_QWORD *)ppv + 104LL))(
            ppv,
            a4,
            (unsigned int)v5,
            &word_180104218,
            a2);
    v8 = ppv;
    v9 = v11;
LABEL_9:
    if ( v9 >= 0 )
      goto LABEL_11;
    goto LABEL_10;
  }
  v9 = -2147024809;
LABEL_10:
  AudSrvTraceLoggingErrorHelper("CPolicyConfig::ClearApplicationDefaultEndpoint", 4395, v9);
  v8 = ppv;
LABEL_11:
  if ( v8 )
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v8 + 16LL))(v8);
  if ( v14 )
    LeaveCriticalSection(lpCriticalSection);
  return (unsigned int)v9;
}
