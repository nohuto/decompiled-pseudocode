/*
 * XREFs of GreSetDCOwnerEx @ 0x1C002DA50
 * Callers:
 *     CreateCacheDC @ 0x1C0028CC0 (CreateCacheDC.c)
 *     GetMonitorDC @ 0x1C002A240 (GetMonitorDC.c)
 *     ReleaseCacheDC @ 0x1C002FBD0 (ReleaseCacheDC.c)
 *     _GetDCEx @ 0x1C0033980 (_GetDCEx.c)
 *     DestroyCacheDC @ 0x1C0044760 (DestroyCacheDC.c)
 *     DestroyProcessInfo @ 0x1C00509D8 (DestroyProcessInfo.c)
 *     InitUserScreen @ 0x1C00631F8 (InitUserScreen.c)
 *     ?DestroyDC@@YAXPEAPEAUHDC__@@@Z @ 0x1C0078B6C (-DestroyDC@@YAXPEAPEAUHDC__@@@Z.c)
 * Callees:
 *     HmgFreeDcAttr @ 0x1C002BCB0 (HmgFreeDcAttr.c)
 *     HmgAllocateDcAttr @ 0x1C002C1D4 (HmgAllocateDcAttr.c)
 *     GreSetBrushOwner @ 0x1C002E550 (GreSetBrushOwner.c)
 *     HmgDecProcessHandleCount @ 0x1C002F18C (HmgDecProcessHandleCount.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C0030AC0 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?Pid@HANDLELOCK@@QEAAXK@Z @ 0x1C00311DC (-Pid@HANDLELOCK@@QEAAXK@Z.c)
 *     ?GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C0033500 (-GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 *     ?GrepValidateVisRgn@@YAXPEAVDC@@PEAVREGION@@@Z @ 0x1C0036C18 (-GrepValidateVisRgn@@YAXPEAVDC@@PEAVREGION@@@Z.c)
 *     HmgIncProcessHandleCount @ 0x1C0076CF8 (HmgIncProcessHandleCount.c)
 *     GreIncQuotaCount @ 0x1C007F0C0 (GreIncQuotaCount.c)
 *     ?RECSTACKBACKTRACE@@YAXI@Z @ 0x1C00EBD24 (-RECSTACKBACKTRACE@@YAXI@Z.c)
 *     Template_pqz @ 0x1C00FD124 (Template_pqz.c)
 *     Template_pz @ 0x1C00FD1E8 (Template_pz.c)
 */

