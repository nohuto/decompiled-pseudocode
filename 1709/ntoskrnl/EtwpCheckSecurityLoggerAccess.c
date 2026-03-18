/*
 * XREFs of EtwpCheckSecurityLoggerAccess @ 0x1405F1024
 * Callers:
 *     EtwpQueryTrace @ 0x1404ED7B8 (EtwpQueryTrace.c)
 *     EtwpCheckNotificationAccess @ 0x1404EEFD4 (EtwpCheckNotificationAccess.c)
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
