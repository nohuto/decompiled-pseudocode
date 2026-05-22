/*
 * XREFs of ?HitTestForPointAndType@DWMInputRouter@@UEAA?AUHitTestResult@@UtagPOINT@@PEAUHMONITOR__@@K@Z @ 0x18007FE30
 * Callers:
 *     <none>
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800030F8 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Tidy@?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@AEAAXXZ @ 0x18000C750 (-_Tidy@-$vector@V-$ComPtr@VInputSite@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@VInputSite@@@WRL@Mi.c)
 *     ?HitTestRequestWithRetry@HitTestHelper@@CA?AUInternalHitTestResult@1@AEBUHitTestRequest@1@PEAUIDWMInputProxy@@@Z @ 0x180083400 (-HitTestRequestWithRetry@HitTestHelper@@CA-AUInternalHitTestResult@1@AEBUHitTestRequest@1@PEAUID.c)
 *     ?ToExternalResult@HitTestHelper@@CA?AUHitTestResult@@$$QEAUInternalHitTestResult@1@@Z @ 0x1800838A8 (-ToExternalResult@HitTestHelper@@CA-AUHitTestResult@@$$QEAUInternalHitTestResult@1@@Z.c)
 *     memset_0 @ 0x1800E1A3C (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

__int64 DWMInputRouter::HitTestForPointAndType(__int64 a1, __int64 a2, __int64 a3, ...)
{
  __int64 v3; // rdi
  int v7; // eax
  __int64 v8; // r8
  __int64 v9; // rdx
  _BYTE v11[8]; // [rsp+28h] [rbp-E0h] BYREF
  _BYTE v12[24]; // [rsp+30h] [rbp-D8h] BYREF
  __int64 v13; // [rsp+48h] [rbp-C0h]
  int v14; // [rsp+C8h] [rbp-40h] BYREF
  __int64 v15; // [rsp+D0h] [rbp-38h]
  __int64 v16; // [rsp+D8h] [rbp-30h]
  wil::details::in1diag3 *retaddr; // [rsp+1B0h] [rbp+A8h]
  __int64 v18; // [rsp+1D0h] [rbp+C8h] BYREF
  va_list va; // [rsp+1D0h] [rbp+C8h]
  __int64 v20; // [rsp+1D8h] [rbp+D0h]
  va_list va1; // [rsp+1E0h] [rbp+D8h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v18 = va_arg(va1, _QWORD);
  v20 = va_arg(va1, _QWORD);
  v3 = v18;
  if ( !v18 )
  {
    v7 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)(a1 + 208) + 24LL))(
           *(_QWORD *)(a1 + 208),
           (__int64 *)va);
    if ( v7 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x747,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
        (const char *)(unsigned int)v7);
      JUMPOUT(0x18007FF25LL);
    }
    v3 = v18;
  }
  memset_0(&v14, 0, 0xC8uLL);
  v8 = *(_QWORD *)(a1 + 216);
  v14 = v20;
  v16 = a3;
  v15 = v3;
  HitTestHelper::HitTestRequestWithRetry(v11, &v14, v8);
  HitTestHelper::ToExternalResult(a2, v11);
  if ( (unsigned __int64)(v13 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    NtCloseCompositionInputSink(v13);
  std::vector<Microsoft::WRL::ComPtr<InputSite>>::_Tidy((__int64)v12, v9);
  return a2;
}
