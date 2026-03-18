/*
 * XREFs of xxxMNSetGapState @ 0x1C0214314
 * Callers:
 *     xxxInsertMenuItem @ 0x1C0096D20 (xxxInsertMenuItem.c)
 *     NtUserMNDragLeave @ 0x1C01E8D30 (NtUserMNDragLeave.c)
 *     xxxMNUpdateDraggingInfo @ 0x1C0214540 (xxxMNUpdateDraggingInfo.c)
 * Callees:
 *     safe_cast_fnid_to_PMENUWND @ 0x1C00601F8 (safe_cast_fnid_to_PMENUWND.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C0097514 (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C00975A4 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     ??4?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z @ 0x1C0097640 (--4-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     xxxInvalidateRect @ 0x1C02045B4 (xxxInvalidateRect.c)
 *     IsMFMWFPWindow @ 0x1C0205788 (IsMFMWFPWindow.c)
 *     MNGetpItem @ 0x1C0205900 (MNGetpItem.c)
 */

_QWORD *__fastcall xxxMNSetGapState(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  int v6; // r12d
  char v7; // r15
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rcx
  __int64 v12; // rbx
  __int64 v13; // rax
  __int64 v14; // r8
  __int64 v15; // r9
  _DWORD *v16; // rax
  _DWORD *v17; // rdi
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rax
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rax
  int v29; // eax
  __int64 ThreadWin32Thread; // rax
  __int64 v31; // rdx
  __int64 v32; // rcx
  _QWORD v34[2]; // [rsp+20h] [rbp-39h] BYREF
  __int64 *v35[2]; // [rsp+30h] [rbp-29h] BYREF
  __int64 *v36[2]; // [rsp+40h] [rbp-19h] BYREF
  __int64 *v37[2]; // [rsp+50h] [rbp-9h] BYREF
  _QWORD v38[3]; // [rsp+60h] [rbp+7h] BYREF
  int v39; // [rsp+78h] [rbp+1Fh] BYREF
  int v40; // [rsp+7Ch] [rbp+23h]
  int v41; // [rsp+80h] [rbp+27h]
  int v42; // [rsp+84h] [rbp+2Bh]

  v6 = a4;
  v7 = a3;
  SmartObjStackRefBase<tagPOPUPMENU>::Init(v34, 0LL, a3, a4);
  if ( (v7 & 3) == 0 )
    return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v34, v8, v9, v10);
  v12 = 0LL;
  if ( !IsMFMWFPWindow(a1) )
    return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v34, v8, v9, v10);
  v13 = safe_cast_fnid_to_PMENUWND(v11);
  if ( !v13 )
    return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v34, v8, v9, v10);
  v8 = *(_QWORD *)(v13 + 8);
  if ( !v8 )
    return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v34, v8, v9, v10);
  SmartObjStackRefBase<tagPOPUPMENU>::operator=(v34, v8);
  if ( !*(_QWORD *)v34[0] )
    return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v34, v8, v9, v10);
  SmartObjStackRefBase<tagPOPUPMENU>::Init(v35, *(_QWORD *)v34[0], v9, v10);
  v16 = (_DWORD *)MNGetpItem(v35, a2, v14, v15);
  v17 = v16;
  if ( !v16 )
    return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v34, v8, v9, v10);
  v39 = v16[18];
  v41 = v16[18] + v16[20];
  v40 = v16[19];
  v42 = v16[19] + v16[21];
  v18 = *(_QWORD *)v34[0];
  if ( (v7 & 1) != 0 )
  {
    SmartObjStackRefBase<tagPOPUPMENU>::Init(v36, v18, v9, v10);
    v21 = MNGetpItem(v36, a2 - 1, v19, v20);
    if ( v6 )
    {
      v17[1] |= 0x80000000;
      if ( !v21 )
        goto LABEL_20;
      *(_DWORD *)(v21 + 4) |= 0x40000000u;
    }
    else
    {
      v17[1] &= ~0x80000000;
      if ( !v21 )
        goto LABEL_20;
      *(_DWORD *)(v21 + 4) &= ~0x40000000u;
    }
    v40 -= *(_DWORD *)(gpsi + 2156LL);
  }
  else
  {
    SmartObjStackRefBase<tagPOPUPMENU>::Init(v37, v18, v9, v10);
    v26 = MNGetpItem(v37, a2 + 1, v24, v25);
    if ( v6 )
    {
      v17[1] |= 0x40000000u;
      if ( !v26 )
        goto LABEL_20;
      *(_DWORD *)(v26 + 4) |= 0x80000000;
    }
    else
    {
      v17[1] &= ~0x40000000u;
      if ( !v26 )
        goto LABEL_20;
      *(_DWORD *)(v26 + 4) &= ~0x80000000;
    }
    v42 += *(_DWORD *)(gpsi + 2156LL);
  }
LABEL_20:
  v27 = *(_QWORD *)(*(_QWORD *)v34[0] + 40LL);
  v28 = *(unsigned int *)(v27 + 136);
  if ( (_DWORD)v28 != -1 && (unsigned int)v28 < *(_DWORD *)(v27 + 68) )
    v12 = *(_QWORD *)(v27 + 96) + 152 * v28;
  v29 = *(_DWORD *)(v12 + 76);
  v40 -= v29;
  v42 -= v29;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v27, v22, v23);
  v38[0] = *(_QWORD *)(ThreadWin32Thread + 392);
  *(_QWORD *)(ThreadWin32Thread + 392) = v38;
  v38[1] = a1;
  _InterlockedIncrement((volatile signed __int32 *)(a1 + 8));
  xxxInvalidateRect((struct tagWND *)a1, &v39, 1);
  ThreadUnlock1(v32, v31);
  return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v34, v8, v9, v10);
}
