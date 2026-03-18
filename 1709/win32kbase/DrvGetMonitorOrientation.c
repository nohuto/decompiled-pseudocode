/*
 * XREFs of DrvGetMonitorOrientation @ 0x1C00FA290
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00AB7F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DrvGetMonitorOrientation(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  if ( a1 )
    return ((__int64 (__fastcall *)(_QWORD, __int64, _QWORD, __int64, __int64))qword_1C01906B0)(*a1, a2, 0LL, a3, a4);
  else
    return 3221225485LL;
}
