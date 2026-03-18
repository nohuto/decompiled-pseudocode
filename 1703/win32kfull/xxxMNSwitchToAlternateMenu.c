/*
 * XREFs of xxxMNSwitchToAlternateMenu @ 0x1C0207B78
 * Callers:
 *     xxxHandleMenuMessages @ 0x1C02018C8 (xxxHandleMenuMessages.c)
 *     xxxMNChar @ 0x1C020497C (xxxMNChar.c)
 *     xxxMNKeyDown @ 0x1C020589C (xxxMNKeyDown.c)
 *     xxxMNMouseMove @ 0x1C020621C (xxxMNMouseMove.c)
 *     xxxMNKeyFilter @ 0x1C0219524 (xxxMNKeyFilter.c)
 * Callees:
 *     ??1?$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@XZ @ 0x1C004258C (--1-$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@XZ.c)
 *     ?Init@?$SmartObjStackRef@UtagPOPUPMENU@@@@QEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C00425E4 (-Init@-$SmartObjStackRef@UtagPOPUPMENU@@@@QEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     xxxWindowEvent @ 0x1C005A820 (xxxWindowEvent.c)
 *     xxxMNSelectItem @ 0x1C02071C0 (xxxMNSelectItem.c)
 */

__int64 __fastcall xxxMNSwitchToAlternateMenu(__int64 *a1, __int64 a2)
{
  _DWORD *v3; // rdx
  __int64 *v4; // rbx
  int v5; // eax
  __int64 v6; // rdx
  __int64 v7; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rcx
  __int64 v12; // rdx
  int v13; // ecx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 *v16; // [rsp+30h] [rbp-40h] BYREF
  __int64 v17; // [rsp+38h] [rbp-38h]
  _QWORD v18[4]; // [rsp+50h] [rbp-20h] BYREF
  __int64 v19; // [rsp+80h] [rbp+10h] BYREF

  v19 = 0LL;
  v3 = (_DWORD *)*a1;
  v4 = a1;
  v5 = *(_DWORD *)*a1;
  if ( (v5 & 1) == 0 || !*((_QWORD *)v3 + 6) || (v5 & 0x8000) != 0 || !a2 )
    goto LABEL_9;
  v6 = *((_QWORD *)v3 + 1);
  v18[0] = *(_QWORD *)(gptiCurrent + 368LL);
  *(_QWORD *)(gptiCurrent + 368LL) = v18;
  v18[1] = v6;
  if ( v6 )
    ++*(_DWORD *)(v6 + 8);
  SmartObjStackRef<tagPOPUPMENU>::Init(&v16, *a1);
  xxxMNSelectItem((__int64 *)&v16, a2, 0xFFFFFFFF);
  if ( !*(_QWORD *)(*v4 + 48) )
  {
    ThreadUnlock1(0LL, v7);
    a1 = v4;
LABEL_9:
    SmartObjStackRef<tagPOPUPMENU>::~SmartObjStackRef<tagPOPUPMENU>(a1);
    return 0LL;
  }
  v17 = *(_QWORD *)(*v4 + 48);
  v16 = &v19;
  HMAssignmentLock(&v16);
  v9 = *v4;
  v16 = (__int64 *)(*v4 + 48);
  v17 = *(_QWORD *)(v9 + 40);
  HMAssignmentLock(&v16);
  v16 = (__int64 *)(*v4 + 40);
  v17 = v19;
  HMAssignmentLock(&v16);
  HMAssignmentUnlock(&v19);
  v10 = *v4;
  v11 = *(_QWORD *)(*v4 + 8);
  if ( !v11 )
  {
LABEL_17:
    *(_DWORD *)(a2 + 8) ^= (*(_DWORD *)(a2 + 8) ^ (*(_DWORD *)(*(_QWORD *)(v10 + 40) + 56LL) >> 6)) & 2;
    goto LABEL_18;
  }
  if ( (*(_BYTE *)(v11 + 70) & 8) != 0 )
  {
    v12 = *(_QWORD *)(v11 + 200);
    if ( v12 )
    {
      v13 = 0;
      if ( v12 == *(_QWORD *)(v10 + 40) )
        v13 = 2;
      *(_DWORD *)(a2 + 8) = *(_DWORD *)(a2 + 8) & 0xFFFFFFFD | v13;
      goto LABEL_18;
    }
    goto LABEL_17;
  }
  *(_DWORD *)(a2 + 8) &= ~2u;
LABEL_18:
  *(_DWORD *)*v4 ^= (*(_DWORD *)*v4 ^ (2 * *(_DWORD *)(a2 + 8))) & 4;
  xxxWindowEvent(5u, *(__int64 **)(*v4 + 8), ~(*(_DWORD *)*v4 >> 1) | 0xFFFFFFFD, 0, 0);
  xxxWindowEvent(4u, *(__int64 **)(*v4 + 8), (*(_DWORD *)*v4 >> 1) | 0xFFFFFFFD, 0, 0);
  ThreadUnlock1(v15, v14);
  SmartObjStackRef<tagPOPUPMENU>::~SmartObjStackRef<tagPOPUPMENU>(v4);
  return 1LL;
}
