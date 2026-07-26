/*
 * XREFs of NdisCoCreateVc @ 0x1C0110210
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_ @ 0x1C0024644 (WPP_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024F10 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0025280 (memset.c)
 *     WPP_SF_qD @ 0x1C0039484 (WPP_SF_qD.c)
 */

NDIS_STATUS __stdcall NdisCoCreateVc(
        NDIS_HANDLE NdisBindingHandle,
        NDIS_HANDLE NdisAfHandle,
        NDIS_HANDLE ProtocolVcContext,
        PNDIS_HANDLE NdisVcHandle)
{
  KSPIN_LOCK v7; // r13
  bool v8; // r12
  _DWORD *v9; // r15
  int v10; // ebp
  _DWORD *v11; // rbx
  _DWORD *PoolWithTag; // rax
  KSPIN_LOCK *v13; // rax
  KSPIN_LOCK *v14; // rdi
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  NDIS_HANDLE *v19; // r13
  NDIS_HANDLE *v20; // r12
  _DWORD *v21; // r8
  int v22; // eax
  __int64 v23; // rax
  KSPIN_LOCK *v24; // r8
  __int64 v25; // rax
  __int64 v26; // rcx
  _LIST_ENTRY *v27; // rdx
  void (__fastcall *v28)(_QWORD); // rax
  KSPIN_LOCK v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  unsigned __int8 v32; // dl
  bool v33; // al
  void (__fastcall *v34)(_QWORD *, struct _NET_BUFFER_LIST *, unsigned int, unsigned int); // rax
  void (__fastcall *v35)(_QWORD *, struct _NDIS_PACKET **, unsigned int); // rax
  KIRQL NewIrql; // [rsp+20h] [rbp-58h]
  int v38; // [rsp+24h] [rbp-54h]
  LARGE_INTEGER *v39; // [rsp+28h] [rbp-50h]
  char Increment; // [rsp+80h] [rbp+8h]
  bool v41; // [rsp+88h] [rbp+10h]

  if ( (unsigned __int8)byte_1C009875A >= 4u )
    WPP_SF_(0x10u, &WPP_a122a54394bd3dbe970a397dccec41bf_Traceguids);
  v7 = *((_QWORD *)NdisBindingHandle + 2);
  v39 = (LARGE_INTEGER *)v7;
  v8 = NdisAfHandle && (*((_DWORD *)NdisAfHandle + 2) & 1) != 0;
  v41 = v8;
  if ( !NdisAfHandle || (Increment = 1, NdisBindingHandle != *((NDIS_HANDLE *)NdisAfHandle + 46)) )
    Increment = 0;
  v9 = *NdisVcHandle;
  v10 = 0;
  v11 = 0LL;
  v38 = *(_DWORD *)(*((_QWORD *)NdisBindingHandle + 3) + 64LL) & 0x40000000;
  if ( v9 && (*(_DWORD *)(*((_QWORD *)NdisBindingHandle + 3) + 64LL) & 0x40000000) == 0 )
  {
    v10 = -1073741823;
    goto LABEL_119;
  }
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x158uLL, 0x6F63444Eu);
  v11 = PoolWithTag;
  if ( !PoolWithTag )
  {
    v10 = -1073741670;
    goto LABEL_119;
  }
  memset(PoolWithTag, 0, 0x158uLL);
  KeInitializeSpinLock((PKSPIN_LOCK)v11 + 2);
  *((_QWORD *)v11 + 20) = v11 + 38;
  *((_QWORD *)v11 + 19) = v11 + 38;
  *((_QWORD *)v11 + 5) = v11 + 8;
  *((_QWORD *)v11 + 4) = v11 + 8;
  *((_QWORD *)v11 + 7) = v11 + 12;
  *((_QWORD *)v11 + 6) = v11 + 12;
  if ( v9 )
  {
    if ( (unsigned __int8)byte_1C009875A >= 4u )
      WPP_SF_(0x12u, &WPP_a122a54394bd3dbe970a397dccec41bf_Traceguids);
    v14 = (KSPIN_LOCK *)*((_QWORD *)v9 + 9);
    *((_QWORD *)v11 + 25) = *((_QWORD *)v9 + 25);
  }
  else
  {
    if ( (unsigned __int8)byte_1C009875A >= 4u )
      WPP_SF_(0x11u, &WPP_a122a54394bd3dbe970a397dccec41bf_Traceguids);
    v13 = (KSPIN_LOCK *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x90uLL, 0x6F63444Eu);
    v14 = v13;
    if ( !v13 )
    {
      v10 = -1073741670;
      ExFreePoolWithTag(v11, 0);
      v11 = 0LL;
      goto LABEL_119;
    }
    memset(v13, 0, 0x90uLL);
    KeInitializeSpinLock(v14 + 1);
    v14[15] = v7;
    if ( !v8 )
    {
      v10 = (*((__int64 (__fastcall **)(_QWORD, _DWORD *, _DWORD *))NdisBindingHandle + 128))(
              *(_QWORD *)(v7 + 24),
              v11,
              v11 + 50);
      if ( v10 )
      {
        ExFreePoolWithTag(v14, 0);
        goto LABEL_96;
      }
      *((_BYTE *)v11 + 336) = 1;
    }
  }
  *((_QWORD *)v11 + 26) = *(_QWORD *)(*(_QWORD *)(v7 + 3784) + 280LL);
  if ( *(_BYTE *)(v7 + 32) < 6u )
    *((_QWORD *)v11 + 30) = 0LL;
  else
    *((_QWORD *)v11 + 30) = *(_QWORD *)(*(_QWORD *)(v7 + 3784) + 536LL);
  if ( !v8 )
  {
    *((_QWORD *)v11 + 27) = *(_QWORD *)(*(_QWORD *)(v7 + 3784) + 512LL);
    *((_QWORD *)v11 + 28) = *(_QWORD *)(*(_QWORD *)(v7 + 3784) + 520LL);
    *((_QWORD *)v11 + 29) = *(_QWORD *)(*(_QWORD *)(v7 + 3784) + 528LL);
  }
  *((_QWORD *)v11 + 24) = v7;
  *((_QWORD *)v11 + 1) = (char *)v14 + 4;
  *((_QWORD *)v11 + 9) = v14;
  *((_QWORD *)v11 + 8) = NdisAfHandle;
  *v11 = 1;
  if ( !NdisAfHandle )
  {
    if ( (unsigned __int8)byte_1C009875A >= 4u )
      WPP_SF_(0x13u, &WPP_a122a54394bd3dbe970a397dccec41bf_Traceguids);
    *((_QWORD *)v11 + 3) = ProtocolVcContext;
    *((_QWORD *)v11 + 10) = NdisBindingHandle;
    v14[5] = (KSPIN_LOCK)v11;
    v29 = *((_QWORD *)v11 + 3);
    v11[22] = 1;
    v14[3] = v29;
    v14[2] = (KSPIN_LOCK)NdisBindingHandle;
    v30 = *((_QWORD *)NdisBindingHandle + 3);
    if ( *(_BYTE *)(v30 + 56) < 6u )
    {
      v14[6] = *(_QWORD *)(v30 + 304);
      v14[7] = *(_QWORD *)(*((_QWORD *)NdisBindingHandle + 3) + 312LL);
      v14[8] = 0LL;
      v14[9] = 0LL;
    }
    else
    {
      v14[8] = *(_QWORD *)(v30 + 216);
      v14[9] = *(_QWORD *)(*((_QWORD *)NdisBindingHandle + 3) + 208LL);
      v14[6] = 0LL;
      v14[7] = 0LL;
    }
    *((_QWORD *)v11 + 21) = *((_QWORD *)NdisBindingHandle + 132);
    v31 = *((_QWORD *)NdisBindingHandle + 133);
    *((_QWORD *)v11 + 18) = ProtocolVcContext;
    *((_QWORD *)v11 + 22) = v31;
    ExInterlockedInsertHeadList(
      (PLIST_ENTRY)NdisBindingHandle + 69,
      (PLIST_ENTRY)v11 + 2,
      (PKSPIN_LOCK)NdisBindingHandle + 29);
    goto LABEL_96;
  }
  *((_QWORD *)v11 + 10) = *((_QWORD *)NdisAfHandle + 46);
  *((_QWORD *)v11 + 17) = *((_QWORD *)NdisAfHandle + 5);
  if ( *((_DWORD *)NdisAfHandle + 99) >= 6u )
  {
    *((_QWORD *)v11 + 14) = *((_QWORD *)NdisAfHandle + 36);
    *((_QWORD *)v11 + 15) = *((_QWORD *)NdisAfHandle + 41);
    v15 = *((_QWORD *)NdisAfHandle + 44);
  }
  else
  {
    *((_QWORD *)v11 + 14) = *((_QWORD *)NdisAfHandle + 17);
    *((_QWORD *)v11 + 15) = *((_QWORD *)NdisAfHandle + 22);
    v15 = *((_QWORD *)NdisAfHandle + 25);
  }
  *((_QWORD *)v11 + 16) = v15;
  if ( *((_DWORD *)NdisAfHandle + 98) >= 6u )
  {
    *((_QWORD *)v11 + 21) = *(_QWORD *)(*((_QWORD *)NdisAfHandle + 4) + 96LL);
    *((_QWORD *)v11 + 22) = *(_QWORD *)(*((_QWORD *)NdisAfHandle + 4) + 104LL);
    v16 = *((_QWORD *)NdisAfHandle + 4);
  }
  else
  {
    *((_QWORD *)v11 + 21) = *(_QWORD *)(*((_QWORD *)NdisAfHandle + 3) + 96LL);
    *((_QWORD *)v11 + 22) = *(_QWORD *)(*((_QWORD *)NdisAfHandle + 3) + 104LL);
    v16 = *((_QWORD *)NdisAfHandle + 3);
  }
  *((_QWORD *)v11 + 23) = *(_QWORD *)(v16 + 112);
  if ( v9 )
    *((_DWORD *)v14 + 1) |= 0x10u;
  if ( !v38 )
  {
    v14[2] = *((_QWORD *)NdisAfHandle + 46);
    v17 = *(_QWORD *)(*((_QWORD *)NdisAfHandle + 46) + 24LL);
    if ( *(_BYTE *)(v17 + 56) < 6u )
    {
      v14[7] = *(_QWORD *)(v17 + 312);
      v14[6] = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)NdisAfHandle + 46) + 24LL) + 304LL);
      v14[8] = 0LL;
      v14[9] = 0LL;
    }
    else
    {
      v14[8] = *(_QWORD *)(v17 + 216);
      v14[9] = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)NdisAfHandle + 46) + 24LL) + 208LL);
      v14[7] = 0LL;
      v14[6] = 0LL;
    }
    v11[22] = 1;
    if ( Increment )
      v14[5] = (KSPIN_LOCK)v11;
    else
      v14[4] = (KSPIN_LOCK)v11;
    goto LABEL_56;
  }
  if ( Increment )
  {
    if ( v9 )
    {
      v14[5] = (KSPIN_LOCK)v9;
      v9[22] = 0;
    }
    else
    {
      v14[2] = *((_QWORD *)NdisAfHandle + 46);
      v18 = *(_QWORD *)(*((_QWORD *)NdisAfHandle + 46) + 24LL);
      if ( *(_BYTE *)(v18 + 56) < 6u )
      {
        v14[7] = *(_QWORD *)(v18 + 312);
        v14[6] = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)NdisAfHandle + 46) + 24LL) + 304LL);
        v14[8] = 0LL;
        v14[9] = 0LL;
      }
      else
      {
        v14[8] = *(_QWORD *)(v18 + 216);
        v14[9] = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)NdisAfHandle + 46) + 24LL) + 208LL);
        v14[7] = 0LL;
        v14[6] = 0LL;
      }
    }
    v14[4] = (KSPIN_LOCK)v11;
  }
  else
  {
    v14[2] = *((_QWORD *)NdisAfHandle + 46);
    v23 = *(_QWORD *)(*((_QWORD *)NdisAfHandle + 46) + 24LL);
    if ( *(_BYTE *)(v23 + 56) < 6u )
    {
      v14[7] = *(_QWORD *)(v23 + 312);
      v14[6] = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)NdisAfHandle + 46) + 24LL) + 304LL);
      v14[8] = 0LL;
      v14[9] = 0LL;
    }
    else
    {
      v14[8] = *(_QWORD *)(v23 + 216);
      v14[9] = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)NdisAfHandle + 46) + 24LL) + 208LL);
      v14[7] = 0LL;
      v14[6] = 0LL;
    }
    v14[5] = (KSPIN_LOCK)v11;
    if ( v9 )
    {
      v14[4] = (KSPIN_LOCK)v9;
      v9[22] = 1;
      goto LABEL_56;
    }
  }
  v11[22] = 1;
