/*
 * XREFs of PL011RxReady @ 0x1402CC430
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 */

bool __fastcall PL011RxReady(__int64 a1)
{
  __int64 (__fastcall *v1)(); // rax

  if ( !a1 || !*(_QWORD *)a1 )
    return 0;
  v1 = off_140399430[0];
  if ( (*(_BYTE *)(a1 + 12) & 0x10) == 0 )
    v1 = off_140399420[0];
  return (((__int64 (__fastcall *)(__int64))v1)(*(_QWORD *)a1 + 24LL) & 0x10) == 0;
}
