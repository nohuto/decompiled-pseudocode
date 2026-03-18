/*
 * XREFs of MSM8974InitializePort @ 0x1402CCFB0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     MSM8974SetBaud @ 0x1402CD280 (MSM8974SetBaud.c)
 */

char __fastcall MSM8974InitializePort(__int64 a1, __int64 *a2, char a3, __int64 a4, char a5)
{
  char result; // al
  __int64 v7; // rcx

  result = 0;
  if ( a3 )
  {
    if ( a5 == 32 )
    {
      v7 = *a2;
      *((_WORD *)a2 + 6) = 0;
      ((void (__fastcall *)(__int64, __int64))off_140399438[0])(v7 + 168, 2LL);
      ((void (__fastcall *)(__int64, __int64))off_140399438[0])(*a2 + 168, 8LL);
      ((void (__fastcall *)(__int64, __int64))off_140399438[0])(*a2 + 168, 48LL);
      ((void (__fastcall *)(__int64, __int64))off_140399438[0])(*a2 + 168, 16LL);
      ((void (__fastcall *)(__int64, __int64))off_140399438[0])(*a2 + 168, 32LL);
      ((void (__fastcall *)(_QWORD, _QWORD))off_140399438[0])(*a2, 0LL);
      ((void (__fastcall *)(__int64, __int64))off_140399438[0])(*a2 + 4, 52LL);
      MSM8974SetBaud(a2, *((unsigned int *)a2 + 2));
      ((void (__fastcall *)(__int64, _QWORD))off_140399438[0])(*a2 + 176, 0LL);
      ((void (__fastcall *)(__int64, __int64))off_140399438[0])(*a2 + 24, 2LL);
      ((void (__fastcall *)(__int64, __int64))off_140399438[0])(*a2 + 68, 112LL);
      ((void (__fastcall *)(__int64, _QWORD))off_140399438[0])(*a2 + 60, 0LL);
      ((void (__fastcall *)(__int64, __int64))off_140399438[0])(*a2 + 52, 0x2000LL);
      ((void (__fastcall *)(__int64, __int64))off_140399438[0])(*a2 + 168, 128LL);
      ((void (__fastcall *)(__int64, __int64))off_140399438[0])(*a2 + 168, 1280LL);
      ((void (__fastcall *)(__int64, __int64))off_140399438[0])(*a2 + 168, 5LL);
      return 1;
    }
  }
  return result;
}
