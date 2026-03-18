/*
 * XREFs of KdpGetContextEx @ 0x14023EA50
 * Callers:
 *     KdpSendWaitContinue @ 0x140804F74 (KdpSendWaitContinue.c)
 * Callees:
 *     KdpGetContext @ 0x140804200 (KdpGetContext.c)
 *     KdpQuickMoveMemory @ 0x1408068D4 (KdpQuickMoveMemory.c)
 */

__int64 __fastcall KdpGetContextEx(_DWORD *a1, unsigned __int16 *a2)
{
  unsigned int v2; // ebp
  unsigned int v3; // ebx
  unsigned int v6; // eax
  unsigned int v7; // r9d
  unsigned int v8; // eax
  int v9; // ecx
  __int16 v11; // [rsp+20h] [rbp-18h] BYREF
  _DWORD *v12; // [rsp+28h] [rbp-10h]

  v2 = a1[4];
  v3 = a1[5];
  v11 = 56;
  v12 = a1;
  KdpGetContext(a1, a2);
  a1[6] = 0;
  if ( !a1[2] )
  {
    v6 = *a2;
    v7 = v6;
    if ( v2 < v6 )
      v7 = v2;
    v8 = v6 - v7;
    if ( v3 > v8 )
      v3 = v8;
    if ( v7 && v3 )
      KdpQuickMoveMemory(*((_QWORD *)a2 + 1), *((_QWORD *)a2 + 1) + v7, v3);
    a1[4] = v7;
    a1[5] = *a2;
    a1[6] = v3;
    v9 = *a2;
    if ( v3 == v9 || v3 && v7 + v3 == v9 )
      KdpContextSent = 1;
    *a2 = v3;
  }
  return KdSendPacket(2LL, &v11, a2, &KdpContext);
}
