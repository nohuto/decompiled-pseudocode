/*
 * XREFs of RaidAdapterScsiMiniportIoctlWithAddress @ 0x1C0006F88
 * Callers:
 *     RaUnitScsiMiniportIoctl @ 0x1C00063D0 (RaUnitScsiMiniportIoctl.c)
 *     RaidAdapterDeviceControlIrp @ 0x1C0007A30 (RaidAdapterDeviceControlIrp.c)
 * Callees:
 *     RaidGetSrbIoctlFromIrp @ 0x1C0006A94 (RaidGetSrbIoctlFromIrp.c)
 *     RaidBuildMdlForXrb @ 0x1C0006B9C (RaidBuildMdlForXrb.c)
 *     RaidAdapterFindUnit @ 0x1C0006BF0 (RaidAdapterFindUnit.c)
 *     RaSrbSetMiniportContext @ 0x1C0006F5C (RaSrbSetMiniportContext.c)
 *     StorAllocateContiguousIoResources @ 0x1C0007318 (StorAllocateContiguousIoResources.c)
 *     StorFreeContiguousIoResources @ 0x1C00073D0 (StorFreeContiguousIoResources.c)
 *     RaidAdapterRaiseIrqlAndExecuteXrb @ 0x1C00073F8 (RaidAdapterRaiseIrqlAndExecuteXrb.c)
 *     RaidAdapterExecuteXrb @ 0x1C0007448 (RaidAdapterExecuteXrb.c)
 *     RaidAllocateSrb @ 0x1C0007504 (RaidAllocateSrb.c)
 *     RaidXrbDeallocateResources @ 0x1C0007D98 (RaidXrbDeallocateResources.c)
 *     RaUnitAcquireRemoveLock @ 0x1C0008084 (RaUnitAcquireRemoveLock.c)
 *     RaUnitReleaseRemoveLock @ 0x1C0008488 (RaUnitReleaseRemoveLock.c)
 *     RaidCompleteRequestEx @ 0x1C000C410 (RaidCompleteRequestEx.c)
 *     RaidZeroXrb @ 0x1C000CDA8 (RaidZeroXrb.c)
 *     RaidSrbStatusToNtStatus @ 0x1C000D158 (RaidSrbStatusToNtStatus.c)
 *     RaidAdapterPoFxActivateComponent @ 0x1C0026AA8 (RaidAdapterPoFxActivateComponent.c)
 *     RaidAdapterPoFxIdleComponent @ 0x1C0026B14 (RaidAdapterPoFxIdleComponent.c)
 *     RaidAdapterPoFxIdleComponentFromMiniport @ 0x1C0026B5C (RaidAdapterPoFxIdleComponentFromMiniport.c)
 *     RaidUnitPoFxIdleComponentFromMiniport @ 0x1C002BBD8 (RaidUnitPoFxIdleComponentFromMiniport.c)
 */

