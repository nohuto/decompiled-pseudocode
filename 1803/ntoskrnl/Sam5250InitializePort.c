/*
 * XREFs of Sam5250InitializePort @ 0x1402CE340
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 */

char __fastcall Sam5250InitializePort(__int64 a1, __int64 *a2, char a3)
{
  char result; // al
  __int64 v5; // rcx

  result = 0;
  if ( a3 )
  {
    v5 = *a2;
    *((_WORD *)a2 + 6) = 0;
    ((void (__fastcall *)(__int64, _QWORD))off_140399438[0])(v5 + 4, 0LL);
    ((void (__fastcall *)(_QWORD, __int64))off_140399438[0])(*a2, 3LL);
    ((void (__fastcall *)(__int64, __int64))off_140399438[0])(*a2 + 8, 1LL);
    ((void (__fastcall *)(__int64, __int64))off_140399438[0])(*a2 + 56, 15LL);
    ((void (__fastcall *)(__int64, __int64))off_140399438[0])(*a2 + 48, 15LL);
    ((void (__fastcall *)(__int64, __int64))off_140399438[0])(*a2 + 4, 5LL);
    return 1;
  }
  return result;
}
