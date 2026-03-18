/*
 * XREFs of xxxMNSelectItem @ 0x1C02071C0
 * Callers:
 *     xxxMNButtonDown @ 0x1C02043DC (xxxMNButtonDown.c)
 *     xxxMNCancel @ 0x1C0204628 (xxxMNCancel.c)
 *     xxxMNChar @ 0x1C020497C (xxxMNChar.c)
 *     xxxMNKeyDown @ 0x1C020589C (xxxMNKeyDown.c)
 *     xxxMNMouseMove @ 0x1C020621C (xxxMNMouseMove.c)
 *     xxxMNSwitchToAlternateMenu @ 0x1C0207B78 (xxxMNSwitchToAlternateMenu.c)
 *     xxxMenuWindowProc @ 0x1C0207D70 (xxxMenuWindowProc.c)
 *     xxxMNKeyFilter @ 0x1C0219524 (xxxMNKeyFilter.c)
 * Callees:
 *     ??1?$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@XZ @ 0x1C004258C (--1-$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@XZ.c)
 *     ?Init@?$SmartObjStackRef@UtagPOPUPMENU@@@@QEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C00425E4 (-Init@-$SmartObjStackRef@UtagPOPUPMENU@@@@QEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     xxxWindowEvent @ 0x1C005A820 (xxxWindowEvent.c)
 *     safe_cast_fnid_to_PMENUWND @ 0x1C005D060 (safe_cast_fnid_to_PMENUWND.c)
 *     FindTimer @ 0x1C00B1F50 (FindTimer.c)
 *     ?xxxMNDoScroll@@YAHV?$SmartObjStackRef@UtagPOPUPMENU@@@@IH@Z @ 0x1C0203588 (-xxxMNDoScroll@@YAHV-$SmartObjStackRef@UtagPOPUPMENU@@@@IH@Z.c)
 *     MNSetTimerToCloseHierarchy @ 0x1C02040A4 (MNSetTimerToCloseHierarchy.c)
 *     xxxMNCloseHierarchy @ 0x1C0204D10 (xxxMNCloseHierarchy.c)
 *     MNAnimate @ 0x1C0215560 (MNAnimate.c)
 *     xxxMNInvertItem @ 0x1C0215C94 (xxxMNInvertItem.c)
 *     xxxSendMenuSelect @ 0x1C0219F28 (xxxSendMenuSelect.c)
 */

