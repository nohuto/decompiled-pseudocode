/*
 * XREFs of xxxInsertMenuItem @ 0x1C0041F78
 * Callers:
 *     NtUserThunkedMenuItemInfo @ 0x1C0041DB0 (NtUserThunkedMenuItemInfo.c)
 * Callees:
 *     MNLookUpItem @ 0x1C004192C (MNLookUpItem.c)
 *     MNGetpItemIndex @ 0x1C004231C (MNGetpItemIndex.c)
 *     ?xxxRedrawForSetLPITEMInfo@@YAXPEAUtagMENU@@PEAUtagITEM@@@Z @ 0x1C0042360 (-xxxRedrawForSetLPITEMInfo@@YAXPEAUtagMENU@@PEAUtagITEM@@@Z.c)
 *     MNGetPopupFromMenu @ 0x1C00424E4 (MNGetPopupFromMenu.c)
 *     ??1?$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@XZ @ 0x1C004258C (--1-$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@XZ.c)
 *     ?Init@?$SmartObjStackRef@UtagPOPUPMENU@@@@QEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C00425E4 (-Init@-$SmartObjStackRef@UtagPOPUPMENU@@@@QEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     ?SetLPITEMInfoNoRedraw@@YAHPEAUtagMENU@@PEAUtagITEM@@PEAUtagMENUITEMINFOW@@PEAU_UNICODE_STRING@@PEAH@Z @ 0x1C0042670 (-SetLPITEMInfoNoRedraw@@YAHPEAUtagMENU@@PEAUtagITEM@@PEAUtagMENUITEMINFOW@@PEAU_UNICODE_STRING@@.c)
 *     MNIsUAHMenu @ 0x1C00429D0 (MNIsUAHMenu.c)
 *     DesktopAlloc @ 0x1C0042C20 (DesktopAlloc.c)
 *     MNFreeItem @ 0x1C0042C60 (MNFreeItem.c)
 *     ?UnregisterStack@UserAtomicCheck@@AEAAXXZ @ 0x1C00691E0 (-UnregisterStack@UserAtomicCheck@@AEAAXXZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C006922C (--0UserAtomicCheck@@QEAA@XZ.c)
 *     memmove @ 0x1C01401C0 (memmove.c)
 *     memset @ 0x1C0140500 (memset.c)
 *     ?MNDeleteAdjustIndexes@@YAXPEAUtagMENUSTATE@@V?$SmartObjStackRef@UtagPOPUPMENU@@@@I@Z @ 0x1C02128DC (-MNDeleteAdjustIndexes@@YAXPEAUtagMENUSTATE@@V-$SmartObjStackRef@UtagPOPUPMENU@@@@I@Z.c)
 *     xxxMNSetGapState @ 0x1C0212DEC (xxxMNSetGapState.c)
 *     MakeMenuRtoL @ 0x1C02178C4 (MakeMenuRtoL.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxInsertMenuItem(
        __int64 a1,
        unsigned int a2,
        int a3,
        struct tagMENUITEMINFOW *a4,
        struct _UNICODE_STRING *a5)
{
  unsigned int v5; // ebx
  __int64 v9; // r13
  int v10; // r15d
  __int64 v11; // rdx
  int v12; // r11d
  _QWORD *v13; // rdi
  unsigned int v14; // r9d
  unsigned int v15; // ecx
  unsigned int v16; // r10d
  __int64 v17; // r8
  unsigned int v18; // ecx
  unsigned int v19; // eax
  __int64 v20; // rcx
  unsigned int v21; // r14d
  __int64 v22; // rax
  __int64 v23; // rsi
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v28; // rcx
  void *v29; // r12
  __int64 v30; // rax
  int v31; // eax
  __int64 v32; // rax
  __int64 v33; // rax
  unsigned int v34; // eax
  unsigned int v35; // eax
  unsigned int v36; // eax
  signed int v37; // eax
  __int64 v38; // r8
  __int64 v39; // rcx
  __int64 v40; // [rsp+30h] [rbp-61h] BYREF
  __int64 v41; // [rsp+38h] [rbp-59h] BYREF
  _QWORD **v42; // [rsp+40h] [rbp-51h]
  __int64 v43; // [rsp+50h] [rbp-41h] BYREF
  __int64 v44; // [rsp+58h] [rbp-39h] BYREF
  char v45[8]; // [rsp+60h] [rbp-31h] BYREF
  __int64 v46; // [rsp+68h] [rbp-29h] BYREF
  __int64 v47; // [rsp+70h] [rbp-21h]
  _BYTE v48[96]; // [rsp+80h] [rbp-11h] BYREF
  int v49; // [rsp+F0h] [rbp+5Fh] BYREF
  int v50; // [rsp+100h] [rbp+6Fh]
  struct tagMENUITEMINFOW *v51; // [rsp+108h] [rbp+77h]

  v51 = a4;
  v50 = a3;
  v5 = 0;
  v44 = 0LL;
  v9 = 0LL;
  v10 = 1;
  SmartObjStackRef<tagPOPUPMENU>::Init(&v40, 0LL);
  v12 = -1;
  v49 = 0;
  if ( a2 == -1 )
  {
    v13 = 0LL;
  }
  else
  {
    v13 = (_QWORD *)MNLookUpItem(a1, a2, a3, &v43);
    if ( v13 )
      a1 = v43;
    else
      a2 = v12;
  }
  if ( (*(_DWORD *)(a1 + 56) & 1) == 0 )
  {
    v14 = *(_DWORD *)(a1 + 68);
    if ( v14 )
    {
      if ( (*((_DWORD *)v51 + 1) & 0x80u) == 0 || (unsigned __int64)(*((_QWORD *)v51 + 9) - 1LL) > 6 )
      {
        v15 = a2;
        v16 = a2;
        if ( v13 && !a3 )
          v15 = MNGetpItemIndex(a1, v13);
        v17 = *(_QWORD *)(a1 + 96);
        if ( v15 )
        {
          if ( v15 == v12 )
            v15 = v14;
          v18 = v12 + v15;
          v11 = 152LL * v18 + 104;
          if ( !v18 )
            goto LABEL_15;
          v11 += v17;
          do
          {
            if ( (unsigned __int64)(*(_QWORD *)v11 - 1LL) > 5 )
              break;
            v11 -= 152LL;
            v50 = 1;
            a2 = v18;
            v18 += v12;
          }
          while ( v18 );
        }
        else
        {
          v31 = 1;
          if ( *(_QWORD *)(v17 + 104) == 1LL )
            a2 = 1;
          else
            v31 = a3;
          v50 = v31;
        }
        if ( a2 != v16 )
          v13 = (_QWORD *)(v17 + 152LL * a2);
      }
    }
  }
LABEL_15:
  v19 = *(_DWORD *)(a1 + 64);
  if ( *(_DWORD *)(a1 + 68) < v19 )
    goto LABEL_16;
  v28 = *(_QWORD *)(a1 + 24);
  if ( *(_QWORD *)(a1 + 96) )
  {
    v29 = (void *)DesktopAlloc(v28, 152 * (v19 + 8), 7LL);
    if ( !v29 )
      goto LABEL_30;
    memmove(v29, *(const void **)(a1 + 96), 152LL * *(unsigned int *)(a1 + 64));
    RtlFreeHeap(*(PVOID *)(*(_QWORD *)(a1 + 24) + 128LL), 0, *(PVOID *)(a1 + 96));
  }
  else
  {
    v29 = (void *)DesktopAlloc(v28, 1216LL, 7LL);
  }
  if ( v29 )
  {
    *(_DWORD *)(a1 + 64) += 8;
    *(_QWORD *)(a1 + 96) = v29;
    if ( a2 == -1 || (v13 = (_QWORD *)MNLookUpItem(a1, a2, v50, &v43), a1 == v43) )
    {
LABEL_16:
      v20 = gptiCurrent;
      v46 = *(_QWORD *)(gptiCurrent + 368LL);
      *(_QWORD *)(gptiCurrent + 368LL) = &v46;
      v47 = a1;
      ++*(_DWORD *)(a1 + 8);
      if ( !v13 )
      {
LABEL_17:
        v21 = 0;
        goto LABEL_18;
      }
      v20 = MNGetPopupFromMenu(a1, &v44);
      v30 = v40;
      if ( v40 != v20 )
      {
        if ( v40 )
        {
          v32 = v41;
          v11 = (__int64)v42;
          if ( *(__int64 **)(v41 + 8) != &v41 || *v42 != &v41 )
            __fastfail(3u);
          *v42 = (_QWORD *)v41;
          *(_QWORD *)(v32 + 8) = v11;
        }
        v40 = v20;
        if ( !v20 )
        {
LABEL_43:
          v9 = v44;
          goto LABEL_17;
        }
        v20 += 88LL;
        v33 = *(_QWORD *)v20;
        if ( *(_QWORD *)(*(_QWORD *)v20 + 8LL) != v20 )
          __fastfail(3u);
        v41 = *(_QWORD *)v20;
        v11 = (__int64)&v41;
        v42 = (_QWORD **)v20;
        *(_QWORD *)(v33 + 8) = &v41;
        *(_QWORD *)v20 = &v41;
        v30 = v40;
      }
      if ( v30 )
      {
        UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v45);
        v34 = MNGetpItemIndex(a1, v13);
        v20 = v40;
        v21 = v34;
        v35 = *(_DWORD *)(v40 + 80);
        if ( v35 >= v21 )
        {
          *(_DWORD *)(v40 + 80) = v35 + 1;
          v20 = v40;
        }
        if ( (*(_DWORD *)v20 & 0x20) != 0 )
        {
          v36 = *(_DWORD *)(v20 + 84);
          if ( v36 >= v21 )
          {
            *(_DWORD *)(v20 + 84) = v36 + 1;
            v20 = v40;
          }
        }
        v9 = v44;
        if ( *(_QWORD *)(v44 + 64) == *(_QWORD *)(v20 + 16) )
        {
          v37 = *(_DWORD *)(v44 + 72);
          if ( v37 >= (int)v21 )
          {
            *(_DWORD *)(v44 + 72) = v37 + 1;
            v20 = v40;
          }
        }
        if ( *(_QWORD *)(v9 + 80) == *(_QWORD *)(v20 + 16) )
        {
          v11 = *(unsigned int *)(v9 + 88);
          if ( (int)v11 >= (int)v21 )
          {
            *(_DWORD *)(v9 + 88) = v11 + 1;
            if ( (_DWORD)v11 == v21 )
            {
              v38 = *(unsigned int *)(v9 + 92);
              if ( (v38 & 1) != 0 )
                xxxMNSetGapState(*(_QWORD *)(v9 + 80), v11, v38, 0LL);
            }
          }
        }
        if ( !v45[0] )
        {
          --gdwInAtomicOperation;
          UserAtomicCheck::UnregisterStack((UserAtomicCheck *)v45);
        }
LABEL_18:
        v22 = ThreadUnlock1(v20, v11);
        v23 = v22;
        if ( !v22 )
          goto LABEL_30;
        v24 = (unsigned int)++*(_DWORD *)(v22 + 68);
        if ( v13 )
          memmove(v13 + 19, v13, *(_QWORD *)(v23 + 96) + 152LL * (unsigned int)(v24 - 1) - (_QWORD)v13);
        else
          v13 = (_QWORD *)(152 * v24 + *(_QWORD *)(v23 + 96) - 152LL);
        *((_DWORD *)v13 + 28) = -1;
        *v13 = 0LL;
        *((_DWORD *)v13 + 2) = 0;
        v13[2] = 0LL;
        v13[3] = 0LL;
        v13[4] = 0LL;
        *((_DWORD *)v13 + 12) = 0;
        v13[8] = 0LL;
        v13[9] = 0LL;
        v13[10] = 0LL;
        v13[13] = 0LL;
        v13[5] = 0LL;
        v13[7] = 0LL;
        if ( (unsigned int)MNIsUAHMenu(v23) )
          memset(v13 + 15, 0, 0x20uLL);
        if ( (unsigned int)SetLPITEMInfoNoRedraw((struct tagMENU *)v23, (struct tagITEM *)v13, v51, a5, &v49) )
        {
          if ( !v49
            || (v46 = *(_QWORD *)(gptiCurrent + 368LL),
                *(_QWORD *)(gptiCurrent + 368LL) = &v46,
                v47 = v23,
                ++*(_DWORD *)(v23 + 8),
                xxxRedrawForSetLPITEMInfo((struct tagMENU *)v23, (struct tagITEM *)v13),
                (v23 = ThreadUnlock1(v26, v25)) != 0) )
          {
            if ( (unsigned int)MNGetpItemIndex(v23, v13) != -1
              && ((*(_DWORD *)(v23 + 56) & 0x20) != 0 || (*(_DWORD *)v13 & 0x2004) == 0x2000) )
            {
              *(_DWORD *)v13 |= 0x6000u;
              v39 = v13[2];
              if ( v39 )
                MakeMenuRtoL(v39, 1LL);
            }
            goto LABEL_29;
          }
        }
        else
        {
          if ( v40 )
          {
            SmartObjStackRef<tagPOPUPMENU>::Init(v48, v40);
            MNDeleteAdjustIndexes(v9, v48, v21);
          }
          MNFreeItem((struct tagMENU *)v23);
          memmove(
            v13,
            v13 + 19,
            (unsigned int)(152 * *(_DWORD *)(v23 + 68) - (_DWORD)v13 - 152 + *(_DWORD *)(v23 + 96)));
          --*(_DWORD *)(v23 + 68);
        }
        v10 = 0;
LABEL_29:
        v5 = v10;
        goto LABEL_30;
      }
      goto LABEL_43;
    }
  }
LABEL_30:
  SmartObjStackRef<tagPOPUPMENU>::~SmartObjStackRef<tagPOPUPMENU>(&v40);
  return v5;
}
