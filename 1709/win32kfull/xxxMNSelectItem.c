/*
 * XREFs of xxxMNSelectItem @ 0x1C0209144
 * Callers:
 *     xxxMNButtonDown @ 0x1C0205E2C (xxxMNButtonDown.c)
 *     xxxMNCancel @ 0x1C0206110 (xxxMNCancel.c)
 *     xxxMNChar @ 0x1C02064C0 (xxxMNChar.c)
 *     xxxMNKeyDown @ 0x1C0207450 (xxxMNKeyDown.c)
 *     xxxMNMouseMove @ 0x1C0207FA4 (xxxMNMouseMove.c)
 *     xxxMNSwitchToAlternateMenu @ 0x1C0209BF8 (xxxMNSwitchToAlternateMenu.c)
 *     xxxMenuWindowProc @ 0x1C0209E90 (xxxMenuWindowProc.c)
 *     xxxMNKeyFilter @ 0x1C021A71C (xxxMNKeyFilter.c)
 * Callees:
 *     safe_cast_fnid_to_PMENUWND @ 0x1C00601F8 (safe_cast_fnid_to_PMENUWND.c)
 *     xxxWindowEvent @ 0x1C006D410 (xxxWindowEvent.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C0097514 (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C00975A4 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     ??4?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z @ 0x1C0097640 (--4-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     FindTimer @ 0x1C00D7980 (FindTimer.c)
 *     ?xxxMNDoScroll@@YAHV?$SmartObjStackRef@UtagPOPUPMENU@@@@IH@Z @ 0x1C0204FD4 (-xxxMNDoScroll@@YAHV-$SmartObjStackRef@UtagPOPUPMENU@@@@IH@Z.c)
 *     MNSetTimerToCloseHierarchy @ 0x1C0205B60 (MNSetTimerToCloseHierarchy.c)
 *     xxxMNCloseHierarchy @ 0x1C0206910 (xxxMNCloseHierarchy.c)
 *     MNAnimate @ 0x1C0216480 (MNAnimate.c)
 *     xxxMNInvertItem @ 0x1C0216F74 (xxxMNInvertItem.c)
 *     xxxSendMenuSelect @ 0x1C021B16C (xxxSendMenuSelect.c)
 */