__int64 __fastcall xxxMNSelectItem(__int64 *a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // r14
  __int64 v4; // r15
  __int64 v5; // r8
  __int64 v7; // rcx
  __int64 v8; // rbx
  __int64 v9; // rax
  _DWORD *v10; // r8
  __int64 v11; // rbx
  __int64 v12; // r12
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r12
  _QWORD *v16; // r15
  __int64 v17; // rbx
  __int64 v18; // rbx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rcx
  __int64 v24; // rcx
  __int64 v25; // rbx
  __int64 v26; // r8
  __int64 v27; // rbx
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 *v32; // rdx
  unsigned int v33; // r8d
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // rdx
  __int64 v37; // rcx
  _QWORD *v38; // rcx
  __int64 v39; // rdx
  __int64 v40; // rax
  _QWORD *v41; // rax
  _QWORD **v42; // rcx
  _QWORD **v43; // rdx
  _QWORD *v44; // rax
  __int64 v45; // rax
  __int64 v46; // rcx
  _QWORD *v47; // rax
  _QWORD **v48; // rdx
  _QWORD **v49; // rcx
  _QWORD *v50; // rax
  __int64 v51; // rdx
  __int64 v52; // rdx
  __int64 v53; // rdx
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // rdx
  __int64 v59; // rcx
  __int64 v61; // [rsp+30h] [rbp-99h] BYREF
  _QWORD *v62; // [rsp+38h] [rbp-91h] BYREF
  _QWORD **v63; // [rsp+40h] [rbp-89h]
  int *v64[4]; // [rsp+50h] [rbp-79h] BYREF
  __int64 v65; // [rsp+70h] [rbp-59h] BYREF
  __int64 v66; // [rsp+78h] [rbp-51h]
  __int64 v67[4]; // [rsp+90h] [rbp-39h] BYREF
  __int64 v68; // [rsp+B0h] [rbp-19h] BYREF
  __int64 v69; // [rsp+B8h] [rbp-11h]
  __int64 v70; // [rsp+C8h] [rbp-1h] BYREF
  __int64 v71; // [rsp+D0h] [rbp+7h]
  _QWORD v72[8]; // [rsp+E0h] [rbp+17h] BYREF
  __int64 v73; // [rsp+130h] [rbp+67h]
  __int64 v75; // [rsp+148h] [rbp+7Fh]

  v3 = a3;
  v4 = a2;
  v5 = *a1;
  if ( *(_DWORD *)(*a1 + 80) != (_DWORD)v3 )
  {
    v9 = safe_cast_fnid_to_PMENUWND(*(_QWORD *)(v5 + 32));
    v11 = v9;
    if ( (*v10 & 0x1000) != 0 && !v9 )
      goto LABEL_78;
    MNAnimate(v4, 0LL);
    if ( (*(_DWORD *)*a1 & 0x2000) != 0 )
    {
      FindTimer(*(_QWORD *)(*a1 + 16), 65534LL, 0, 1, 0LL);
      *(_DWORD *)*a1 &= ~0x2000u;
    }
    v73 = *(_QWORD *)(*a1 + 40);
    v70 = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = &v70;
    v71 = v73;
    if ( v73 )
      ++*(_DWORD *)(v73 + 8);
    v12 = *(_QWORD *)(*a1 + 8);
    v68 = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = &v68;
    v69 = v12;
    v75 = v12;
    if ( v12 )
      ++*(_DWORD *)(v12 + 8);
    if ( (*(_DWORD *)*a1 & 0x1000) != 0 )
    {
      v13 = *(_QWORD *)(v11 + 8);
      if ( v13 )
      {
        SmartObjStackRef<tagPOPUPMENU>::Init(v67, v13);
        FindTimer(*(_QWORD *)(v67[0] + 16), 0xFFFFLL, 0, 1, 0LL);
        *(_DWORD *)v67[0] &= ~0x4000u;
        v14 = v67[0];
        if ( (*(_DWORD *)v67[0] & 0x2000) != 0 )
        {
          FindTimer(*(_QWORD *)(v67[0] + 16), 65534LL, 0, 1, 0LL);
          *(_DWORD *)v67[0] &= ~0x2000u;
          v14 = v67[0];
        }
        if ( *(_DWORD *)(v14 + 80) != *(_DWORD *)(v14 + 84) )
        {
          v15 = *(_QWORD *)(v14 + 40);
          v16 = *(_QWORD **)(v14 + 8);
          v65 = *(_QWORD *)(gptiCurrent + 368LL);
          *(_QWORD *)(gptiCurrent + 368LL) = &v65;
          v66 = v15;
          if ( v15 )
            ++*(_DWORD *)(v15 + 8);
          v61 = *(_QWORD *)(gptiCurrent + 368LL);
          *(_QWORD *)(gptiCurrent + 368LL) = &v61;
          v62 = v16;
          if ( v16 )
            ++*((_DWORD *)v16 + 2);
          v17 = v67[0];
          if ( *(_DWORD *)(v67[0] + 80) != -1 )
          {
            SmartObjStackRef<tagPOPUPMENU>::Init(v64, v67[0]);
            xxxMNInvertItem(v64, v15, *(unsigned int *)(v17 + 80), v16, 0);
            v17 = v67[0];
          }
          *(_DWORD *)(v17 + 80) = *(_DWORD *)(v17 + 84);
          v18 = v67[0];
          SmartObjStackRef<tagPOPUPMENU>::Init(v64, v67[0]);
          xxxMNInvertItem(v64, v15, *(unsigned int *)(v18 + 84), v16, 1);
          ThreadUnlock1(v20, v19);
          ThreadUnlock1(v22, v21);
          v4 = a2;
          v12 = v75;
        }
        *(_DWORD *)*a1 &= ~0x1000u;
        v23 = *a1;
        v65 = *(_QWORD *)(*a1 + 64) + 56LL;
        v66 = *(_QWORD *)(v23 + 16);
        HMAssignmentLock(&v65);
        SmartObjStackRef<tagPOPUPMENU>::~SmartObjStackRef<tagPOPUPMENU>(v67);
      }
    }
    v24 = *a1;
    if ( *(int *)(*a1 + 80) < 0 )
    {
      if ( (unsigned int)(*(_DWORD *)(v24 + 80) + 4) > 1 )
      {
        v27 = v73;
LABEL_35:
        *(_DWORD *)(*a1 + 80) = v3;
        if ( (_DWORD)v3 != -1 )
        {
          *(_DWORD *)(v4 + 8) &= 0xFFFFAFFF;
          if ( (*(_DWORD *)(v4 + 8) & 8) != 0 )
          {
            SmartObjStackRef<tagPOPUPMENU>::Init(v64, *a1);
            xxxMNDoScroll((__int64 *)v64, v3, 1);
          }
          SmartObjStackRef<tagPOPUPMENU>::Init(v64, *a1);
          v8 = xxxMNInvertItem(v64, v27, (unsigned int)v3, v12, 1);
          ThreadUnlock1(v29, v28);
          ThreadUnlock1(v31, v30);
          goto LABEL_79;
        }
        v32 = *(__int64 **)(*a1 + 16);
        if ( *(__int64 **)(*a1 + 8) == v32 )
          v33 = (*(_DWORD *)*a1 >> 1) | 0xFFFFFFFD;
        else
          v33 = -4;
        xxxWindowEvent(0x8005u, v32, v33, 0, 0);
        ThreadUnlock1(v35, v34);
        ThreadUnlock1(v37, v36);
        if ( !*(_QWORD *)(*a1 + 32) )
        {
LABEL_76:
          SmartObjStackRef<tagPOPUPMENU>::~SmartObjStackRef<tagPOPUPMENU>(a1);
          return 0LL;
        }
        SmartObjStackRef<tagPOPUPMENU>::Init(&v61, 0LL);
        v38 = (_QWORD *)*a1;
        if ( (*(_DWORD *)*a1 & 2) != 0 && v38[4] == v38[1] )
        {
          v39 = v38[8];
          v40 = v61;
          if ( v61 == v39 )
          {
LABEL_68:
            if ( v40 )
            {
              v51 = *(_QWORD *)(v40 + 8);
              if ( v51 )
              {
                v68 = *(_QWORD *)(gptiCurrent + 368LL);
                *(_QWORD *)(gptiCurrent + 368LL) = &v68;
                v69 = v51;
                ++*(_DWORD *)(v51 + 8);
                v52 = *(_QWORD *)(v61 + 16);
                v72[0] = *(_QWORD *)(gptiCurrent + 368LL);
                *(_QWORD *)(gptiCurrent + 368LL) = v72;
                v72[1] = v52;
                if ( v52 )
                  ++*(_DWORD *)(v52 + 8);
                v53 = *(_QWORD *)(v61 + 40);
                v70 = *(_QWORD *)(gptiCurrent + 368LL);
                *(_QWORD *)(gptiCurrent + 368LL) = &v70;
                v71 = v53;
                if ( v53 )
                  ++*(_DWORD *)(v53 + 8);
                xxxSendMenuSelect(
                  *(_QWORD *)(v61 + 8),
                  *(_QWORD *)(v61 + 16),
                  *(_QWORD *)(v61 + 40),
                  *(_DWORD *)(v61 + 80),
                  v4);
                ThreadUnlock1(v55, v54);
                ThreadUnlock1(v57, v56);
                ThreadUnlock1(v59, v58);
              }
            }
LABEL_75:
            SmartObjStackRef<tagPOPUPMENU>::~SmartObjStackRef<tagPOPUPMENU>(&v61);
            goto LABEL_76;
          }
          if ( v61 )
          {
            v41 = v62;
            v42 = v63;
            if ( (_QWORD **)v62[1] != &v62 || *v63 != &v62 )
              __fastfail(3u);
            *v63 = v62;
            v41[1] = v42;
          }
          v61 = v39;
          if ( !v39 )
            goto LABEL_75;
          v43 = (_QWORD **)(v39 + 88);
          v44 = *v43;
          if ( (_QWORD **)(*v43)[1] != v43 )
            __fastfail(3u);
          v62 = *v43;
          v63 = v43;
          v44[1] = &v62;
          *v43 = &v62;
        }
        else
        {
          v45 = safe_cast_fnid_to_PMENUWND(v38[4]);
          if ( !v45 || (v46 = *(_QWORD *)(v45 + 8)) == 0 )
          {
            SmartObjStackRef<tagPOPUPMENU>::~SmartObjStackRef<tagPOPUPMENU>(&v61);
LABEL_78:
            v8 = 0LL;
            goto LABEL_79;
          }
          v40 = v61;
          if ( v61 == v46 )
            goto LABEL_68;
          if ( v61 )
          {
            v47 = v62;
            v48 = v63;
            if ( (_QWORD **)v62[1] != &v62 || *v63 != &v62 )
              __fastfail(3u);
            *v63 = v62;
            v47[1] = v48;
          }
          v61 = v46;
          v49 = (_QWORD **)(v46 + 88);
          v50 = *v49;
          if ( (_QWORD **)(*v49)[1] != v49 )
            __fastfail(3u);
          v62 = *v49;
          v63 = v49;
          v50[1] = &v62;
          *v49 = &v62;
        }
        v40 = v61;
        goto LABEL_68;
      }
      FindTimer(*(_QWORD *)(v24 + 16), *(unsigned int *)(*a1 + 80), 0, 1, 0LL);
    }
    else if ( *(_QWORD *)(v24 + 24) )
    {
      if ( (*(_DWORD *)v24 & 1) != 0 )
      {
        xxxMNCloseHierarchy(v24, v4);
      }
      else
      {
        SmartObjStackRef<tagPOPUPMENU>::Init(v64, *a1);
        MNSetTimerToCloseHierarchy(v64);
      }
    }
    v25 = *a1;
    SmartObjStackRef<tagPOPUPMENU>::Init(v64, *a1);
    v26 = *(unsigned int *)(v25 + 80);
    v27 = v73;
    xxxMNInvertItem(v64, v73, v26, v12, 0);
    goto LABEL_35;
  }
  if ( (_DWORD)v3 == -1 )
    goto LABEL_78;
  v7 = *(_QWORD *)(v5 + 40);
  if ( (unsigned int)v3 >= *(_DWORD *)(v7 + 68) )
    goto LABEL_78;
  v8 = *(_QWORD *)(v7 + 96) + 152 * v3;
LABEL_79:
  SmartObjStackRef<tagPOPUPMENU>::~SmartObjStackRef<tagPOPUPMENU>(a1);
  return v8;
}
