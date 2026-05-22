/*
 * XREFs of ?OnDeviceCommandStatic@InputStateManager@@SAJPEAX0H@Z @ 0x180007330
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall InputStateManager::OnDeviceCommandStatic(char *a1, char *a2)
{
  __int64 result; // rax
  __int64 v3; // rcx

  if ( !a1 || !a2 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      McTemplateU0qqq((__int64)a1, &MinInput_Warning_CheckResult, 1, 774, 255);
LABEL_8:
    if ( IsDebuggerPresent() )
      __debugbreak();
    __fastfail(7u);
  }
  LODWORD(result) = (*(__int64 (__fastcall **)(char *, _QWORD, char *))(*((_QWORD *)a1 + 1) + 72LL))(
                      a1 + 8,
                      *(unsigned int *)a2,
                      a2 + 8);
  if ( (int)result < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      McTemplateU0qqq(v3, &MinInput_Warning_CheckResult, 1, 782, result);
    goto LABEL_8;
  }
  return (unsigned int)result;
}
