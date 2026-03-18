/*
 * XREFs of xxxMNSwitchToAlternateMenu @ 0x1C0209BF8
 * Callers:
 *     xxxHandleMenuMessages @ 0x1C0203214 (xxxHandleMenuMessages.c)
 *     xxxMNChar @ 0x1C02064C0 (xxxMNChar.c)
 *     xxxMNKeyDown @ 0x1C0207450 (xxxMNKeyDown.c)
 *     xxxMNMouseMove @ 0x1C0207FA4 (xxxMNMouseMove.c)
 *     xxxMNKeyFilter @ 0x1C021A71C (xxxMNKeyFilter.c)
 * Callees:
 *     xxxWindowEvent @ 0x1C006D410 (xxxWindowEvent.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C0097514 (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C00975A4 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     xxxMNSelectItem @ 0x1C0209144 (xxxMNSelectItem.c)
 */

__int64 __fastcall xxxMNSwitchToAlternateMenu(__int64 **a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 **v5; // rbx
  __int64 v6; // r8
  __int64 v8; // rsi
  __int64 ThreadWin32Thread; // rax
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 *v14; // rax
  __int64 v15; // rax
  int v16; // ecx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  _QWORD v22[2]; // [rsp+38h] [rbp-29h] BYREF
  __int128 v23; // [rsp+48h] [rbp-19h]
  __int128 v24; // [rsp+58h] [rbp-9h]
  __int64 *v25[2]; // [rsp+68h] [rbp+7h] BYREF
  __int128 v26; // [rsp+78h] [rbp+17h] BYREF
  __int128 v27; // [rsp+88h] [rbp+27h] BYREF
  _QWORD v28[4]; // [rsp+98h] [rbp+37h] BYREF
  __int64 v29; // [rsp+C8h] [rbp+67h] BYREF

  v29 = 0LL;
  v5 = a1;
  v6 = **a1;
  if ( (*(_DWORD *)v6 & 1) == 0 )
    goto LABEL_5;
  v6 = **a1;
  if ( !*(_QWORD *)(v6 + 48) )
    goto LABEL_5;
  if ( (*(_DWORD *)**a1 & 0x8000) != 0 || !a2 )
  {
LABEL_4:
    a1 = v5;
LABEL_5:
    SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(a1, a2, v6, a4);
    return 0LL;
  }
  v8 = *(_QWORD *)(**a1 + 8);
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, v6, a4);
  v28[0] = *(_QWORD *)(ThreadWin32Thread + 392);
  *(_QWORD *)(ThreadWin32Thread + 392) = v28;
  v28[1] = v8;
  if ( v8 )
    _InterlockedIncrement((volatile signed __int32 *)(v8 + 8));
  SmartObjStackRefBase<tagPOPUPMENU>::Init(v25, **v5, v10, v11);
  xxxMNSelectItem(v25, a2, 0xFFFFFFFFLL);
  v13 = **v5;
  if ( !*(_QWORD *)(v13 + 48) )
  {
    ThreadUnlock1(v13, v12);
    goto LABEL_4;
  }
  v14 = *v5;
  v22[0] = &v29;
  v22[1] = *(_QWORD *)(*v14 + 48);
  HMAssignmentLock(v22);
  v15 = *(_QWORD *)(**v5 + 40);
  *(_QWORD *)&v23 = **v5 + 48;
  *((_QWORD *)&v23 + 1) = v15;
  v26 = v23;
  HMAssignmentLock(&v26);
  *(_QWORD *)&v24 = **v5 + 40;
  *((_QWORD *)&v24 + 1) = v29;
  v27 = v24;
  HMAssignmentLock(&v27);
  HMAssignmentUnlock(&v29);
  if ( !*(_QWORD *)(**v5 + 8) || (*(_BYTE *)(*(_QWORD *)(**v5 + 8) + 70LL) & 8) != 0 )
  {
    if ( *(_QWORD *)(**v5 + 8) && *(_QWORD *)(*(_QWORD *)(**v5 + 8) + 200LL) )
    {
      v16 = 0;
      if ( *(_QWORD *)(*(_QWORD *)(**v5 + 8) + 200LL) == *(_QWORD *)(**v5 + 40) )
        v16 = 2;
      *(_DWORD *)(a2 + 8) = *(_DWORD *)(a2 + 8) & 0xFFFFFFFD | v16;
    }
    else
    {
      *(_DWORD *)(a2 + 8) ^= (*(_DWORD *)(a2 + 8) ^ (*(_DWORD *)(*(_QWORD *)(**v5 + 40) + 56LL) >> 6)) & 2;
    }
  }
  else
  {
    *(_DWORD *)(a2 + 8) &= ~2u;
  }
  *(_DWORD *)**v5 ^= (*(_DWORD *)**v5 ^ (2 * *(_DWORD *)(a2 + 8))) & 4;
  xxxWindowEvent(5u, *(volatile signed __int32 **)(**v5 + 8), ~(*(_DWORD *)**v5 >> 1) | 0xFFFFFFFD, 0LL, 0);
  xxxWindowEvent(4u, *(volatile signed __int32 **)(**v5 + 8), (*(_DWORD *)**v5 >> 1) | 0xFFFFFFFD, 0LL, 0);
  ThreadUnlock1(v18, v17);
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v5, v19, v20, v21);
  return 1LL;
}
