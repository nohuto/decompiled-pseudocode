/*
 * XREFs of ndisMInvokeOidRequest @ 0x1C00A5080
 * Callers:
 *     ndisMDoOidRequest @ 0x1C000AB80 (ndisMDoOidRequest.c)
 *     ?ndisSendPmOidsForSuspend@@YAHPEAU_NDIS_MINIPORT_BLOCK@@W4_DEVICE_POWER_STATE@@@Z @ 0x1C006CFDC (-ndisSendPmOidsForSuspend@@YAHPEAU_NDIS_MINIPORT_BLOCK@@W4_DEVICE_POWER_STATE@@@Z.c)
 *     ndisSetPowerResumeCompleteWorkItem @ 0x1C006FDD0 (ndisSetPowerResumeCompleteWorkItem.c)
 *     ndisAddWoLDirectedMAC @ 0x1C00D4714 (ndisAddWoLDirectedMAC.c)
 *     ndisRemoveWoLDirectedMAC @ 0x1C00D6E60 (ndisRemoveWoLDirectedMAC.c)
 *     ndisMInvokeBlockingOidRequest @ 0x1C00DE798 (ndisMInvokeBlockingOidRequest.c)
 * Callees:
 *     ndisOidCloneForCompatibility @ 0x1C000BD2C (ndisOidCloneForCompatibility.c)
 *     ?ndisRefCountHandleFromRefCountBlock@@YAPEAUNDIS_REFCOUNT_HANDLE__@@PEAU_NDIS_REFCOUNT_BLOCK@@@Z @ 0x1C000C190 (-ndisRefCountHandleFromRefCountBlock@@YAPEAUNDIS_REFCOUNT_HANDLE__@@PEAU_NDIS_REFCOUNT_BLOCK@@@Z.c)
 *     ?ndisDisarmWatchdogAsync@@YAXPEAUNDISWATCHDOG__@@@Z @ 0x1C000C19C (-ndisDisarmWatchdogAsync@@YAXPEAUNDISWATCHDOG__@@@Z.c)
 *     ndisOidFreeInternalCloneRequest @ 0x1C000C1E4 (ndisOidFreeInternalCloneRequest.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028760 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_qD @ 0x1C003C9FC (WPP_SF_qD.c)
 *     WPP_SF_qqd @ 0x1C003CAE8 (WPP_SF_qqd.c)
 *     WPP_SF_qdD @ 0x1C0045B1C (WPP_SF_qdD.c)
 */

