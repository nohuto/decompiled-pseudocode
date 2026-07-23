/*
 * XREFs of MiDeleteVaTail @ 0x14000DF50
 * Callers:
 *     <none>
 * Callees:
 *     MiDeletePteRun @ 0x14002A950 (MiDeletePteRun.c)
 *     KeFlushTb @ 0x1400349E0 (KeFlushTb.c)
 *     KiIpiSendRequest @ 0x1400362B0 (KiIpiSendRequest.c)
 *     KiAffinityContainsProcessorsOtherThanSelf @ 0x140037D50 (KiAffinityContainsProcessorsOtherThanSelf.c)
 *     KiIpiWaitForRequestBarrier @ 0x140038E00 (KiIpiWaitForRequestBarrier.c)
 *     MiDecayPfnFullyInitialized @ 0x14004DA54 (MiDecayPfnFullyInitialized.c)
 *     KeFlushCurrentTbOnly @ 0x1400ADB50 (KeFlushCurrentTbOnly.c)
 *     KiFlushRangeWorker @ 0x140117140 (KiFlushRangeWorker.c)
 *     HvlFlushRangeListTb @ 0x140159D7C (HvlFlushRangeListTb.c)
 *     KiPrepareFlushParameters @ 0x14015A520 (KiPrepareFlushParameters.c)
 *     KiFlushAffinity @ 0x14015A5C0 (KiFlushAffinity.c)
 *     KiFlushRangeTb @ 0x1401621F0 (KiFlushRangeTb.c)
 *     KeFlushMultipleRangeCurrentTb @ 0x1401685E4 (KeFlushMultipleRangeCurrentTb.c)
 *     MiReplicatePteChange @ 0x14016B45C (MiReplicatePteChange.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     VmFlushTb @ 0x1402AB308 (VmFlushTb.c)
 *     ExFlushTb @ 0x1402BB738 (ExFlushTb.c)
 */