__int64 __fastcall GreSetDCOwnerEx(unsigned int a1, unsigned int a2, int a3, int a4)
{
  struct _ERESOURCE *v5; // rbx
  unsigned __int16 *v6; // rsi
  __int64 v7; // rdi
  char v8; // r12
  int v9; // r15d
  unsigned int v10; // r14d
  GdiHandleManager *v11; // r13
  __int64 v12; // rbx
  unsigned int v13; // edx
  signed int v14; // ecx
  __int64 v15; // rbx
  char v16; // r12
  __int64 v18; // rcx
  __int64 v19; // r9
  unsigned int v20; // edx
  __int64 v21; // r9
  unsigned int v23; // edi
  __int64 v24; // rcx
  unsigned int v25; // r8d
  signed int v26; // edx
  __int64 v27; // rcx
  __int64 v28; // rdi
  unsigned int v29; // ebx
  _OWORD *v30; // rax
  _OWORD *v31; // rcx
  __int64 v32; // rdx
  BOOL v33; // r13d
  unsigned int v34; // r14d
  __int64 v35; // rcx
  unsigned int v36; // r8d
  signed int v37; // edx
  __int64 v38; // rax
  _QWORD *v39; // rdx
  unsigned int CurrentProcessId; // eax
  int v41; // ecx
  BOOL v42; // eax
  unsigned int v43; // edi
  __int64 v44; // rcx
  unsigned int v45; // r8d
  signed int v46; // edx
  __int64 v47; // rax
  _DWORD *v48; // rdx
  GdiHandleManager *v49; // rsi
  int v50; // eax
  __int64 v51; // rbx
  __int64 v52; // rcx
  unsigned int v53; // r8d
  signed int v54; // edx
  __int64 v55; // r10
  __int64 v56; // rcx
  __int64 v58; // rdx
  unsigned int v59; // ebx
  unsigned int v60; // eax
  int v61; // r14d
  __int64 v62; // r8
  unsigned int v63; // eax
  __int64 v64; // rdx
  __int64 v65; // rcx
  bool v66; // zf
  int v67; // eax
  _OWORD *v68; // rcx
  _OWORD *v69; // rax
  __int64 v70; // rdx
  unsigned int v71; // r14d
  __int64 v72; // rcx
  unsigned int v73; // r8d
  signed int v74; // edx
  __int64 v75; // rax
  _QWORD *v76; // rdx
  unsigned int v77; // ecx
  unsigned int v78; // ebx
  __int64 CurrentProcessWin32Process; // rax
  unsigned int v80; // ebx
  unsigned int v81; // ebx
  unsigned int v82; // ebx
  unsigned int v83; // edi
  unsigned int v84; // [rsp+30h] [rbp-98h]
  BOOL v85; // [rsp+34h] [rbp-94h]
  __int64 DcAttr; // [rsp+40h] [rbp-88h]
  __int64 v87; // [rsp+48h] [rbp-80h]
  unsigned __int16 *v88; // [rsp+50h] [rbp-78h] BYREF
  int v89; // [rsp+58h] [rbp-70h]
  int v90; // [rsp+5Ch] [rbp-6Ch]
  BOOL v91; // [rsp+68h] [rbp-60h]
  BOOL v92; // [rsp+6Ch] [rbp-5Ch]
  __int64 v93; // [rsp+70h] [rbp-58h]
  _BYTE v94[8]; // [rsp+78h] [rbp-50h] BYREF
  __int64 v95; // [rsp+80h] [rbp-48h]
  __int64 v96; // [rsp+88h] [rbp-40h]
  __int16 v97; // [rsp+D2h] [rbp+Ah]

  v97 = HIWORD(a1);
  v84 = 0;
  DcAttr = 0LL;
  v85 = a3 == 0;
  v91 = v85;
  v92 = v85;
  if ( a2 == -2147483646 && !a3 )
    DcAttr = HmgAllocateDcAttr();
  v5 = ghsemHmgr;
  if ( ghsemHmgr )
  {
    PsEnterPriorityRegion();
    ExEnterCriticalRegionAndAcquireResourceExclusive(v5);
    LODWORD(v5) = (_DWORD)ghsemHmgr;
  }
  if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
    Template_pqz(a1, a2, a3, (_DWORD)v5, 16, (__int64)L"ghsemHmgr");
  v6 = 0LL;
  v88 = 0LL;
  v7 = (unsigned __int16)a1 | (a1 >> 8) & 0xFF0000;
  PsGetCurrentThreadWin32ThreadAndEnterCriticalRegion(v94);
  v8 = 1;
  v9 = 1;
  v89 = 1;
  v10 = v7;
  v11 = gpHandleManager;
  if ( (unsigned int)v7 >= 0x10000 )
  {
    if ( *(_DWORD *)gpHandleManager > 0x10000u )
    {
      if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                  *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                  (unsigned __int16)v7,
                                  1)
           + 13) == WORD1(v7) )
        v10 = (unsigned __int16)v7;
    }
    else
    {
      v10 = (unsigned __int16)v7;
    }
  }
  v12 = *((_QWORD *)v11 + 2);
  v13 = *(_DWORD *)(v12 + 2056);
  if ( v10 >= v13 + ((*(unsigned __int16 *)(v12 + 2) + 0xFFFF) << 16) )
    goto LABEL_156;
  if ( v10 >= v13 )
  {
    v14 = ((v10 - v13) >> 16) + 1;
    if ( (v10 - v13) >> 16 == -2 )
      goto LABEL_156;
  }
  else
  {
    v14 = 0;
  }
  v15 = *(_QWORD *)(v12 + 8LL * v14 + 8);
  v95 = v15;
  if ( v14 )
    v10 = v10 - (v14 << 16) - v13 + 0x10000;
  v16 = 0;
  if ( v10 >= *(_DWORD *)(v15 + 20) )
    goto LABEL_155;
  v93 = 16LL * (unsigned __int8)v10;
  v87 = v93 + *(_QWORD *)(**(_QWORD **)(v15 + 24) + 8LL * (v10 >> 8));
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v87, 0LL);
  if ( v10 < *(_DWORD *)(v15 + 20) && *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v15 + 24) + 8LL * (v10 >> 8)) + v93 + 8) )
  {
    v18 = 3LL * v10;
    *(_DWORD *)(*(_QWORD *)v15 + 24LL * v10 + 8) |= 1u;
    v16 = 1;
  }
  else
  {
    ExReleasePushLockExclusiveEx(v87, 0LL);
    KeLeaveCriticalRegion();
  }
  if ( !v16 )
  {
LABEL_155:
    v8 = 1;
LABEL_156:
    v9 = 0;
    v89 = 0;
    KeLeaveCriticalRegion();
    goto LABEL_35;
  }
  if ( (unsigned int)v7 >= 0x10000 )
  {
    if ( *(_DWORD *)gpHandleManager > 0x10000u )
    {
      v18 = *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                   *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                   (unsigned __int16)v7,
                                   1)
            + 13);
      if ( (_DWORD)v18 == WORD1(v7) )
        v7 = (unsigned __int16)v7;
    }
    else
    {
      v7 = (unsigned __int16)v7;
    }
  }
  v19 = *((_QWORD *)gpHandleManager + 2);
  v20 = *(_DWORD *)(v19 + 2056);
  if ( (unsigned int)v7 < v20 + ((*(unsigned __int16 *)(v19 + 2) + 0xFFFF) << 16) )
  {
    if ( (unsigned int)v7 < v20 )
    {
      v18 = 0LL;
LABEL_26:
      v21 = *(_QWORD *)(v19 + 8LL * (int)v18 + 8);
      v93 = v21;
      if ( (_DWORD)v18 )
      {
        v18 = (unsigned int)((_DWORD)v18 << 16);
        v7 = (_DWORD)v7 - (_DWORD)v18 - v20 + 0x10000;
      }
      v8 = 1;
      if ( (unsigned int)v7 < *(_DWORD *)(v21 + 20) )
      {
        v18 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v21 + 24) + 8LL * ((unsigned int)v7 >> 8))
                        + 16LL * (unsigned __int8)v7
                        + 8);
        if ( v18 )
        {
          v18 = 3 * v7;
          v6 = (unsigned __int16 *)(*(_QWORD *)v21 + 24 * v7);
        }
      }
      goto LABEL_33;
    }
    v18 = (((unsigned int)v7 - v20) >> 16) + 1;
    if ( ((unsigned int)v7 - v20) >> 16 != -2 )
      goto LABEL_26;
  }
  v8 = 1;
