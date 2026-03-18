/*
 * XREFs of ?HandlePromotionCandidates@VIDMM_GLOBAL@@QEAAXPEA_N@Z @ 0x1C00638F0
 * Callers:
 *     ?Run@VIDMM_WORKER_THREAD@@QEAAXXZ @ 0x1C0071420 (-Run@VIDMM_WORKER_THREAD@@QEAAXXZ.c)
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0001B5C (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0002144 (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     VidSchIsDeviceBusy @ 0x1C001273C (VidSchIsDeviceBusy.c)
 *     Template_q @ 0x1C0014A58 (Template_q.c)
 *     ?IsPenaltyBoxEmpty@VIDMM_GLOBAL@@QEAA_NW4VIDMM_PENALTY_BOX_BAND@@@Z @ 0x1C001E470 (-IsPenaltyBoxEmpty@VIDMM_GLOBAL@@QEAA_NW4VIDMM_PENALTY_BOX_BAND@@@Z.c)
 *     ?SetTimeout@VIDMM_WORKER_THREAD@@QEAAX_JW4VIDMM_WORKER_THREAD_WAKE_REASON@@@Z @ 0x1C00555A0 (-SetTimeout@VIDMM_WORKER_THREAD@@QEAAX_JW4VIDMM_WORKER_THREAD_WAKE_REASON@@@Z.c)
 *     ?SuspendAccessToAllocation@VIDMM_WORKER_THREAD@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C006DC14 (-SuspendAccessToAllocation@VIDMM_WORKER_THREAD@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?GetMostPreferredSegment@VIDMM_GLOBAL@@IEAAPEAVVIDMM_SEGMENT@@KU_D3DDDI_SEGMENTPREFERENCE@@PEA_N@Z @ 0x1C0091830 (-GetMostPreferredSegment@VIDMM_GLOBAL@@IEAAPEAVVIDMM_SEGMENT@@KU_D3DDDI_SEGMENTPREFERENCE@@PEA_N.c)
 *     ?GetLargestGap@VIDMM_SEGMENT@@QEAA_KPEAU_VIDMM_GLOBAL_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@E@Z @ 0x1C00A1C3C (-GetLargestGap@VIDMM_SEGMENT@@QEAA_KPEAU_VIDMM_GLOBAL_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@E@Z.c)
 */

