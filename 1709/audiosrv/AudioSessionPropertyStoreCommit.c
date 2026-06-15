/*
 * XREFs of AudioSessionPropertyStoreCommit @ 0x180078970
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18005F740 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     WPP_SF_S @ 0x180064B48 (WPP_SF_S.c)
 */

__int64 __fastcall AudioSessionPropertyStoreCommit(__int64 *a1)
{
  __int64 v1; // rbx
  int v2; // eax
  unsigned int v3; // ebx

  v1 = *a1;
  if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x2Fu, (__int64)&WPP_f31bef8187753e0293a3e215cbf500b3_Traceguids, 0LL);
  }
  v2 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v1 + 72) + 432LL))(*(_QWORD *)(v1 + 72));
  v3 = v2;
  if ( v2 < 0 )
    AudSrvTraceLoggingErrorHelper("AudioSessionPropertyStoreCommit", 2450, v2);
  return v3;
}