LABEL_33:
  v88 = v6;
  _m_prefetchw(v6 + 4);
  v90 = *((_DWORD *)v6 + 2);
  if ( (*((_BYTE *)v6 + 15) & 0x20) != 0 )
  {
    HANDLELOCK::vUnlock((HANDLELOCK *)&v88);
    v9 = v89;
    v6 = v88;
  }
LABEL_35:
  if ( !v9 )
    goto LABEL_98;
  if ( v6 )
  {
    v23 = *(_DWORD *)v6 & 0xFFFFFF;
    if ( v23 >= 0x10000 )
    {
      if ( *(_DWORD *)gpHandleManager > 0x10000u )
      {
        v78 = *v6;
        if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                    *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                    v78,
                                    1)
             + 13) == HIWORD(v23) )
          v23 = v78;
      }
      else
      {
        v23 = *v6;
      }
    }
    v24 = *((_QWORD *)gpHandleManager + 2);
    v25 = *(_DWORD *)(v24 + 2056);
    if ( v23 >= v25 + ((*(unsigned __int16 *)(v24 + 2) + 0xFFFF) << 16) )
      goto LABEL_176;
    if ( v23 >= v25 )
    {
      v26 = ((v23 - v25) >> 16) + 1;
      if ( (v23 - v25) >> 16 == -2 )
        goto LABEL_176;
    }
    else
    {
      v26 = 0;
    }
    v27 = *(_QWORD *)(v24 + 8LL * v26 + 8);
    v96 = v27;
    if ( v26 )
      v23 = v23 - (v26 << 16) - v25 + 0x10000;
    if ( v23 < *(_DWORD *)(v27 + 20) )
    {
      v28 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v27 + 24) + 8LL * (v23 >> 8)) + 16LL * (unsigned __int8)v23 + 8);
