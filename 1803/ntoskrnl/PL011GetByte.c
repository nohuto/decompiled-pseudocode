/*
 * XREFs of PL011GetByte @ 0x1402CC0D0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 */

__int64 __fastcall PL011GetByte(__int64 a1, _BYTE *a2)
{
  __int16 v4; // si
  __int64 v5; // rcx
  __int64 (__fastcall *v6)(); // rax
  __int16 v7; // si
  __int64 (__fastcall *v8)(); // rax
  __int16 v9; // ax

  if ( !a1 || !*(_QWORD *)a1 )
    return 3LL;
  v4 = *(_WORD *)(a1 + 12);
  v5 = *(_QWORD *)a1 + 24LL;
  v6 = off_140399430[0];
  v7 = v4 & 0x10;
  if ( !v7 )
    v6 = off_140399420[0];
  if ( (((__int64 (__fastcall *)(__int64))v6)(v5) & 0x10) != 0 )
    return 1LL;
  v8 = off_140399430[0];
  if ( !v7 )
    v8 = off_140399420[0];
  v9 = ((__int64 (__fastcall *)(_QWORD))v8)(*(_QWORD *)a1);
  if ( (v9 & 0x700) != 0 )
  {
    *a2 = 0;
    return 2LL;
  }
  else
  {
    *a2 = v9;
    return 0LL;
  }
}
