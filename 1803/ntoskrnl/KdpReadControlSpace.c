/*
 * XREFs of KdpReadControlSpace @ 0x1408042F0
 * Callers:
 *     KdpSendWaitContinue @ 0x140804F74 (KdpSendWaitContinue.c)
 * Callees:
 *     KdpSysReadControlSpace @ 0x1408064E8 (KdpSysReadControlSpace.c)
 */

__int64 __fastcall KdpReadControlSpace(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // r8
  __int64 v6; // r9
  __int64 v7; // rcx
  __int64 v8; // rdx
  unsigned int v9; // ebx
  __int64 v10; // r8
  int v11; // eax
  bool v12; // cf
  __int16 v14; // [rsp+30h] [rbp-18h] BYREF
  __int64 v15; // [rsp+38h] [rbp-10h]
  __int64 v16; // [rsp+60h] [rbp+18h] BYREF

  v16 = a3;
  v3 = *(unsigned int *)(a1 + 24);
  v15 = a1;
  v14 = 56;
  if ( v3 > (unsigned __int64)(unsigned int)KdTransportMaxPacketSize - 56 )
    LODWORD(v3) = KdTransportMaxPacketSize - 56;
  v6 = *(unsigned __int16 *)(a2 + 2);
  v7 = *(unsigned __int16 *)(a1 + 6);
  v8 = *(_QWORD *)(a1 + 16);
  v9 = v3;
  if ( (unsigned int)v3 <= (unsigned int)v6 )
    v6 = (unsigned int)v3;
  else
    v9 = v6;
  v10 = *(_QWORD *)(a2 + 8);
  LODWORD(v16) = v6;
  v11 = KdpSysReadControlSpace(v7, v8, v10, v6, &v16);
  v12 = (unsigned int)v16 < v9;
  *(_DWORD *)(a1 + 8) = v11;
  if ( v12 )
    v9 = v16;
  *(_WORD *)a2 = v9;
  *(_DWORD *)(a1 + 28) = v9;
  return KdSendPacket(2LL, &v14, a2, &KdpContext);
}
