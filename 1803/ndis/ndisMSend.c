/*
 * XREFs of ndisMSend @ 0x1C0056920
 * Callers:
 *     <none>
 * Callees:
 *     ndisMSendPackets @ 0x1C0057140 (ndisMSendPackets.c)
 */

__int64 __fastcall ndisMSend(__int64 a1, __int64 a2)
{
  __int64 v3; // [rsp+38h] [rbp+10h] BYREF

  v3 = a2;
  ndisMSendPackets(a1, &v3, 1LL);
  return 259LL;
}
