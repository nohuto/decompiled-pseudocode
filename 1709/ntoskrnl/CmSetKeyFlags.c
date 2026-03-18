/*
 * XREFs of CmSetKeyFlags @ 0x14068DC84
 * Callers:
 *     NtSetInformationKey @ 0x14056AC30 (NtSetInformationKey.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquireResourceSharedLite @ 0x1400800D0 (ExAcquireResourceSharedLite.c)
 *     ExAcquireRundownProtection_0 @ 0x140081770 (ExAcquireRundownProtection_0.c)
 *     ExReleaseRundownProtection_0 @ 0x1400817A0 (ExReleaseRundownProtection_0.c)
 *     ExReleaseResourceLite @ 0x1400830F0 (ExReleaseResourceLite.c)
 *     CmpTransEnlistUowInKcb @ 0x140100358 (CmpTransEnlistUowInKcb.c)
 *     CmpTransEnlistUowInCmTrans @ 0x14010A3B0 (CmpTransEnlistUowInCmTrans.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     CmpLockKcbExclusive @ 0x140478D48 (CmpLockKcbExclusive.c)
 *     HvpMarkCellDirty @ 0x14047D0F4 (HvpMarkCellDirty.c)
 *     CmpLockRegistry @ 0x14047E6F0 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x14047E950 (CmpUnlockRegistry.c)
 *     CmpUnlockKcb @ 0x14047F670 (CmpUnlockKcb.c)
 *     CmpUpdateKeyNodeAccessBits @ 0x140481B84 (CmpUpdateKeyNodeAccessBits.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x140482380 (CmpIsKeyDeletedForKeyBody.c)
 *     CmpTransSearchAddTransFromKeyBody @ 0x140568D78 (CmpTransSearchAddTransFromKeyBody.c)
 *     CmpLockIXLockExclusive @ 0x140569108 (CmpLockIXLockExclusive.c)
 *     CmpLockIXLockIntent @ 0x140569164 (CmpLockIXLockIntent.c)
 *     CmpRundownUnitOfWork @ 0x140569428 (CmpRundownUnitOfWork.c)
 *     CmAddLogForAction @ 0x140593D1C (CmAddLogForAction.c)
 *     CmpAllocateUnitOfWork @ 0x14059ABD8 (CmpAllocateUnitOfWork.c)
 *     CmpLogTransactionAbortedWithChildName @ 0x14059E850 (CmpLogTransactionAbortedWithChildName.c)
 *     CmpRollbackTransactionArray @ 0x1406961BC (CmpRollbackTransactionArray.c)
 *     CmpLogUnsupportedOperation @ 0x140697FF0 (CmpLogUnsupportedOperation.c)
 *     CmpSnapshotTxOwnerArray @ 0x1406998A4 (CmpSnapshotTxOwnerArray.c)
 */

