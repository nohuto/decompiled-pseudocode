/*
 * XREFs of Crashdump_Endpoint_SendBulkTransfer @ 0x1C003A408
 * Callers:
 *     Crashdump_DoBulkTransfer @ 0x1C00376CC (Crashdump_DoBulkTransfer.c)
 * Callees:
 *     Crashdump_Endpoint_CalculateTDSize @ 0x1C00028C4 (Crashdump_Endpoint_CalculateTDSize.c)
 *     Crashdump_Endpoint_GetPacketCount @ 0x1C0002904 (Crashdump_Endpoint_GetPacketCount.c)
 *     Crashdump_Endpoint_SendTransferAndPollForCompletion @ 0x1C003A8E4 (Crashdump_Endpoint_SendTransferAndPollForCompletion.c)
 */

__int64 __fastcall Crashdump_Endpoint_SendBulkTransfer(__int64 a1, __int64 a2, _QWORD *a3, char a4)
{
  _QWORD *v4; // r13
  int v7; // eax
  __int64 v8; // r14
  unsigned int v9; // r12d
  _QWORD *v10; // r15
  unsigned int v11; // r8d
  int v12; // r10d
  int v13; // edx
  unsigned int v14; // r15d
  unsigned int v15; // ebp
  __int64 v16; // rdi
  unsigned int v17; // ecx
  int v18; // ebx
  __int64 v19; // rdx
  unsigned int v20; // ecx
  __int64 v21; // rax
  __int64 v22; // rdx
  unsigned int v23; // ecx
  __int64 v24; // r8
  int v25; // r10d
  __int64 v26; // r9
  int *v27; // rdx
  unsigned int v28; // ebx
  unsigned int v29; // eax
  signed __int32 v31[8]; // [rsp+0h] [rbp-78h] BYREF
  unsigned int v32; // [rsp+28h] [rbp-50h]
  int v33; // [rsp+80h] [rbp+8h]
  int PacketCount; // [rsp+88h] [rbp+10h]
  _QWORD *v35; // [rsp+90h] [rbp+18h]

  v4 = a3;
  DbgPrintEx(
    0x93u,
    3u,
    "XHCIDUMP: Crashdump_Endpoint_SendBulkTransfer: begin: length: 0x%X TransferPA: 0x%I64X\n",
    *(_DWORD *)(a2 + 36),
    *a3);
  v7 = *(_DWORD *)(a1 + 160);
  if ( v7 )
    v8 = *(_QWORD *)(a1 + 112);
  else
    v8 = *(_QWORD *)(a1 + 88);
  v9 = *(_DWORD *)(a2 + 36);
  *(_QWORD *)(a1 + 176) = a2;
  v10 = (_QWORD *)(a1 + (-(__int64)(v7 != 0) & 0xFFFFFFFFFFFFFFE8uLL) + 104);
  v35 = v10;
  PacketCount = Crashdump_Endpoint_GetPacketCount((unsigned __int16 *)a1, *(_DWORD *)(a2 + 36));
  v13 = PacketCount;
  if ( v9 )
  {
    v14 = v11;
    do
    {
      v15 = 4096;
      if ( (*v4 & 0xFFFLL) != 0 )
        v15 = 4096 - (*v4 & 0xFFF);
      if ( v9 < v15 )
        v15 = v9;
      v16 = v8 + 16LL * v14;
      v33 = v15 + v12;
      *(_QWORD *)v16 = 0LL;
      *(_QWORD *)(v16 + 8) = 0LL;
      v17 = *(_DWORD *)(v16 + 12) & 0xFFFF03EF | 0x410;
      *(_DWORD *)(v16 + 12) = v17;
      *(_QWORD *)v16 = *v4;
      *(_DWORD *)(v16 + 8) ^= (v15 ^ *(_DWORD *)(v16 + 8)) & 0x1FFFF;
      v18 = *(_DWORD *)(v16 + 8);
      *(_DWORD *)(v16 + 12) = v17 & 0xFFFFFFFE | (v14 != 0);
      v32 = v15;
      *(_DWORD *)(v16 + 8) = v18 ^ (v18 ^ ((unsigned int)Crashdump_Endpoint_CalculateTDSize(
                                                           (unsigned __int16 *)a1,
                                                           v13,
                                                           v15 + v12,
                                                           v9 == v15) << 17)) & 0x3E0000;
      DbgPrintEx(0x93u, 3u, "XHCIDUMP: Normal TRB %u: PA: 0x%I64X, length: 0x%X\n", v14, *v4, v32);
      v12 = v33;
      ++v14;
      v13 = PacketCount;
      ++v4;
      v9 -= v15;
    }
    while ( v9 );
    v11 = v14;
    v10 = v35;
  }
  v19 = v8 + 16LL * v11;
  *(_DWORD *)(v8 + 16LL * (v11 - 1) + 12) |= 2u;
  *(_QWORD *)v19 = 0LL;
  *(_QWORD *)(v19 + 8) = 0LL;
  v20 = *(_DWORD *)(v19 + 12) & 0xFFFF03FF | 0x1C00;
  *(_DWORD *)(v19 + 12) = v20;
  v21 = *(_QWORD *)(a1 + 168);
  *(_DWORD *)(v19 + 8) &= 0x3FFFFFu;
  *(_QWORD *)v19 = v21;
  *(_DWORD *)(v19 + 12) = v20 | 0x21;
  v22 = v8 + 16LL * (v11 + 1);
  *(_QWORD *)v22 = 0LL;
  *(_QWORD *)(v22 + 8) = 0LL;
  v23 = *(_DWORD *)(v22 + 12) & 0xFFFF03FF | 0x1800;
  *(_DWORD *)(v22 + 12) = v23;
  *(_QWORD *)v22 = *v10;
  *(_DWORD *)(v22 + 12) = v23 & 0xFFFFFFFC | 1;
  *(_DWORD *)(a1 + 160) = *(_DWORD *)(a1 + 160) == 0;
  *(_BYTE *)(v8 + 12) ^= 1u;
  _InterlockedOr(v31, 0);
  if ( a4 )
  {
    v24 = *(_QWORD *)(a1 + 24);
    v25 = *(_DWORD *)(a1 + 32);
    v26 = *(_QWORD *)(**(_QWORD **)(v24 + 8) + 48LL);
    if ( v26 )
      v27 = (int *)(v26 + 4LL * *(unsigned __int8 *)(v24 + 56));
    else
      v27 = 0LL;
    *v27 = (unsigned __int8)v25 | (*(_BYTE *)(a1 + 128) != 0 ? 0x10000 : 0);
    _InterlockedOr(v31, 0);
    DbgPrintEx(
      0x93u,
      3u,
      "XHCIDUMP: Ringing doorbell: SlotId: %u, EndpointDCI: %u\n",
      *(unsigned __int8 *)(v24 + 56),
      v25);
    v28 = 259;
  }
  else
  {
    v29 = Crashdump_Endpoint_SendTransferAndPollForCompletion(a1);
    *(_DWORD *)(v8 + 12) &= ~1u;
    v28 = v29;
  }
  DbgPrintEx(0x93u, 3u, "XHCIDUMP: Crashdump_Endpoint_SendBulkTransfer: end 0x%X\n", v28);
  return v28;
}
