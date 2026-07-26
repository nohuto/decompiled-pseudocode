/*
 * XREFs of ndisDeliverNetPnPEventSynchronously @ 0x1C00B860C
 * Callers:
 *     ?NotifyBindComplete@_NDIS_PROTOCOL_BLOCK@@QEAAXXZ @ 0x1C00B7C60 (-NotifyBindComplete@_NDIS_PROTOCOL_BLOCK@@QEAAXXZ.c)
 *     ndisNotifyBindFailure @ 0x1C00C24F0 (ndisNotifyBindFailure.c)
 *     ndisIMCheckDeviceInstance @ 0x1C00E5928 (ndisIMCheckDeviceInstance.c)
 *     ndisPnPNotifyBinding @ 0x1C0103560 (ndisPnPNotifyBinding.c)
 *     ndisHandleProtocolReconfigNotification @ 0x1C010D2D0 (ndisHandleProtocolReconfigNotification.c)
 * Callees:
 *     ?ndisRefCountHandleFromRefCountBlock@@YAPEAUNDIS_REFCOUNT_HANDLE__@@PEAU_NDIS_REFCOUNT_BLOCK@@@Z @ 0x1C00094EC (-ndisRefCountHandleFromRefCountBlock@@YAPEAUNDIS_REFCOUNT_HANDLE__@@PEAU_NDIS_REFCOUNT_BLOCK@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0025E10 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_qqDD @ 0x1C003A8FC (WPP_SF_qqDD.c)
 *     WPP_SF_qqd @ 0x1C0043E2C (WPP_SF_qqd.c)
 *     WPP_SF_qqLD @ 0x1C00656A4 (WPP_SF_qqLD.c)
 *     ?ndisWaitForEventThenDisarmWatchdog@@YAXPEAUNDISWATCHDOG__@@PEAU_KEVENT@@@Z @ 0x1C00B2C94 (-ndisWaitForEventThenDisarmWatchdog@@YAXPEAUNDISWATCHDOG__@@PEAU_KEVENT@@@Z.c)
 *     ?ndisFreeWatchdog@@YAXPEAUNDISWATCHDOG__@@@Z @ 0x1C00B8854 (-ndisFreeWatchdog@@YAXPEAUNDISWATCHDOG__@@@Z.c)
 *     ??0NdisWatchdogState@@QEAA@XZ @ 0x1C00B890C (--0NdisWatchdogState@@QEAA@XZ.c)
 *     ndisGetMiniportFromObject @ 0x1C00B89F8 (ndisGetMiniportFromObject.c)
 *     ndisReduceTimeoutFor9FBugcheck @ 0x1C00B8A28 (ndisReduceTimeoutFor9FBugcheck.c)
 */

