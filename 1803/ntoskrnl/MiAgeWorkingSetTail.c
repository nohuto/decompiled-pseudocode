/*
 * XREFs of MiAgeWorkingSetTail @ 0x14000EAF0
 * Callers:
 *     MiAgePte @ 0x140012B60 (MiAgePte.c)
 * Callees:
 *     MiFreeWsleList @ 0x1400278B0 (MiFreeWsleList.c)
 *     KeFlushTb @ 0x1400349E0 (KeFlushTb.c)
 *     KiIpiSendRequest @ 0x1400362B0 (KiIpiSendRequest.c)
 *     KiAffinityContainsProcessorsOtherThanSelf @ 0x140037D50 (KiAffinityContainsProcessorsOtherThanSelf.c)
 *     KiIpiWaitForRequestBarrier @ 0x140038E00 (KiIpiWaitForRequestBarrier.c)
 *     KeFlushCurrentTbOnly @ 0x1400ADB50 (KeFlushCurrentTbOnly.c)
 *     KiFlushRangeWorker @ 0x140117140 (KiFlushRangeWorker.c)
 *     HvlFlushRangeListTb @ 0x140159D7C (HvlFlushRangeListTb.c)
 *     KiPrepareFlushParameters @ 0x14015A520 (KiPrepareFlushParameters.c)
 *     KiFlushAffinity @ 0x14015A5C0 (KiFlushAffinity.c)
 *     KiFlushRangeTb @ 0x1401621F0 (KiFlushRangeTb.c)
 *     KeFlushMultipleRangeCurrentTb @ 0x1401685E4 (KeFlushMultipleRangeCurrentTb.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     MiProcessVmAccessedInfo @ 0x140259DCC (MiProcessVmAccessedInfo.c)
 *     MiQueryEPTAccessedState @ 0x140259E90 (MiQueryEPTAccessedState.c)
 *     VmFlushTb @ 0x1402AB308 (VmFlushTb.c)
 *     ExFlushTb @ 0x1402BB738 (ExFlushTb.c)
 */

