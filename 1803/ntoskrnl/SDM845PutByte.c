/*
 * XREFs of SDM845PutByte @ 0x1402CBD00
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 */

__int64 __fastcall SDM845PutByte(__int64 *a1, unsigned __int8 a2, char a3)
{
  __int64 v5; // rcx

  if ( a1 )
  {
    v5 = *a1;
    if ( v5 )
    {
      if ( a3 )
      {
        while ( (((__int64 (__fastcall *)(__int64))off_140399430[0])(*a1 + 64) & 1) != 0 )
          ;
        goto LABEL_7;
      }
      if ( (((__int64 (__fastcall *)(__int64))off_140399430[0])(v5 + 64) & 1) == 0 )
      {
LABEL_7:
        ((void (__fastcall *)(__int64, __int64))off_140399438[0])(*a1 + 624, 1LL);
        ((void (__fastcall *)(__int64, __int64))off_140399438[0])(*a1 + 1536, 0x8000000LL);
        ((void (__fastcall *)(__int64, _QWORD))off_140399438[0])(*a1 + 1792, a2);
        return 0LL;
      }
    }
  }
  return 3LL;
}
