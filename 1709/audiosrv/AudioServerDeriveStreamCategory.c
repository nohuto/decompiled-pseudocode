/*
 * XREFs of AudioServerDeriveStreamCategory @ 0x18002F5F0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18005F740 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

__int64 __fastcall AudioServerDeriveStreamCategory(__int64 a1, unsigned int a2, unsigned int a3, __int64 a4)
{
  int v4; // ebx

  if ( !g_PolicyManager )
  {
    v4 = -2147418113;
    goto LABEL_5;
  }
  v4 = (*(__int64 (__fastcall **)(struct IAudioPolicyManager *, __int64, _QWORD, _QWORD, __int64))(*(_QWORD *)g_PolicyManager
                                                                                                 + 96LL))(
         g_PolicyManager,
         a1,
         a2,
         a3,
         a4);
  if ( v4 < 0 )
LABEL_5:
    AudSrvTraceLoggingErrorHelper("AudioServerDeriveStreamCategory", 0x110Cu, v4);
  return (unsigned int)v4;
}
