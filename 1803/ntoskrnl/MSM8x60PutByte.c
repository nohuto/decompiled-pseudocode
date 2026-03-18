/*
 * XREFs of MSM8x60PutByte @ 0x1402CE040
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 */

__int64 __fastcall MSM8x60PutByte(__int64 *a1, unsigned __int8 a2, char a3)
{
  __int64 v5; // rbx

  if ( a1 )
  {
    v5 = *a1;
    if ( *a1 )
    {
      if ( (((__int64 (__fastcall *)(__int64))off_140399430[0])(v5 + 8) & 8) != 0 )
        goto LABEL_8;
      if ( a3 )
      {
        while ( ((char (__fastcall *)(__int64))off_140399430[0])(v5 + 20) >= 0 )
          ;
        goto LABEL_8;
      }
      if ( ((char (__fastcall *)(__int64))off_140399430[0])(v5 + 20) < 0 )
      {
LABEL_8:
        ((void (__fastcall *)(__int64, __int64))off_140399438[0])(v5 + 64, 1LL);
        ((void (__fastcall *)(__int64, __int64))off_140399438[0])(v5 + 16, 768LL);
        ((void (__fastcall *)(__int64, _QWORD))off_140399438[0])(v5 + 112, a2);
        return 0LL;
      }
    }
  }
  return 3LL;
}
