/*
 * XREFs of ndisMProcessSGList @ 0x1C004E0A0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0028760 (_guard_dispatch_icall_nop.c)
 *     ndisMSendCompleteX @ 0x1C0057110 (ndisMSendCompleteX.c)
 *     ?NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z @ 0x1C005DB58 (-NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z.c)
 */

__int64 __fastcall ndisMProcessSGList(__int64 a1, __int64 a2, unsigned __int64 a3, struct _NDIS_PACKET *a4)
{
  __int64 v4; // rcx
  struct _NDIS_STACK_RESERVED *v5; // rdx
  __int64 v6; // rbx
  __int64 v7; // rbx
  __int64 result; // rax
  __int64 v9; // rcx
  struct _NDIS_PACKET *v10; // [rsp+40h] [rbp+18h] BYREF
  struct _NDIS_STACK_RESERVED *v11; // [rsp+48h] [rbp+20h] BYREF

  v10 = a4;
  *(unsigned __int64 *)((char *)a4->Reserved + a4->Private.NdisPacketOobOffset) = a3;
  NDIS_STACK_RESERVED_FROM_PACKET(v10, &v11);
  v5 = v11;
  v6 = *(_QWORD *)v11;
  if ( **(_BYTE **)v11 == 5 )
    v7 = *(_QWORD *)(v6 + 32);
  else
    v7 = *(_QWORD *)(v6 + 16);
  *(_BYTE *)(v4 + 41) |= 0x10u;
  if ( (*(_DWORD *)(v7 + 120) & 0x20000) != 0 )
    return (*(__int64 (__fastcall **)(_QWORD, struct _NDIS_PACKET **, __int64))(*((_QWORD *)v5 + 1) + 208LL))(
             *(_QWORD *)(*((_QWORD *)v5 + 1) + 200LL),
             &v10,
             1LL);
  v9 = *(_QWORD *)(v7 + 24);
  if ( (*(_BYTE *)(v7 + 928) & 1) != 0 )
    return (*(__int64 (__fastcall **)(__int64, struct _NDIS_PACKET **, __int64))(v7 + 1808))(v9, &v10, 1LL);
  result = (*(__int64 (__fastcall **)(__int64, struct _NDIS_PACKET *, _QWORD))(*(_QWORD *)(v7 + 3784) + 200LL))(
             v9,
             v10,
             v10->Private.Flags);
  if ( (_DWORD)result != 259 )
    return ndisMSendCompleteX((struct _NDIS_MINIPORT_BLOCK *)v7, v10);
  return result;
}
