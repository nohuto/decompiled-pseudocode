/*
 * XREFs of PiDmPnpObjectMatchCallback @ 0x140697900
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall PiDmPnpObjectMatchCallback(__int64 a1, __int64 a2, _BYTE *a3)
{
  if ( *(_QWORD *)a2 )
    *a3 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))a2)(
            *(_QWORD *)&PiPnpRtlCtx,
            *(_QWORD *)(a1 + 16),
            *(unsigned int *)(a1 + 28),
            *(_QWORD *)(a2 + 8));
  else
    *a3 = 1;
  return 0LL;
}
