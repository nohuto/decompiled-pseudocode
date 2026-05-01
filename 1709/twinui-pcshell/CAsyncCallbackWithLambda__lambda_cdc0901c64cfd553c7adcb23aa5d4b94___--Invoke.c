/*
 * XREFs of CAsyncCallbackWithLambda__lambda_cdc0901c64cfd553c7adcb23aa5d4b94___::Invoke @ 0x18005E550
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAsyncCallbackWithLambda__lambda_cdc0901c64cfd553c7adcb23aa5d4b94___::Invoke(__int64 a1)
{
  DWORD v2; // eax
  __int64 v3; // rax

  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)(a1 + 56) + 112LL) + 488LL))(*(_QWORD *)(a1 + 56) + 112LL);
  v2 = `IsPPIEdition'::`2'::s_dwProductType;
  if ( !`IsPPIEdition'::`2'::s_dwProductType )
  {
    GetProductInfo(0xAu, 0, 0, 0, &`IsPPIEdition'::`2'::s_dwProductType);
    v2 = 0;
    `IsPPIEdition'::`2'::s_dwProductType = 0;
  }
  if ( v2 == 119 )
  {
    v3 = *(_QWORD *)(a1 + 64);
    if ( *(_QWORD *)(v3 + 160) )
      (*(void (__fastcall **)(_QWORD))(***(_QWORD ***)(v3 + 152) + 72LL))(**(_QWORD **)(v3 + 152));
  }
  ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  return 0LL;
}