void __fastcall VIDMM_GLOBAL::HandlePromotionCandidates(VIDMM_GLOBAL *this, bool *a2)
{
  __int64 v4; // rcx
  __int64 v5; // r8
  unsigned int v6; // r8d
  unsigned int v7; // edx
  __int64 v8; // rbx
  ULONG TimeIncrement; // eax
  __int64 v10; // rax
  int v11; // r9d
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rax
  unsigned int v16; // r8d
  __int64 v17; // r15
  _QWORD *v18; // r12
  _QWORD *v19; // rbx
  __int64 v20; // rcx
  _QWORD *v21; // rax
  unsigned int v22; // r9d
  __int64 v23; // rcx
  __int64 v24; // r10
  __int64 v25; // r11
  _QWORD *v26; // rcx
  _QWORD *v27; // rbp
  __int64 v28; // rax
  _QWORD *v29; // r8
  __int64 v30; // rcx
  _QWORD *v31; // r14
  _QWORD *v32; // r13
  __int64 *v33; // rax
  struct _VIDMM_GLOBAL_ALLOC ***v34; // rdx
  __int64 v35; // rsi
  unsigned int v36; // r9d
  __int64 v37; // r10
  struct VIDMM_SEGMENT *MostPreferredSegment; // rax
  __int64 v39; // r9
  unsigned __int64 LargestGap; // rax
  __int64 v41; // rax
  struct _VIDMM_GLOBAL_ALLOC **v42; // rdx
  VIDMM_WORKER_THREAD *v43; // rcx
  int v44; // [rsp+20h] [rbp-A8h]
  int v45; // [rsp+24h] [rbp-A4h]
  __int64 v46; // [rsp+28h] [rbp-A0h]
  _QWORD *v47; // [rsp+30h] [rbp-98h]
  __int64 v48; // [rsp+38h] [rbp-90h]
  struct _VIDMM_GLOBAL_ALLOC ***v49; // [rsp+40h] [rbp-88h]
  __int64 v50; // [rsp+48h] [rbp-80h]
  __int64 v51; // [rsp+50h] [rbp-78h]
  char v52[8]; // [rsp+58h] [rbp-70h] BYREF
  char *v53; // [rsp+60h] [rbp-68h]
  int v54; // [rsp+68h] [rbp-60h]
  _BYTE v55[32]; // [rsp+70h] [rbp-58h] BYREF
  char v56; // [rsp+D0h] [rbp+8h]
  bool v57; // [rsp+E0h] [rbp+18h] BYREF
  unsigned int v58; // [rsp+E8h] [rbp+20h]

  if ( (*((_DWORD *)this + 1616) & 0x2000) != 0 )
  {
    *a2 = 0;
    return;
  }
  if ( *((_DWORD *)this + 10418) )
  {
    *a2 = 1;
    return;
  }
  if ( *((_BYTE *)this + 41680) )
  {
    if ( !VIDMM_GLOBAL::IsPenaltyBoxEmpty((__int64)this, 1) )
    {
      *a2 = 1;
      return;
    }
    v8 = MEMORY[0xFFFFF78000000320];
    TimeIncrement = KeQueryTimeIncrement();
    *((_BYTE *)this + 41680) = 0;
    *((_QWORD *)this + 5207) = v8 * TimeIncrement;
  }
  v53 = (char *)this + 40968;
  if ( this != (VIDMM_GLOBAL *)-40968LL && *((struct _KTHREAD **)this + 5122) == KeGetCurrentThread() )
  {
    v10 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v10 + 24) = 1167LL;
    WdLogEvent5_WdAssertion(v10);
  }
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx((char *)this + 40968, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v11 = *((_DWORD *)this + 10246);
      if ( v11 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        Template_q(v4, &EventBlockThread, v5, v11);
    }
    ExAcquirePushLockSharedEx((char *)this + 40968, 0LL);
  }
  v6 = *((_DWORD *)this + 1604);
  v54 = 1;
  v7 = 0;
  if ( !v6 )
  {
LABEL_11:
    *((_DWORD *)this + 10419) = 0;
    *a2 = 0;
    ExReleasePushLockSharedEx((char *)this + 40968, 0LL);
    KeLeaveCriticalRegion();
    return;
  }
  while ( *(_QWORD *)(*((_QWORD *)this + 5150) + 280LL * v7) == *((_QWORD *)this + 5150) + 280LL * v7 )
  {
    if ( ++v7 >= v6 )
      goto LABEL_11;
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v52);
  v12 = *((_QWORD *)this + 5207);
  v13 = *((_QWORD *)this + 5208);
  v14 = *((_QWORD *)this + 576) - v12;
  *a2 = 1;
  if ( v14 < v13 )
  {
    VIDMM_WORKER_THREAD::SetTimeout(*(_QWORD *)this, v14 - v13, 7);
    return;
  }
  if ( !v12 || *((_DWORD *)this + 10419) )
  {
    *((_DWORD *)this + 10419) = 0;
    *((_QWORD *)this + 5208) = qword_1C003C3A8;
  }
  else
  {
    v15 = 2 * v13;
    *((_QWORD *)this + 5208) = v15;
    if ( v15 > qword_1C003C3B0 )
      *((_QWORD *)this + 5208) = qword_1C003C3B0;
  }
  v58 = 0;
  v46 = 0LL;
  DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED((DXGAUTOPUSHLOCKSHARED *)v55, (struct _KTHREAD **)this + 5121);
  v16 = 0;
  v45 = 0;
  if ( *((_DWORD *)this + 1604) )
  {
LABEL_30:
    v17 = *((_QWORD *)this + 5150) + 280LL * v16;
    if ( !*(_BYTE *)(v17 + 275) )
      goto LABEL_85;
    v18 = *(_QWORD **)v17;
    if ( *(_QWORD *)v17 == v17 )
      goto LABEL_85;
    while ( 1 )
    {
      v19 = v18;
      v18 = (_QWORD *)*v18;
      if ( v19[32] || v19[31] )
        break;
      v56 = 0;
      v48 = 0LL;
      if ( (v19[28] || v19[29] || v19[30]) && v19[25] < v19[3] )
        goto LABEL_42;
      v20 = *v19;
      v21 = (_QWORD *)v19[1];
      if ( *(_QWORD **)(*v19 + 8LL) != v19 || (_QWORD *)*v21 != v19 )
        __fastfail(3u);
      *v21 = v20;
      *(_QWORD *)(v20 + 8) = v21;
      *v19 = 0LL;
      v19[1] = 0LL;
LABEL_84:
      if ( v18 == (_QWORD *)v17 )
      {
LABEL_85:
        v45 = ++v16;
        if ( v16 >= *((_DWORD *)this + 1604) )
        {
          if ( v58 )
LABEL_87:
            *((_BYTE *)this + 41680) = 1;
          goto LABEL_88;
        }
        goto LABEL_30;
      }
    }
    v56 = 1;
    v48 = 0LL;
LABEL_42:
    v22 = 0;
    v44 = 0;
    if ( !*((_DWORD *)this + 926) )
      goto LABEL_84;
    while ( 1 )
    {
      v23 = *(_QWORD *)(*((_QWORD *)this + 464) + 8LL * v22);
      if ( *(_DWORD *)(v23 + 404) != v16 )
        goto LABEL_83;
      if ( (*(_DWORD *)(v23 + 80) & 0x1001) == 0 )
        goto LABEL_83;
      v24 = v19[2];
      v25 = 184LL * v22;
      v50 = v24;
      v26 = (_QWORD *)(v25 + *(_QWORD *)(v24 + 16) + 40LL);
      v51 = v25;
      v27 = (_QWORD *)*v26;
      if ( (_QWORD *)*v26 == v26 )
        goto LABEL_83;
      do
      {
        v28 = v27[4];
        v29 = v27 - 2;
        v27 = (_QWORD *)*v27;
        v47 = v29;
        v30 = *(_QWORD *)(v28 + 32);
        if ( v30
          && (*(_BYTE *)(v28 + 52) & 7u) < 3
          && (*(_QWORD *)(v30 + 152) >= *((_QWORD *)this + 5207) || VidSchIsDeviceBusy(v30)) )
        {
          v31 = (_QWORD *)v29[4];
          v32 = v29 + 4;
          if ( v31 != v29 + 4 )
          {
            while ( 1 )
            {
              v33 = (__int64 *)*(v31 - 7);
              v34 = (struct _VIDMM_GLOBAL_ALLOC ***)(v31 - 7);
              v49 = (struct _VIDMM_GLOBAL_ALLOC ***)(v31 - 7);
              v35 = *v33;
              do
                v31 = (_QWORD *)*v31;
              while ( v31 != v32 && (__int64 *)*(v31 - 7) == v33 );
              if ( (*(_DWORD *)(v35 + 76) & 0x400) != 0
                || *(_WORD *)(*(_QWORD *)(v35 + 520) + 4LL)
                || *(int *)(v35 + 164) > 0 )
              {
                goto LABEL_77;
              }
              if ( v56 )
                break;
              if ( (unsigned __int64)(*(_QWORD *)(v35 + 16) + v48) <= v19[3] - v19[25] )
              {
                v34 = v49;
                goto LABEL_62;
              }
LABEL_77:
              if ( v31 == v32 )
              {
                v24 = v50;
                v25 = v51;
                goto LABEL_79;
              }
            }
            if ( *(_DWORD *)(v35 + 408) < 0xA0000000 )
              goto LABEL_77;
LABEL_62:
            v36 = v58;
            v37 = v46;
            if ( v58 && (v46 + *(_QWORD *)(v35 + 16) > (unsigned __int64)qword_1C003C3B8 || v58 > dword_1C003C3C0) )
              goto LABEL_87;
            if ( (*(_DWORD *)(*((_QWORD *)this + 3) + 300LL) & 0x200) == 0 || *(_DWORD *)(v35 + 408) >= 0xA0000000 )
              goto LABEL_73;
            MostPreferredSegment = VIDMM_GLOBAL::GetMostPreferredSegment(
                                     this,
                                     *(_DWORD *)(v35 + 76) & 0x3F,
                                     *(struct _D3DDDI_SEGMENTPREFERENCE *)(v35 + 72),
                                     &v57);
            if ( !MostPreferredSegment )
            {
              v29 = v47;
              goto LABEL_72;
            }
            if ( *((_QWORD *)MostPreferredSegment + 29) - *((_QWORD *)MostPreferredSegment + 30) >= (unsigned __int64)(3LL * *(_QWORD *)(v35 + 16)) )
            {
              LOBYTE(v39) = 1;
              LargestGap = VIDMM_SEGMENT::GetLargestGap(MostPreferredSegment, v35, 0LL, v39);
              v29 = v47;
              if ( LargestGap < *(_QWORD *)(v35 + 16) )
                goto LABEL_77;
LABEL_72:
              v37 = v46;
              v36 = v58;
              v34 = v49;
LABEL_73:
              if ( (*(_BYTE *)(v29[6] + 50LL) & 4) == 0 )
              {
                ++*((_DWORD *)this + 10418);
                *(_BYTE *)(v29[6] + 50LL) |= 4u;
              }
              v41 = *(_QWORD *)(v35 + 16);
              v42 = *v34;
              v43 = *(VIDMM_WORKER_THREAD **)this;
              v48 += v41;
              v58 = v36 + 1;
              v46 = v41 + v37;
              VIDMM_WORKER_THREAD::SuspendAccessToAllocation(v43, *v42);
              *((_DWORD *)**v49 + 19) |= 0x1000000u;
            }
            v29 = v47;
            goto LABEL_77;
          }
LABEL_79:
          if ( !*v27 )
            v27 = *(_QWORD **)(v25 + *(_QWORD *)(v24 + 16) + 40);
        }
      }
      while ( v27 != (_QWORD *)(v25 + *(_QWORD *)(v24 + 16) + 40LL) );
      v16 = v45;
      v22 = v44;
LABEL_83:
      v44 = ++v22;
      if ( v22 >= *((_DWORD *)this + 926) )
        goto LABEL_84;
    }
  }
LABEL_88:
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v55);
}
