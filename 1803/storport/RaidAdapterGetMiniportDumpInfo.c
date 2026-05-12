/*
 * XREFs of RaidAdapterGetMiniportDumpInfo @ 0x1C0063E98
 * Callers:
 *     RaidAdapterPopulateMiniportDumpInfo @ 0x1C0064378 (RaidAdapterPopulateMiniportDumpInfo.c)
 * Callees:
 *     RaidXrbSetCompletionRoutine @ 0x1C0003624 (RaidXrbSetCompletionRoutine.c)
 *     RaSrbSetMiniportContext @ 0x1C0006F5C (RaSrbSetMiniportContext.c)
 *     StorAllocateContiguousIoResources @ 0x1C0007318 (StorAllocateContiguousIoResources.c)
 *     StorFreeContiguousIoResources @ 0x1C00073D0 (StorFreeContiguousIoResources.c)
 *     RaidAdapterRaiseIrqlAndExecuteXrb @ 0x1C00073F8 (RaidAdapterRaiseIrqlAndExecuteXrb.c)
 *     RaidAdapterExecuteXrb @ 0x1C0007448 (RaidAdapterExecuteXrb.c)
 *     RaidAllocateSrb @ 0x1C0007504 (RaidAllocateSrb.c)
 *     RaidAllocatePool @ 0x1C0007658 (RaidAllocatePool.c)
 *     RaidXrbDeallocateResources @ 0x1C0007D98 (RaidXrbDeallocateResources.c)
 *     RaidZeroXrb @ 0x1C000CDA8 (RaidZeroXrb.c)
 *     RaidSrbStatusToNtStatus @ 0x1C000D158 (RaidSrbStatusToNtStatus.c)
 *     RaidFreeSrb @ 0x1C0012210 (RaidFreeSrb.c)
 *     memset @ 0x1C0018140 (memset.c)
 *     WPP_SF_DD @ 0x1C002C06C (WPP_SF_DD.c)
 *     WPP_SF_qq @ 0x1C002C280 (WPP_SF_qq.c)
 */