__int64 __fastcall MiDeleteVaTail(_QWORD *a1)
{
  unsigned __int64 *v1; // rsi
  unsigned int v2; // r13d
  int *v4; // rdi
  __int64 v5; // r14
  unsigned __int64 v6; // rbx
  _SLIST_ENTRY *v7; // rcx
  __int64 v9; // rcx
  __int64 v10; // rdi
  char v11; // cl
  unsigned __int64 v12; // rdx
  unsigned int v13; // eax
  _KPROCESS *Process; // rax
  unsigned __int64 SecureHandle; // rax
  _QWORD *v16; // r12
  char v17; // bl
  char v18; // r15
  unsigned int v19; // r9d
  unsigned __int8 v20; // r12
  unsigned int v21; // r9d
  unsigned __int8 v22; // r15
  struct _KPRCB *v23; // rbx
  unsigned __int16 v24; // dx
  _KPROCESS *v25; // r8
  unsigned __int16 Count; // cx
  __int64 v27; // rax
  _WORD *v28; // r11
  unsigned int v29; // r8d
  int v30; // r10d
  unsigned __int16 v31; // ax
  __int64 v32; // rdx
  unsigned int v33; // r15d
  __int64 CurrentIrql; // r15
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned int v36; // r15d
  _QWORD *v37; // rbx
  __int64 v38; // r12
  int v39; // eax
  char v40; // al
  unsigned __int64 v41; // rax
  __int64 v42; // rcx
  unsigned __int8 v43; // bl
  signed __int32 v44[8]; // [rsp+0h] [rbp-158h] BYREF
  char v45[4]; // [rsp+40h] [rbp-118h] BYREF
  unsigned int v46; // [rsp+44h] [rbp-114h]
  int *v47; // [rsp+48h] [rbp-110h] BYREF
  int v48; // [rsp+50h] [rbp-108h]
  unsigned int v49; // [rsp+54h] [rbp-104h]
  __int64 v50; // [rsp+58h] [rbp-100h]
  __int64 v51; // [rsp+60h] [rbp-F8h] BYREF
  _WORD v52[2]; // [rsp+70h] [rbp-E8h] BYREF
  int v53; // [rsp+74h] [rbp-E4h]
  _QWORD v54[21]; // [rsp+78h] [rbp-E0h]

  v1 = (unsigned __int64 *)a1[21];
  v2 = 0;
  v4 = (int *)a1[2];
  v5 = (unsigned int)v4[3];
  if ( (_DWORD)v5 )
  {
    v11 = *((_BYTE *)v4 + 4);
    v12 = qword_1403CB708;
    if ( (v11 & 2) == 0 )
    {
      v13 = *v4;
      v46 = v13;
      if ( v13 != 1 )
        goto LABEL_61;
      Process = KeGetCurrentThread()->ApcState.Process;
      if ( Process[2].ActiveProcessors.Bitmap[16] )
        goto LABEL_69;
      SecureHandle = Process->SecureState.SecureHandle;
      if ( SecureHandle )
        LOBYTE(SecureHandle) = 1;
      if ( (_BYTE)SecureHandle )
LABEL_69:
        v12 = -1LL;
    }
    v13 = *v4;
    v46 = v13;
    if ( v13 == 1 )
    {
LABEL_18:
      if ( *((_BYTE *)v4 + 5) || *((_QWORD *)v4 + 2) > v12 )
      {
        if ( (v11 & 1) != 0 )
          KeFlushCurrentTbOnly(v13, v12);
        else
          KeFlushTb(v13, v2);
        *((_BYTE *)v4 + 5) = 0;
      }
      else
      {
        v16 = v4 + 6;
        if ( (v11 & 1) == 0 )
        {
          v17 = 0;
          if ( (HvlEnlightenments & 4) != 0 )
          {
            if ( (HvlEnlightenments & 2) != 0 )
            {
              v18 = 1;
            }
            else if ( (_DWORD)KeNumberProcessors_0 == 1 )
            {
              v18 = 0;
            }
            else if ( v2 )
            {
              v18 = 1;
            }
            else
            {
              _InterlockedOr(v44, 0);
              CurrentIrql = KeGetCurrentIrql();
              v50 = CurrentIrql;
              __writecr8(0xCuLL);
              CurrentPrcb = KeGetCurrentPrcb();
              if ( (unsigned int)KiAffinityContainsProcessorsOtherThanSelf(
                                   CurrentPrcb,
                                   &CurrentPrcb->CurrentThread->ApcState.Process->ActiveProcessors) )
              {
                v41 = (unsigned __int8)CurrentIrql;
                v18 = 1;
                __writecr8(v41);
              }
              else
              {
                v36 = v46;
                v37 = v4 + 6;
                v38 = v5;
                do
                {
                  KiFlushRangeTb(*v37++, v36);
                  --v38;
                }
                while ( v38 );
                v18 = 0;
                v16 = v4 + 6;
                v17 = 1;
                __writecr8((unsigned __int8)v50);
              }
            }
          }
          else
          {
            v18 = 0;
          }
          v19 = v46;
          if ( v46 == 1 && *v16 <= 0x7FFFFFFEFFFFuLL && KeGetCurrentThread()->ApcState.Process->SecureState.SecureHandle )
          {
            v20 = 1;
          }
          else
          {
            v20 = 0;
            if ( !v18 )
              goto LABEL_27;
          }
          KiPrepareFlushParameters(v46, &v51, v45);
          v39 = KiFlushAffinity(v2);
          v40 = HvlFlushRangeListTb(v51, v39, (unsigned __int8)v45[0], v20, v18, v5, (__int64)(v4 + 6));
          v19 = v46;
          v17 |= v40;
LABEL_27:
          if ( v17 )
          {
LABEL_41:
            v33 = v46;
            if ( VmTbFlushEnabled )
              VmFlushTb((unsigned int)v5, v4 + 6, v46);
            if ( ExTbFlushActive )
            {
              v43 = KeGetCurrentIrql();
              __writecr8(0xFuLL);
              ExFlushTb((unsigned int)v5, v4 + 6, v33);
              __writecr8(v43);
            }
            goto LABEL_45;
          }
          v49 = v19;
          v21 = 4;
          v47 = v4 + 6;
          v48 = v5;
          if ( v2 == 1 )
            v21 = -2147483644;
          v22 = KeGetCurrentIrql();
          __writecr8(0xCuLL);
          v23 = KeGetCurrentPrcb();
          if ( v2 )
          {
            v30 = 1;
            LODWORD(v28) = 0;
            if ( (unsigned int)KeNumberProcessors_0 > 1 )
            {
LABEL_51:
              KiIpiSendRequest((_DWORD)v23, v30, (_DWORD)v28, (unsigned int)&v47, v5, v21);
              KiFlushRangeWorker(&v47);
              KiIpiWaitForRequestBarrier(v23);
              goto LABEL_40;
            }
          }
          else
          {
            _InterlockedOr(v44, 0);
            v24 = 0;
            v25 = v23->CurrentThread->ApcState.Process;
            Count = v25->ActiveProcessors.Count;
            v52[0] = Count;
            v52[1] = v25->ActiveProcessors.Size;
            v53 = 0;
            if ( v25->ActiveProcessors.Count )
            {
              do
              {
                v27 = v24++;
                v54[v27] = v25->ActiveProcessors.Bitmap[v27];
              }
              while ( v24 < v25->ActiveProcessors.Count );
              Count = v52[0];
            }
            v28 = v52;
            v29 = KiProcessorIndexToNumberMappingTable[v23->Number];
            if ( Count > v29 >> 6 )
            {
              v54[v29 >> 6] &= ~(1LL << (v29 & 0x3F));
              Count = v52[0];
            }
            v30 = 0;
            v31 = 0;
            if ( Count )
            {
              do
              {
                v32 = v54[v31];
                if ( v32 )
                {
                  if ( v31 != v23->Group || v32 != v23->GroupSetMember )
                    goto LABEL_51;
                }
              }
              while ( ++v31 < v52[0] );
            }
          }
          KiFlushRangeWorker(&v47);
LABEL_40:
          __writecr8(v22);
          goto LABEL_41;
        }
        KeFlushMultipleRangeCurrentTb((unsigned int)v5, v4 + 6, v13);
      }
LABEL_45:
      *((_BYTE *)v4 + 4) &= ~8u;
      v4[3] = 0;
      *((_QWORD *)v4 + 2) = 0LL;
      goto LABEL_2;
    }
LABEL_61:
    LOBYTE(v2) = (v11 & 8) != 0;
    ++v2;
    goto LABEL_18;
  }
LABEL_2:
  v6 = *v1;
  if ( *v1 )
  {
    v9 = a1[3];
    if ( (*(_BYTE *)(v9 + 184) & 7) != 0 && v6 >= 0xFFFFF6FB7DBED000uLL && v6 <= 0xFFFFF6FB7DBEDFFFuLL )
    {
      v10 = v1[1];
      v42 = 3LL;
      do
      {
        v6 = (__int64)(v6 << 25) >> 16;
        v10 = v10 << 25 >> 16;
        --v42;
      }
      while ( v42 );
      MiReplicatePteChange(v6, v10);
      v9 = a1[3];
    }
    else
    {
      v6 = 0LL;
      v10 = 0LL;
    }
    MiDeletePteRun(v9, v1);
    if ( v6 )
      MiReplicatePteChange(v6, v10);
    *v1 = 0LL;
  }
  v7 = (_SLIST_ENTRY *)v1[5];
  if ( v7 )
  {
    MiDecayPfnFullyInitialized(v7);
    v1[5] = 0LL;
  }
  return 0LL;
}