__int64 __fastcall xxxMNSelectItem(__int64 **a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r15
  unsigned int v4; // r14d
  __int64 v6; // r9
  __int64 v7; // rbx
  __int64 v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // r12
  __int64 ThreadWin32Thread; // rax
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // r13
  __int64 v18; // rax
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // r12
  __int64 v25; // r15
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rax
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // rbx
  __int64 v34; // r8
  __int64 v35; // rbx
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // rdx
  __int64 v41; // rdx
  __int64 v42; // r8
  __int64 v43; // r9
  __int64 v44; // rcx
  __int64 v45; // rdx
  __int64 v46; // r8
  __int64 v47; // r9
  __int64 v48; // rbx
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // r8
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // rdx
  __int64 v59; // rax
  __int64 v60; // r8
  __int64 v61; // r9
  __int64 v62; // rbx
  __int64 v63; // rax
  __int64 v64; // rbx
  __int64 v65; // rdx
  __int64 v66; // r8
  __int64 v67; // r9
  __int64 v68; // rax
  __int64 v69; // rdx
  __int64 v70; // r8
  __int64 v71; // r9
  __int64 v72; // rbx
  __int64 v73; // rax
  __int64 v74; // rdx
  __int64 v75; // rcx
  __int64 v76; // rdx
  __int64 v77; // rcx
  __int64 v78; // rdx
  __int64 v79; // rcx
  _QWORD v81[2]; // [rsp+30h] [rbp-D0h] BYREF
  _QWORD v82[2]; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v83; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v84; // [rsp+58h] [rbp-A8h]
  __int64 v85; // [rsp+68h] [rbp-98h] BYREF
  __int64 v86; // [rsp+70h] [rbp-90h]
  __int128 v87; // [rsp+80h] [rbp-80h]
  _QWORD v88[2]; // [rsp+90h] [rbp-70h] BYREF
  _QWORD v89[2]; // [rsp+A0h] [rbp-60h] BYREF
  __int128 v90; // [rsp+B0h] [rbp-50h] BYREF
  _QWORD v91[2]; // [rsp+C0h] [rbp-40h] BYREF
  _QWORD v92[2]; // [rsp+D0h] [rbp-30h] BYREF
  __int64 *v93[2]; // [rsp+E0h] [rbp-20h] BYREF
  _QWORD v94[2]; // [rsp+F0h] [rbp-10h] BYREF
  _QWORD v95[3]; // [rsp+100h] [rbp+0h] BYREF
  _QWORD v96[3]; // [rsp+118h] [rbp+18h] BYREF
  _QWORD v97[10]; // [rsp+130h] [rbp+30h] BYREF
  __int64 v98; // [rsp+198h] [rbp+98h]
  __int64 v99; // [rsp+1A8h] [rbp+A8h]

  v98 = a2;
  v3 = a2;
  v4 = a3;
  v6 = **a1;
  if ( *(_DWORD *)(v6 + 80) == (_DWORD)a3 )
  {
    if ( (_DWORD)a3 != -1 )
    {
      a2 = **a1;
      if ( (unsigned int)a3 < *(_DWORD *)(*(_QWORD *)(a2 + 40) + 68LL) )
      {
        a2 = *(_QWORD *)(**a1 + 40);
        v7 = *(_QWORD *)(a2 + 96) + 152LL * (unsigned int)a3;
        goto LABEL_56;
      }
    }
LABEL_55:
    v7 = 0LL;
    goto LABEL_56;
  }
  v8 = safe_cast_fnid_to_PMENUWND(*(_QWORD *)(**a1 + 32));
  if ( (*(_DWORD *)**a1 & 0x1000) != 0 && !v8 )
    goto LABEL_55;
  MNAnimate(v3, 0LL);
  if ( (*(_DWORD *)**a1 & 0x2000) != 0 )
  {
    FindTimer(*(_QWORD *)(**a1 + 16), 65534LL, 0, 1, 0LL);
    *(_DWORD *)**a1 &= ~0x2000u;
  }
  v12 = *(_QWORD *)(**a1 + 40);
  v99 = v12;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v9, v10, v11);
  v85 = *(_QWORD *)(ThreadWin32Thread + 392);
  *(_QWORD *)(ThreadWin32Thread + 392) = &v85;
  v86 = v12;
  if ( v12 )
    _InterlockedIncrement((volatile signed __int32 *)(v12 + 8));
  v17 = *(_QWORD *)(**a1 + 8);
  v18 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v14, v15, v16);
  v83 = *(_QWORD *)(v18 + 392);
  *(_QWORD *)(v18 + 392) = &v83;
  v84 = v17;
  if ( v17 )
    _InterlockedIncrement((volatile signed __int32 *)(v17 + 8));
  if ( (*(_DWORD *)**a1 & 0x1000) != 0 )
  {
    v21 = *(_QWORD *)(v8 + 8);
    if ( v21 )
    {
      SmartObjStackRefBase<tagPOPUPMENU>::Init(v81, v21, v19, v20);
      FindTimer(*(_QWORD *)(*(_QWORD *)v81[0] + 16LL), 0xFFFFLL, 0, 1, 0LL);
      **(_DWORD **)v81[0] &= ~0x4000u;
      if ( (**(_DWORD **)v81[0] & 0x2000) != 0 )
      {
        FindTimer(*(_QWORD *)(*(_QWORD *)v81[0] + 16LL), 65534LL, 0, 1, 0LL);
        **(_DWORD **)v81[0] &= ~0x2000u;
      }
      if ( *(_DWORD *)(*(_QWORD *)v81[0] + 80LL) != *(_DWORD *)(*(_QWORD *)v81[0] + 84LL) )
      {
        v24 = *(_QWORD *)(*(_QWORD *)v81[0] + 40LL);
        v25 = *(_QWORD *)(*(_QWORD *)v81[0] + 8LL);
        v26 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), *(_QWORD *)v81[0], v22, v23);
        v95[0] = *(_QWORD *)(v26 + 392);
        *(_QWORD *)(v26 + 392) = v95;
        v95[1] = v24;
        if ( v24 )
          _InterlockedAdd((volatile signed __int32 *)(v24 + 8), 1u);
        v30 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v27, v28, v29);
        v96[0] = *(_QWORD *)(v30 + 392);
        *(_QWORD *)(v30 + 392) = v96;
        v96[1] = v25;
        if ( v25 )
          _InterlockedAdd((volatile signed __int32 *)(v25 + 8), 1u);
        if ( *(_DWORD *)(*(_QWORD *)v81[0] + 80LL) != -1 )
        {
          v33 = *(_QWORD *)v81[0];
          SmartObjStackRefBase<tagPOPUPMENU>::Init(v88, *(_QWORD *)v81[0], v31, v32);
          xxxMNInvertItem(v88, v24, *(unsigned int *)(v33 + 80), v25, 0);
        }
        v34 = *(_QWORD *)v81[0];
        *(_DWORD *)(*(_QWORD *)v81[0] + 80LL) = *(_DWORD *)(*(_QWORD *)v81[0] + 84LL);
        v35 = *(_QWORD *)v81[0];
        SmartObjStackRefBase<tagPOPUPMENU>::Init(v89, *(_QWORD *)v81[0], v34, v32);
        xxxMNInvertItem(v89, v24, *(unsigned int *)(v35 + 84), v25, 1);
        ThreadUnlock1(v37, v36);
        ThreadUnlock1(v39, v38);
        v3 = v98;
        v12 = v99;
      }
      *(_DWORD *)**a1 &= ~0x1000u;
      v40 = **a1;
      *(_QWORD *)&v87 = *(_QWORD *)(v40 + 64) + 56LL;
      *((_QWORD *)&v87 + 1) = *(_QWORD *)(v40 + 16);
      v90 = v87;
      HMAssignmentLock(&v90);
      SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v81, v41, v42, v43);
    }
  }
  v44 = **a1;
  if ( *(int *)(v44 + 80) < 0 )
  {
    if ( (unsigned int)(*(_DWORD *)(v44 + 80) + 4) > 1 )
      goto LABEL_34;
    FindTimer(*(_QWORD *)(**a1 + 16), *(unsigned int *)(**a1 + 80), 0, 1, 0LL);
  }
  else if ( *(_QWORD *)(v44 + 24) )
  {
    if ( (*(_DWORD *)**a1 & 1) != 0 )
    {
      xxxMNCloseHierarchy(**a1, v3, v19, v20);
    }
    else
    {
      SmartObjStackRefBase<tagPOPUPMENU>::Init(v91, **a1, v19, v20);
      MNSetTimerToCloseHierarchy(v91, v45, v46, v47);
    }
  }
  v48 = **a1;
  SmartObjStackRefBase<tagPOPUPMENU>::Init(v92, v48, v19, v20);
  xxxMNInvertItem(v92, v12, *(unsigned int *)(v48 + 80), v17, 0);
