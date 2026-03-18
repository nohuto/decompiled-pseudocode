/*
 * XREFs of xxxMNUpdateDraggingInfo @ 0x1C0214540
 * Callers:
 *     xxxMNMouseMove @ 0x1C0207FA4 (xxxMNMouseMove.c)
 * Callees:
 *     safe_cast_fnid_to_PMENUWND @ 0x1C00601F8 (safe_cast_fnid_to_PMENUWND.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C0097514 (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C00975A4 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     ??4?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z @ 0x1C0097640 (--4-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     IsMFMWFPWindow @ 0x1C0205788 (IsMFMWFPWindow.c)
 *     LockMFMWFPWindow @ 0x1C02057B0 (LockMFMWFPWindow.c)
 *     MNGetpItem @ 0x1C0205900 (MNGetpItem.c)
 *     xxxMNSetGapState @ 0x1C0214314 (xxxMNSetGapState.c)
 */

_QWORD *__fastcall xxxMNUpdateDraggingInfo(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v6; // ebp
  __int64 *v7; // rsi
  __int64 v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 ThreadWin32Thread; // rax
  __int64 v13; // r15
  unsigned int v14; // r12d
  unsigned int v15; // edi
  __int64 v16; // rcx
  __int64 v17; // rdx
  _BOOL8 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rax
  __int64 v25; // r9
  __int64 v26; // rcx
  __int64 v27; // rcx
  int v28; // r8d
  int v29; // ecx
  unsigned int v30; // eax
  bool v31; // zf
  __int64 v32; // rdx
  __int64 v33; // r8
  __int64 v34; // r9
  _QWORD v36[2]; // [rsp+20h] [rbp-58h] BYREF
  __int64 *v37[2]; // [rsp+30h] [rbp-48h] BYREF
  _QWORD v38[4]; // [rsp+40h] [rbp-38h] BYREF

  v6 = a3;
  SmartObjStackRefBase<tagPOPUPMENU>::Init(v36, 0LL, a3, a4);
  v7 = (__int64 *)(a1 + 80);
  v8 = *(_QWORD *)(a1 + 80);
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v9, v10, v11);
  v38[0] = *(_QWORD *)(ThreadWin32Thread + 392);
  *(_QWORD *)(ThreadWin32Thread + 392) = v38;
  v38[1] = v8;
  if ( v8 )
    _InterlockedIncrement((volatile signed __int32 *)(v8 + 8));
  v13 = *v7;
  v14 = *(_DWORD *)(a1 + 88);
  v15 = *(_DWORD *)(a1 + 92) & 3;
  LockMFMWFPWindow((__int64 *)(a1 + 80), a2);
  v16 = *v7;
  *(_DWORD *)(a1 + 88) = v6;
  if ( !IsMFMWFPWindow(v16) || (v19 = safe_cast_fnid_to_PMENUWND(v18)) == 0 || (v17 = *(_QWORD *)(v19 + 8)) == 0 )
  {
    *v7 = 0LL;
    *(_DWORD *)(a1 + 88) = -1;
    goto LABEL_29;
  }
  SmartObjStackRefBase<tagPOPUPMENU>::operator=(v36, v17);
  SmartObjStackRefBase<tagPOPUPMENU>::Init(v37, *(_QWORD *)v36[0], v20, v21);
  v24 = MNGetpItem(v37, *(unsigned int *)(a1 + 88), v22, v23);
  *(_DWORD *)(a1 + 92) = 0;
  if ( v24 )
  {
    v25 = *(_QWORD *)(*(_QWORD *)v36[0] + 40LL);
    v26 = *(unsigned int *)(v25 + 136);
    if ( (_DWORD)v26 == -1 || (unsigned int)v26 >= *(_DWORD *)(v25 + 68) )
      v27 = 0LL;
    else
      v27 = *(_QWORD *)(v25 + 96) + 152 * v26;
    v28 = *(_DWORD *)(v27 + 76) + *(_DWORD *)(a1 + 16) - *(_DWORD *)(*v7 + 148);
    v17 = *(unsigned int *)(gpsi + 2156LL);
    v29 = *(_DWORD *)(v24 + 76);
    if ( v28 > v29 + (int)v17 )
    {
      if ( v28 >= v29 + *(_DWORD *)(v24 + 84) - (int)v17 )
        *(_DWORD *)(a1 + 92) = 2;
    }
    else
    {
      *(_DWORD *)(a1 + 92) = 1;
    }
  }
  v18 = v13 != *v7;
  if ( v13 != *v7 )
    goto LABEL_25;
  v30 = *(_DWORD *)(a1 + 88) - v14;
  if ( v30 == -1 )
  {
    if ( *(_DWORD *)(a1 + 92) == 2 && v15 == 1 )
      goto LABEL_29;
    v18 = 1LL;
    goto LABEL_25;
  }
  if ( !v30 )
  {
    v18 = v15 != *(_DWORD *)(a1 + 92);
LABEL_25:
    v31 = !v18;
    goto LABEL_26;
  }
  if ( v30 != 1 || *(_DWORD *)(a1 + 92) != 1 )
    goto LABEL_27;
  v31 = v15 == 2;
LABEL_26:
  if ( !v31 )
  {
LABEL_27:
    *(_DWORD *)(a1 + 92) |= 4u;
    xxxMNSetGapState(v13, v14, v15, 0LL);
    xxxMNSetGapState(*v7, *(_DWORD *)(a1 + 88), *(unsigned int *)(a1 + 92), 1LL);
  }
LABEL_29:
  ThreadUnlock1(v18, v17);
  return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v36, v32, v33, v34);
}