__int64 __fastcall RaidAdapterGetMiniportDumpInfo(__int64 a1, __int64 a2, __int64 a3, __int64 a4, _QWORD *a5)
{
  _QWORD *v5; // r12
  unsigned int v6; // edi
  _BYTE *Srb; // rbx
  _BYTE *v8; // r13
  _DWORD *v10; // rsi
  _QWORD *v11; // rdx
  __int64 v12; // r14
  bool v13; // zf
  unsigned int v14; // ecx
  int v15; // edi
  unsigned int v16; // r15d
  _DWORD *Pool; // rax
  int v18; // r10d
  _QWORD *v19; // r8
  _BYTE *v20; // rcx
  _DWORD *v21; // rdx
  int v22; // edx
  __int64 ContiguousIoResources; // rax
  __int64 v24; // rdx
  __int64 v25; // rdi
  int v26; // eax
  __int64 v27; // r8
  int v28; // eax
  _BYTE *v29; // rax
  PLARGE_INTEGER Timeout; // [rsp+20h] [rbp-58h]
  __int64 v32; // [rsp+38h] [rbp-40h]
  char v34; // [rsp+90h] [rbp+18h]

  v5 = (_QWORD *)(a3 + 24);
  v6 = 0;
  Srb = 0LL;
  v32 = 0LL;
  v8 = 0LL;
  v34 = 0;
  *a5 = 0LL;
  v10 = 0LL;
  v11 = *(_QWORD **)(a3 + 24);
  v12 = 0LL;
  if ( v11 == (_QWORD *)(a3 + 24) )
    goto LABEL_7;
  do
  {
    v13 = v11[6] == a4;
    v14 = v6 + 1;
    v11 = (_QWORD *)*v11;
    if ( !v13 )
      v14 = v6;
    v6 = v14;
  }
  while ( v11 != v5 );
  if ( v14 <= 4 )
  {
LABEL_7:
    *(_DWORD *)(a4 + 72) = v6 << 16;
    if ( 16 * ((unsigned __int64)v6 + 1) <= 0x18 )
      v16 = 24;
    else
      v16 = 16 * (v6 + 1);
    Pool = RaidAllocatePool(NonPagedPoolNx, v16, 0x44436152u, *(_QWORD *)(a2 + 8));
    v10 = Pool;
    if ( Pool )
    {
      memset(Pool, 0, v16);
      v10[2] = 1196246089;
      *v10 = 32;
      v18 = 0;
      v10[1] = 32;
      v10[3] = v6;
      v19 = (_QWORD *)*v5;
      if ( (_QWORD *)*v5 != v5 )
      {
        do
        {
          if ( v19[6] == a4 )
          {
            v20 = (_BYTE *)v19[5];
            v21 = &v10[4 * v18++ + 4];
            *(_WORD *)v21 = 1;
            v21[1] = 4;
            *((_BYTE *)v21 + 8) = v20[66];
            *((_BYTE *)v21 + 9) = v20[67];
            *((_BYTE *)v21 + 10) = v20[68];
          }
          v19 = (_QWORD *)*v19;
        }
        while ( v19 != v5 );
        v12 = 0LL;
      }
      Srb = RaidAllocateSrb(*(_QWORD *)(a2 + 8), 0x2Au, *(_BYTE *)(a2 + 402), 0);
      if ( Srb
        && (ContiguousIoResources = StorAllocateContiguousIoResources(
                                      ((*(_DWORD *)(a2 + 444) + 7) & 0xFFFFFFF8) + 1088,
                                      v22,
                                      a2),
            v32 = ContiguousIoResources,
            (v25 = ContiguousIoResources) != 0) )
      {
        v12 = ContiguousIoResources + 32;
        RaidZeroXrb(ContiguousIoResources + 32, v24, 0, 0LL);
        *(_BYTE *)(v12 + 17) |= 8u;
        *(_QWORD *)(v12 + 176) = a1;
        *(_QWORD *)(v12 + 184) = v10;
        *(_QWORD *)(v12 + 168) = Srb;
        if ( *(_BYTE *)(a2 + 402) == 1 )
        {
          *((_DWORD *)Srb + 15) = v16;
          v8 = Srb;
          *((_QWORD *)Srb + 12) = v12;
          *((_DWORD *)Srb + 6) = 256;
          *((_QWORD *)Srb + 10) = a1;
          *((_DWORD *)Srb + 5) = 42;
          *((_QWORD *)Srb + 8) = v10;
          *((_DWORD *)Srb + 10) = 10;
          v34 = 1;
          if ( !*(_BYTE *)(a2 + 4450) )
            *((_DWORD *)Srb + 6) = 192;
        }
        else
        {
          v8 = 0LL;
          *(_WORD *)Srb = 88;
          *((_DWORD *)Srb + 4) = v16;
          *((_DWORD *)Srb + 3) = 256;
          v26 = 256;
          *((_QWORD *)Srb + 6) = v12;
          Srb[2] = 42;
          *((_QWORD *)Srb + 3) = v10;
          *((_DWORD *)Srb + 5) = 10;
          if ( !*(_BYTE *)(a2 + 4450) )
            v26 = 192;
          *((_DWORD *)Srb + 3) = v26;
        }
        RaSrbSetMiniportContext(a2, (__int64)Srb, v25 + 1088);
        KeInitializeEvent((PRKEVENT)(v12 + 664), NotificationEvent, 0);
        RaidXrbSetCompletionRoutine(v12, (__int64)RaidXrbSignalCompletion);
        if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) != 0
          && BYTE1(WPP_GLOBAL_Control->Timer) )
        {
          WPP_SF_qq(
            (__int64)WPP_GLOBAL_Control->AttachedDevice,
            0x49u,
            (__int64)&WPP_0e2a19f4a3e138dc01b4b18bc88c5901_Traceguids,
            v12,
            Srb);
        }
        if ( *(_BYTE *)(a2 + 4450) )
          v28 = RaidAdapterRaiseIrqlAndExecuteXrb(a2, v12);
        else
          v28 = RaidAdapterExecuteXrb(a2, (_QWORD *)v12, v27);
        v15 = v28;
        if ( v28 >= 0 )
        {
          KeWaitForSingleObject((PVOID)(v12 + 664), Executive, 0, 0, 0LL);
          v15 = RaidSrbStatusToNtStatus(Srb[3]);
        }
        if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) != 0
          && BYTE1(WPP_GLOBAL_Control->Timer) )
        {
          LODWORD(Timeout) = (unsigned __int8)Srb[3];
          WPP_SF_DD(
            (__int64)WPP_GLOBAL_Control->AttachedDevice,
            0x4Au,
            (__int64)&WPP_0e2a19f4a3e138dc01b4b18bc88c5901_Traceguids,
            v15,
            Timeout);
        }
        if ( v15 >= 0 )
        {
          if ( *v10 >= 0x18u && v10[2] == 1297105993 )
          {
            *a5 = v10;
            v10 = 0LL;
          }
          else
          {
            v15 = -1073739509;
          }
        }
      }
      else
      {
        v8 = 0LL;
        v15 = -1073741670;
      }
    }
    else
    {
      v15 = -1073741670;
      v8 = 0LL;
    }
  }
  else
  {
    v15 = -1073741637;
  }
  if ( v32 )
  {
    RaidXrbDeallocateResources(v12, 0);
    StorFreeContiguousIoResources(a2, v32);
  }
  if ( Srb )
  {
    if ( v34 == 1 )
    {
      v29 = Srb;
      if ( v8 )
        v29 = v8;
      *((_QWORD *)v29 + 10) = 0LL;
      *((_QWORD *)v29 + 13) = 0LL;
    }
    else
    {
      *((_QWORD *)Srb + 6) = 0LL;
      *((_QWORD *)Srb + 7) = 0LL;
    }
    RaidFreeSrb(Srb);
  }
  if ( v10 )
    ExFreePoolWithTag(v10, 0x44436152u);
  return (unsigned int)v15;
}
