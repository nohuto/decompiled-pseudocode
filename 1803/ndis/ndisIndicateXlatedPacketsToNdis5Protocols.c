/*
 * XREFs of ndisIndicateXlatedPacketsToNdis5Protocols @ 0x1C0025964
 * Callers:
 *     NdisMIndicateReceiveNetBufferLists @ 0x1C00022E0 (NdisMIndicateReceiveNetBufferLists.c)
 *     ndisMTopReceiveNetBufferLists @ 0x1C0002D60 (ndisMTopReceiveNetBufferLists.c)
 *     ndisMDispatchReceiveNetBufferListsWithLock @ 0x1C001FCF0 (ndisMDispatchReceiveNetBufferListsWithLock.c)
 *     ?ndisDoPeriodicReceivesIndication@@YAKPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER_LIST@@@Z @ 0x1C0068E48 (-ndisDoPeriodicReceivesIndication@@YAKPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER_LIST@@@Z.c)
 *     ndisMDispatchReceiveNetBufferLists @ 0x1C006A0F0 (ndisMDispatchReceiveNetBufferLists.c)
 *     ndisMIndicateSplitNblChain @ 0x1C006AAB0 (ndisMIndicateSplitNblChain.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0025590 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0025E10 (_guard_dispatch_icall_nop.c)
 *     ndisXlateRecvNetBufferListsToPacketArray @ 0x1C004E054 (ndisXlateRecvNetBufferListsToPacketArray.c)
 *     ndisXlateReturnPacketToNetBufferList @ 0x1C004E550 (ndisXlateReturnPacketToNetBufferList.c)
 */

void __fastcall ndisIndicateXlatedPacketsToNdis5Protocols(__int64 *a1)
{
  char v2; // r15
  __int64 v3; // r14
  __int64 v4; // rcx
  __int64 v5; // r15
  __int64 v6; // rcx
  char v7; // al
  __int64 v8; // r13
  void **v9; // r12
  KIRQL NewIrql; // [rsp+20h] [rbp-E0h]
  char v11; // [rsp+21h] [rbp-DFh]
  char v12; // [rsp+22h] [rbp-DEh]
  unsigned int v13; // [rsp+24h] [rbp-DCh]
  void **v14; // [rsp+28h] [rbp-D8h] BYREF
  int v15; // [rsp+30h] [rbp-D0h]
  unsigned int v16; // [rsp+34h] [rbp-CCh]
  __int64 v18; // [rsp+40h] [rbp-C0h]
  unsigned int v19; // [rsp+48h] [rbp-B8h]
  __int64 v20; // [rsp+50h] [rbp-B0h]
  __int64 v21; // [rsp+58h] [rbp-A8h]
  char v22; // [rsp+60h] [rbp-A0h] BYREF

  v2 = *((_BYTE *)a1 + 16);
  v21 = *a1;
  v13 = *((_DWORD *)a1 + 172);
  v12 = v2 & 1;
  if ( (v2 & 1) != 0 )
    NewIrql = 2;
  else
    NewIrql = KfRaiseIrql(2u);
  v3 = 0LL;
  v4 = *(_QWORD *)(a1[1] + 328);
  if ( v4 && *(_DWORD *)(v4 + 704) < 6u )
  {
    v16 = (a1[2] & 2) != 0 ? 0xC000009A : 0;
  }
  else
  {
    v16 = -1073741670;
    *((_BYTE *)a1 + 692) = 1;
  }
  v5 = v21;
  do
  {
    v6 = 5 * v3;
    v3 = (unsigned int)(v3 + 1);
    if ( a1[v6 + 8] )
    {
      v18 = 0LL;
      v19 = 0;
      v14 = (void **)&v22;
      v15 = 32;
      v20 = v5;
      do
      {
        v7 = ndisXlateRecvNetBufferListsToPacketArray(&v14);
        v8 = v19;
        v9 = v14;
        v11 = v7;
        (*(void (__fastcall **)(__int64, void **, _QWORD))(v5 + 3408))(v5, v14, v19);
        if ( v16 == -1073741670 && (_DWORD)v8 )
        {
          do
          {
            ndisXlateReturnPacketToNetBufferList(*v9++);
            --v8;
          }
          while ( v8 );
        }
      }
      while ( v11 == 1 );
      v16 = -1073741670;
    }
  }
  while ( (unsigned int)v3 <= v13 );
  if ( !v12 && NewIrql != 2 )
    KeLowerIrql(NewIrql);
}
