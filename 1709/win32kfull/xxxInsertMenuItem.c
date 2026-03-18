/*
 * XREFs of xxxInsertMenuItem @ 0x1C0096D20
 * Callers:
 *     NtUserThunkedMenuItemInfo @ 0x1C0096B20 (NtUserThunkedMenuItemInfo.c)
 * Callees:
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C006E870 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C006E8C8 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     MNLookUpItem @ 0x1C0077DF8 (MNLookUpItem.c)
 *     ?xxxRedrawForSetLPITEMInfo@@YAXPEAUtagMENU@@PEAUtagITEM@@@Z @ 0x1C0097220 (-xxxRedrawForSetLPITEMInfo@@YAXPEAUtagMENU@@PEAUtagITEM@@@Z.c)
 *     MNGetPopupFromMenu @ 0x1C0097378 (MNGetPopupFromMenu.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C0097514 (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C00975A4 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     ??4?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z @ 0x1C0097640 (--4-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z.c)
 *     MNGetpItemIndex @ 0x1C0097670 (MNGetpItemIndex.c)
 *     ?SetLPITEMInfoNoRedraw@@YAHPEAUtagMENU@@PEAUtagITEM@@PEAUtagMENUITEMINFOW@@PEAU_UNICODE_STRING@@PEAH@Z @ 0x1C00976B4 (-SetLPITEMInfoNoRedraw@@YAHPEAUtagMENU@@PEAUtagITEM@@PEAUtagMENUITEMINFOW@@PEAU_UNICODE_STRING@@.c)
 *     MNIsUAHMenu @ 0x1C0097A28 (MNIsUAHMenu.c)
 *     DesktopAlloc @ 0x1C0097C60 (DesktopAlloc.c)
 *     MNFreeItem @ 0x1C009C568 (MNFreeItem.c)
 *     IsThreadCrossSessionAttached @ 0x1C0143CAC (IsThreadCrossSessionAttached.c)
 *     memmove @ 0x1C01456C0 (memmove.c)
 *     memset @ 0x1C0145A00 (memset.c)
 *     ?MNDeleteAdjustIndexes@@YAXPEAUtagMENUSTATE@@V?$SmartObjStackRef@UtagPOPUPMENU@@@@I@Z @ 0x1C0213E0C (-MNDeleteAdjustIndexes@@YAXPEAUtagMENUSTATE@@V-$SmartObjStackRef@UtagPOPUPMENU@@@@I@Z.c)
 *     xxxMNSetGapState @ 0x1C0214314 (xxxMNSetGapState.c)
 *     MakeMenuRtoL @ 0x1C0218A48 (MakeMenuRtoL.c)
 */