LABEL_47:
      if ( *((_BYTE *)v6 + 14) != 1 )
        goto LABEL_73;
      if ( v6[6] != v97 )
        goto LABEL_73;
      if ( *(_WORD *)(v28 + 12) )
      {
        v6 = v88;
        if ( *(struct _KTHREAD **)(v28 + 16) != KeGetCurrentThread() )
          goto LABEL_73;
      }
      if ( a2 != -2147483630 )
      {
        if ( (*((_DWORD *)v6 + 2) & 0xFFFFFFFE) == 0x80000012 )
          GrepValidateVisRgn((struct DC *)v28, *(struct REGION **)(v28 + 1536));
        if ( a2 != -2147483630 && a2 )
        {
          v42 = v85;
          if ( a2 == -2147483646 )
          {
            v59 = (unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC;
            v60 = *((_DWORD *)v6 + 2) & 0xFFFFFFFE;
            if ( v60 != -2147483630 && v60 != v59 && v60 )
            {
LABEL_131:
              v42 = v85;
              v41 = v84;
LABEL_72:
              if ( a2 != -2147483630 && v41 && v42 && (unsigned int)GreSetBrushOwner(**(HBRUSH **)(v28 + 144), a2) )
                GreSetBrushOwner(**(HBRUSH **)(v28 + 152), a2);
LABEL_73:
              v43 = *(_DWORD *)v6 & 0xFFFFFF;
              if ( v43 >= 0x10000 )
              {
                if ( *(_DWORD *)gpHandleManager > 0x10000u )
                {
                  v82 = *v6;
                  if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                              *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                              v82,
                                              1)
                       + 13) == HIWORD(v43) )
                    v43 = v82;
                }
                else
                {
                  v43 = *v6;
                }
              }
              v44 = *((_QWORD *)gpHandleManager + 2);
              v45 = *(_DWORD *)(v44 + 2056);
              if ( v43 >= v45 + ((*(unsigned __int16 *)(v44 + 2) + 0xFFFF) << 16) )
                goto LABEL_199;
              if ( v43 >= v45 )
              {
                v46 = ((v43 - v45) >> 16) + 1;
                if ( (v43 - v45) >> 16 == -2 )
                  goto LABEL_199;
              }
              else
              {
                v46 = 0;
              }
              v47 = *(_QWORD *)(v44 + 8LL * v46 + 8);
              if ( v46 )
                v43 = v43 - (v46 << 16) - v45 + 0x10000;
              if ( v43 >= *(_DWORD *)(v47 + 20) )
                v8 = 0;
              if ( v8 )
              {
                v48 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)(v47 + 24) + 8 * ((unsigned __int64)v43 >> 8))
                                 + 16LL * (unsigned __int8)v43
                                 + 8);
                goto LABEL_85;
              }
LABEL_199:
              v48 = 0LL;
