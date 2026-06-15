/*
 * XREFs of s_apmSetLayoutGainForId @ 0x1800A20A0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall s_apmSetLayoutGainForId(__int64 a1, unsigned int a2)
{
  if ( (unsigned int)IsApmLayoutGainForIdSupported() )
    return (*(__int64 (__fastcall **)(struct IAudioPolicyManager *, _QWORD))(*(_QWORD *)g_PolicyManager + 224LL))(
             g_PolicyManager,
             a2);
  else
    return 2147500033LL;
}