__int64 __fastcall MiAgeWorkingSetTail(__int64 a1)
{
  __int64 v1; // rbx
  unsigned int v3; // ecx
  int v4; // r12d
  __int64 v5; // r15
  int *v6; // rsi
  __int64 v7; // r14
  _DWORD *v8; // rdx
  __int64 v10; // rdx
  unsigned __int64 v11; // r8
  unsigned int v12; // r9d
  _KPROCESS *Process; // rcx
  bool v14; // zf
  _QWORD *v15; // r13
  char v16; // di
  unsigned __int8 v17; // r13
  char v18; // cl
  unsigned int v19; // edi
  struct _KPRCB *v20; // r13
  int v21; // r10d
  unsigned __int16 v22; // dx
  _KPROCESS *v23; // r8
  unsigned __int16 Count; // r9
  __int64 v25; // rax
  _WORD *v26; // r11
  unsigned int v27; // r8d
  __int64 v28; // rcx
  unsigned __int16 v29; // cx
  __int64 v30; // rdx
  unsigned int v31; // r13d
  __int64 CurrentIrql; // rdi
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned __int64 v34; // rax
  int v35; // eax
  char v36; // al
  __int64 v37; // rdx
  unsigned int v38; // edi
  __int64 v39; // r15
  unsigned __int8 v40; // di
  signed __int32 v41[8]; // [rsp+0h] [rbp-158h] BYREF
  char v42; // [rsp+40h] [rbp-118h]
  char v43[3]; // [rsp+41h] [rbp-117h] BYREF
  unsigned int v44; // [rsp+44h] [rbp-114h]
  unsigned int v45; // [rsp+48h] [rbp-110h]
  __int64 v46; // [rsp+50h] [rbp-108h]
  int *v47; // [rsp+58h] [rbp-100h] BYREF
  int v48; // [rsp+60h] [rbp-F8h]
  unsigned int v49; // [rsp+64h] [rbp-F4h]
  __int64 v50; // [rsp+68h] [rbp-F0h] BYREF
  _WORD v51[2]; // [rsp+70h] [rbp-E8h] BYREF
  int v52; // [rsp+74h] [rbp-E4h]
  _QWORD v53[21]; // [rsp+78h] [rbp-E0h]

  v1 = *(_QWORD *)(a1 + 168);
  v3 = 0;
  v4 = 0;
  v5 = v1 + 64;
  while ( 1 )
  {
    v6 = *(int **)(v1 + 56);
    if ( !v6 )
      goto LABEL_4;
    v7 = (unsigned int)v6[3];
    if ( !(_DWORD)v7 )
      goto LABEL_4;
    v10 = *((unsigned __int8 *)v6 + 4);
    v11 = qword_1403CB708;
    if ( (v10 & 2) != 0 )
      goto LABEL_15;
    v12 = *v6;
    v44 = v12;
    if ( v12 == 1 )
    {
      Process = KeGetCurrentThread()->ApcState.Process;
      if ( Process[2].ActiveProcessors.Bitmap[16] || Process->SecureState.SecureHandle )
        v11 = -1LL;
      v3 = 0;
LABEL_15:
      v12 = *v6;
      v44 = v12;
      if ( v12 == 1 )
        goto LABEL_16;
    }
    v3 = 1;
    if ( (v10 & 8) != 0 )
      v3 = 2;
LABEL_16:
    v14 = *((_BYTE *)v6 + 5) == 0;
    v45 = v3;
    if ( v14 && *((_QWORD *)v6 + 2) <= v11 )
    {
      v15 = v6 + 6;
      if ( (v10 & 1) != 0 )
      {
        KeFlushMultipleRangeCurrentTb((unsigned int)v7, v6 + 6, v12);
LABEL_42:
        *((_BYTE *)v6 + 4) &= ~8u;
        v6[3] = 0;
        *((_QWORD *)v6 + 2) = 0LL;
        goto LABEL_4;
      }
      v42 = 0;
      if ( (HvlEnlightenments & 4) != 0 )
      {
        if ( (HvlEnlightenments & 2) != 0 )
        {
          v16 = 1;
        }
        else if ( (_DWORD)KeNumberProcessors_0 == 1 )
        {
          v16 = 0;
        }
        else if ( v3 )
        {
          v16 = 1;
        }
        else
        {
          _InterlockedOr(v41, 0);
          CurrentIrql = KeGetCurrentIrql();
          v46 = CurrentIrql;
          __writecr8(0xCuLL);
          CurrentPrcb = KeGetCurrentPrcb();
          if ( (unsigned int)KiAffinityContainsProcessorsOtherThanSelf(
                               CurrentPrcb,
                               &CurrentPrcb->CurrentThread->ApcState.Process->ActiveProcessors) )
          {
            v34 = (unsigned __int8)CurrentIrql;
            v16 = 1;
          }
          else
          {
            v42 = 0;
            v38 = v44;
            v39 = v7;
            do
            {
              KiFlushRangeTb(*v15++, v38);
              --v39;
            }
            while ( v39 );
            v16 = v42;
            v5 = v1 + 64;
            v15 = v6 + 6;
            v34 = (unsigned __int8)v46;
            v42 = 1;
          }
          v12 = v44;
          __writecr8(v34);
        }
      }
      else
      {
        v16 = 0;
      }
      if ( v12 == 1 && *v15 <= 0x7FFFFFFEFFFFuLL && KeGetCurrentThread()->ApcState.Process->SecureState.SecureHandle )
      {
        v17 = 1;
      }
      else
      {
        v17 = 0;
        if ( !v16 )
        {
          v18 = v42;
          goto LABEL_26;
        }
      }
      KiPrepareFlushParameters(v12, &v50, v43);
      v35 = KiFlushAffinity(v45);
      v36 = HvlFlushRangeListTb(v50, v35, (unsigned __int8)v43[0], v17, v16, v7, (__int64)(v6 + 6));
      v12 = v44;
      v18 = v36 | v42;
LABEL_26:
      if ( v18 )
      {
LABEL_38:
        v31 = v44;
        if ( VmTbFlushEnabled )
          VmFlushTb((unsigned int)v7, v6 + 6, v44);
        if ( ExTbFlushActive )
        {
          v40 = KeGetCurrentIrql();
          __writecr8(0xFuLL);
          ExFlushTb((unsigned int)v7, v6 + 6, v31);
          __writecr8(v40);
        }
        goto LABEL_42;
      }
      v48 = v7;
      v47 = v6 + 6;
      v49 = v12;
      v46 = KeGetCurrentIrql();
      __writecr8(0xCuLL);
      v19 = v45;
      v20 = KeGetCurrentPrcb();
      if ( v45 )
      {
        v21 = 1;
        LODWORD(v26) = 0;
        if ( (unsigned int)KeNumberProcessors_0 > 1 )
        {
LABEL_58:
          v37 = 2147483652LL;
          if ( v19 != 1 )
            v37 = 4LL;
          KiIpiSendRequest((_DWORD)v20, v21, (_DWORD)v26, (unsigned int)&v47, v7, v37);
          KiFlushRangeWorker(&v47);
          KiIpiWaitForRequestBarrier(v20);
          goto LABEL_37;
        }
      }
      else
      {
        _InterlockedOr(v41, 0);
        v21 = 0;
        v22 = 0;
        v23 = v20->CurrentThread->ApcState.Process;
        Count = v23->ActiveProcessors.Count;
        v51[0] = Count;
        v51[1] = v23->ActiveProcessors.Size;
        v52 = 0;
        if ( v23->ActiveProcessors.Count )
        {
          do
          {
            v25 = v22++;
            v53[v25] = v23->ActiveProcessors.Bitmap[v25];
          }
          while ( v22 < v23->ActiveProcessors.Count );
          Count = v51[0];
        }
        v26 = v51;
        v27 = KiProcessorIndexToNumberMappingTable[v20->Number];
        v28 = v27 >> 6;
        if ( Count > (unsigned int)v28 )
        {
          v53[v28] &= ~(1LL << (v27 & 0x3F));
          Count = v51[0];
        }
        v29 = 0;
        if ( Count )
        {
          do
          {
            v30 = v53[v29];
            if ( v30 )
            {
              if ( v29 != v20->Group || v30 != v20->GroupSetMember )
                goto LABEL_58;
            }
          }
          while ( ++v29 < v51[0] );
        }
      }
      KiFlushRangeWorker(&v47);
LABEL_37:
      __writecr8((unsigned __int8)v46);
      goto LABEL_38;
    }
    if ( (v10 & 1) != 0 )
      KeFlushCurrentTbOnly(v12, v10);
    else
      KeFlushTb(v12, v3);
    *((_BYTE *)v6 + 5) = 0;
    *((_BYTE *)v6 + 4) &= ~8u;
    v6[3] = 0;
    *((_QWORD *)v6 + 2) = 0LL;
LABEL_4:
    if ( *(_DWORD *)(v5 + 12) )
      MiFreeWsleList(*(_QWORD *)(a1 + 24), v5, 0LL);
    v8 = *(_DWORD **)(v1 + 248);
    if ( !v8 || !*v8 || !(unsigned int)MiQueryEPTAccessedState(a1, v8, (*(_DWORD *)v1 & 3) != 0) )
      break;
    MiProcessVmAccessedInfo(*(_QWORD *)(a1 + 24), *(_QWORD *)(v1 + 248), MiAgeWorkingSetEPTCallback, v1);
    v3 = 0;
    v4 = 1;
  }
  if ( *(_BYTE *)(a1 + 5) || v4 )
    *(_BYTE *)(v1 + 6) = 1;
  return 0LL;
}