LABEL_85:
              v49 = gpHandleManager;
              v50 = (unsigned __int16)*v48;
              v51 = v50 | (*v48 >> 8) & 0xFF0000u;
              if ( (unsigned int)v51 >= 0x10000 )
              {
                if ( *(_DWORD *)gpHandleManager > 0x10000u )
                {
                  v83 = (unsigned __int16)v50;
                  if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                              *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                              (unsigned __int16)v50,
                                              1)
                       + 13) == WORD1(v51) )
                    v51 = v83;
                }
                else
                {
                  v51 = (unsigned __int16)v50;
                }
                if ( (unsigned int)v51 >= 0x10000 && *(_DWORD *)v49 > 0x10000u )
                  GdiHandleEntryDirectory::GetEntry(*((GdiHandleEntryDirectory **)v49 + 2), (unsigned __int16)v51, 1);
              }
              v52 = *((_QWORD *)v49 + 2);
              v53 = *(_DWORD *)(v52 + 2056);
              if ( (unsigned int)v51 >= v53 + ((*(unsigned __int16 *)(v52 + 2) + 0xFFFF) << 16) )
                goto LABEL_95;
              if ( (unsigned int)v51 >= v53 )
              {
                v54 = (((unsigned int)v51 - v53) >> 16) + 1;
                if ( ((unsigned int)v51 - v53) >> 16 == -2 )
                {
LABEL_95:
                  v9 = 0;
                  v89 = 0;
                  v88 = 0LL;
                  KeLeaveCriticalRegion();
                  goto LABEL_96;
                }
              }
              else
              {
                v54 = 0;
              }
              v55 = *(_QWORD *)(v52 + 8LL * v54 + 8);
              if ( v54 )
                v51 = (_DWORD)v51 - (v54 << 16) - v53 + 0x10000;
              *(_DWORD *)(*(_QWORD *)v55 + 24 * v51 + 8) &= ~1u;
              ExReleasePushLockExclusiveEx(
                *(_QWORD *)(**(_QWORD **)(v55 + 24) + 8 * ((unsigned __int64)(unsigned int)v51 >> 8))
              + 16LL * (unsigned __int8)v51,
                0LL);
              KeLeaveCriticalRegion();
              goto LABEL_95;
            }
            v61 = 0;
            LODWORD(v62) = 1;
            v84 = 1;
            if ( v60 == v59 || !a4 )
            {
              v67 = a3;
            }
            else
            {
              v63 = HmgIncProcessHandleCount(v59, v58, 1LL);
              v62 = v63;
              v84 = v63;
              v66 = v63 == 0;
              v67 = a3;
              if ( v66 )
              {
                if ( a3 )
                {
                  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v65, v64, v62);
                  GreIncQuotaCount(CurrentProcessWin32Process);
                  v61 = 1;
                  v84 = 1;
                  v67 = a3;
LABEL_115:
                  if ( *((_QWORD *)v6 + 2) )
                    goto LABEL_120;
                  v68 = (_OWORD *)DcAttr;
                  if ( DcAttr )
                  {
                    *(_QWORD *)(v28 + 80) = DcAttr;
                    *((_QWORD *)v6 + 2) = DcAttr;
                    v69 = (_OWORD *)(v28 + 560);
                    v70 = 3LL;
                    do
                    {
                      *v68 = *v69;
                      v68[1] = v69[1];
                      v68[2] = v69[2];
                      v68[3] = v69[3];
                      v68[4] = v69[4];
                      v68[5] = v69[5];
                      v68[6] = v69[6];
                      v68 += 8;
                      *(v68 - 1) = v69[7];
                      v69 += 8;
                      --v70;
                    }
                    while ( v70 );
                    *v68 = *v69;
                    v68[1] = v69[1];
                    DcAttr = 0LL;
LABEL_120:
                    *((_DWORD *)v6 + 2) = v59 ^ ((unsigned __int8)v59 ^ (unsigned __int8)*((_DWORD *)v6 + 2)) & 1;
                    v71 = *(_DWORD *)v6 & 0xFFFFFF;
                    if ( v71 >= 0x10000 )
                    {
                      if ( *(_DWORD *)gpHandleManager > 0x10000u )
                      {
                        v80 = *v6;
                        if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                                    *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                                    v80,
                                                    1)
                             + 13) == HIWORD(v71) )
                          v71 = v80;
                      }
                      else
                      {
                        v71 = *v6;
                      }
                    }
                    v72 = *((_QWORD *)gpHandleManager + 2);
                    v73 = *(_DWORD *)(v72 + 2056);
                    if ( v71 >= v73 + ((*(unsigned __int16 *)(v72 + 2) + 0xFFFF) << 16) )
                      goto LABEL_183;
                    if ( v71 >= v73 )
                    {
                      v74 = ((v71 - v73) >> 16) + 1;
                      if ( (v71 - v73) >> 16 == -2 )
                        goto LABEL_183;
                    }
                    else
                    {
                      v74 = 0;
                    }
                    v75 = *(_QWORD *)(v72 + 8LL * v74 + 8);
                    if ( v74 )
                      v71 = v71 - (v74 << 16) - v73 + 0x10000;
                    if ( v71 < *(_DWORD *)(v75 + 20) )
                    {
                      v76 = *(_QWORD **)(*(_QWORD *)(**(_QWORD **)(v75 + 24) + 8 * ((unsigned __int64)v71 >> 8))
                                       + 16LL * (unsigned __int8)v71
                                       + 8);
LABEL_130:
                      if ( gbGdiHmgrStacks && gpentHmgrStacks )
                        RECSTACKBACKTRACE((unsigned __int16)*v76 | ((unsigned int)*v76 >> 8) & 0xFF0000);
                      goto LABEL_131;
                    }
LABEL_183:
                    v76 = 0LL;
                    goto LABEL_130;
                  }
                  if ( v67 )
                    goto LABEL_120;
                  v84 = 0;
LABEL_186:
                  if ( v61 )
                    HmgDecProcessHandleCount(v59);
                  goto LABEL_131;
                }
              }
              else
              {
                v61 = 1;
              }
            }
            if ( !(_DWORD)v62 )
              goto LABEL_186;
            goto LABEL_115;
          }
