/*
 * XREFs of KdpGetBusData @ 0x140804140
 * Callers:
 *     KdpSendWaitContinue @ 0x140804F74 (KdpSendWaitContinue.c)
 * Callees:
 *     KdpSysReadBusData @ 0x14080598C (KdpSysReadBusData.c)
 */

__int64 __fastcall KdpGetBusData(_DWORD *a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v5; // rcx
  unsigned int v6; // eax
  unsigned int v7; // ebx
  __int64 v8; // r9
  __int64 v9; // r8
  __int64 v10; // rdx
  __int64 v11; // rcx
  int v12; // eax
  bool v13; // cf
  __int16 v15; // [rsp+40h] [rbp-18h] BYREF
  _DWORD *v16; // [rsp+48h] [rbp-10h]
  __int64 v17; // [rsp+70h] [rbp+18h] BYREF

  v17 = a3;
  v16 = a1;
  v15 = 56;
  v5 = (unsigned int)a1[8];
  if ( v5 > (unsigned __int64)(unsigned int)KdTransportMaxPacketSize - 56 )
    LODWORD(v5) = KdTransportMaxPacketSize - 56;
  v6 = *(unsigned __int16 *)(a2 + 2);
  v7 = v5;
  v8 = (unsigned int)a1[7];
  v9 = (unsigned int)a1[6];
  v10 = (unsigned int)a1[5];
  if ( (unsigned int)v5 <= v6 )
    v6 = v5;
  else
    v7 = *(unsigned __int16 *)(a2 + 2);
  v11 = (unsigned int)a1[4];
  LODWORD(v17) = v6;
  v12 = KdpSysReadBusData(v11, v10, v9, v8, *(_QWORD *)(a2 + 8), v6, &v17);
  v13 = (unsigned int)v17 < v7;
  a1[2] = v12;
  if ( v13 )
    v7 = v17;
  a1[8] = v7;
  *(_WORD *)a2 = v7;
  return KdSendPacket(2LL, &v15, a2, &KdpContext);
}
