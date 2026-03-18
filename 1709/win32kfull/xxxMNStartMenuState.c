/*
 * XREFs of xxxMNStartMenuState @ 0x1C01F7708
 * Callers:
 *     xxxSysCommand @ 0x1C011D2FC (xxxSysCommand.c)
 * Callees:
 *     safe_cast_fnid_to_PMENUWND @ 0x1C00601F8 (safe_cast_fnid_to_PMENUWND.c)
 *     ??1?$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@XZ @ 0x1C0097364 (--1-$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@XZ.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C0097514 (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z @ 0x1C0097640 (--4-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z.c)
 *     xxxSendMessage @ 0x1C00A6110 (xxxSendMessage.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     _PostTransformableMessage @ 0x1C00CCAC8 (_PostTransformableMessage.c)
 *     ??0MenuStateOwnerLockxxxUnlock@@QEAA@PEAUtagMENUSTATE@@@Z @ 0x1C01C00AC (--0MenuStateOwnerLockxxxUnlock@@QEAA@PEAUtagMENUSTATE@@@Z.c)
 *     NullifyLookasideRef @ 0x1C01F69F4 (NullifyLookasideRef.c)
 *     MNAllocMenuState @ 0x1C01F6ABC (MNAllocMenuState.c)
 *     MNAllocPopup @ 0x1C01F6BDC (MNAllocPopup.c)
 *     MNFreePopup @ 0x1C01F6E14 (MNFreePopup.c)
 *     MNMarkDelayedFreePopup @ 0x1C01F6F04 (MNMarkDelayedFreePopup.c)
 *     xxxUnlockMenuState @ 0x1C01F7A30 (xxxUnlockMenuState.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxMNStartMenuState(ULONG_PTR a1, unsigned int a2, struct _LARGE_STRING *a3, __int64 a4)
{
  unsigned __int64 v4; // rsi
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // r9
  __int64 v10; // rax
  void *v11; // rax
  __int64 v12; // r8
  __int64 v13; // r9
  struct tagMENUSTATE *v14; // rax
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rbx
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // r8
  __int64 v27; // r9
  ULONG_PTR v28; // rcx
  char i; // al
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 ThreadWin32Thread; // rax
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // rbx
  _QWORD v37[2]; // [rsp+38h] [rbp-59h] BYREF
  __int128 v38; // [rsp+48h] [rbp-49h]
  __int128 v39; // [rsp+58h] [rbp-39h]
  _QWORD v40[2]; // [rsp+68h] [rbp-29h] BYREF
  __int64 *v41[2]; // [rsp+78h] [rbp-19h] BYREF
  __int128 v42; // [rsp+88h] [rbp-9h] BYREF
  __int128 v43; // [rsp+98h] [rbp+7h] BYREF
  __int64 *v44[2]; // [rsp+A8h] [rbp+17h] BYREF
  __int64 *v45[2]; // [rsp+B8h] [rbp+27h] BYREF
  _QWORD v46[4]; // [rsp+C8h] [rbp+37h] BYREF
  __int64 v47; // [rsp+110h] [rbp+7Fh] BYREF

  v4 = a2;
  SmartObjStackRefBase<tagPOPUPMENU>::Init(v37, 0LL, (__int64)a3, a4);
  if ( *(_QWORD *)(gptiCurrent + 584LL) )
    goto LABEL_29;
  if ( (*(_BYTE *)(a1 + 71) & 0xC0) == 0x40 )
  {
    do
    {
      if ( (*(_BYTE *)(a1 + 70) & 8) != 0 )
        break;
      a1 = *(_QWORD *)(a1 + 104);
    }
    while ( (*(_BYTE *)(a1 + 71) & 0xC0) == 0x40 );
  }
  else
  {
    a1 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 408LL) + 120LL);
  }
  if ( !a1 )
    goto LABEL_29;
  v7 = safe_cast_fnid_to_PMENUWND(a1);
  if ( v7 )
  {
    if ( *(_QWORD *)(v7 + 8) || *(_QWORD *)(v7 + 16) )
      goto LABEL_29;
  }
  if ( ((*(_BYTE *)(a1 + 71) & 0xC0) == 0x40 || !*(_QWORD *)(a1 + 208)) && (*(_BYTE *)(a1 + 70) & 8) == 0 )
    goto LABEL_29;
  v10 = *(_QWORD *)(a1 + 16);
  if ( *(_QWORD *)(v10 + 584) )
    goto LABEL_29;
  if ( v10 != v9 )
  {
    PostTransformableMessage(v8, 274LL, v4, a3, 1);
LABEL_29:
    v35 = 0LL;
    goto LABEL_30;
  }
  v11 = MNAllocPopup(0);
  SmartObjStackRefBase<tagPOPUPMENU>::operator=(v37, (__int64)v11);
  if ( !*(_QWORD *)v37[0] )
    goto LABEL_29;
  SmartObjStackRefBase<tagPOPUPMENU>::Init(v40, *(_QWORD *)v37[0], v12, v13);
  v14 = (struct tagMENUSTATE *)MNAllocMenuState(v40);
  if ( !v14 )
  {
    SmartObjStackRefBase<tagPOPUPMENU>::Init(v41, *(_QWORD *)v37[0], v15, v16);
    MNFreePopup(v41);
    if ( *(void *const *)v37[0] == gpopupMenu )
    {
      gdwPUDFlags &= ~0x800000u;
      NullifyLookasideRef(*((_QWORD *)&gpopupMenu + 11));
    }
    else
    {
      v17 = *(_QWORD *)v37[0];
      NullifyLookasideRef(*(_QWORD *)(*(_QWORD *)v37[0] + 88LL));
      Win32FreePool(v17, v18, v19);
    }
    goto LABEL_29;
  }
  MenuStateOwnerLockxxxUnlock::MenuStateOwnerLockxxxUnlock((MenuStateOwnerLockxxxUnlock *)&v47, v14);
  **(_DWORD **)v37[0] |= 1u;
  **(_DWORD **)v37[0] |= 2u;
  *((_QWORD *)&v38 + 1) = a1;
  *(_QWORD *)&v38 = *(_QWORD *)v37[0] + 8LL;
  v42 = v38;
  HMAssignmentLock(&v42);
  *(_DWORD *)(*(_QWORD *)v37[0] + 80LL) = -1;
  *((_QWORD *)&v39 + 1) = a1;
  *(_QWORD *)&v39 = *(_QWORD *)v37[0] + 16LL;
  v43 = v39;
  HMAssignmentLock(&v43);
  SmartObjStackRefBase<tagPOPUPMENU>::Init(v44, 0LL, v20, v21);
  SmartObjStackRefBase<tagPOPUPMENU>::Init(v45, *(_QWORD *)v37[0], v22, v23);
  MNMarkDelayedFreePopup(v45, v44, v24, v25);
  *(_QWORD *)(*(_QWORD *)v37[0] + 64LL) = *(_QWORD *)v37[0];
  v28 = a1;
  for ( i = *(_BYTE *)(a1 + 71); (i & 0xC0) == 0x40; i = *(_BYTE *)(v28 + 71) )
    v28 = *(_QWORD *)(v28 + 104);
  v30 = *(_QWORD *)(v28 + 208);
  if ( v30 )
  {
    v31 = (**(_DWORD **)v37[0] ^ (*(_DWORD *)(v30 + 56) << 17)) & 0x400000;
    **(_DWORD **)v37[0] ^= v31;
  }
  else
  {
    v26 = *(_QWORD *)v37[0];
    v31 = **(_DWORD **)v37[0] & 0xFFBFFFFF | ((*(_BYTE *)(a1 + 65) & 0x20) << 17);
    **(_DWORD **)v37[0] = v31;
  }
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v31, v26, v27);
  v46[0] = *(_QWORD *)(ThreadWin32Thread + 392);
  *(_QWORD *)(ThreadWin32Thread + 392) = v46;
  v46[1] = a1;
  _InterlockedIncrement((volatile signed __int32 *)(a1 + 8));
  xxxSendMessage(a1);
  ThreadUnlock1(v34, v33);
  v35 = v47;
  if ( !v47 || (unsigned int)xxxUnlockMenuState(v47) )
    goto LABEL_29;
LABEL_30:
  SmartObjStackRef<tagPOPUPMENU>::~SmartObjStackRef<tagPOPUPMENU>((__int64)v37);
  return v35;
}