LABEL_34:
  *(_DWORD *)(**a1 + 80) = v4;
  if ( v4 == -1 )
  {
    if ( *(_QWORD *)(**a1 + 8) == *(_QWORD *)(**a1 + 16) )
      v53 = (*(_DWORD *)**a1 >> 1) | 0xFFFFFFFD;
    else
      v53 = 4294967292LL;
    xxxWindowEvent(0x8005u, *(volatile signed __int32 **)(**a1 + 16), v53, 0LL, 0);
    ThreadUnlock1(v55, v54);
    ThreadUnlock1(v57, v56);
    if ( !*(_QWORD *)(**a1 + 32) )
      goto LABEL_55;
    SmartObjStackRefBase<tagPOPUPMENU>::Init(v82, 0LL, a3, v6);
    if ( (*(_DWORD *)**a1 & 2) != 0 && *(_QWORD *)(**a1 + 32) == *(_QWORD *)(**a1 + 8) )
    {
      v58 = *(_QWORD *)(**a1 + 64);
    }
    else
    {
      v59 = safe_cast_fnid_to_PMENUWND(*(_QWORD *)(**a1 + 32));
      if ( !v59 || (v58 = *(_QWORD *)(v59 + 8)) == 0 )
      {
LABEL_54:
        SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v82, v58, v60, v61);
        goto LABEL_55;
      }
    }
    SmartObjStackRefBase<tagPOPUPMENU>::operator=(v82, v58);
    if ( *(_QWORD *)v82[0] && *(_QWORD *)(*(_QWORD *)v82[0] + 8LL) )
    {
      v62 = *(_QWORD *)(*(_QWORD *)v82[0] + 8LL);
      v63 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v58, v60, v61);
      v83 = *(_QWORD *)(v63 + 392);
      *(_QWORD *)(v63 + 392) = &v83;
      v84 = v62;
      _InterlockedIncrement((volatile signed __int32 *)(v62 + 8));
      v64 = *(_QWORD *)(*(_QWORD *)v82[0] + 16LL);
      v68 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v65, v66, v67);
      v97[0] = *(_QWORD *)(v68 + 392);
      *(_QWORD *)(v68 + 392) = v97;
      v97[1] = v64;
      if ( v64 )
        _InterlockedIncrement((volatile signed __int32 *)(v64 + 8));
      v72 = *(_QWORD *)(*(_QWORD *)v82[0] + 40LL);
      v73 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v69, v70, v71);
      v85 = *(_QWORD *)(v73 + 392);
      *(_QWORD *)(v73 + 392) = &v85;
      v86 = v72;
      if ( v72 )
        _InterlockedIncrement((volatile signed __int32 *)(v72 + 8));
      xxxSendMenuSelect(
        *(_QWORD *)(*(_QWORD *)v82[0] + 8LL),
        *(_QWORD *)(*(_QWORD *)v82[0] + 16LL),
        *(_QWORD *)(*(_QWORD *)v82[0] + 40LL),
        *(_DWORD *)(*(_QWORD *)v82[0] + 80LL),
        v3);
      ThreadUnlock1(v75, v74);
      ThreadUnlock1(v77, v76);
      ThreadUnlock1(v79, v78);
    }
    goto LABEL_54;
  }
  *(_DWORD *)(v3 + 8) &= 0xFFFFAFFF;
  if ( (*(_DWORD *)(v3 + 8) & 8) != 0 )
  {
    SmartObjStackRefBase<tagPOPUPMENU>::Init(v93, **a1, v19, v20);
    xxxMNDoScroll(v93, v4, 1LL);
  }
  SmartObjStackRefBase<tagPOPUPMENU>::Init(v94, **a1, v19, v20);
  v7 = xxxMNInvertItem(v94, v12, v4, v17, 1);
  ThreadUnlock1(v50, v49);
  ThreadUnlock1(v52, v51);
LABEL_56:
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(a1, a2, a3, v6);
  return v7;
}
