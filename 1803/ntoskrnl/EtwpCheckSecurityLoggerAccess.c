/*
 * XREFs of EtwpCheckSecurityLoggerAccess @ 0x140605EF4
 * Callers:
 *     EtwpQueryTrace @ 0x14058B85C (EtwpQueryTrace.c)
 *     EtwpCheckNotificationAccess @ 0x14058D188 (EtwpCheckNotificationAccess.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall EtwpCheckSecurityLoggerAccess(__int64 a1)
{
  char v1; // al
  unsigned int v2; // edx

  v1 = *(_BYTE *)(a1 + 1738);
  v2 = 0;
  if ( ((v1 - 49) & 0xCF) != 0 || v1 == 65 )
    return (unsigned int)-1073741790;
  return v2;
}
