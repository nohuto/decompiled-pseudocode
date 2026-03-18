/*
 * XREFs of ?HandlePromotionCandidates@VIDMM_GLOBAL@@QEAAXPEA_N@Z @ 0x1C0066F30
 * Callers:
 *     ?Run@VIDMM_WORKER_THREAD@@QEAAXXZ @ 0x1C0077550 (-Run@VIDMM_WORKER_THREAD@@QEAAXXZ.c)
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0001820 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     VidSchIsDeviceBusy @ 0x1C001383C (VidSchIsDeviceBusy.c)
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0013B00 (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     McTemplateK0q @ 0x1C0016F44 (McTemplateK0q.c)
 *     ?IsPenaltyBoxEmpty@VIDMM_GLOBAL@@QEAA_NW4VIDMM_PENALTY_BOX_BAND@@@Z @ 0x1C0020290 (-IsPenaltyBoxEmpty@VIDMM_GLOBAL@@QEAA_NW4VIDMM_PENALTY_BOX_BAND@@@Z.c)
 *     ?SetTimeout@VIDMM_WORKER_THREAD@@QEAAX_JW4VIDMM_WORKER_THREAD_WAKE_REASON@@@Z @ 0x1C0058020 (-SetTimeout@VIDMM_WORKER_THREAD@@QEAAX_JW4VIDMM_WORKER_THREAD_WAKE_REASON@@@Z.c)
 *     ?SuspendAccessToAllocation@VIDMM_WORKER_THREAD@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0079148 (-SuspendAccessToAllocation@VIDMM_WORKER_THREAD@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?GetMostPreferredSegment@VIDMM_GLOBAL@@IEAAPEAVVIDMM_SEGMENT@@KU_D3DDDI_SEGMENTPREFERENCE@@PEA_N@Z @ 0x1C0098F2C (-GetMostPreferredSegment@VIDMM_GLOBAL@@IEAAPEAVVIDMM_SEGMENT@@KU_D3DDDI_SEGMENTPREFERENCE@@PEA_N.c)
 *     ?GetLargestGap@VIDMM_SEGMENT@@QEAA_KPEAU_VIDMM_GLOBAL_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@E@Z @ 0x1C00AA4F0 (-GetLargestGap@VIDMM_SEGMENT@@QEAA_KPEAU_VIDMM_GLOBAL_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@E@Z.c)
 */

