/*
 * XREFs of Uart16550PutByte @ 0x1402CCB80
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 */

__int64 __fastcall Uart16550PutByte(__int64 a1, __int64 a2, char a3)
{
  char v4; // di
  char v6; // al
  __int16 v7; // r8
  char v8; // al
  __int64 v9; // rdx
  __int64 v10; // r8

  v4 = a2;
  if ( !a1 || !*(_QWORD *)a1 )
    return 3LL;
  if ( (*(_BYTE *)(a1 + 12) & 4) != 0 )
  {
    LOBYTE(a2) = 6;
    for ( LOBYTE(a2) = (*(__int64 (__fastcall **)(__int64, __int64))(a1 + 16))(a1, a2);
          (a2 & 0xB0) != 0xB0;
          LOBYTE(a2) = (*(__int64 (__fastcall **)(__int64, __int64))(a1 + 16))(a1, a2) )
    {
      if ( (a2 & 0x80u) == 0LL )
      {
        LOBYTE(a2) = 5;
        (*(void (__fastcall **)(__int64, __int64))(a1 + 16))(a1, a2);
        if ( (*(_BYTE *)(a1 + 12) & 1) != 0 )
          (*(void (__fastcall **)(__int64, _QWORD))(a1 + 16))(a1, 0LL);
      }
      LOBYTE(a2) = 6;
    }
  }
  while ( 1 )
  {
    LOBYTE(a2) = 5;
    if ( ((*(__int64 (__fastcall **)(__int64, __int64))(a1 + 16))(a1, a2) & 0x20) != 0 )
      break;
    LOBYTE(v9) = 6;
    v6 = (*(__int64 (__fastcall **)(__int64, __int64))(a1 + 16))(a1, v9);
    v7 = *(_WORD *)(a1 + 12);
    v8 = v6 & 0x40;
    if ( v8 == 0 && (v7 & 2) != 0 || v8 != 0 && (v7 & 2) == 0 )
      *(_WORD *)(a1 + 12) = v7 | 4;
    if ( !a3 )
      return 3LL;
  }
  LOBYTE(v10) = v4;
  (*(void (__fastcall **)(__int64, _QWORD, __int64))(a1 + 24))(a1, 0LL, v10);
  return 0LL;
}