LABEL_56:
  v19 = (NDIS_HANDLE *)(v11 + 6);
  v20 = (NDIS_HANDLE *)(v11 + 36);
  NewIrql = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v11 + 2);
  if ( NdisBindingHandle == *((NDIS_HANDLE *)NdisAfHandle + 46) )
  {
    *v19 = ProtocolVcContext;
    v21 = v11 + 36;
    if ( *((_DWORD *)NdisAfHandle + 98) >= 6u )
      v22 = (*(__int64 (__fastcall **)(_QWORD, _DWORD *, _DWORD *))(*((_QWORD *)NdisAfHandle + 4) + 8LL))(
              *((_QWORD *)NdisAfHandle + 6),
              v11,
              v21);
    else
      v22 = (*(__int64 (__fastcall **)(_QWORD, _DWORD *, _DWORD *))(*((_QWORD *)NdisAfHandle + 3) + 8LL))(
              *((_QWORD *)NdisAfHandle + 6),
              v11,
              v21);
    v10 = v22;
    if ( v41 )
      *((_QWORD *)v11 + 25) = *v20;
  }
  else
  {
    *v20 = ProtocolVcContext;
    v10 = (*(__int64 (__fastcall **)(_QWORD, _DWORD *, _DWORD *))(*((_QWORD *)NdisAfHandle + 46) + 1040LL))(
            *((_QWORD *)NdisAfHandle + 47),
            v11,
            v11 + 6);
  }
  if ( !v10 && (!v9 || v38 && !Increment) )
    v14[3] = (KSPIN_LOCK)*v19;
  if ( v9 )
    *((_DWORD *)v14 + 1) &= ~0x10u;
  KeReleaseSpinLock((PKSPIN_LOCK)v11 + 2, NewIrql);
  if ( !v10 )
  {
    v24 = (KSPIN_LOCK *)((char *)NdisBindingHandle + 232);
    if ( Increment )
    {
      ExInterlockedInsertHeadList((PLIST_ENTRY)NdisBindingHandle + 69, (PLIST_ENTRY)v11 + 2, v24);
      *((_QWORD *)v11 + 13) = *v20;
      if ( *((_DWORD *)NdisAfHandle + 98) >= 6u )
        v25 = *((_QWORD *)NdisAfHandle + 4);
      else
        v25 = *((_QWORD *)NdisAfHandle + 3);
      *((_QWORD *)v11 + 12) = *(_QWORD *)(v25 + 16);
      if ( v41 )
        goto LABEL_97;
      v26 = *((_QWORD *)NdisAfHandle + 5);
      v27 = (_LIST_ENTRY *)(v11 + 38);
    }
    else
    {
      *((_QWORD *)v11 + 13) = *v19;
      *((_QWORD *)v11 + 12) = *(_QWORD *)(*((_QWORD *)NdisAfHandle + 46) + 1048LL);
      ExInterlockedInsertHeadList((PLIST_ENTRY)NdisBindingHandle + 69, (PLIST_ENTRY)(v11 + 38), v24);
      v26 = *((_QWORD *)NdisAfHandle + 46);
      v27 = (_LIST_ENTRY *)(v11 + 8);
    }
    ExInterlockedInsertHeadList((PLIST_ENTRY)(v26 + 1104), v27, (PKSPIN_LOCK)(v26 + 232));
    goto LABEL_97;
  }
  if ( !v9 )
  {
    if ( !v41 )
    {
      v28 = (void (__fastcall *)(_QWORD))*((_QWORD *)v11 + 27);
      if ( v28 )
        v28(*((_QWORD *)v11 + 25));
    }
    ExFreePoolWithTag(v14, 0);
  }
  ExFreePoolWithTag(v11, 0);
  v11 = 0LL;
