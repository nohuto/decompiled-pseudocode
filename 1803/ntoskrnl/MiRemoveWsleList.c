/*
 * XREFs of MiRemoveWsleList @ 0x1400E1950
 * Callers:
 *     MmUnmapViewInSystemCache @ 0x140018AE0 (MmUnmapViewInSystemCache.c)
 *     MiFreeWsleList @ 0x1400278B0 (MiFreeWsleList.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400888A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KxAcquireQueuedSpinLock @ 0x1400E01A0 (KxAcquireQueuedSpinLock.c)
 *     ExpAcquireSpinLockExclusive @ 0x1400F3540 (ExpAcquireSpinLockExclusive.c)
 *     MiGetSystemRegionType @ 0x140104010 (MiGetSystemRegionType.c)
 *     MiLookupDataTableEntry @ 0x14013F6A8 (MiLookupDataTableEntry.c)
 *     MiWriteWsle @ 0x14013FAB0 (MiWriteWsle.c)
 *     KiPerformUnboostKick @ 0x140248638 (KiPerformUnboostKick.c)
 *     MiLogRemoveWsleEvent @ 0x1402537B0 (MiLogRemoveWsleEvent.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x1402BA6B0 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x1402BA844 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

__int64 __fastcall MiRemoveWsleList(__int64 a1, __int64 a2, char *a3, unsigned __int64 a4)
{
  char v4; // al
  int *v7; // rcx
  __int64 result; // rax
  __int64 v10; // rdx
  unsigned __int64 v12; // r8
  __int64 v13; // r13
  int v14; // r9d
  int v15; // ebp
  unsigned __int64 v16; // r11
  __int64 v17; // r15
  unsigned __int64 v18; // r10
  _BYTE *v19; // rbx
  unsigned __int64 v20; // rsi
  int v21; // edi
  unsigned __int64 v22; // r8
  char *v23; // r14
  __int64 v24; // r15
  unsigned __int64 v25; // rdi
  LONG *v26; // rcx
  unsigned __int64 v27; // r8
  unsigned __int64 v28; // rbx
  char *v29; // rsi
  unsigned __int64 v30; // r9
  __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // r15
  int *v34; // rcx
  char v35; // r9
  unsigned __int8 v36; // r9
  unsigned __int64 v37; // rdx
  unsigned __int64 v38; // r8
  unsigned __int64 *v39; // rdx
  unsigned __int64 v40; // rcx
  unsigned __int64 v41; // r10
  unsigned __int64 v42; // rax
  __int64 v43; // rbp
  __int64 v44; // r13
  __int64 *v45; // r15
  LONG *v46; // rcx
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *SchedulerAssist; // rdx
  unsigned __int64 *v49; // rbx
  unsigned __int64 v50; // rbp
  __int64 v51; // rcx
  unsigned __int64 v52; // r8
  __int64 v53; // rax
  __int64 v54; // rax
  __int64 **v55; // rcx
  __int64 v56; // rbp
  __int64 **v57; // rax
  unsigned __int64 v58; // rax
  __int64 v59; // rax
  __int64 v60; // rdx
  unsigned __int64 v61; // rdx
  __int64 v62; // rax
  __int64 v63; // rdx
  int v64; // eax
  int *v65; // [rsp+20h] [rbp-98h]
  unsigned __int64 v66; // [rsp+28h] [rbp-90h]
  int v67; // [rsp+30h] [rbp-88h]
  __int64 v68; // [rsp+38h] [rbp-80h]
  __int64 v69; // [rsp+40h] [rbp-78h]
  __int64 v70; // [rsp+48h] [rbp-70h]
  __int64 v71; // [rsp+50h] [rbp-68h]
  __int64 v72; // [rsp+50h] [rbp-68h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+58h] [rbp-60h] BYREF
  void *retaddr; // [rsp+B8h] [rbp+0h]
  unsigned __int64 v75; // [rsp+C0h] [rbp+8h] BYREF
  __int64 v76; // [rsp+C8h] [rbp+10h]
  char *v77; // [rsp+D0h] [rbp+18h]
  unsigned __int64 v78; // [rsp+D8h] [rbp+20h]

  v78 = a4;
  v77 = a3;
  v76 = a2;
  v4 = *(_BYTE *)(a1 + 184) & 7;
  v66 = 0LL;
  v68 = 0LL;
  LODWORD(v75) = 0;
  v7 = &dword_1403CCDC0;
  if ( v4 != 2 )
    v7 = 0LL;
  v65 = v7;
  result = 0LL;
  v70 = 0LL;
  v10 = 0LL;
  v69 = 0LL;
  v12 = 0LL;
  v13 = 0LL;
  v14 = 0;
  v15 = 0;
  if ( !a4 )
    return result;
  v16 = 0xFFFFF6FFFFFFFFFFuLL;
  v17 = a2 - (_QWORD)a3;
  v18 = 0xFFFFF68000000000uLL;
  v19 = a3 + 1;
  v71 = v17;
  v20 = a4;
  v21 = 0;
  do
  {
    if ( (*v19 & 1) == 0 )
      goto LABEL_11;
    v66 = v12 + 1;
    v22 = *(_QWORD *)&v19[v17 + 23];
    if ( v22 < v18 || v22 > v16 )
    {
      v15 = 2;
      v70 = ((v22 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
    }
    else
    {
      v15 = 1;
    }
    if ( (*v19 & 2) != 0 )
    {
      ++v13;
      if ( v22 < v18 || v22 > v16 )
        v69 = ++v10;
    }
    if ( (*(_BYTE *)(a1 + 184) & 7) != 4 )
      goto LABEL_10;
    if ( PsNtosImageBase
      && (v22 < PsNtosImageEnd && v22 >= (unsigned __int64)PsNtosImageBase
       || v22 < PsHalImageEnd && v22 >= (unsigned __int64)PsHalImageBase) )
    {
      LODWORD(v75) = ++v14;
LABEL_10:
      v12 = v66;
      goto LABEL_11;
    }
    if ( (unsigned int)MiGetSystemRegionType(v22) != 12 )
      goto LABEL_10;
    v53 = MiLookupDataTableEntry((__int64)(((v18 + ((v52 >> 9) & 0x7FFFFFFFF8LL)) << 25) - (v18 << 25)) >> 16, 2LL);
    v10 = v69;
    v14 = v75;
    v12 = v66;
    v18 = 0xFFFFF68000000000uLL;
    v16 = 0xFFFFF6FFFFFFFFFFuLL;
    if ( v53 )
      ++v21;
LABEL_11:
    v19 += 8;
    --v20;
  }
  while ( v20 );
  v23 = v77;
  v24 = 0LL;
  v67 = v21;
  v25 = v78;
  if ( !v15 )
    return v70;
  v26 = &dword_1403CCD68;
  if ( (*(_BYTE *)(a1 + 184) & 7) != 2 )
    v26 = (LONG *)(a1 + 232);
  LOBYTE(v10) = -1;
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v26, v10);
  else
    ExpAcquireSpinLockExclusive(v26, v10);
  if ( v13 )
  {
    *(_QWORD *)(a1 + 144) -= v13;
    if ( v69 )
      *(_QWORD *)(a1 + 128) -= v69;
  }
  if ( (_DWORD)v75 )
    LODWORD(xmmword_1403CB5A0) = xmmword_1403CB5A0 - v75;
  if ( v67 )
    DWORD1(xmmword_1403CB5A0) -= v67;
  v27 = v66;
  v28 = 0LL;
  *(_QWORD *)(a1 + 136) -= v66;
  v29 = &v23[-v76];
  v30 = v15;
  v31 = v71 + 24;
  v72 = v71 + 24;
  v78 = v15;
  while ( 2 )
  {
    v32 = v24;
    if ( (v23[v31 - 23 + (_QWORD)v29] & 1) == 0 )
      goto LABEL_43;
    v27 = *(_QWORD *)&v23[v31];
    if ( v30 == 1 )
    {
      if ( (*(_BYTE *)(a1 + 184) & 7) == 0 )
      {
        v35 = *v23;
        goto LABEL_31;
      }
LABEL_43:
      v34 = v65;
    }
    else
    {
      --*(_QWORD *)(a1 + 120);
      v33 = v24 + 1;
      v34 = v65;
      v35 = *v23;
      if ( !v65 )
        v33 = v32;
      v68 = v33;
      if ( (*v23 & 0xF) != 8 )
      {
        v68 = v33;
LABEL_31:
        v36 = v35 & 0xF;
        if ( v27 < 0xFFFFF68000000000uLL || v27 > 0xFFFFF6FFFFFFFFFFuLL )
        {
          v37 = ((v27 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
          v38 = *(_QWORD *)v37;
          if ( v37 >= 0xFFFFF6FB7DBED000uLL
            && v37 <= 0xFFFFF6FB7DBED7F8uLL
            && (MiFlags & 0x1800000) != 0
            && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
            && (v38 & 1) != 0
            && ((v38 & 0x20) == 0 || (v38 & 0x42) == 0) )
          {
            v58 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
            if ( v58 )
            {
              v59 = *(_QWORD *)(v58 + 8 * ((v37 >> 3) & 0x1FF));
              v60 = v38 | 0x20;
              if ( (v59 & 0x20) == 0 )
                v60 = v38;
              v38 = v60;
              if ( (v59 & 0x42) != 0 )
                v38 = v60 | 0x42;
            }
          }
          v75 = v38;
          if ( (unsigned __int64)&v75 >= 0xFFFFF6FB7DBED000uLL
            && (unsigned __int64)&v75 <= 0xFFFFF6FB7DBED7F8uLL
            && (MiFlags & 0x1800000) != 0
            && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
            && (v38 & 1) != 0
            && ((v38 & 0x20) == 0 || (v38 & 0x42) == 0) )
          {
            v61 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
            if ( v61 )
            {
              v62 = *(_QWORD *)(v61 + 8 * (((unsigned __int64)&v75 >> 3) & 0x1FF));
              v63 = v38 | 0x20;
              if ( (v62 & 0x20) == 0 )
                v63 = v38;
              v38 = v63;
              if ( (v62 & 0x42) != 0 )
                v38 = v63 | 0x42;
            }
          }
          v27 = (v38 >> 12) & 0xFFFFFFFFFLL;
          v39 = (unsigned __int64 *)(48 * v27 - 0x58000000000LL);
          v40 = *v39;
          v41 = *v39 >> 4;
          if ( (v41 & 0x3FF) != 0 )
          {
            v27 = v36;
            v42 = (v40 >> 14) & 7;
            if ( v36 == v42 )
            {
              *v39 = v40 ^ ((unsigned __int16)v40 ^ (unsigned __int16)(16 * (v41 - 1))) & 0x3FF0;
            }
            else if ( v36 > v42 )
            {
              v27 = v40 ^ ((unsigned int)v40 ^ (v36 << 14)) & 0x1C000 | 0x3FF0;
              *v39 = v27;
            }
          }
        }
        --*(_QWORD *)(a1 + 8LL * v36 + 40);
        if ( v36 == 7 )
        {
          v43 = *(_QWORD *)(qword_1403CBD88 + 8LL * *(unsigned __int16 *)(a1 + 174));
          v44 = *(_QWORD *)(v43 + 6768);
          if ( *(_QWORD *)(a1 + 96) < *(_QWORD *)(v44 + 64) )
          {
            v45 = (__int64 *)(a1 + 24);
            if ( *(_QWORD *)(a1 + 24) )
            {
              if ( *(__int64 **)(v43 + 6784) != v45 )
              {
                LockHandle.LockQueue.Next = 0LL;
                LockHandle.LockQueue.Lock = &qword_1403CC4C0;
                KxAcquireQueuedSpinLock((__int64)&LockHandle, (volatile __int64 *)&qword_1403CC4C0);
                if ( *(_BYTE *)(v44 + 53) || (v54 = *v45) == 0 )
                {
                  *(_BYTE *)(v44 + 54) = 1;
                }
                else
                {
                  v55 = *(__int64 ***)(a1 + 32);
                  if ( *(__int64 **)(v54 + 8) != v45 || *v55 != v45 )
                    __fastfail(3u);
                  *v55 = (__int64 *)v54;
                  v56 = v43 + 6776;
                  *(_QWORD *)(v54 + 8) = v55;
                  v57 = *(__int64 ***)(v56 + 8);
                  if ( *v57 != (__int64 *)v56 )
                    __fastfail(3u);
                  *v45 = v56;
                  *(_QWORD *)(a1 + 32) = v57;
                  *v57 = v45;
                  *(_QWORD *)(v56 + 8) = v45;
                }
                KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
              }
            }
          }
        }
        v30 = v78;
        goto LABEL_43;
      }
      v30 = v78;
    }
    ++v28;
    v23 += 8;
    if ( v28 < v25 )
    {
      v24 = v68;
      v31 = v72;
      continue;
    }
    break;
  }
  if ( v34 )
  {
    *((_QWORD *)v34 + 1) -= v66;
    if ( v68 )
      *((_QWORD *)v34 + 2) -= v68;
  }
  v46 = &dword_1403CCD68;
  if ( (*(_BYTE *)(a1 + 184) & 7) != 2 )
    v46 = (LONG *)(a1 + 232);
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v46, retaddr);
    v30 = v78;
  }
  else
  {
    *v46 = 0;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  SchedulerAssist = CurrentPrcb->SchedulerAssist;
  if ( SchedulerAssist )
  {
    if ( CurrentPrcb->NestingLevel <= 1u )
    {
      v64 = SchedulerAssist[5] - 1;
      SchedulerAssist[5] = v64;
      if ( !v64 )
      {
        v27 = *((unsigned __int8 *)SchedulerAssist + 27);
        if ( !*((_BYTE *)SchedulerAssist + 25) && !(_BYTE)v27 )
        {
          KiPerformUnboostKick(CurrentPrcb);
          v30 = v78;
        }
      }
    }
  }
  v49 = (unsigned __int64 *)(v76 + 24);
  do
  {
    if ( (v29[(_QWORD)v49 - 23] & 1) != 0 )
    {
      v50 = *v49;
      if ( v30 == 2 )
      {
        v51 = *(unsigned __int8 *)(((v50 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
        if ( (v51 & 1) != 0 )
        {
          LOBYTE(v27) = 10;
          MiWriteWsle(v51, *v49, v27);
          v30 = v78;
        }
      }
      if ( (DWORD1(PerfGlobalGroupMask) & 0x8000000) != 0 )
      {
        MiLogRemoveWsleEvent(v50, *(_BYTE *)(a1 + 184) & 7, v27);
        v30 = v78;
      }
    }
    ++v49;
    --v25;
  }
  while ( v25 );
  return v70;
}
