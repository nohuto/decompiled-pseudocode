/*
 * XREFs of Bcm2835InitializePort @ 0x1402CBFA0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 */

char __fastcall Bcm2835InitializePort(__int64 a1, __int64 *a2, char a3)
{
  char result; // al
  __int64 v5; // rcx
  int v6; // eax

  result = 0;
  if ( a3 )
  {
    v5 = *a2;
    *((_WORD *)a2 + 6) = 0;
    *((_DWORD *)a2 + 2) = 0;
    v6 = ((__int64 (__fastcall *)(__int64))off_140399430[0])(v5 + 68);
    ((void (__fastcall *)(__int64, _QWORD))off_140399438[0])(*a2 + 68, v6 & 0xFFFFFFFC);
    ((void (__fastcall *)(__int64, __int64))off_140399438[0])(*a2 + 76, 3LL);
    return 1;
  }
  return result;
}
