/*
 * XREFs of AudioSessionSetDuckingPreference @ 0x180078D20
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18005F740 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

__int64 __fastcall AudioSessionSetDuckingPreference(_QWORD *a1, unsigned __int8 a2)
{
  int v2; // eax
  unsigned int v3; // ebx

  v2 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*a1 + 272LL))(*a1, a2);
  v3 = v2;
  if ( v2 < 0 )
    AudSrvTraceLoggingErrorHelper("AudioSessionSetDuckingPreference", 2468, v2);
  return v3;
}
