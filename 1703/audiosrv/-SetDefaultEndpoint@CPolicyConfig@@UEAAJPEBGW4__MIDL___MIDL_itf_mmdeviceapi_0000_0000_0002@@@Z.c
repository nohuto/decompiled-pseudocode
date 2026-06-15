/*
 * XREFs of ?SetDefaultEndpoint@CPolicyConfig@@UEAAJPEBGW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0002@@@Z @ 0x18009DB50
 * Callers:
 *     <none>
 * Callees:
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18004B5C4 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CPolicyConfig::SetDefaultEndpoint(CPolicyConfig *this, const unsigned __int16 *a2, unsigned int a3)
{
  HRESULT v5; // ebx
  LPVOID ppv; // [rsp+48h] [rbp+10h] BYREF

  ppv = 0LL;
  if ( !a2 )
  {
    v5 = -2147467261;
LABEL_5:
    AudSrvTraceLoggingErrorHelper("CPolicyConfig::SetDefaultEndpoint", 4087, v5);
    goto LABEL_6;
  }
  v5 = CoCreateInstance(
         &GUID_06cca63e_9941_441b_b004_39f999ada412,
         0LL,
         0x17u,
         &GUID_cc08e979_3b54_451c_8ac3_ba2809744615,
         &ppv);
  if ( v5 < 0 )
    goto LABEL_5;
  v5 = (*(__int64 (__fastcall **)(LPVOID, const unsigned __int16 *, _QWORD))(*(_QWORD *)ppv + 40LL))(ppv, a2, a3);
  if ( v5 < 0 )
    goto LABEL_5;
LABEL_6:
  if ( ppv )
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)ppv + 16LL))(ppv);
  return (unsigned int)v5;
}
