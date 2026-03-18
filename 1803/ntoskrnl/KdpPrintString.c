/*
 * XREFs of KdpPrintString @ 0x14080708C
 * Callers:
 *     KdRefreshDebuggerNotPresent @ 0x1401872C0 (KdRefreshDebuggerNotPresent.c)
 *     KdpPrint @ 0x140805FF8 (KdpPrint.c)
 * Callees:
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     KdpPollBreakInWithPortLock @ 0x14023F2AC (KdpPollBreakInWithPortLock.c)
 *     KdpCopyMemoryChunks @ 0x140806778 (KdpCopyMemoryChunks.c)
 */

bool __fastcall KdpPrintString(char **a1)
{
  __int64 v2; // [rsp+30h] [rbp-40h] BYREF
  __int16 v3; // [rsp+38h] [rbp-38h] BYREF
  _BYTE *v4; // [rsp+40h] [rbp-30h]
  __int16 v5; // [rsp+48h] [rbp-28h] BYREF
  int *v6; // [rsp+50h] [rbp-20h]
  int v7; // [rsp+58h] [rbp-18h] BYREF
  __int16 v8; // [rsp+5Ch] [rbp-14h]
  __int16 Number; // [rsp+5Eh] [rbp-12h]
  int v10; // [rsp+60h] [rbp-10h]

  KdpCopyMemoryChunks(a1[1], KdpMessageBuffer, *(unsigned __int16 *)a1, 0, 4u, &v2);
  if ( (unsigned __int64)(unsigned int)v2 + 16 > (unsigned int)KdTransportMaxPacketSize )
    LODWORD(v2) = KdTransportMaxPacketSize - 16;
  v8 = KeProcessorLevel;
  v7 = 12848;
  Number = KeGetPcr()->Prcb.Number;
  v5 = 16;
  v6 = &v7;
  v10 = v2;
  v3 = v2;
  v4 = KdpMessageBuffer;
  KdSendPacket(3LL, &v5, &v3, &KdpContext);
  return KdpPollBreakInWithPortLock();
}