LABEL_157:
          v41 = 0;
          goto LABEL_72;
        }
      }
      v29 = *((_DWORD *)v6 + 2) & 0xFFFFFFFE;
      if ( v29 != ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) )
      {
        v77 = *((_DWORD *)v6 + 2) & 0xFFFFFFFE;
        if ( v77 == -2147483630 )
        {
          HANDLELOCK::Pid((HANDLELOCK *)&v88, a2);
          v41 = 1;
          v84 = 1;
          v42 = v85;
          goto LABEL_72;
        }
        v42 = v85;
        if ( !v77 && !a2 )
        {
          v41 = 1;
          v84 = 1;
          v42 = 0;
          goto LABEL_72;
        }
        goto LABEL_157;
      }
      v30 = (_OWORD *)(v28 + 560);
      v31 = *(_OWORD **)(v28 + 80);
      if ( v31 == (_OWORD *)(v28 + 560) )
      {
        v33 = v85;
      }
      else
      {
        v32 = 3LL;
        do
        {
          *v30 = *v31;
          v30[1] = v31[1];
          v30[2] = v31[2];
          v30[3] = v31[3];
          v30[4] = v31[4];
          v30[5] = v31[5];
          v30[6] = v31[6];
          v30 += 8;
          *(v30 - 1) = v31[7];
          v31 += 8;
          --v32;
        }
        while ( v32 );
        *v30 = *v31;
        v30[1] = v31[1];
        v33 = v85;
        DcAttr = *(_QWORD *)(v28 + 80);
        if ( DcAttr == v28 + 984 )
          DcAttr = *(_QWORD *)(v28 + 976);
        *(_QWORD *)(v28 + 80) = v28 + 560;
        *((_QWORD *)v6 + 2) = 0LL;
      }
      *((_DWORD *)v6 + 2) = a2 ^ ((unsigned __int8)a2 ^ (unsigned __int8)*((_DWORD *)v6 + 2)) & 1;
      v34 = *(_DWORD *)v6 & 0xFFFFFF;
      if ( v34 >= 0x10000 )
      {
        if ( *(_DWORD *)gpHandleManager > 0x10000u )
        {
          v81 = *v6;
          if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                      *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                      v81,
                                      1)
               + 13) == HIWORD(v34) )
            v34 = v81;
        }
        else
        {
          v34 = *v6;
        }
      }
      v35 = *((_QWORD *)gpHandleManager + 2);
      v36 = *(_DWORD *)(v35 + 2056);
      if ( v34 >= v36 + ((*(unsigned __int16 *)(v35 + 2) + 0xFFFF) << 16) )
        goto LABEL_192;
      if ( v34 >= v36 )
      {
        v37 = ((v34 - v36) >> 16) + 1;
        if ( (v34 - v36) >> 16 == -2 )
          goto LABEL_192;
      }
      else
      {
        v37 = 0;
      }
      v38 = *(_QWORD *)(v35 + 8LL * v37 + 8);
      if ( v37 )
        v34 = v34 - (v37 << 16) - v36 + 0x10000;
      if ( v34 < *(_DWORD *)(v38 + 20) )
      {
        v39 = *(_QWORD **)(*(_QWORD *)(**(_QWORD **)(v38 + 24) + 8 * ((unsigned __int64)v34 >> 8))
                         + 16LL * (unsigned __int8)v34
                         + 8);
        goto LABEL_68;
      }
LABEL_192:
      v39 = 0LL;
LABEL_68:
      if ( gbGdiHmgrStacks && gpentHmgrStacks )
        RECSTACKBACKTRACE((unsigned __int16)*v39 | ((unsigned int)*v39 >> 8) & 0xFF0000);
      if ( a4 )
      {
        CurrentProcessId = (unsigned int)PsGetCurrentProcessId();
        HmgDecProcessHandleCount(CurrentProcessId & 0xFFFFFFFC);
      }
      v41 = 1;
      v84 = 1;
      v42 = v33;
      goto LABEL_72;
    }
LABEL_176:
    v28 = 0LL;
    goto LABEL_47;
  }
LABEL_96:
  if ( v9 )
    HANDLELOCK::vUnlock((HANDLELOCK *)&v88);
LABEL_98:
  if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
    Template_pz(v18, &LockRelease);
  if ( ghsemHmgr )
  {
    ExReleaseResourceAndLeaveCriticalRegion(ghsemHmgr);
    PsLeavePriorityRegion(v56);
  }
  if ( DcAttr )
    HmgFreeDcAttr(DcAttr);
  return v84;
}
