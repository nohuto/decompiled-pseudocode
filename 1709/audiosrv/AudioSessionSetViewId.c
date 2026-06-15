/*
 * XREFs of AudioSessionSetViewId @ 0x180031920
 * Callers:
 *     <none>
 * Callees:
 *     ?SetViewId@CAudioSession@@UEAAJI@Z @ 0x180018480 (-SetViewId@CAudioSession@@UEAAJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18005F740 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     WPP_SF_S @ 0x180064B48 (WPP_SF_S.c)
 */

__int64 __fastcall AudioSessionSetViewId(__int64 *a1, unsigned int a2)
{
  __int64 v2; // rdi
  CAudioSession *v4; // rcx
  __int64 (__fastcall *v5)(CAudioSession *, unsigned int); // rax
  int v6; // eax
  unsigned int v7; // ebx

  v2 = *a1;
  if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 48LL, &WPP_f31bef8187753e0293a3e215cbf500b3_Traceguids, 0LL);
  }
  v4 = *(CAudioSession **)(v2 + 72);
  v5 = *(__int64 (__fastcall **)(CAudioSession *, unsigned int))(*(_QWORD *)v4 + 440LL);
  if ( v5 == CAudioSession::SetViewId )
    v6 = CAudioSession::SetViewId(v4, a2);
  else
    v6 = v5(v4, a2);
  v7 = v6;
  if ( v6 < 0 )
    AudSrvTraceLoggingErrorHelper("AudioSessionSetViewId", 0x9C6u, v6);
  return v7;
}
