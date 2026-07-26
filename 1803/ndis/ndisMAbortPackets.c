/*
 * XREFs of ndisMAbortPackets @ 0x1C0012510
 * Callers:
 *     ndisMResetCompleteStage1 @ 0x1C0061418 (ndisMResetCompleteStage1.c)
 *     ndisMCommonHaltMiniport @ 0x1C0102134 (ndisMCommonHaltMiniport.c)
 * Callees:
 *     ?NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z @ 0x1C0015F08 (-NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0025E10 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_qq @ 0x1C003A8B8 (WPP_SF_qq.c)
 *     ndisMFreeSGList @ 0x1C004CA6C (ndisMFreeSGList.c)
 *     ndisFreePaddedMdl @ 0x1C0054F38 (ndisFreePaddedMdl.c)
 *     ndisMSendCompletePacketToNetBufferLists @ 0x1C005694C (ndisMSendCompletePacketToNetBufferLists.c)
 */

__int64 **__fastcall ndisMAbortPackets(__int64 a1, __int64 a2, struct _NDIS_STACK_RESERVED *a3)
{
  _QWORD *v4; // rcx
  _QWORD **v5; // r10
  _QWORD *v6; // r9
  __int64 *v7; // rdi
  __int64 **result; // rax
  _QWORD *v9; // rax
  __int64 ***v10; // r9
  _QWORD *v11; // rcx
  __int64 *v12; // rax
  struct _NDIS_PACKET *v13; // rdi
  __int64 v14; // rsi
  __int64 NdisPacketOobOffset; // rax
  __int64 *v16; // [rsp+20h] [rbp-20h] BYREF
  __int64 **v17; // [rsp+28h] [rbp-18h]
  _QWORD v18[2]; // [rsp+30h] [rbp-10h] BYREF
  struct _NDIS_STACK_RESERVED *v19; // [rsp+70h] [rbp+30h] BYREF

  v19 = a3;
  if ( (unsigned __int8)byte_1C009960A >= 4u )
    WPP_SF_qq(71LL, &WPP_3541b357d8fa39ee5aefec47eeb5df8d_Traceguids, a1, 0LL);
  v4 = *(_QWORD **)(a1 + 832);
  if ( v4 )
  {
    *(_QWORD *)(a1 + 832) = *v4;
    *v4 = *(_QWORD *)(a1 + 888);
    *(_QWORD *)(a1 + 888) = v4;
  }
  *(_QWORD *)(a1 + 144) = 0LL;
  v18[1] = v18;
  v5 = (_QWORD **)(a1 + 128);
  v18[0] = v18;
  v17 = &v16;
  v16 = (__int64 *)&v16;
  while ( 1 )
  {
    v6 = *v5;
    if ( *v5 == v5 )
      break;
    if ( (_QWORD **)v6[1] != v5 || (v9 = (_QWORD *)*v6, *(_QWORD **)(*v6 + 8LL) != v6) )
      __fastfail(3u);
    *v5 = v9;
    v9[1] = v5;
    NDIS_STACK_RESERVED_FROM_PACKET((struct _NDIS_PACKET *)(v6 - 8), &v19);
    v11 = v17;
    if ( *v17 != (__int64 *)&v16 )
      __fastfail(3u);
    v10[1] = v17;
    *v10 = &v16;
    *v11 = v10;
    v17 = (__int64 **)v10;
  }
  *(_QWORD *)(a1 + 144) = 0LL;
  while ( 1 )
  {
    v7 = v16;
    result = &v16;
    if ( v16 == (__int64 *)&v16 )
      break;
    if ( (__int64 **)v16[1] != &v16 || (v12 = (__int64 *)*v16, *(__int64 **)(*v16 + 8) != v16) )
      __fastfail(3u);
    v16 = (__int64 *)*v16;
    v12[1] = (__int64)&v16;
    v13 = (struct _NDIS_PACKET *)(v7 - 8);
    NDIS_STACK_RESERVED_FROM_PACKET(v13, &v19);
    v14 = *(_QWORD *)v19;
    *(_QWORD *)v19 = 1297040183LL;
    *(_QWORD *)(a1 + 520) = 0LL;
    *(_DWORD *)(a1 + 1856) = 0;
    KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(a1 + 96));
    if ( (*(_DWORD *)(a1 + 120) & 0x40) != 0
      && *(unsigned __int64 *)((char *)v13->Reserved + v13->Private.NdisPacketOobOffset) )
    {
      ndisMFreeSGList(a1, v13);
    }
    if ( (*(_BYTE *)(a1 + 928) & 8) != 0 && *(void **)((char *)&v13[1].Private.Pool + v13->Private.NdisPacketOobOffset) )
      ndisFreePaddedMdl(v13);
    NdisPacketOobOffset = v13->Private.NdisPacketOobOffset;
    v13->Private.NdisPacketFlags &= 0xC0u;
    if ( *(_MDL **)((char *)&v13[1].Private.Head + NdisPacketOobOffset) )
      ndisMSendCompletePacketToNetBufferLists(a1, v13, 3221291020LL);
    else
      (*(void (__fastcall **)(__int64, struct _NDIS_PACKET *, __int64))(v14 + 112))(v14, v13, 3221291020LL);
    KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(a1 + 96));
    *(_QWORD *)(a1 + 520) = KeGetCurrentThread();
    *(_DWORD *)(a1 + 1856) = 726211;
  }
  *(_DWORD *)(a1 + 120) |= 0x400000u;
  if ( (unsigned __int8)byte_1C009960A >= 4u )
    return (__int64 **)WPP_SF_qq(72LL, &WPP_3541b357d8fa39ee5aefec47eeb5df8d_Traceguids, a1, 0LL);
  return result;
}
