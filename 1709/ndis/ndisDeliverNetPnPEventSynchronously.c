/*
 * XREFs of ndisDeliverNetPnPEventSynchronously @ 0x1C00BA65C
 * Callers:
 *     ndisNotifyBindFailure @ 0x1C00C908C (ndisNotifyBindFailure.c)
 *     ndisIMCheckDeviceInstance @ 0x1C00E40C8 (ndisIMCheckDeviceInstance.c)
 *     ndisPnPNotifyBinding @ 0x1C0102070 (ndisPnPNotifyBinding.c)
 *     ndisHandleProtocolReconfigNotification @ 0x1C010B350 (ndisHandleProtocolReconfigNotification.c)
 * Callees:
 *     ?ndisRefCountHandleFromRefCountBlock@@YAPEAUNDIS_REFCOUNT_HANDLE__@@PEAU_NDIS_REFCOUNT_BLOCK@@@Z @ 0x1C000D150 (-ndisRefCountHandleFromRefCountBlock@@YAPEAUNDIS_REFCOUNT_HANDLE__@@PEAU_NDIS_REFCOUNT_BLOCK@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024F10 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_qqDD @ 0x1C0039564 (WPP_SF_qqDD.c)
 *     WPP_SF_qqd @ 0x1C0051268 (WPP_SF_qqd.c)
 *     WPP_SF_qqLD @ 0x1C0064B40 (WPP_SF_qqLD.c)
 *     ?ndisWaitForEventThenDisarmWatchdog@@YAXPEAUNDISWATCHDOG__@@PEAU_KEVENT@@@Z @ 0x1C00AB4D4 (-ndisWaitForEventThenDisarmWatchdog@@YAXPEAUNDISWATCHDOG__@@PEAU_KEVENT@@@Z.c)
 *     ?ndisFreeWatchdog@@YAXPEAUNDISWATCHDOG__@@@Z @ 0x1C00BA3CC (-ndisFreeWatchdog@@YAXPEAUNDISWATCHDOG__@@@Z.c)
 *     ??0NdisWatchdogState@@QEAA@XZ @ 0x1C00BA530 (--0NdisWatchdogState@@QEAA@XZ.c)
 */

