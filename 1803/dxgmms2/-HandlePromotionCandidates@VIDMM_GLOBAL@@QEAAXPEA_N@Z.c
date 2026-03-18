/*
 * XREFs of ?HandlePromotionCandidates@VIDMM_GLOBAL@@QEAAXPEA_N@Z @ 0x1C006B830
 * Callers:
 *     ?Run@VIDMM_WORKER_THREAD@@QEAAXXZ @ 0x1C007F920 (-Run@VIDMM_WORKER_THREAD@@QEAAXXZ.c)
 * Callees:
 *     VidSchIsDeviceBusy @ 0x1C000382C (VidSchIsDeviceBusy.c)
 *     ?IsPenaltyBoxEmpty@VIDMM_GLOBAL@@QEAA_NW4VIDMM_PENALTY_BOX_BAND@@@Z @ 0x1C00051D0 (-IsPenaltyBoxEmpty@VIDMM_GLOBAL@@QEAA_NW4VIDMM_PENALTY_BOX_BAND@@@Z.c)
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0005484 (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0005510 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C0016834 (McTemplateK0q.c)
 *     ?SetTimeout@VIDMM_WORKER_THREAD@@QEAAX_JW4VIDMM_WORKER_THREAD_WAKE_REASON@@@Z @ 0x1C005DBA8 (-SetTimeout@VIDMM_WORKER_THREAD@@QEAAX_JW4VIDMM_WORKER_THREAD_WAKE_REASON@@@Z.c)
 *     ?GetMostPreferredSegment@VIDMM_GLOBAL@@IEAAPEAVVIDMM_SEGMENT@@KU_D3DDDI_SEGMENTPREFERENCE@@PEA_N@Z @ 0x1C009DFD0 (-GetMostPreferredSegment@VIDMM_GLOBAL@@IEAAPEAVVIDMM_SEGMENT@@KU_D3DDDI_SEGMENTPREFERENCE@@PEA_N.c)
 *     ?SuspendAccessToAllocation@VIDMM_WORKER_THREAD@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00A82F8 (-SuspendAccessToAllocation@VIDMM_WORKER_THREAD@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?GetLargestGap@VIDMM_SEGMENT@@QEAA_KPEAU_VIDMM_GLOBAL_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@E@Z @ 0x1C00B2650 (-GetLargestGap@VIDMM_SEGMENT@@QEAA_KPEAU_VIDMM_GLOBAL_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@E@Z.c)
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
  _QWORD *v19; // rbp
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
  _QWORD *v33; // r12
  __int64 v34; // r10
  __int64 *v35; // rax
  struct _VIDMM_GLOBAL_ALLOC ***v36; // rdx
  __int64 v37; // rsi
  __int64 v38; // rax
  unsigned int v39; // r9d
  __int64 v40; // r11
  struct VIDMM_SEGMENT *MostPreferredSegment; // rax
  __int64 v42; // r9
  unsigned __int64 LargestGap; // rax
  __int64 v44; // rax
  struct _VIDMM_GLOBAL_ALLOC **v45; // rdx
  VIDMM_WORKER_THREAD *v46; // rcx
  __int64 v47; // [rsp+20h] [rbp-A8h]
  int v48; // [rsp+28h] [rbp-A0h]
  __int64 v49; // [rsp+30h] [rbp-98h]
  _QWORD *v50; // [rsp+38h] [rbp-90h]
  struct _VIDMM_GLOBAL_ALLOC ***v51; // [rsp+40h] [rbp-88h]
  __int64 v52; // [rsp+48h] [rbp-80h]
  __int64 v53; // [rsp+50h] [rbp-78h]
  __int64 v54; // [rsp+58h] [rbp-70h]
  char v55[8]; // [rsp+60h] [rbp-68h] BYREF
  char *v56; // [rsp+68h] [rbp-60h]
  int v57; // [rsp+70h] [rbp-58h]
  _BYTE v58[24]; // [rsp+78h] [rbp-50h] BYREF
  char v59; // [rsp+D0h] [rbp+8h]
  bool v60; // [rsp+E0h] [rbp+18h] BYREF
  unsigned int v61; // [rsp+E8h] [rbp+20h]

  if ( (*((_DWORD *)this + 1760) & 0x2000) != 0 )
  {
    *a2 = 0;
    return;
  }
  if ( *((_DWORD *)this + 10488) )
  {
    *a2 = 1;
    return;
  }
  if ( *((_BYTE *)this + 41960) )
  {
    if ( !(unsigned __int8)VIDMM_GLOBAL::IsPenaltyBoxEmpty((__int64)this) )
    {
      *a2 = 1;
      return;
    }
    v9 = MEMORY[0xFFFFF78000000320];
    TimeIncrement = KeQueryTimeIncrement();
    *((_BYTE *)this + 41960) = 0;
    *((_QWORD *)this + 5242) = v9 * TimeIncrement;
  }
  v56 = (char *)this + 41544;
  if ( this != (VIDMM_GLOBAL *)-41544LL && *((struct _KTHREAD **)this + 5194) == KeGetCurrentThread() )
  {
    v11 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v11 + 24) = 1306LL;
    WdLogEvent5_WdAssertion(v11);
  }
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx((char *)this + 41544, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v8 = *((_DWORD *)this + 10390);
      if ( v8 != -1 && ((unsigned __int8)Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q(v4, (__int64)&EventBlockThread, v5, v8);
    }
    ExAcquirePushLockSharedEx((char *)this + 41544, 0LL);
  }
  v6 = *((_DWORD *)this + 1748);
  v57 = 1;
  v7 = 0;
  if ( !v6 )
  {
LABEL_11:
    *((_DWORD *)this + 10489) = 0;
    *a2 = 0;
    ExReleasePushLockSharedEx((char *)this + 41544, 0LL);
    KeLeaveCriticalRegion();
    return;
  }
  while ( *(_QWORD *)(1560LL * v7 + *((_QWORD *)this + 5090) + 480LL) == 1560LL * v7 + *((_QWORD *)this + 5090) + 480LL )
  {
    if ( ++v7 >= v6 )
      goto LABEL_11;
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v55);
  v12 = *((_QWORD *)this + 5242);
  v13 = *((_QWORD *)this + 5243);
  v14 = *((_QWORD *)this + 576) - v12;
  *a2 = 1;
  if ( v14 < v13 )
  {
    VIDMM_WORKER_THREAD::SetTimeout(*(_QWORD *)this, v14 - v13, 7);
    return;
  }
  if ( !v12 || *((_DWORD *)this + 10489) )
  {
    *((_DWORD *)this + 10489) = 0;
    *((_QWORD *)this + 5243) = qword_1C00473E0;
  }
  else
  {
    v15 = 2 * v13;
    *((_QWORD *)this + 5243) = v15;
    if ( v15 > qword_1C00473E8 )
      *((_QWORD *)this + 5243) = qword_1C00473E8;
  }
  v61 = 0;
  v49 = 0LL;
  DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED((DXGAUTOPUSHLOCKSHARED *)v58, (VIDMM_GLOBAL *)((char *)this + 41544));
  v16 = 0;
  if ( *((_DWORD *)this + 1748) )
  {
    do
    {
      v17 = *((_QWORD *)this + 5090) + 1560LL * v16;
      if ( *(char *)(v17 + 437) < 0 )
      {
        v18 = (_QWORD *)(v17 + 480);
        v19 = *(_QWORD **)(v17 + 480);
        v54 = v17 + 480;
        if ( v19 != (_QWORD *)(v17 + 480) )
        {
          do
          {
            v20 = v19;
            v19 = (_QWORD *)*v19;
            if ( v20[36] || v20[35] )
            {
              v59 = 1;
            }
            else
            {
              v59 = 0;
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
            v48 = 0;
            if ( *((_DWORD *)this + 926) )
            {
              v47 = 0LL;
              do
              {
                v24 = *(_QWORD *)(*((_QWORD *)this + 464) + 8LL * v23);
                if ( *(_DWORD *)(v24 + 380) == v16 && (*(_DWORD *)(v24 + 80) & 0x1001) != 0 )
                {
                  v25 = v20[2];
                  v26 = 184LL * v23;
                  v52 = v25;
                  v27 = (_QWORD *)(v26 + *(_QWORD *)(v25 + 16) + 40LL);
                  v53 = v26;
                  v28 = (_QWORD *)*v27;
                  if ( (_QWORD *)*v27 != v27 )
                  {
                    while ( 1 )
                    {
                      v29 = v28[4];
                      v30 = v28 - 2;
                      v28 = (_QWORD *)*v28;
                      v50 = v30;
                      v31 = *(_QWORD *)(v29 + 32);
                      if ( v31
                        && (*(_BYTE *)(v29 + 52) & 7u) < 3
                        && (*(_QWORD *)(v31 + 176) >= *((_QWORD *)this + 5242) || VidSchIsDeviceBusy(v31)) )
                      {
                        v32 = (_QWORD *)v30[4];
                        v33 = v30 + 4;
                        if ( v32 != v30 + 4 )
                        {
                          v34 = v47;
                          while ( 1 )
                          {
                            v35 = (__int64 *)*(v32 - 7);
                            v36 = (struct _VIDMM_GLOBAL_ALLOC ***)(v32 - 7);
                            v51 = (struct _VIDMM_GLOBAL_ALLOC ***)(v32 - 7);
                            v37 = *v35;
                            do
                              v32 = (_QWORD *)*v32;
                            while ( v32 != v33 && (__int64 *)*(v32 - 7) == v35 );
                            if ( (*(_DWORD *)(v37 + 76) & 0x400) != 0 )
                              goto LABEL_81;
                            v38 = *(_QWORD *)(v37 + 504);
                            if ( *(_WORD *)(v38 + 4) || *(int *)(v38 + 12) > 0 )
                              goto LABEL_81;
                            if ( v59 )
                              break;
                            if ( (unsigned __int64)(v34 + *(_QWORD *)(v37 + 16)) <= v20[3] - v20[25] )
                            {
                              v36 = v51;
                              goto LABEL_64;
                            }
LABEL_81:
                            if ( v32 == v33 )
                            {
                              v25 = v52;
                              v26 = v53;
                              goto LABEL_83;
                            }
                          }
                          if ( *(_DWORD *)(v37 + 376) < 0xA0000000 )
                            goto LABEL_81;
LABEL_64:
                          if ( (*(_DWORD *)(v37 + 80) & 0x8000) != 0 && *(_DWORD *)(v37 + 344) )
                            goto LABEL_81;
                          v39 = v61;
                          v40 = v49;
                          if ( v61
                            && (v49 + *(_QWORD *)(v37 + 16) > (unsigned __int64)qword_1C00473F0 || v61 > dword_1C00473F8) )
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
                                                   &v60);
                          if ( !MostPreferredSegment )
                          {
                            v30 = v50;
                            v34 = v47;
                            goto LABEL_76;
                          }
                          if ( *((_QWORD *)MostPreferredSegment + 26) - *((_QWORD *)MostPreferredSegment + 27) >= (unsigned __int64)(3LL * *(_QWORD *)(v37 + 16)) )
                          {
                            LOBYTE(v42) = 1;
                            LargestGap = VIDMM_SEGMENT::GetLargestGap(MostPreferredSegment, v37, 0LL, v42);
                            v30 = v50;
                            v34 = v47;
                            if ( LargestGap < *(_QWORD *)(v37 + 16) )
                              goto LABEL_81;
LABEL_76:
                            v40 = v49;
                            v39 = v61;
                            v36 = v51;
LABEL_77:
                            if ( (*(_BYTE *)(v30[6] + 50LL) & 4) == 0 )
                            {
                              ++*((_DWORD *)this + 10488);
                              *(_BYTE *)(v30[6] + 50LL) |= 4u;
                            }
                            v44 = *(_QWORD *)(v37 + 16);
                            v45 = *v36;
                            v46 = *(VIDMM_WORKER_THREAD **)this;
                            v61 = v39 + 1;
                            v49 = v44 + v40;
                            v47 = v44 + v34;
                            VIDMM_WORKER_THREAD::SuspendAccessToAllocation(v46, *v45);
                            *((_DWORD *)**v51 + 19) |= 0x1000000u;
                          }
                          v34 = v47;
                          v30 = v50;
                          goto LABEL_81;
                        }
LABEL_83:
                        if ( !*v28 )
                          v28 = *(_QWORD **)(v26 + *(_QWORD *)(v25 + 16) + 40);
                      }
                      if ( v28 == (_QWORD *)(v26 + *(_QWORD *)(v25 + 16) + 40LL) )
                      {
                        v23 = v48;
                        break;
                      }
                    }
                  }
                }
                v48 = ++v23;
              }
              while ( v23 < *((_DWORD *)this + 926) );
              v18 = (_QWORD *)v54;
            }
          }
          while ( v19 != v18 );
        }
      }
      ++v16;
    }
    while ( v16 < *((_DWORD *)this + 1748) );
    if ( v61 )
LABEL_92:
      *((_BYTE *)this + 41960) = 1;
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v58);
}
