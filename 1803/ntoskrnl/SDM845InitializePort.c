/*
 * XREFs of SDM845InitializePort @ 0x1402CBA50
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     SDM845SetBaud @ 0x1402CBE60 (SDM845SetBaud.c)
 */

char __fastcall SDM845InitializePort(__int64 a1, __int64 a2, char a3)
{
  char result; // al
  unsigned int v5; // ebx

  result = 0;
  if ( a3 )
  {
    *(_WORD *)(a2 + 12) = 0;
    while ( (((__int64 (__fastcall *)(__int64))off_140399430[0])(*(_QWORD *)a2 + 64LL) & 1) != 0 )
      ;
    ((void (__fastcall *)(__int64, _QWORD))off_140399438[0])(*(_QWORD *)a2 + 128LL, 0LL);
    ((void (__fastcall *)(__int64, __int64))off_140399438[0])(*(_QWORD *)a2 + 3632LL, 85LL);
    ((void (__fastcall *)(__int64, __int64))off_140399438[0])(*(_QWORD *)a2 + 40LL, 127LL);
    ((void (__fastcall *)(__int64, __int64))off_140399438[0])(*(_QWORD *)a2 + 32LL, 1LL);
    ((void (__fastcall *)(__int64, __int64))off_140399438[0])(*(_QWORD *)a2 + 36LL, 127LL);
    ((void (__fastcall *)(__int64, _QWORD))off_140399438[0])(*(_QWORD *)a2 + 600LL, 0LL);
    ((void (__fastcall *)(__int64, __int64))off_140399438[0])(*(_QWORD *)a2 + 3612LL, 0xFFFFFFFFLL);
    ((void (__fastcall *)(__int64, _QWORD))off_140399438[0])(*(_QWORD *)a2 + 3608LL, 0LL);
    ((void (__fastcall *)(__int64, __int64))off_140399438[0])(*(_QWORD *)a2 + 1556LL, 3003121759LL);
    ((void (__fastcall *)(__int64, __int64))off_140399438[0])(*(_QWORD *)a2 + 1604LL, 3003154015LL);
    ((void (__fastcall *)(__int64))off_140399430[0])(*(_QWORD *)a2 + 3620LL);
    ((void (__fastcall *)(__int64, __int64))off_140399438[0])(*(_QWORD *)a2 + 2060LL, 4LL);
    v5 = (((unsigned int (__fastcall *)(__int64))off_140399430[0])(*(_QWORD *)a2 + 3624LL) >> 16) & 0x3F;
    ((void (__fastcall *)(__int64, _QWORD))off_140399438[0])(*(_QWORD *)a2 + 2064LL, v5 - 8);
    ((void (__fastcall *)(__int64, _QWORD))off_140399438[0])(*(_QWORD *)a2 + 2068LL, v5 - 4);
    SDM845SetBaud(a2, *(unsigned int *)(a2 + 8));
    ((void (__fastcall *)(__int64, __int64))off_140399438[0])(*(_QWORD *)a2 + 616LL, 8LL);
    ((void (__fastcall *)(__int64, __int64))off_140399438[0])(*(_QWORD *)a2 + 652LL, 8LL);
    ((void (__fastcall *)(__int64, _QWORD))off_140399438[0])(*(_QWORD *)a2 + 676LL, 0LL);
    ((void (__fastcall *)(__int64, __int64))off_140399438[0])(*(_QWORD *)a2 + 604LL, 2LL);
    ((void (__fastcall *)(__int64, _QWORD))off_140399438[0])(*(_QWORD *)a2 + 680LL, 0LL);
    ((void (__fastcall *)(__int64, _QWORD))off_140399438[0])(*(_QWORD *)a2 + 640LL, 0LL);
    ((void (__fastcall *)(__int64, _QWORD))off_140399438[0])(*(_QWORD *)a2 + 620LL, 0LL);
    ((void (__fastcall *)(__int64, __int64))off_140399438[0])(*(_QWORD *)a2 + 660LL, 220LL);
    ((void (__fastcall *)(__int64, __int64))off_140399438[0])(*(_QWORD *)a2 + 1584LL, 0x8000000LL);
    return 1;
  }
  return result;
}