__int64 __fastcall ndisDeliverNetPnPEventSynchronously(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdi
  int *v7; // r12
  __int64 v8; // rbx
  PVOID PoolWithTag; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r14
  struct _NDIS_REFCOUNT_BLOCK *v13; // r15
  __int64 MiniportFromObject; // rax
  int v15; // r8d
  char v16; // al
  unsigned int v17; // eax
  __int64 v18; // rbx
  int v19; // r15d
  int v20; // eax
  int v21; // ebx
  __int64 (__fastcall *v23)(__int64, __int64); // rax
  __int64 v24; // [rsp+20h] [rbp-58h]
  __int64 v25; // [rsp+28h] [rbp-50h]
  int v26; // [rsp+80h] [rbp+8h] BYREF
  __int64 v27; // [rsp+88h] [rbp+10h]
  __int64 v28; // [rsp+90h] [rbp+18h]
  __int64 v29; // [rsp+98h] [rbp+20h]

  v3 = 0LL;
  if ( a2 )
    v28 = *(_QWORD *)(a2 + 32);
  else
    v28 = 0LL;
  if ( (unsigned __int8)byte_1C0099614 >= 4u )
    WPP_SF_qqd(0xEu, &WPP_0af21d7125ac337aa6d359ed8b88fbb1_Traceguids, a1, a2, *(_DWORD *)(a3 + 8));
  if ( *(_BYTE *)(a1 + 56) < 6u )
    v27 = 0LL;
  else
    v27 = *(_QWORD *)(a1 + 128);
  v7 = (int *)(a3 + 8);
  v8 = a2;
  v29 = *(int *)(a3 + 8);
  if ( !a2 )
    v8 = a1;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x120uLL, 0x7377444Eu);
  if ( PoolWithTag )
    v12 = (__int64)NdisWatchdogState::NdisWatchdogState(PoolWithTag);
  else
    v12 = 0LL;
  v26 = 270000;
  if ( v12 )
  {
    if ( v12 != -1 )
    {
      v13 = ndisRefCountHandleFromRefCountBlock((struct _NDIS_REFCOUNT_BLOCK *)v12);
      v13[2].RefWithStack[0].Block.Dereferences[4] = (_NDIS_REFCOUNT_STACK_ENTRY)846677070;
      MiniportFromObject = ndisGetMiniportFromObject(v8);
      if ( MiniportFromObject )
      {
        v16 = ndisReduceTimeoutFor9FBugcheck(MiniportFromObject, &v26);
        v15 = v26;
        *(_BYTE *)&v13[3].RefWithStack[0].Block.References[4] = v16;
      }
      *(_QWORD *)&v13[3].Flags = v8;
      *((_QWORD *)v13[2].RefWithStack + 7) = &ndisGlobalTriageBlock;
      v13[2].RefWithStack[0].Block.Dereferences[5] = (_NDIS_REFCOUNT_STACK_ENTRY)v15;
      v13[3].TaggedRefCounts.Tags = (_NDIS_REFCOUNT_TAGGED_ENTRY *)MEMORY[0xFFFFF78000000008];
      *(_QWORD *)v13[3].RefWithStack[0].Block.References = KeGetCurrentThread();
      *(_QWORD *)&v13[3].RefWithStack[0].Block.References[2] = v29;
      *(_QWORD *)v13[3].RefWithStack[0].Block.Dereferences = v27;
      v17 = g_ndisWatchdogSequenceNumber + 1;
      v13[2].RefWithStack[0].Block.Dereferences[2] = (_NDIS_REFCOUNT_STACK_ENTRY)2;
      g_ndisWatchdogSequenceNumber = v17;
      v13[2].RefWithStack[0].Block.References[1] = (_NDIS_REFCOUNT_STACK_ENTRY)v17;
      v18 = -10000LL * *(_DWORD *)&v13[2].RefWithStack[0].Block.Dereferences[5];
      v13[2].TaggedRefCounts.RefMask[0] = 1;
      KeClearEvent((PRKEVENT)&v13[2].RefWithStack[0].Block.References[2]);
      KeSetTimerEx((PKTIMER)((char *)v13->RefWithStack + 56), (LARGE_INTEGER)v18, 0, (PKDPC)v13);
    }
  }
  else
  {
    v12 = -1LL;
  }
  if ( *(_BYTE *)(a1 + 56) < 6u )
  {
    v23 = *(__int64 (__fastcall **)(__int64, __int64))(a1 + 128);
    if ( v23 )
      LODWORD(v3) = v23(v28, a3 + 8);
  }
  else
  {
    v19 = *v7;
    if ( (unsigned __int8)byte_1C0099614 >= 4u )
    {
      LODWORD(v24) = *v7;
      WPP_SF_qqd(0x61u, &WPP_0f5804d9ba813936e0c202df1238e587_Traceguids, a1, a2, v24);
    }
    if ( a2 )
      v3 = *(_QWORD *)(a2 + 32);
    v20 = (*(__int64 (__fastcall **)(__int64, __int64))(a1 + 128))(v3, a3);
    v21 = v20;
    if ( (unsigned __int8)byte_1C0099614 >= 4u )
    {
      LODWORD(v24) = v19;
      WPP_SF_qqDD(0x62u, &WPP_0f5804d9ba813936e0c202df1238e587_Traceguids, a1, a2, v24, v20);
    }
    LODWORD(v3) = v21;
  }
  if ( (_DWORD)v3 == 259 )
  {
    ndisWaitForEventThenDisarmWatchdog((struct _NDIS_REFCOUNT_BLOCK *)v12, *(struct _KEVENT **)(a3 + 32));
    LODWORD(v3) = *(_DWORD *)(a3 + 40);
  }
  if ( v12 != -1 )
    ndisFreeWatchdog((struct NDISWATCHDOG__ *)v12);
  if ( (unsigned __int8)byte_1C0099614 >= 4u )
  {
    LODWORD(v25) = v3;
    LODWORD(v24) = *v7;
    WPP_SF_qqLD(v11, v10, a1, a2, v24, v25);
  }
  return (unsigned int)v3;
}