__int64 __fastcall xxxInsertMenuItem(__int64 a1, unsigned int a2, int a3, __int64 a4, struct _UNICODE_STRING *a5)
{
  unsigned int v5; // ebx
  int v10; // r14d
  _QWORD *v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  int v15; // r11d
  _QWORD *v16; // rdi
  unsigned int v17; // ecx
  unsigned int v18; // r10d
  int v19; // eax
  unsigned int v20; // eax
  __int64 v21; // rcx
  void *v22; // r12
  struct _KTHREAD *CurrentThread; // r12
  __int64 v24; // r15
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 *ThreadWin32Thread; // rax
  __int64 v28; // rax
  unsigned int v29; // r15d
  signed int v30; // eax
  __int64 v31; // rcx
  __int64 v32; // rdx
  __int64 v33; // r8
  __int64 v34; // rax
  __int64 v35; // rsi
  __int64 v36; // rcx
  __int64 v37; // rax
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // r9
  struct _KTHREAD *v42; // r12
  __int64 v43; // r15
  __int64 *v44; // rax
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // rcx
  __int64 v49; // [rsp+30h] [rbp-50h] BYREF
  __int64 v50; // [rsp+38h] [rbp-48h] BYREF
  _BYTE v51[8]; // [rsp+40h] [rbp-40h] BYREF
  _QWORD v52[2]; // [rsp+48h] [rbp-38h] BYREF
  _BYTE v53[16]; // [rsp+58h] [rbp-28h] BYREF
  __int64 v54; // [rsp+68h] [rbp-18h] BYREF
  __int64 v55; // [rsp+70h] [rbp-10h]
  int v56; // [rsp+C0h] [rbp+40h] BYREF
  struct tagMENUITEMINFOW *v57; // [rsp+D8h] [rbp+58h]

  v57 = (struct tagMENUITEMINFOW *)a4;
  v5 = 0;
  v49 = 0LL;
  v10 = 1;
  SmartObjStackRefBase<tagPOPUPMENU>::Init(v52);
  v15 = -1;
  v56 = 0;
  if ( a2 == -1 )
  {
    v16 = 0LL;
  }
  else
  {
    v16 = (_QWORD *)MNLookUpItem(a1, a2, a3, &v50);
    if ( v16 )
      a1 = v50;
    else
      a2 = v15;
  }
  if ( (*(_DWORD *)(a1 + 56) & 1) == 0 )
  {
    v14 = *(unsigned int *)(a1 + 68);
    if ( (_DWORD)v14 )
    {
      if ( (*(_DWORD *)(a4 + 4) & 0x80u) == 0 || (unsigned __int64)(*(_QWORD *)(a4 + 72) - 1LL) > 6 )
      {
        v17 = a2;
        v18 = a2;
        if ( v16 && !a3 )
          v17 = MNGetpItemIndex(a1, v16);
        v13 = *(_QWORD *)(a1 + 96);
        if ( v17 )
        {
          if ( v17 == v15 )
            v17 = v14;
          v12 = v15 + v17;
          v11 = (_QWORD *)(152LL * (unsigned int)v12 + 104);
          if ( !(_DWORD)v12 )
            goto LABEL_26;
          v11 = (_QWORD *)((char *)v11 + v13);
          do
          {
            if ( (unsigned __int64)(*v11 - 1LL) > 5 )
              break;
            v11 -= 19;
            a2 = v12;
            a3 = 1;
            v12 = (unsigned int)(v15 + v12);
          }
          while ( (_DWORD)v12 );
        }
        else
        {
          v12 = *(_QWORD *)(v13 + 104);
          v19 = 1;
          if ( v12 == 1 )
            a2 = 1;
          else
            v19 = a3;
          a3 = v19;
        }
        if ( a2 != v18 )
          v16 = (_QWORD *)(v13 + 152LL * a2);
      }
    }
  }
LABEL_26:
  v20 = *(_DWORD *)(a1 + 64);
  if ( *(_DWORD *)(a1 + 68) < v20 )
    goto LABEL_34;
  v21 = *(_QWORD *)(a1 + 24);
  if ( *(_QWORD *)(a1 + 96) )
  {
    v22 = (void *)DesktopAlloc(v21, 152 * (v20 + 8), 7LL);
    if ( !v22 )
      goto LABEL_76;
    memmove(v22, *(const void **)(a1 + 96), 152LL * *(unsigned int *)(a1 + 64));
    RtlFreeHeap(*(PVOID *)(*(_QWORD *)(a1 + 24) + 128LL), 0, *(PVOID *)(a1 + 96));
  }
  else
  {
    v22 = (void *)DesktopAlloc(v21, 1216LL, 7LL);
  }
  if ( v22 )
  {
    *(_DWORD *)(a1 + 64) += 8;
    *(_QWORD *)(a1 + 96) = v22;
    if ( a2 == -1 || (v16 = (_QWORD *)MNLookUpItem(a1, a2, a3, &v50), a1 == v50) )
    {
LABEL_34:
      CurrentThread = KeGetCurrentThread();
      v24 = 0LL;
      if ( !(unsigned int)IsThreadCrossSessionAttached(v12, v11, v13, v14) )
      {
        ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
        if ( ThreadWin32Thread )
          v24 = *ThreadWin32Thread;
      }
      v54 = *(_QWORD *)(v24 + 392);
      *(_QWORD *)(v24 + 392) = &v54;
      v55 = a1;
      _InterlockedAdd((volatile signed __int32 *)(a1 + 8), 1u);
      if ( v16
        && (v28 = MNGetPopupFromMenu(a1, &v49),
            SmartObjStackRefBase<tagPOPUPMENU>::operator=(v52, v28),
            *(_QWORD *)v52[0]) )
      {
        UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v51);
        v29 = MNGetpItemIndex(a1, v16);
        if ( *(_DWORD *)(*(_QWORD *)v52[0] + 80LL) >= v29 )
          ++*(_DWORD *)(*(_QWORD *)v52[0] + 80LL);
        if ( (**(_DWORD **)v52[0] & 0x20) != 0 && *(_DWORD *)(*(_QWORD *)v52[0] + 84LL) >= v29 )
          ++*(_DWORD *)(*(_QWORD *)v52[0] + 84LL);
        if ( *(_QWORD *)(v49 + 64) == *(_QWORD *)(*(_QWORD *)v52[0] + 16LL) )
        {
          v30 = *(_DWORD *)(v49 + 72);
          if ( v30 >= (int)v29 )
            *(_DWORD *)(v49 + 72) = v30 + 1;
        }
        v31 = v49;
        if ( *(_QWORD *)(v49 + 80) == *(_QWORD *)(*(_QWORD *)v52[0] + 16LL) )
        {
          v32 = *(unsigned int *)(v49 + 88);
          if ( (int)v32 >= (int)v29 )
          {
            *(_DWORD *)(v49 + 88) = v32 + 1;
            if ( (_DWORD)v32 == v29 )
            {
              v33 = *(unsigned int *)(v31 + 92);
              if ( (v33 & 1) != 0 )
                xxxMNSetGapState(*(_QWORD *)(v31 + 80), v32, v33, 0LL);
            }
          }
        }
        UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v51);
      }
      else
      {
        v29 = 0;
      }
      v34 = ThreadUnlock1(v26, v25);
      v35 = v34;
      if ( v34 )
      {
        v36 = *(unsigned int *)(v34 + 68);
        v37 = (unsigned int)(v36 + 1);
        *(_DWORD *)(v35 + 68) = v37;
        if ( v16 )
          memmove(v16 + 19, v16, *(_QWORD *)(v35 + 96) + 152 * v36 - (_QWORD)v16);
        else
          v16 = (_QWORD *)(152 * v37 + *(_QWORD *)(v35 + 96) - 152LL);
        *((_DWORD *)v16 + 28) = -1;
        *v16 = 0LL;
        *((_DWORD *)v16 + 2) = 0;
        v16[2] = 0LL;
        v16[3] = 0LL;
        v16[4] = 0LL;
        *((_DWORD *)v16 + 12) = 0;
        v16[8] = 0LL;
        v16[9] = 0LL;
        v16[10] = 0LL;
        v16[13] = 0LL;
        v16[5] = 0LL;
        v16[7] = 0LL;
        if ( (unsigned int)MNIsUAHMenu(v35) )
          memset(v16 + 15, 0, 0x20uLL);
        if ( (unsigned int)SetLPITEMInfoNoRedraw((struct tagMENU *)v35, (struct tagITEM *)v16, v57, a5, &v56) )
        {
          if ( !v56 )
            goto LABEL_79;
          v42 = KeGetCurrentThread();
          v43 = 0LL;
          if ( !(unsigned int)IsThreadCrossSessionAttached(v39, v38, v40, v41) )
          {
            v44 = (__int64 *)PsGetThreadWin32Thread(v42);
            if ( v44 )
              v43 = *v44;
          }
          v54 = *(_QWORD *)(v43 + 392);
          *(_QWORD *)(v43 + 392) = &v54;
          v55 = v35;
          _InterlockedAdd((volatile signed __int32 *)(v35 + 8), 1u);
          xxxRedrawForSetLPITEMInfo((struct tagMENU *)v35, (struct tagITEM *)v16);
          v35 = ThreadUnlock1(v46, v45);
          if ( v35 )
          {
LABEL_79:
            if ( (unsigned int)MNGetpItemIndex(v35, v16) != -1
              && ((*(_DWORD *)(v35 + 56) & 0x20) != 0 || (*(_DWORD *)v16 & 0x2004) == 0x2000) )
            {
              *(_DWORD *)v16 |= 0x6000u;
              v47 = v16[2];
              if ( v47 )
                MakeMenuRtoL(v47, 1LL);
            }
            goto LABEL_75;
          }
        }
        else
        {
          if ( *(_QWORD *)v52[0] )
          {
            SmartObjStackRefBase<tagPOPUPMENU>::Init(v53);
            MNDeleteAdjustIndexes(v49, v53, v29);
          }
          MNFreeItem((struct tagMENU *)v35);
          memmove(
            v16,
            v16 + 19,
            (unsigned int)(152 * *(_DWORD *)(v35 + 68) - (_DWORD)v16 - 152 + *(_DWORD *)(v35 + 96)));
          --*(_DWORD *)(v35 + 68);
        }
        v10 = 0;
LABEL_75:
        v5 = v10;
      }
    }
  }
LABEL_76:
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v52);
  return v5;
}
