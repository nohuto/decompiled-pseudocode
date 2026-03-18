/*
 * XREFs of xxxMNStartMenuState @ 0x1C01EB83C
 * Callers:
 *     xxxSysCommand @ 0x1C0112C2C (xxxSysCommand.c)
 * Callees:
 *     ??1?$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@XZ @ 0x1C004258C (--1-$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@XZ.c)
 *     ?Init@?$SmartObjStackRef@UtagPOPUPMENU@@@@QEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C00425E4 (-Init@-$SmartObjStackRef@UtagPOPUPMENU@@@@QEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     xxxSendMessage @ 0x1C00509B0 (xxxSendMessage.c)
 *     safe_cast_fnid_to_PMENUWND @ 0x1C005D060 (safe_cast_fnid_to_PMENUWND.c)
 *     _PostTransformableMessage @ 0x1C00C9168 (_PostTransformableMessage.c)
 *     ??0MenuStateOwnerLockxxxUnlock@@QEAA@PEAUtagMENUSTATE@@@Z @ 0x1C01BC3BC (--0MenuStateOwnerLockxxxUnlock@@QEAA@PEAUtagMENUSTATE@@@Z.c)
 *     MNAllocMenuState @ 0x1C01EAAEC (MNAllocMenuState.c)
 *     MNAllocPopup @ 0x1C01EAC04 (MNAllocPopup.c)
 *     MNFreePopup @ 0x1C01EAF7C (MNFreePopup.c)
 *     MNMarkDelayedFreePopup @ 0x1C01EB044 (MNMarkDelayedFreePopup.c)
 *     xxxUnlockMenuState @ 0x1C01EBBA0 (xxxUnlockMenuState.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxMNStartMenuState(__int64 a1, unsigned int a2, struct _LARGE_STRING *a3)
{
  __int64 v3; // rsi
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // r9
  __int64 v9; // rax
  unsigned int *v10; // rax
  unsigned int *v11; // rdx
  _QWORD *v12; // rcx
  _QWORD **v13; // rdx
  _QWORD **v14; // rax
  _QWORD *v15; // rcx
  struct tagMENUSTATE *v16; // rax
  unsigned int *v17; // rdx
  _QWORD *v18; // rax
  _QWORD *v19; // rcx
  _QWORD *v20; // r8
  __int64 v21; // rcx
  char i; // al
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rbx
  _DWORD *v28; // [rsp+38h] [rbp-29h] BYREF
  __int64 v29; // [rsp+40h] [rbp-21h]
  _QWORD v30[3]; // [rsp+58h] [rbp-9h] BYREF
  unsigned int *v31; // [rsp+70h] [rbp+Fh] BYREF
  _QWORD *v32; // [rsp+78h] [rbp+17h] BYREF
  _QWORD **v33; // [rsp+80h] [rbp+1Fh]
  _QWORD v34[5]; // [rsp+90h] [rbp+2Fh] BYREF
  __int64 v35; // [rsp+E0h] [rbp+7Fh] BYREF

  v3 = a2;
  SmartObjStackRef<tagPOPUPMENU>::Init(&v31, 0LL);
  if ( *(_QWORD *)(gptiCurrent + 528LL) )
    goto LABEL_45;
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
    a1 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 384LL) + 88LL);
  }
  if ( !a1 )
    goto LABEL_45;
  v6 = safe_cast_fnid_to_PMENUWND(a1);
  if ( v6 )
  {
    if ( *(_QWORD *)(v6 + 8) || *(_QWORD *)(v6 + 16) )
      goto LABEL_45;
  }
  if ( ((*(_BYTE *)(a1 + 71) & 0xC0) == 0x40 || !*(_QWORD *)(a1 + 208)) && (*(_BYTE *)(a1 + 70) & 8) == 0 )
    goto LABEL_45;
  v9 = *(_QWORD *)(a1 + 16);
  if ( *(_QWORD *)(v9 + 528) )
    goto LABEL_45;
  if ( v9 != v8 )
  {
    PostTransformableMessage(v7, 274LL, v3, a3, 1);
    goto LABEL_45;
  }
  v10 = (unsigned int *)MNAllocPopup(0);
  v11 = v31;
  if ( v31 != v10 )
  {
    if ( v31 )
    {
      v12 = v32;
      v13 = v33;
      if ( (_QWORD **)v32[1] != &v32 || *v33 != &v32 )
        __fastfail(3u);
      *v33 = v32;
      v12[1] = v13;
    }
    v31 = v10;
    if ( !v10 )
      goto LABEL_45;
    v14 = (_QWORD **)(v10 + 22);
    v15 = *v14;
    if ( (_QWORD **)(*v14)[1] != v14 )
      __fastfail(3u);
    v32 = *v14;
    v33 = v14;
    v15[1] = &v32;
    *v14 = &v32;
    v11 = v31;
  }
  if ( !v11 )
    goto LABEL_45;
  SmartObjStackRef<tagPOPUPMENU>::Init(&v28, (__int64)v11);
  v16 = (struct tagMENUSTATE *)MNAllocMenuState(&v28);
  if ( !v16 )
  {
    SmartObjStackRef<tagPOPUPMENU>::Init(&v28, (__int64)v31);
    MNFreePopup((__int64 *)&v28);
    v17 = v31;
    if ( v31 == gpopupMenu )
    {
      gdwPUDFlags &= ~0x800000u;
    }
    else
    {
      v18 = v31 + 22;
      while ( (_QWORD *)*v18 != v18 )
      {
        v19 = (_QWORD *)*((_QWORD *)v17 + 12);
        v20 = (_QWORD *)v19[1];
        if ( (_QWORD *)*v19 != v18 || (_QWORD *)*v20 != v19 )
          __fastfail(3u);
        *((_QWORD *)v17 + 12) = v20;
        *v20 = v18;
        *(v19 - 1) = 0LL;
      }
      Win32FreePool(v17);
    }
    goto LABEL_45;
  }
  MenuStateOwnerLockxxxUnlock::MenuStateOwnerLockxxxUnlock((MenuStateOwnerLockxxxUnlock *)&v35, v16);
  v29 = a1;
  *v31 |= 1u;
  *v31 |= 2u;
  v28 = v31 + 2;
  HMAssignmentLock(&v28);
  v29 = a1;
  v31[20] = -1;
  v28 = v31 + 4;
  HMAssignmentLock(&v28);
  SmartObjStackRef<tagPOPUPMENU>::Init(&v28, 0LL);
  SmartObjStackRef<tagPOPUPMENU>::Init(v34, (__int64)v31);
  MNMarkDelayedFreePopup(v34, &v28);
  v21 = a1;
  *((_QWORD *)v31 + 8) = v31;
  for ( i = *(_BYTE *)(a1 + 71); (i & 0xC0) == 0x40; i = *(_BYTE *)(v21 + 71) )
    v21 = *(_QWORD *)(v21 + 104);
  v23 = *(_QWORD *)(v21 + 208);
  if ( v23 )
    *v31 ^= (*v31 ^ (*(_DWORD *)(v23 + 56) << 17)) & 0x400000;
  else
    *v31 = *v31 & 0xFFBFFFFF | (((*(unsigned __int8 *)(a1 + 65) >> 5) & 1) << 22);
  v30[0] = *(_QWORD *)(gptiCurrent + 368LL);
  *(_QWORD *)(gptiCurrent + 368LL) = v30;
  v30[1] = a1;
  ++*(_DWORD *)(a1 + 8);
  xxxSendMessage(a1, 529, 0, 0);
  ThreadUnlock1(v25, v24);
  v26 = v35;
  if ( !v35 || (unsigned int)xxxUnlockMenuState(v35) )
LABEL_45:
    v26 = 0LL;
  SmartObjStackRef<tagPOPUPMENU>::~SmartObjStackRef<tagPOPUPMENU>(&v31);
  return v26;
}
