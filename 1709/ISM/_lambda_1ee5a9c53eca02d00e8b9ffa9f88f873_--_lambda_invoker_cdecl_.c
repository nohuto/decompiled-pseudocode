/*
 * XREFs of _lambda_1ee5a9c53eca02d00e8b9ffa9f88f873_::_lambda_invoker_cdecl_ @ 0x180042A20
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 *     ?LogGamepadTaskSwitcherInvoked@ControllerProcessorTelemetry@@SAXI@Z @ 0x180042284 (-LogGamepadTaskSwitcherInvoked@ControllerProcessorTelemetry@@SAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall lambda_1ee5a9c53eca02d00e8b9ffa9f88f873_::_lambda_invoker_cdecl_(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // edi
  __int64 (__fastcall *v5)(__int64, __int64, __int64); // rax
  __int64 v6; // rcx
  int v7; // eax
  __int64 v8; // rcx
  int v9; // r9d
  __int64 (__fastcall *v10)(__int64, __int64, __int64); // rax
  __int64 v11; // rcx

  v3 = 0;
  if ( *(_DWORD *)(a1 + 16) != 4 )
  {
    if ( *(_DWORD *)(a1 + 16) == 5 )
    {
      *(_BYTE *)(a1 + 72) = 1;
      *(_BYTE *)(a1 + 74) = 0;
      *(_QWORD *)(a1 + 56) = *(_QWORD *)(a1 + 48);
      v10 = *(__int64 (__fastcall **)(__int64, __int64, __int64))(a1 + 32);
      *(_BYTE *)(a1 + 72) = 0;
      *(_DWORD *)(a1 + 16) = 6;
      if ( v10 )
      {
        v11 = *(_QWORD *)(a1 + 40);
        if ( v11 )
        {
          LOBYTE(a3) = *(_BYTE *)(a1 + 74);
          v7 = v10(v11, a1 + 80, a3);
          v3 = v7;
          if ( v7 < 0 )
          {
            if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
              return v3;
            v9 = 235;
            goto LABEL_7;
          }
        }
      }
    }
LABEL_14:
    ControllerProcessorTelemetry::LogGamepadTaskSwitcherInvoked(*(_DWORD *)(a1 + 16));
    *(_BYTE *)(a1 + 74) = 0;
    *(_BYTE *)(a1 + 72) = 0;
    return v3;
  }
  v5 = *(__int64 (__fastcall **)(__int64, __int64, __int64))(a1 + 32);
  *(_BYTE *)(a1 + 74) = 1;
  *(_DWORD *)(a1 + 16) = 6;
  if ( !v5 )
    goto LABEL_14;
  v6 = *(_QWORD *)(a1 + 40);
  if ( !v6 )
    goto LABEL_14;
  LOBYTE(a3) = 1;
  v7 = v5(v6, a1 + 80, a3);
  v3 = v7;
  if ( v7 >= 0 )
    goto LABEL_14;
  if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
  {
    v9 = 214;
LABEL_7:
    McTemplateU0qqq(v8, &MinInput_Warning_CheckResult, 0, v9, v7);
  }
  return v3;
}