__int64 __fastcall CmSetKeyFlags(__int64 a1, int a2, int a3)
{
  int v5; // edi
  __int64 v6; // r15
  char i; // al
  struct _KTHREAD *CurrentThread; // rax
  __int64 v10; // rbx
  ULONG_PTR v11; // rsi
  __int64 v12; // r13
  ULONG_PTR v13; // rcx
  __int64 v14; // r9
  unsigned int v15; // ebx
  __int64 v16; // r8
  _QWORD *UnitOfWork; // rax
  ULONG v18; // edx
  ULONG_PTR v19; // r13
  unsigned int v20; // r14d
  __int64 v21; // rax
  __int64 v22; // r14
  __int16 v23; // ax
  unsigned int v24; // [rsp+30h] [rbp-30h] BYREF
  int v25; // [rsp+34h] [rbp-2Ch] BYREF
  ULONG_PTR BugCheckParameter3; // [rsp+38h] [rbp-28h]
  __int64 v27; // [rsp+40h] [rbp-20h] BYREF
  __int64 v28; // [rsp+48h] [rbp-18h] BYREF
  _DWORD v29[2]; // [rsp+50h] [rbp-10h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+58h] [rbp-8h]

  v29[0] = -1;
  v27 = 0LL;
  v25 = 0;
  v29[1] = 0;
  v5 = 0;
  v6 = 0LL;
  if ( a2 == 1 && (a3 & 0xFFFFFFF0) != 0 )
    return 3221225485LL;
  for ( i = 0; ; i = 1 )
  {
    if ( i )
    {
      ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    }
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    if ( !ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown) )
      break;
    v10 = MEMORY[0xFFFFF78000000014];
    CmpLockRegistry();
    v11 = *(_QWORD *)(a1 + 8);
    CmpLockKcbExclusive(v11);
    if ( *(_WORD *)(v11 + 58) )
    {
      CmpLogUnsupportedOperation(16LL);
      v5 = -1073741822;
      goto LABEL_59;
    }
    if ( *(_BYTE *)(v11 + 57) == 1 )
    {
      v5 = -1073741790;
      goto LABEL_59;
    }
    BugCheckParameter2 = *(_QWORD *)(v11 + 24);
    LODWORD(BugCheckParameter3) = *(_DWORD *)(v11 + 32);
    if ( *(_QWORD *)(a1 + 56) || *(_QWORD *)(a1 + 64) )
    {
      if ( CmpIsKeyDeletedForKeyBody(a1, v27) )
        goto LABEL_53;
      v5 = CmpTransSearchAddTransFromKeyBody((_QWORD *)a1, &v27);
      if ( v5 < 0 )
        goto LABEL_59;
      if ( (*(_DWORD *)(*(_QWORD *)(v11 + 24) + 144LL) & 2) != 0 )
      {
        v5 = -1072103423;
        goto LABEL_59;
      }
    }
    v12 = v27;
    if ( CmpIsKeyDeletedForKeyBody(a1, v27) )
    {
LABEL_53:
      v5 = (*(_BYTE *)(a1 + 48) & 1) != 0 ? -1073740763 : -1073741444;
      goto LABEL_54;
    }
    if ( v12 && (unsigned int)(a2 - 2) > 2 )
    {
      UnitOfWork = CmpAllocateUnitOfWork();
      v6 = (__int64)UnitOfWork;
      if ( !UnitOfWork )
      {
        v5 = -1073741670;
LABEL_59:
        CmpUnlockKcb(v11);
        CmpUnlockRegistry();
        ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
        KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
        return (unsigned int)v5;
      }
      CmpTransEnlistUowInKcb(UnitOfWork, v11);
      v5 = CmpTransEnlistUowInCmTrans((_QWORD *)v6, v12);
      if ( v5 >= 0 )
      {
        if ( CmpLockIXLockIntent((unsigned int *)(v11 + 240), v6) && CmpLockIXLockExclusive(v11 + 256, v6, 1) )
        {
          *(_DWORD *)(v6 + 68) = 7;
          *(_DWORD *)(v6 + 88) = a3;
          v5 = CmAddLogForAction(v6, v18);
LABEL_54:
          if ( v5 >= 0 )
            goto LABEL_59;
        }
        else
        {
          v5 = -1072103423;
        }
      }
      if ( v6 )
      {
        CmpRundownUnitOfWork((_QWORD *)v6);
        ExFreePoolWithTag((PVOID)v6, 0x77554D43u);
      }
      goto LABEL_59;
    }
    v13 = v11 + 240;
    if ( *(int *)(v11 + 240) >= 0 )
    {
      v13 = v11 + 256;
      if ( !*(_DWORD *)(v11 + 256) )
      {
        v19 = BugCheckParameter2;
        ExAcquireResourceSharedLite(*(PERESOURCE *)(BugCheckParameter2 + 2848), 1u);
        v20 = BugCheckParameter3;
        if ( !HvpMarkCellDirty(v19, (unsigned int)BugCheckParameter3, 0) )
        {
          v5 = -1073741443;
LABEL_51:
          ExReleaseResourceLite(*(PERESOURCE *)(v19 + 2848));
          goto LABEL_54;
        }
        v21 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(v19 + 8))(v19, v20, v29);
        v22 = v21;
        if ( !v21 )
        {
          v5 = -1073741670;
          goto LABEL_51;
        }
        CmpUpdateKeyNodeAccessBits(v19, v21, BugCheckParameter3);
        switch ( a2 )
        {
          case 2:
            *(_DWORD *)(v22 + 52) ^= (*(_DWORD *)(v22 + 52) ^ (a3 << 20)) & 0xF00000;
            *(_DWORD *)(v11 + 176) ^= (*(_DWORD *)(v11 + 176) ^ *(unsigned __int16 *)(v22 + 54)) & 0xF0;
            if ( (a3 & 2) != 0 )
            {
              *(_WORD *)(v22 + 2) &= ~0x80u;
              *(_WORD *)(v11 + 178) &= ~0x80u;
            }
            break;
          case 4:
            *(_BYTE *)(v22 + 55) = a3;
            *(_BYTE *)(v11 + 177) = a3;
            break;
          case 3:
            if ( (a3 & 4) != 0 )
            {
              v23 = 128;
            }
            else
            {
              if ( (a3 & 1) != 0 )
              {
                *(_WORD *)(v22 + 2) |= 0x300u;
                *(_WORD *)(v11 + 178) |= 0x300u;
              }
              else
              {
                *(_WORD *)(v22 + 2) &= ~0x100u;
                *(_WORD *)(v11 + 178) &= ~0x100u;
              }
              if ( (a3 & 2) == 0 )
                break;
              v23 = 512;
            }
            *(_WORD *)(v22 + 2) |= v23;
            *(_WORD *)(v11 + 178) |= v23;
            break;
          default:
            *(_DWORD *)(v22 + 52) ^= (*(_DWORD *)(v22 + 52) ^ (a3 << 16)) & 0xF0000;
            *(_DWORD *)(v11 + 176) ^= (*(_DWORD *)(v11 + 176) ^ HIWORD(*(_DWORD *)(v22 + 52))) & 0xF;
            break;
        }
        *(_QWORD *)(v22 + 4) = v10;
        (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(v19 + 16))(v19, v29);
        ++*(_QWORD *)(v11 + 296);
        *(_QWORD *)(v11 + 160) = v10;
        goto LABEL_51;
      }
    }
    v5 = CmpSnapshotTxOwnerArray(v13, &v24, &v28);
    if ( v5 < 0 )
      goto LABEL_59;
    v15 = v24;
    CmpLogTransactionAbortedWithChildName(v11, 0LL, 3u, v14, v24);
    CmpUnlockKcb(v11);
    CmpUnlockRegistry();
    v5 = CmpRollbackTransactionArray(v15, v28, v16, &v25);
    if ( v5 < 0 )
    {
      CmpLockRegistry();
      CmpLockKcbExclusive(v11);
      goto LABEL_59;
    }
  }
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return 3221225865LL;
}
