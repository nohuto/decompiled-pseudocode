/*
 * XREFs of ndisMDeferredSendSG @ 0x1C0055440
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0024F10 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_q @ 0x1C0039450 (WPP_SF_q.c)
 *     ndisMFreeSGList @ 0x1C004BAD4 (ndisMFreeSGList.c)
 *     ndisFreePaddedMdl @ 0x1C00545A8 (ndisFreePaddedMdl.c)
 *     ndisMLoopbackPacketX @ 0x1C0055E00 (ndisMLoopbackPacketX.c)
 *     ndisMSendCompletePacketToNetBufferLists @ 0x1C0055FAC (ndisMSendCompletePacketToNetBufferLists.c)
 *     ?NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z @ 0x1C005D740 (-NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z.c)
 */

char __fastcall ndisMDeferredSendSG(__int64 a1)
{
  __int64 v2; // rbp
  int v3; // r9d
  __int64 v4; // r14
  __int64 v5; // rcx
  unsigned int v6; // edi
  unsigned int v7; // edi
  char v8; // cl
  __int64 v9; // rcx
  struct _NDIS_STACK_RESERVED *v10; // rbx
  __int64 v11; // r15
  _QWORD *v12; // rax
  __int64 v13; // r8
  __int64 v14; // rax
  struct _NDIS_STACK_RESERVED *v16; // [rsp+40h] [rbp+8h] BYREF

  if ( (unsigned __int8)byte_1C009874A >= 4u )
    WPP_SF_q(0x28u, &WPP_984ad900609636e726551c04f4a7943f_Traceguids, a1);
  while ( *(_QWORD *)(a1 + 144) && (*(_DWORD *)(a1 + 120) & 0x400000) != 0 )
  {
    v2 = *(_QWORD *)(a1 + 144);
    NDIS_STACK_RESERVED_FROM_PACKET((struct _NDIS_PACKET *)v2, &v16);
    *(_QWORD *)(a1 + 144) = 0LL;
    v4 = v2 + 64;
    v5 = *(_QWORD *)(v2 + 64);
    if ( v5 != a1 + 128 )
      *(_QWORD *)(a1 + 144) = v5 - 64;
    if ( ((v3 & 0x4000) != 0 || (v3 & 0x8800000) != 0 && *(_BYTE *)(v2 + 36) >= 0)
      && (unsigned __int8)ndisMLoopbackPacketX(a1, v2) )
    {
      v6 = 0;
LABEL_11:
      v8 = *(_BYTE *)(v2 + 41) & 0xEF;
      *(_BYTE *)(v2 + 41) = v8;
      if ( v6 == -1073741670 )
      {
        *(_BYTE *)(v2 + 41) = v8;
        *(_DWORD *)(a1 + 120) &= ~0x400000u;
        *(_QWORD *)(a1 + 144) = v2;
      }
      else
      {
        v9 = *(_QWORD *)v4;
        v10 = v16;
        v11 = *(_QWORD *)v16;
        if ( *(_QWORD *)(*(_QWORD *)v4 + 8LL) != v4 || (v12 = *(_QWORD **)(v2 + 72), *v12 != v4) )
          __fastfail(3u);
        *v12 = v9;
        *(_QWORD *)(v9 + 8) = v12;
        *(_QWORD *)(v2 + 72) = v2 + 64;
        *(_QWORD *)v4 = v4;
        *(_DWORD *)(a1 + 120) |= 0x400000u;
        *(_QWORD *)v10 = 1297040180LL;
        *(_QWORD *)(a1 + 520) = 0LL;
        *(_DWORD *)(a1 + 1856) = 0;
        KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(a1 + 96));
        if ( *(_QWORD *)(*(unsigned __int16 *)(v2 + 42) + v2 + 80) )
          ndisMFreeSGList(a1, v2, v13);
        *((_DWORD *)v10 + 2) = 0;
        if ( (*(_BYTE *)(a1 + 928) & 8) != 0 && *(_QWORD *)(*(unsigned __int16 *)(v2 + 42) + v2 + 128) )
          ndisFreePaddedMdl(v2);
        v14 = *(unsigned __int16 *)(v2 + 42);
        *(_BYTE *)(v2 + 41) &= 0xC0u;
        if ( *(_QWORD *)(v14 + v2 + 112) )
          ndisMSendCompletePacketToNetBufferLists(a1, v2, v6);
        else
          (*(void (__fastcall **)(__int64, __int64, _QWORD))(v11 + 112))(v11, v2, v6);
        KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(a1 + 96));
        *(_QWORD *)(a1 + 520) = KeGetCurrentThread();
        *(_DWORD *)(a1 + 1856) = 1509909;
      }
    }
    else
    {
      v7 = *(_DWORD *)(v2 + 36);
      *(_BYTE *)(v2 + 41) |= 0x10u;
      *(_QWORD *)(a1 + 520) = 0LL;
      *(_DWORD *)(a1 + 1856) = 0;
      KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(a1 + 96));
      v6 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(a1 + 4096))(*(_QWORD *)(a1 + 24), v2, v7);
      KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(a1 + 96));
      *(_QWORD *)(a1 + 520) = KeGetCurrentThread();
      *(_DWORD *)(a1 + 1856) = 1509891;
      if ( v6 != 259 )
        goto LABEL_11;
    }
  }
  if ( (unsigned __int8)byte_1C009874A >= 4u )
    WPP_SF_q(0x29u, &WPP_984ad900609636e726551c04f4a7943f_Traceguids, a1);
  return 0;
}
