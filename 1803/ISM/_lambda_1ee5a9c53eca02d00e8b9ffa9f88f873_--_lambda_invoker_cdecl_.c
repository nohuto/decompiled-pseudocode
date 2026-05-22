/*
 * XREFs of _lambda_1ee5a9c53eca02d00e8b9ffa9f88f873_::_lambda_invoker_cdecl_ @ 0x180036FE0
 * Callers:
 *     <none>
 * Callees:
 *     ?LogGamepadTaskSwitcherInvoked@ControllerProcessorTelemetry@@SAXI@Z @ 0x1800369B4 (-LogGamepadTaskSwitcherInvoked@ControllerProcessorTelemetry@@SAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall lambda_1ee5a9c53eca02d00e8b9ffa9f88f873_::_lambda_invoker_cdecl_(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // edi
  __int64 (__fastcall *v5)(__int64, __int64, __int64); // rax
  __int64 v6; // rcx

  v3 = 0;
  if ( *(_DWORD *)(a1 + 16) == 4 )
  {
    v5 = *(__int64 (__fastcall **)(__int64, __int64, __int64))(a1 + 32);
    *(_BYTE *)(a1 + 74) = 1;
    *(_DWORD *)(a1 + 16) = 6;
    if ( !v5 )
      goto LABEL_10;
    v6 = *(_QWORD *)(a1 + 40);
    if ( !v6 )
      goto LABEL_10;
    LOBYTE(a3) = 1;
  }
  else
  {
    if ( *(_DWORD *)(a1 + 16) != 5 )
      goto LABEL_10;
    *(_BYTE *)(a1 + 72) = 1;
    *(_BYTE *)(a1 + 74) = 0;
    *(_QWORD *)(a1 + 56) = *(_QWORD *)(a1 + 48);
    v5 = *(__int64 (__fastcall **)(__int64, __int64, __int64))(a1 + 32);
    *(_BYTE *)(a1 + 72) = 0;
    *(_DWORD *)(a1 + 16) = 6;
    if ( !v5 )
      goto LABEL_10;
    v6 = *(_QWORD *)(a1 + 40);
    if ( !v6 )
      goto LABEL_10;
    LOBYTE(a3) = *(_BYTE *)(a1 + 74);
  }
  v3 = v5(v6, a1 + 80, a3);
  if ( v3 >= 0 )
  {
LABEL_10:
    ControllerProcessorTelemetry::LogGamepadTaskSwitcherInvoked(*(_DWORD *)(a1 + 16));
    *(_BYTE *)(a1 + 74) = 0;
    *(_BYTE *)(a1 + 72) = 0;
  }
  return (unsigned int)v3;
}
