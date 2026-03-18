/*
 * XREFs of KiUpdateTimer2Flags @ 0x14012AFB0
 * Callers:
 *     KiTimer2Expiration @ 0x140047B60 (KiTimer2Expiration.c)
 *     KiExpireTimer2 @ 0x140048CA0 (KiExpireTimer2.c)
 *     KeCancelTimer2 @ 0x14012ACD0 (KeCancelTimer2.c)
 *     KeDisableTimer2 @ 0x14012ADA8 (KeDisableTimer2.c)
 *     KiTraceSetTimer2 @ 0x140206604 (KiTraceSetTimer2.c)
 * Callees:
 *     KiFinalizeTimer2Disablement @ 0x14012B0CC (KiFinalizeTimer2Disablement.c)
 */

char __fastcall KiUpdateTimer2Flags(volatile signed __int32 *a1, int a2, char a3)
{
  char v3; // r9
  volatile signed __int32 v5; // r8d
  char v6; // r11
  int v7; // r9d
  unsigned int v9; // ebx
  int v10; // esi
  int v11; // ebx
  signed __int32 v12; // edx
  signed __int32 v13; // eax
  signed __int32 v15; // ecx

  v3 = a3 << 7;
  v5 = *a1;
  v6 = 0;
  v7 = ~v3 & 0x80 | 0xF00;
  v9 = v7 & 0xFFFFF0FF;
  if ( (a3 & 2) == 0 )
    v9 = v7;
  v10 = a2 << 8;
  v11 = ~v9;
  v12 = (a2 << 8) | v5 & v11;
  v13 = _InterlockedCompareExchange(a1, v12, *a1);
  if ( v5 != v13 )
  {
    do
    {
      v15 = v13;
      v12 = v10 | v13 & v11;
      v13 = _InterlockedCompareExchange(a1, v12, v13);
    }
    while ( v15 != v13 );
  }
  if ( (a3 & 4) != 0 && (v12 & 0x3F00) == 0x2000 )
  {
    KiFinalizeTimer2Disablement(a1);
    return 1;
  }
  return v6;
}
