/*
 * XREFs of PortSrbGetLbaFromCdb @ 0x1C0047664
 * Callers:
 *     RaidStartIoPacket @ 0x1C0007770 (RaidStartIoPacket.c)
 *     IsZonedWriteRequest @ 0x1C002B5D4 (IsZonedWriteRequest.c)
 *     RaidZoneWriteGroupListSearchRequest @ 0x1C0031FD8 (RaidZoneWriteGroupListSearchRequest.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PortSrbGetLbaFromCdb(unsigned __int8 *a1, int a2)
{
  __int64 v3; // [rsp+20h] [rbp+20h]

  if ( a2 != 16 )
    return a1[5] | ((a1[4] | ((a1[3] | (a1[2] << 8)) << 8)) << 8);
  HIBYTE(v3) = a1[2];
  BYTE6(v3) = a1[3];
  BYTE5(v3) = a1[4];
  BYTE4(v3) = a1[5];
  BYTE3(v3) = a1[6];
  BYTE2(v3) = a1[7];
  BYTE1(v3) = a1[8];
  LOBYTE(v3) = a1[9];
  return v3;
}
