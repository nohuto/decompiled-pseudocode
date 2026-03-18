/*
 * XREFs of PL011PutByte @ 0x1402CC340
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 */

__int64 __fastcall PL011PutByte(__int64 *a1, unsigned __int8 a2, char a3)
{
  __int16 v5; // di
  __int64 v6; // rcx
  char v7; // al
  __int64 v8; // rdx
  __int64 v9; // rcx
  char v10; // al
  __int64 v11; // rcx

  if ( !a1 || !*a1 )
    return 3LL;
  v5 = *((_WORD *)a1 + 6) & 0x10;
  if ( a3 )
  {
    do
    {
      v6 = *a1 + 24;
      if ( v5 )
        v7 = ((__int64 (__fastcall *)(__int64))off_140399430[0])(v6);
      else
        v7 = ((__int64 (__fastcall *)(__int64))off_140399420[0])(v6);
    }
    while ( (v7 & 0x20) != 0 );
    goto LABEL_13;
  }
  v9 = *a1 + 24;
  v10 = v5
      ? ((__int64 (__fastcall *)(__int64))off_140399430[0])(v9)
      : ((__int64 (__fastcall *)(__int64))off_140399420[0])(v9);
  if ( (v10 & 0x20) != 0 )
    return 3LL;
LABEL_13:
  v11 = *a1;
  if ( v5 )
  {
    ((void (__fastcall *)(__int64, _QWORD))off_140399438[0])(v11, a2);
  }
  else
  {
    LOBYTE(v8) = a2;
    ((void (__fastcall *)(__int64, __int64))off_140399418[0])(v11, v8);
  }
  return 0LL;
}
