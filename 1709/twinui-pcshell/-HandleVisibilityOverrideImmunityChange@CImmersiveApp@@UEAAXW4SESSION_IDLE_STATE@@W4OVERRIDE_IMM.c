/*
 * XREFs of ?HandleVisibilityOverrideImmunityChange@CImmersiveApp@@UEAAXW4SESSION_IDLE_STATE@@W4OVERRIDE_IMMUNITY_CHANGE@@@Z @ 0x1800587F0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_Sd @ 0x180052138 (WPP_SF_Sd.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CImmersiveApp::HandleVisibilityOverrideImmunityChange(__int64 a1, int a2, int a3)
{
  __int64 result; // rax

  if ( a2 == 1 && a3 == 2 )
  {
    if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      WPP_SF_Sd(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0xCu,
        &WPP_6f54c26325303d06ba2693269ff4d199_Traceguids,
        *(const wchar_t **)(a1 + 432),
        *(_DWORD *)(a1 + 440));
    return (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 104LL))(a1, 1LL);
  }
  return result;
}
