/*
 * XREFs of AudioServerDeriveStreamCategory @ 0x18002ABA0
 * Callers:
 *     <none>
 * Callees:
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18004B5C4 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall AudioServerDeriveStreamCategory(__int64 a1, unsigned int a2, unsigned int a3, __int64 a4)
{
  __int64 result; // rax
  unsigned int v5; // ebx

  if ( !g_PolicyManager )
  {
    v5 = -2147418113;
    goto LABEL_5;
  }
  result = (*(__int64 (__fastcall **)(struct IAudioPolicyManager *, __int64, _QWORD, _QWORD, __int64))(*(_QWORD *)g_PolicyManager + 96LL))(
             g_PolicyManager,
             a1,
             a2,
             a3,
             a4);
  v5 = result;
  if ( (int)result < 0 )
  {
LABEL_5:
    AudSrvTraceLoggingErrorHelper("AudioServerDeriveStreamCategory", 0x1115u, v5);
    return v5;
  }
  return result;
}
