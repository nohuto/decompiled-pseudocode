/*
 * XREFs of MX6PutByte @ 0x1402CD4C0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 */

__int64 __fastcall MX6PutByte(__int64 *a1, unsigned __int8 a2, char a3)
{
  __int64 v5; // [rsp+30h] [rbp+8h]

  if ( a1 && *a1 )
  {
    v5 = *a1;
    if ( a3 )
    {
      while ( (((__int64 (__fastcall *)(__int64))off_140399430[0])(v5 + 148) & 0x2000) == 0 )
        ;
      goto LABEL_7;
    }
    if ( (((__int64 (__fastcall *)(__int64))off_140399430[0])(v5 + 148) & 0x2000) != 0 )
    {
LABEL_7:
      ((void (__fastcall *)(__int64, _QWORD))off_140399438[0])(v5 + 64, a2);
      return 0LL;
    }
  }
  return 3LL;
}