void __fastcall VIDMM_GLOBAL::HandlePromotionCandidates(VIDMM_GLOBAL *this, bool *a2)
{
  __int64 v4; // rcx
  __int64 v5; // r8
  unsigned int v6; // r8d
  unsigned int v7; // edx
  int v8; // r9d
  __int64 v9; // rbx
  ULONG TimeIncrement; // eax
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rax
  unsigned int v16; // r13d
  __int64 v17; // rcx
  _QWORD *v18; // r8
  _QWORD *v19; // r12
  _QWORD *v20; // rbx
  __int64 v21; // rax
  _QWORD *v22; // rcx
  unsigned int v23; // r9d
  __int64 v24; // rcx
  __int64 v25; // r10
  __int64 v26; // r11
  _QWORD *v27; // rcx
  _QWORD *v28; // r15
  __int64 v29; // rax
  _QWORD *v30; // r8
  __int64 v31; // rcx
  _QWORD *v32; // r14
  _QWORD *v33; // rbp
  __int64 v34; // r10
  __int64 *v35; // rax
  struct _VIDMM_GLOBAL_ALLOC ***v36; // rdx
  __int64 v37; // rsi
  unsigned int v38; // r9d
  __int64 v39; // r11
  struct VIDMM_SEGMENT *MostPreferredSegment; // rax
  __int64 v41; // r9
  unsigned __int64 LargestGap; // rax
  __int64 v43; // rax
  struct _VIDMM_GLOBAL_ALLOC **v44; // rdx
  VIDMM_WORKER_THREAD *v45; // rcx
  __int64 v46; // [rsp+20h] [rbp-A8h]
  int v47; // [rsp+28h] [rbp-A0h]
  __int64 v48; // [rsp+30h] [rbp-98h]
  _QWORD *v49; // [rsp+38h] [rbp-90h]
  struct _VIDMM_GLOBAL_ALLOC ***v50; // [rsp+40h] [rbp-88h]
  __int64 v51; // [rsp+48h] [rbp-80h]
  __int64 v52; // [rsp+50h] [rbp-78h]
  __int64 v53; // [rsp+58h] [rbp-70h]
  char v54[8]; // [rsp+60h] [rbp-68h] BYREF
  char *v55; // [rsp+68h] [rbp-60h]
  int v56; // [rsp+70h] [rbp-58h]
  _BYTE v57[24]; // [rsp+78h] [rbp-50h] BYREF
  char v58; // [rsp+D0h] [rbp+8h]
  bool v59; // [rsp+E0h] [rbp+18h] BYREF
  unsigned int v60; // [rsp+E8h] [rbp+20h]

  if ( (*((_DWORD *)this + 1616) & 0x2000) != 0 )
  {
    *a2 = 0;
    return;
  }
  if ( *((_DWORD *)this + 10344) )
  {
    *a2 = 1;
    return;
  }
  if ( *((_BYTE *)this + 41384) )
  {
    if ( !VIDMM_GLOBAL::IsPenaltyBoxEmpty((__int64)this, 1) )
    {
      *a2 = 1;
      return;
    }
    v9 = MEMORY[0xFFFFF78000000320];
    TimeIncrement = KeQueryTimeIncrement();
    *((_BYTE *)this + 41384) = 0;
    *((_QWORD *)this + 5170) = v9 * TimeIncrement;
  }
  v55 = (char *)this + 40968;
  if ( this != (VIDMM_GLOBAL *)-40968LL && *((struct _KTHREAD **)this + 5122) == KeGetCurrentThread() )
  {
    v11 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v11 + 24) = 1214LL;
    WdLogEvent5_WdAssertion(v11);
  }
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx((char *)this + 40968, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v8 = *((_DWORD *)this + 10246);
      if ( v8 != -1 && ((unsigned __int8)Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q(v4, (__int64)&EventBlockThread, v5, v8);
    }
    ExAcquirePushLockSharedEx((char *)this + 40968, 0LL);
  }
  v6 = *((_DWORD *)this + 1604);
  v56 = 1;
  v7 = 0;
  if ( !v6 )
  {
LABEL_11:
    *((_DWORD *)this + 10345) = 0;
    *a2 = 0;
    ExReleasePushLockSharedEx((char *)this + 40968, 0LL);
    KeLeaveCriticalRegion();
    return;
  }
  while ( *(_QWORD *)(1552LL * v7 + *((_QWORD *)this + 5021) + 472LL) == 1552LL * v7 + *((_QWORD *)this + 5021) + 472LL )
  {
    if ( ++v7 >= v6 )
      goto LABEL_11;
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v54);
  v12 = *((_QWORD *)this + 5170);
  v13 = *((_QWORD *)this + 5171);
  v14 = *((_QWORD *)this + 576) - v12;
  *a2 = 1;
  if ( v14 < v13 )
  {
    VIDMM_WORKER_THREAD::SetTimeout(*(_QWORD *)this, v14 - v13, 7);
    return;
  }
  if ( !v12 || *((_DWORD *)this + 10345) )
  {
    *((_DWORD *)this + 10345) = 0;
    *((_QWORD *)this + 5171) = qword_1C00403E0;
  }
  else
  {
    v15 = 2 * v13;
    *((_QWORD *)this + 5171) = v15;
    if ( v15 > qword_1C00403E8 )
      *((_QWORD *)this + 5171) = qword_1C00403E8;
  }
  v60 = 0;
  v48 = 0LL;
  DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED((DXGAUTOPUSHLOCKSHARED *)v57, (struct _KTHREAD **)this + 5121);
  v16 = 0;
  if ( *((_DWORD *)this + 1604) )
  {
    do
    {
      v17 = *((_QWORD *)this + 5021) + 1552LL * v16;
      if ( *(char *)(v17 + 437) < 0 )
      {
        v18 = (_QWORD *)(v17 + 472);
        v19 = *(_QWORD **)(v17 + 472);
        v53 = v17 + 472;
        if ( v19 != (_QWORD *)(v17 + 472) )
        {
          do
          {
            v20 = v19;
            v19 = (_QWORD *)*v19;
            if ( v20[36] || v20[35] )
            {
              v58 = 1;
            }
            else
            {
              v58 = 0;
              if ( !v20[32] && !v20[33] && !v20[34] || v20[25] >= v20[3] )
              {
                v21 = *v20;
                if ( *(_QWORD **)(*v20 + 8LL) != v20 || (v22 = (_QWORD *)v20[1], (_QWORD *)*v22 != v20) )
                  __fastfail(3u);
                *v22 = v21;
                *(_QWORD *)(v21 + 8) = v22;
                *v20 = 0LL;
                v20[1] = 0LL;
                continue;
              }
            }
            v23 = 0;
            v47 = 0;
            if ( *((_DWORD *)this + 926) )
            {
              v46 = 0LL;
              do
              {
                v24 = *(_QWORD *)(*((_QWORD *)this + 464) + 8LL * v23);
                if ( *(_DWORD *)(v24 + 380) == v16 && (*(_DWORD *)(v24 + 80) & 0x1001) != 0 )
                {
                  v25 = v20[2];
                  v26 = 184LL * v23;
                  v51 = v25;
                  v27 = (_QWORD *)(v26 + *(_QWORD *)(v25 + 16) + 40LL);
                  v52 = v26;
                  v28 = (_QWORD *)*v27;
                  if ( (_QWORD *)*v27 != v27 )
                  {
                    while ( 1 )
                    {
                      v29 = v28[4];
                      v30 = v28 - 2;
                      v28 = (_QWORD *)*v28;
                      v49 = v30;
                      v31 = *(_QWORD *)(v29 + 32);
                      if ( v31
                        && (*(_BYTE *)(v29 + 52) & 7u) < 3
                        && (*(_QWORD *)(v31 + 152) >= *((_QWORD *)this + 5170) || VidSchIsDeviceBusy(v31)) )
                      {
                        v32 = (_QWORD *)v30[4];
                        v33 = v30 + 4;
                        if ( v32 != v30 + 4 )
                        {
                          v34 = v46;
                          while ( 1 )
                          {
                            v35 = (__int64 *)*(v32 - 7);
                            v36 = (struct _VIDMM_GLOBAL_ALLOC ***)(v32 - 7);
                            v50 = (struct _VIDMM_GLOBAL_ALLOC ***)(v32 - 7);
                            v37 = *v35;
                            do
                              v32 = (_QWORD *)*v32;
                            while ( v32 != v33 && (__int64 *)*(v32 - 7) == v35 );
                            if ( (*(_DWORD *)(v37 + 76) & 0x400) != 0
                              || *(_WORD *)(*(_QWORD *)(v37 + 504) + 4LL)
                              || *(int *)(v37 + 164) > 0 )
                            {
                              goto LABEL_81;
                            }
                            if ( v58 )
                              break;
                            if ( (unsigned __int64)(v34 + *(_QWORD *)(v37 + 16)) <= v20[3] - v20[25] )
                            {
                              v36 = v50;
                              goto LABEL_64;
                            }
LABEL_81:
                            if ( v32 == v33 )
                            {
                              v25 = v51;
                              v26 = v52;
                              goto LABEL_83;
                            }
                          }
                          if ( *(_DWORD *)(v37 + 376) < 0xA0000000 )
                            goto LABEL_81;
LABEL_64:
                          if ( (*(_DWORD *)(v37 + 80) & 0x4000) != 0 && *(_DWORD *)(v37 + 344) )
                            goto LABEL_81;
                          v38 = v60;
                          v39 = v48;
                          if ( v60
                            && (v48 + *(_QWORD *)(v37 + 16) > (unsigned __int64)qword_1C00403F0 || v60 > dword_1C00403F8) )
                          {
                            goto LABEL_92;
                          }
                          if ( (*(_DWORD *)(*((_QWORD *)this + 3) + 300LL) & 0x200) == 0
                            || *(_DWORD *)(v37 + 376) >= 0xA0000000 )
                          {
                            goto LABEL_77;
                          }
                          MostPreferredSegment = VIDMM_GLOBAL::GetMostPreferredSegment(
                                                   this,
                                                   *(_DWORD *)(v37 + 76) & 0x3F,
                                                   *(struct _D3DDDI_SEGMENTPREFERENCE *)(v37 + 72),
                                                   &v59);
                          if ( !MostPreferredSegment )
                          {
                            v30 = v49;
                            v34 = v46;
                            goto LABEL_76;
                          }
                          if ( *((_QWORD *)MostPreferredSegment + 26) - *((_QWORD *)MostPreferredSegment + 27) >= (unsigned __int64)(3LL * *(_QWORD *)(v37 + 16)) )
                          {
                            LOBYTE(v41) = 1;
                            LargestGap = VIDMM_SEGMENT::GetLargestGap(MostPreferredSegment, v37, 0LL, v41);
                            v30 = v49;
                            v34 = v46;
                            if ( LargestGap < *(_QWORD *)(v37 + 16) )
                              goto LABEL_81;
LABEL_76:
                            v39 = v48;
                            v38 = v60;
                            v36 = v50;
LABEL_77:
                            if ( (*(_BYTE *)(v30[6] + 50LL) & 4) == 0 )
                            {
                              ++*((_DWORD *)this + 10344);
                              *(_BYTE *)(v30[6] + 50LL) |= 4u;
                            }
                            v43 = *(_QWORD *)(v37 + 16);
                            v44 = *v36;
                            v45 = *(VIDMM_WORKER_THREAD **)this;
                            v60 = v38 + 1;
                            v48 = v43 + v39;
                            v46 = v43 + v34;
                            VIDMM_WORKER_THREAD::SuspendAccessToAllocation(v45, *v44);
                            *((_DWORD *)**v50 + 19) |= 0x1000000u;
                          }
                          v34 = v46;
                          v30 = v49;
                          goto LABEL_81;
                        }
LABEL_83:
                        if ( !*v28 )
                          v28 = *(_QWORD **)(v26 + *(_QWORD *)(v25 + 16) + 40);
                      }
                      if ( v28 == (_QWORD *)(v26 + *(_QWORD *)(v25 + 16) + 40LL) )
                      {
                        v23 = v47;
                        break;
                      }
                    }
                  }
                }
                v47 = ++v23;
              }
              while ( v23 < *((_DWORD *)this + 926) );
              v18 = (_QWORD *)v53;
            }
          }
          while ( v19 != v18 );
        }
      }
      ++v16;
    }
    while ( v16 < *((_DWORD *)this + 1604) );
    if ( v60 )
LABEL_92:
      *((_BYTE *)this + 41384) = 1;
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v57);
}
