/*
 * XREFs of xxxMNUpdateDraggingInfo @ 0x1C0213060
 * Callers:
 *     xxxMNMouseMove @ 0x1C020621C (xxxMNMouseMove.c)
 * Callees:
 *     ??1?$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@XZ @ 0x1C004258C (--1-$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@XZ.c)
 *     ?Init@?$SmartObjStackRef@UtagPOPUPMENU@@@@QEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C00425E4 (-Init@-$SmartObjStackRef@UtagPOPUPMENU@@@@QEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     safe_cast_fnid_to_PMENUWND @ 0x1C005D060 (safe_cast_fnid_to_PMENUWND.c)
 *     IsMFMWFPWindow @ 0x1C0203CDC (IsMFMWFPWindow.c)
 *     LockMFMWFPWindow @ 0x1C0203D04 (LockMFMWFPWindow.c)
 *     MNGetpItem @ 0x1C0203E44 (MNGetpItem.c)
 *     xxxMNSetGapState @ 0x1C0212DEC (xxxMNSetGapState.c)
 */

_QWORD *__fastcall xxxMNUpdateDraggingInfo(__int64 a1, __int64 a2, int a3)
{
  __int64 *v6; // rdi
  __int64 v7; // rcx
  __int64 v8; // r12
  unsigned int v9; // r13d
  int v10; // esi
  __int64 v11; // rcx
  __int64 v12; // rdx
  _BOOL8 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rdx
  _QWORD *v17; // rcx
  _QWORD **v18; // rdx
  _QWORD **v19; // rax
  _QWORD *v20; // rcx
  __int64 v21; // rax
  __int64 v22; // r10
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rcx
  int v26; // r8d
  int v27; // r9d
  int v28; // eax
  unsigned int v29; // eax
  bool v30; // zf
  _QWORD v32[3]; // [rsp+20h] [rbp-60h] BYREF
  __int64 v33; // [rsp+38h] [rbp-48h] BYREF
  _QWORD *v34; // [rsp+40h] [rbp-40h] BYREF
  _QWORD **v35; // [rsp+48h] [rbp-38h]
  __int64 v36[5]; // [rsp+58h] [rbp-28h] BYREF

  SmartObjStackRef<tagPOPUPMENU>::Init(&v33, 0LL);
  v6 = (__int64 *)(a1 + 80);
  v7 = *(_QWORD *)(a1 + 80);
  v32[0] = *(_QWORD *)(gptiCurrent + 368LL);
  *(_QWORD *)(gptiCurrent + 368LL) = v32;
  v32[1] = v7;
  if ( v7 )
    ++*(_DWORD *)(v7 + 8);
  v8 = *v6;
  v9 = *(_DWORD *)(a1 + 88);
  v10 = *(_DWORD *)(a1 + 92) & 3;
  LockMFMWFPWindow((__int64 *)(a1 + 80), a2);
  v11 = *v6;
  *(_DWORD *)(a1 + 88) = a3;
  if ( !IsMFMWFPWindow(v11) || (v14 = safe_cast_fnid_to_PMENUWND(v13)) == 0 || (v15 = *(_QWORD *)(v14 + 8)) == 0 )
  {
    *v6 = 0LL;
    *(_DWORD *)(a1 + 88) = -1;
    goto LABEL_40;
  }
  v16 = v33;
  if ( v33 != v15 )
  {
    if ( v33 )
    {
      v17 = v34;
      v18 = v35;
      if ( (_QWORD **)v34[1] != &v34 || *v35 != &v34 )
        __fastfail(3u);
      *v35 = v34;
      v17[1] = v18;
    }
    v33 = v15;
    v19 = (_QWORD **)(v15 + 88);
    v20 = *v19;
    if ( (_QWORD **)(*v19)[1] != v19 )
      __fastfail(3u);
    v34 = *v19;
    v35 = v19;
    v20[1] = &v34;
    *v19 = &v34;
    v16 = v33;
  }
  SmartObjStackRef<tagPOPUPMENU>::Init(v36, v16);
  v21 = MNGetpItem(v36, *(_DWORD *)(a1 + 88));
  *(_DWORD *)(a1 + 92) = 0;
  v22 = v21;
  if ( v21 )
  {
    v23 = *(_QWORD *)(v33 + 40);
    v24 = *(unsigned int *)(v23 + 136);
    if ( (_DWORD)v24 == -1 || (unsigned int)v24 >= *(_DWORD *)(v23 + 68) )
      v25 = 0LL;
    else
      v25 = *(_QWORD *)(v23 + 96) + 152 * v24;
    v26 = *(_DWORD *)(v25 + 76) + *(_DWORD *)(a1 + 16) - *(_DWORD *)(*v6 + 148);
    v27 = *(_DWORD *)(v21 + 76);
    v12 = *(unsigned int *)(gpsi + 2156LL);
    if ( v26 > v27 + (int)v12 )
    {
      v28 = *(_DWORD *)(a1 + 92);
      if ( v26 >= v27 + *(_DWORD *)(v22 + 84) - (int)v12 )
        v28 = 2;
      *(_DWORD *)(a1 + 92) = v28;
    }
    else
    {
      *(_DWORD *)(a1 + 92) = 1;
    }
  }
  v13 = v8 != *v6;
  if ( v8 != *v6 )
    goto LABEL_36;
  v29 = *(_DWORD *)(a1 + 88) - v9;
  if ( v29 == -1 )
  {
    if ( *(_DWORD *)(a1 + 92) == 2 && v10 == 1 )
      goto LABEL_40;
    v13 = 1LL;
    goto LABEL_36;
  }
  if ( !v29 )
  {
    v13 = v10 != *(_DWORD *)(a1 + 92);
LABEL_36:
    v30 = !v13;
    goto LABEL_37;
  }
  if ( v29 != 1 || *(_DWORD *)(a1 + 92) != 1 )
    goto LABEL_38;
  v30 = v10 == 2;
LABEL_37:
  if ( !v30 )
  {
LABEL_38:
    *(_DWORD *)(a1 + 92) |= 4u;
    xxxMNSetGapState(v8, v9, v10, 0);
    xxxMNSetGapState(*v6, *(_DWORD *)(a1 + 88), *(_DWORD *)(a1 + 92), 1);
  }
LABEL_40:
  ThreadUnlock1(v13, v12);
  return SmartObjStackRef<tagPOPUPMENU>::~SmartObjStackRef<tagPOPUPMENU>(&v33);
}