LABEL_96:
  if ( v10 )
    goto LABEL_119;
LABEL_97:
  v32 = *(_BYTE *)(*((_QWORD *)v11 + 24) + 32LL);
  if ( NdisAfHandle )
  {
    v33 = *(_BYTE *)(*(_QWORD *)(*((_QWORD *)NdisAfHandle + 46) + 24LL) + 56LL) >= 6u;
  }
  else
  {
    if ( *(_BYTE *)(*((_QWORD *)NdisBindingHandle + 3) + 56LL) >= 6u )
    {
LABEL_109:
      if ( v32 >= 6u )
      {
        if ( (unsigned __int8)byte_1C009875A >= 4u )
          WPP_SF_(0x14u, &WPP_a122a54394bd3dbe970a397dccec41bf_Traceguids);
        *((_QWORD *)v11 + 33) = 0LL;
        *((_QWORD *)v11 + 31) = ndisCoSendNetBufferListsToNetBufferLists;
        *((_QWORD *)v11 + 32) = ndisMCoSendNetBufferListsCompleteToNetBufferLists;
        v34 = ndisMCoIndicateReceiveNetBufferListsToNetBufferLists;
        goto LABEL_113;
      }
      if ( (unsigned __int8)byte_1C009875A >= 4u )
        WPP_SF_(0x15u, &WPP_a122a54394bd3dbe970a397dccec41bf_Traceguids);
      *((_QWORD *)v11 + 33) = 0LL;
      *((_QWORD *)v11 + 31) = ndisCoSendNetBufferListsToNdisPacket;
      *((_QWORD *)v11 + 34) = ndisMCoSendCompleteToNetBufferLists;
      v35 = ndisMCoIndicateReceiveNdisPacketToNetBufferLists;
LABEL_117:
      *((_QWORD *)v11 + 36) = 0LL;
      *((_QWORD *)v11 + 35) = v35;
      *((_QWORD *)v11 + 32) = 0LL;
      goto LABEL_118;
    }
    v33 = 0;
  }
  if ( v33 )
    goto LABEL_109;
  if ( v32 < 6u )
  {
    if ( (unsigned __int8)byte_1C009875A >= 4u )
      WPP_SF_(0x17u, &WPP_a122a54394bd3dbe970a397dccec41bf_Traceguids);
    *((_QWORD *)v11 + 31) = 0LL;
    *((_QWORD *)v11 + 33) = ndisCoSendPacketsToNdisPackets;
    *((_QWORD *)v11 + 34) = ndisMCoSendCompleteToNdisPacket;
    v35 = ndisMCoIndicateReceiveNdisPacketToNdisPacket;
    goto LABEL_117;
  }
  if ( (unsigned __int8)byte_1C009875A >= 4u )
    WPP_SF_(0x16u, &WPP_a122a54394bd3dbe970a397dccec41bf_Traceguids);
  *((_QWORD *)v11 + 31) = 0LL;
  *((_QWORD *)v11 + 32) = ndisMCoSendNetBufferListsCompleteToNdisPackets;
  *((_QWORD *)v11 + 33) = ndisCoSendPacketsToNetBufferLists;
  v34 = ndisMCoIndicateReceiveNetBufferListsToNdisPacket;
LABEL_113:
  *((_QWORD *)v11 + 35) = 0LL;
  *((_QWORD *)v11 + 34) = 0LL;
  *((_QWORD *)v11 + 36) = v34;
LABEL_118:
  *((LARGE_INTEGER *)v11 + 39) = ExInterlockedAddLargeInteger(v39 + 167, (LARGE_INTEGER)0x100000000LL, &ndisGlobalLock);
LABEL_119:
  *NdisVcHandle = v11;
  if ( (unsigned __int8)byte_1C009875A >= 4u )
    WPP_SF_qD(0x18u, &WPP_a122a54394bd3dbe970a397dccec41bf_Traceguids, (__int64)v11, v10);
  return v10;
}