__int64 __fastcall RaidAdapterScsiMiniportIoctlWithAddress(__int64 a1, IRP *a2, char a3, char a4, char a5, int a6)
{
  __int64 v8; // rbx
  unsigned int *v9; // r12
  __int64 v10; // r15
  unsigned int *Srb; // rsi
  __int64 v12; // rbp
  int SrbIoctlFromIrp; // eax
  __int64 v14; // r8
  int v15; // edi
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 ContiguousIoResources; // rax
  __int64 v19; // rdx
  _DWORD *v20; // r12
  __int64 v21; // r8
  __int64 v22; // r9
  char v23; // al
  char v24; // dl
  char v25; // cl
  __int64 Unit; // rax
  __int64 v27; // rax
  __int64 v28; // r8
  int v29; // eax
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rcx
  char v33; // al
  unsigned int v34; // eax
  unsigned __int64 v35; // rcx
  __int64 v37; // rdi
  unsigned int *v38; // rax
  __int64 v39; // rax
  __int64 v40; // r8
  int v41; // eax
  unsigned int v42; // [rsp+30h] [rbp-68h]
  ULONG v43; // [rsp+34h] [rbp-64h] BYREF
  unsigned int v44; // [rsp+38h] [rbp-60h] BYREF
  unsigned int *v45; // [rsp+40h] [rbp-58h]
  __int64 v46; // [rsp+48h] [rbp-50h]
  __int64 v47; // [rsp+50h] [rbp-48h]
  _DWORD *v48; // [rsp+58h] [rbp-40h] BYREF

  v8 = 0LL;
  HIBYTE(v42) = 0;
  v47 = 0LL;
  v9 = 0LL;
  v45 = 0LL;
  v10 = 0LL;
  Srb = 0LL;
  v12 = 0LL;
  SrbIoctlFromIrp = RaidGetSrbIoctlFromIrp((__int64)a2, &v48, &v43, &v44, 2);
  v15 = SrbIoctlFromIrp;
  if ( SrbIoctlFromIrp < 0 )
  {
    a2->IoStatus.Status = SrbIoctlFromIrp;
  }
  else
  {
    v16 = *(_QWORD *)(a1 + 8);
    LOBYTE(v14) = *(_BYTE *)(a1 + 402);
    v47 = a1 + 304;
    Srb = (unsigned int *)RaidAllocateSrb(v16, 2LL, v14, 0LL);
    if ( Srb
      && (ContiguousIoResources = StorAllocateContiguousIoResources(
                                    ((*(_DWORD *)(a1 + 444) + 7) & 0xFFFFFFF8) + 1088,
                                    v17,
                                    a1),
          v46 = ContiguousIoResources,
          (v8 = ContiguousIoResources) != 0) )
    {
      v12 = ContiguousIoResources + 32;
      RaidZeroXrb(ContiguousIoResources + 32, v19, 0LL, 0LL);
      v20 = v48;
      v15 = RaidBuildMdlForXrb(v12, v48, v43);
      if ( v15 < 0 )
      {
        v9 = 0LL;
      }
      else
      {
        v23 = a5;
        v24 = a3;
        v25 = a4;
        BYTE2(v42) = a5;
        LOBYTE(v42) = a3;
        BYTE1(v42) = a4;
        if ( a6 == 1 )
        {
          Unit = RaidAdapterFindUnit(a1, v42, v21, v22);
          v25 = a4;
          v10 = Unit;
          v24 = a3;
          *(_QWORD *)(v12 + 224) = Unit;
          v23 = a5;
        }
        if ( *(_BYTE *)(v47 + 98) == 1 )
        {
          v37 = Srb[13];
          v45 = Srb;
          *((_QWORD *)Srb + 12) = v12;
          *((_QWORD *)Srb + 10) = a2;
          Srb[5] = 2;
          Srb[6] = 192;
          *((_WORD *)Srb + 18) = IoGetIoPriorityHint(a2);
          Srb[10] = v20[3];
          Srb[15] = v43;
          *((_QWORD *)Srb + 8) = v20;
          *((_BYTE *)Srb + v37 + 8) = a3;
          *((_BYTE *)Srb + v37 + 9) = a4;
          *((_BYTE *)Srb + v37 + 10) = a5;
          *(_QWORD *)(v12 + 168) = Srb;
          *(_QWORD *)(v12 + 176) = *((_QWORD *)Srb + 10);
          v27 = *((_QWORD *)Srb + 8);
        }
        else
        {
          *((_BYTE *)Srb + 7) = v23;
          Srb[4] = v43;
          *((_QWORD *)Srb + 3) = v20;
          *(_WORD *)Srb = 88;
          *((_QWORD *)Srb + 6) = v12;
          *((_BYTE *)Srb + 2) = 2;
          *((_BYTE *)Srb + 5) = v24;
          *((_BYTE *)Srb + 6) = v25;
          Srb[3] = 192;
          Srb[5] = v20[3];
          *(_QWORD *)(v12 + 168) = Srb;
          *(_QWORD *)(v12 + 176) = a2;
          v27 = *((_QWORD *)Srb + 3);
        }
        v28 = v46 + 1088;
        *(_QWORD *)(v12 + 184) = v27;
        RaSrbSetMiniportContext(a1, (__int64)Srb, v28);
        KeInitializeEvent((PRKEVENT)(v12 + 664), NotificationEvent, 0);
        *(_QWORD *)(v12 + 656) = RaidXrbSignalCompletion;
        if ( *(_QWORD *)(a1 + 5088) )
          RaidAdapterPoFxActivateComponent(a1, 0LL, 1LL);
        if ( *(_BYTE *)(a1 + 4450) )
          v29 = RaidAdapterRaiseIrqlAndExecuteXrb(a1, v12);
        else
          v29 = RaidAdapterExecuteXrb(a1, v12);
        v15 = v29;
        if ( v29 >= 0 )
        {
          KeWaitForSingleObject((PVOID)(v12 + 664), Executive, 0, 0, 0LL);
          LOBYTE(v32) = *((_BYTE *)Srb + 3);
          v15 = RaidSrbStatusToNtStatus(v32);
        }
        v33 = *(_BYTE *)(v12 + 17);
        if ( (v33 & 1) != 0 )
        {
          RaidAdapterPoFxIdleComponentFromMiniport(a1, *(unsigned int *)(v12 + 748));
          *(_BYTE *)(v12 + 17) &= ~1u;
          v33 = *(_BYTE *)(v12 + 17);
        }
        if ( (v33 & 2) != 0 )
        {
          if ( a6 == 1 )
          {
            v41 = 0;
          }
          else
          {
            v39 = RaidAdapterFindUnit(a1, v42, v30, v31);
            v10 = v39;
            if ( v39 )
            {
              LOBYTE(v40) = 1;
              v41 = RaUnitAcquireRemoveLock(v39, a2, v40);
            }
            else
            {
              v41 = -1073741823;
            }
          }
          if ( !v41 )
          {
            if ( v10 )
            {
              RaidUnitPoFxIdleComponentFromMiniport(v10, *(unsigned int *)(v12 + 748));
              *(_BYTE *)(v12 + 17) &= ~2u;
              if ( a6 != 1 )
                RaUnitReleaseRemoveLock(v10);
            }
          }
        }
        if ( *(_QWORD *)(a1 + 5088) )
          RaidAdapterPoFxIdleComponent(a1, 0LL, 0LL);
        v8 = v46;
        v9 = v45;
      }
    }
    else
    {
      v15 = -1073741801;
    }
  }
  if ( v15 < 0 )
  {
    v35 = 0LL;
  }
  else
  {
    if ( *((_BYTE *)Srb + 2) == 40 )
      v34 = v9[15];
    else
      v34 = Srb[4];
    if ( v44 < v34 )
      v34 = v44;
    v35 = v34;
  }
  a2->IoStatus.Information = v35;
  if ( v8 )
  {
    RaidXrbDeallocateResources(v12, 0LL);
    StorFreeContiguousIoResources(a1, v8);
  }
  if ( Srb )
  {
    if ( *(_BYTE *)(v47 + 98) == 1 )
    {
      v38 = Srb;
      if ( v9 )
        v38 = v9;
      *((_QWORD *)v38 + 10) = 0LL;
      *((_QWORD *)v38 + 13) = 0LL;
    }
    else
    {
      *((_QWORD *)Srb + 6) = 0LL;
      *((_QWORD *)Srb + 7) = 0LL;
    }
    ExFreePoolWithTag(Srb, 0x72536152u);
  }
  return RaidCompleteRequestEx(a2);
}