__int64 __fastcall ndisDeliverNetPnPEventSynchronously(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdi
  int *v7; // r12
  __int64 v8; // rbx
  char *PoolWithTag; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r14
  int v14; // r8d
  struct _NDIS_REFCOUNT_BLOCK *v15; // r15
  __int64 v16; // rcx
  BOOLEAN v17; // al
  char v18; // al
  unsigned int v19; // eax
  __int64 v20; // rbx
  int v21; // r15d
  int v22; // eax
  int v23; // ebx
  ULONG v25; // eax
  unsigned int v26; // ecx
  unsigned int v27; // eax
  __int64 (__fastcall *v28)(__int64, __int64, __int64); // rax
  __int64 v29; // [rsp+20h] [rbp-58h]
  __int64 v30; // [rsp+28h] [rbp-50h]
  ULONG SecondsRemaining; // [rsp+80h] [rbp+8h] BYREF
  __int64 v32; // [rsp+88h] [rbp+10h]
  __int64 v33; // [rsp+90h] [rbp+18h]
  __int64 v34; // [rsp+98h] [rbp+20h]

  v3 = 0LL;
  if ( a2 )
    v33 = *(_QWORD *)(a2 + 32);
  else
    v33 = 0LL;
  if ( (unsigned __int8)byte_1C0098754 >= 4u )
    WPP_SF_qqd(0xEu, &WPP_c43bece8f9e83cce6c35b7786f97099d_Traceguids, a1, a2, *(_DWORD *)(a3 + 8));
  if ( *(_BYTE *)(a1 + 56) < 6u )
    v32 = 0LL;
  else
    v32 = *(_QWORD *)(a1 + 128);
  v7 = (int *)(a3 + 8);
  v8 = a2;
  v34 = *(int *)(a3 + 8);
  if ( !a2 )
    v8 = a1;
  PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x120uLL, 0x7377444Eu);
  if ( PoolWithTag )
    v13 = (__int64)NdisWatchdogState::NdisWatchdogState(PoolWithTag);
  else
    v13 = 0LL;
  if ( !v13 )
  {
    v13 = -1LL;
    goto LABEL_23;
  }
  v12 = 270000LL;
  if ( v13 == -1 )
    goto LABEL_23;
  v15 = ndisRefCountHandleFromRefCountBlock((struct _NDIS_REFCOUNT_BLOCK *)v13);
  v15[2].RefWithStack[0].Block.Dereferences[4] = (_NDIS_REFCOUNT_STACK_ENTRY)846677070;
  if ( !v8 )
    goto LABEL_39;
  switch ( *(_BYTE *)v8 )
  {
    case 5:
      v16 = *(_QWORD *)(v8 + 32);
      break;
    case 0x11:
      v16 = v8;
      break;
    case 0x12:
      v16 = *(_QWORD *)(v8 + 16);
      break;
    default:
LABEL_39:
      v16 = 0LL;
      break;
  }
  if ( v16 )
  {
    v17 = PoQueryWatchdogTime(*(PDEVICE_OBJECT *)(v16 + 3856), &SecondsRemaining);
    v14 = 270000;
    if ( v17 )
    {
      v25 = SecondsRemaining;
      if ( SecondsRemaining < 3 )
        v25 = 3;
      v26 = 3000;
      v27 = 1000 * v25 - 3000;
      if ( v27 >= 0xBB8 )
        v26 = v27;
      v18 = 1;
      if ( v26 < 0x41EB0 )
        v14 = v26;
    }
    else
    {
      v18 = 0;
    }
    *(_BYTE *)&v15[3].RefWithStack[0].Block.References[4] = v18;
  }
  *(_QWORD *)&v15[3].Flags = v8;
  *((_QWORD *)v15[2].RefWithStack + 7) = &ndisGlobalTriageBlock;
  v15[2].RefWithStack[0].Block.Dereferences[5] = (_NDIS_REFCOUNT_STACK_ENTRY)v14;
  v15[3].TaggedRefCounts.Tags = (_NDIS_REFCOUNT_TAGGED_ENTRY *)MEMORY[0xFFFFF78000000008];
  *(_QWORD *)v15[3].RefWithStack[0].Block.References = KeGetCurrentThread();
  *(_QWORD *)&v15[3].RefWithStack[0].Block.References[2] = v34;
  *(_QWORD *)v15[3].RefWithStack[0].Block.Dereferences = v32;
  v19 = g_ndisWatchdogSequenceNumber + 1;
  v15[2].RefWithStack[0].Block.Dereferences[2] = (_NDIS_REFCOUNT_STACK_ENTRY)2;
  g_ndisWatchdogSequenceNumber = v19;
  v15[2].RefWithStack[0].Block.References[1] = (_NDIS_REFCOUNT_STACK_ENTRY)v19;
  v20 = -10000LL * *(_DWORD *)&v15[2].RefWithStack[0].Block.Dereferences[5];
  v15[2].TaggedRefCounts.RefMask[0] = 1;
  KeClearEvent((PRKEVENT)&v15[2].RefWithStack[0].Block.References[2]);
  KeSetTimerEx((PKTIMER)((char *)v15->RefWithStack + 56), (LARGE_INTEGER)v20, 0, (PKDPC)v15);
LABEL_23:
  if ( *(_BYTE *)(a1 + 56) < 6u )
  {
    v28 = *(__int64 (__fastcall **)(__int64, __int64, __int64))(a1 + 128);
    if ( v28 )
      LODWORD(v3) = v28(v33, a3 + 8, v12);
  }
  else
  {
    v21 = *v7;
    if ( (unsigned __int8)byte_1C0098754 >= 4u )
    {
      LODWORD(v29) = *v7;
      WPP_SF_qqd(0x61u, &WPP_4a5d38b576c633146a968e2982301690_Traceguids, a1, a2, v29);
    }
    if ( a2 )
      v3 = *(_QWORD *)(a2 + 32);
    v22 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(a1 + 128))(v3, a3, v12);
    v23 = v22;
    if ( (unsigned __int8)byte_1C0098754 >= 4u )
    {
      LODWORD(v29) = v21;
      WPP_SF_qqDD(0x62u, &WPP_4a5d38b576c633146a968e2982301690_Traceguids, a1, a2, v29, v22);
    }
    LODWORD(v3) = v23;
  }
  if ( (_DWORD)v3 == 259 )
  {
    ndisWaitForEventThenDisarmWatchdog((struct _NDIS_REFCOUNT_BLOCK *)v13, *(struct _KEVENT **)(a3 + 32));
    LODWORD(v3) = *(_DWORD *)(a3 + 40);
  }
  if ( v13 != -1 )
    ndisFreeWatchdog((struct _NDIS_REFCOUNT_BLOCK *)v13);
  if ( (unsigned __int8)byte_1C0098754 >= 4u )
  {
    LODWORD(v30) = v3;
    LODWORD(v29) = *v7;
    WPP_SF_qqLD(v11, v10, a1, a2, v29, v30);
  }
  return (unsigned int)v3;
}