__int64 __fastcall ndisMInvokeOidRequest(__int64 a1, _NDIS_OID_REQUEST *a2)
{
  __int64 v2; // r15
  _NDIS_OID_REQUEST *v3; // rbp
  __int64 Oid; // r13
  unsigned int v6; // eax
  PNDIS_OID_REQUEST v7; // rbx
  unsigned int v8; // esi
  __int64 v9; // rax
  __int64 v10; // rcx
  struct _NDIS_REFCOUNT_BLOCK *v11; // r14
  struct _NDIS_REFCOUNT_BLOCK *v12; // rax
  int v13; // r12d
  struct _NDIS_REFCOUNT_BLOCK *v14; // rsi
  __int64 v15; // rcx
  BOOLEAN v16; // al
  unsigned int v17; // eax
  __int64 v18; // rbx
  __int64 v19; // rax
  __int64 v20; // rcx
  int v21; // eax
  ULONG v23; // eax
  unsigned int v24; // ecx
  __int64 v25; // [rsp+20h] [rbp-48h]
  ULONG SecondsRemaining; // [rsp+70h] [rbp+8h] BYREF
  PNDIS_OID_REQUEST v27; // [rsp+78h] [rbp+10h] BYREF

  v2 = *(_QWORD *)(a1 + 3784);
  v3 = a2;
  Oid = a2->DATA.QUERY_INFORMATION.Oid;
  v27 = 0LL;
  if ( (unsigned __int8)byte_1C0092612 >= 4u )
    WPP_SF_qD(0xD5u, &WPP_ce03a118a6ed3e1c1740a62e9d2221ee_Traceguids, a1, Oid);
  v6 = ndisOidCloneForCompatibility((_BYTE *)a1, (__int64)v3, 1, &v27);
  v7 = v27;
  v8 = v6;
  if ( v6 )
    goto LABEL_26;
  if ( v27 && (unsigned __int8)byte_1C0092612 >= 4u )
    WPP_SF_qqd(0xD6u, &WPP_ce03a118a6ed3e1c1740a62e9d2221ee_Traceguids, v3, v27, v27->DATA.QUERY_INFORMATION.Oid);
  v9 = *(_QWORD *)(a1 + 3784);
  v10 = *(_QWORD *)(v9 + 352);
  if ( !v10 || *(_QWORD *)(v10 + 64) == *(_QWORD *)(v9 + 176) )
    v11 = *(struct _NDIS_REFCOUNT_BLOCK **)(a1 + 5592);
  else
    v11 = *(struct _NDIS_REFCOUNT_BLOCK **)(a1 + 5600);
  if ( v11 != (struct _NDIS_REFCOUNT_BLOCK *)-1LL )
  {
    v12 = ndisRefCountHandleFromRefCountBlock(v11);
    KeWaitForSingleObject(&v12[2].RefWithStack[0].Block.References[2], Executive, 0, 0, 0LL);
  }
  v13 = 35000;
  if ( v11 != (struct _NDIS_REFCOUNT_BLOCK *)-1LL )
  {
    v14 = ndisRefCountHandleFromRefCountBlock(v11);
    v14[2].RefWithStack[0].Block.Dereferences[4] = (_NDIS_REFCOUNT_STACK_ENTRY)1685537870;
    switch ( *(_BYTE *)a1 )
    {
      case 5:
        v15 = *(_QWORD *)(a1 + 32);
        break;
      case 0x11:
        v15 = a1;
        break;
      case 0x12:
        v15 = *(_QWORD *)(a1 + 16);
        break;
      default:
        v15 = 0LL;
        break;
    }
    if ( v15 )
    {
      v16 = PoQueryWatchdogTime(*(PDEVICE_OBJECT *)(v15 + 3856), &SecondsRemaining);
      if ( v16 )
      {
        v23 = SecondsRemaining;
        if ( SecondsRemaining < 3 )
          v23 = 3;
        v24 = 1000 * v23 - 3000;
        if ( v24 < 0xBB8 )
          v24 = 3000;
        v16 = 1;
        if ( v24 < 0x88B8 )
          v13 = v24;
      }
      *(_BYTE *)&v14[3].RefWithStack[0].Block.References[4] = v16;
    }
    v14[2].RefWithStack[0].Block.Dereferences[5] = (_NDIS_REFCOUNT_STACK_ENTRY)v13;
    *((_QWORD *)v14[2].RefWithStack + 7) = &ndisGlobalTriageBlock;
    *(_QWORD *)&v14[3].Flags = a1;
    v14[3].TaggedRefCounts.Tags = (_NDIS_REFCOUNT_TAGGED_ENTRY *)MEMORY[0xFFFFF78000000008];
    *(_QWORD *)v14[3].RefWithStack[0].Block.References = KeGetCurrentThread();
    v17 = g_ndisWatchdogSequenceNumber;
    *(_QWORD *)&v14[3].RefWithStack[0].Block.References[2] = Oid;
    g_ndisWatchdogSequenceNumber = v17 + 1;
    v14[2].RefWithStack[0].Block.References[1] = (_NDIS_REFCOUNT_STACK_ENTRY)(v17 + 1);
    v18 = -10000LL * *(_DWORD *)&v14[2].RefWithStack[0].Block.Dereferences[5];
    v14[2].RefWithStack[0].Block.Dereferences[2] = (_NDIS_REFCOUNT_STACK_ENTRY)35;
    v14[2].TaggedRefCounts.RefMask[0] = 1;
    KeClearEvent((PRKEVENT)&v14[2].RefWithStack[0].Block.References[2]);
    KeSetTimerEx((PKTIMER)((char *)v14->RefWithStack + 56), (LARGE_INTEGER)v18, 0, (PKDPC)v14);
    v7 = v27;
  }
  v19 = *(_QWORD *)(a1 + 3784);
  v20 = *(_QWORD *)(v19 + 352);
  if ( (!v20 || *(_QWORD *)(v20 + 64) == *(_QWORD *)(v19 + 176))
    && ndisVerifierNdisDispatch
    && (*(_BYTE *)(v2 + 26) & 2) != 0 )
  {
    if ( v7 )
      v3 = v7;
    v21 = ndisVerifierNdisDispatch->NdisMiniportOidRequestHandler(
            *(void **)(a1 + 24),
            v3,
            (void *)a1,
            *(void **)(a1 + 4992),
            *(int (__fastcall **)(void *, _NDIS_OID_REQUEST *))(v2 + 176));
  }
  else
  {
    if ( v7 )
      v3 = v7;
    v21 = (*(__int64 (__fastcall **)(_QWORD, _NDIS_OID_REQUEST *))(v2 + 176))(*(_QWORD *)(a1 + 24), v3);
  }
  v8 = v21;
  if ( v21 != 259 )
  {
    ndisDisarmWatchdogAsync((struct NDISWATCHDOG__ *)v11);
LABEL_26:
    if ( v8 != 259 && v7 )
      ndisOidFreeInternalCloneRequest((KSPIN_LOCK *)a1, (__int64)v7, 1, 0LL);
  }
  if ( (unsigned __int8)byte_1C0092612 >= 4u )
  {
    LODWORD(v25) = v8;
    WPP_SF_qdD(0xD7u, &WPP_ce03a118a6ed3e1c1740a62e9d2221ee_Traceguids, a1, Oid, v25);
  }
  return v8;
}
