/*
 * XREFs of GreSetDCOwnerEx @ 0x1C0047C80
 * Callers:
 *     _GetDCEx @ 0x1C0049920 (_GetDCEx.c)
 *     GetMonitorDC @ 0x1C0056170 (GetMonitorDC.c)
 *     CreateCacheDC @ 0x1C0057050 (CreateCacheDC.c)
 *     DestroyCacheDC @ 0x1C0057280 (DestroyCacheDC.c)
 *     ReleaseCacheDC @ 0x1C0057AF0 (ReleaseCacheDC.c)
 *     ?DestroyDC@@YAXPEAPEAUHDC__@@@Z @ 0x1C0063CE0 (-DestroyDC@@YAXPEAPEAUHDC__@@@Z.c)
 *     InitUserScreen @ 0x1C00926DC (InitUserScreen.c)
 *     DestroyProcessInfo @ 0x1C009CD88 (DestroyProcessInfo.c)
 * Callees:
 *     HmgAllocateDcAttr @ 0x1C001DBCC (HmgAllocateDcAttr.c)
 *     HmgFreeDcAttr @ 0x1C001E0A0 (HmgFreeDcAttr.c)
 *     GreSetBrushOwner @ 0x1C00484E0 (GreSetBrushOwner.c)
 *     ?GrepValidateVisRgn@@YAXPEAVDC@@PEAVREGION@@@Z @ 0x1C004961C (-GrepValidateVisRgn@@YAXPEAVDC@@PEAVREGION@@@Z.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C004DA80 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?Pid@HANDLELOCK@@QEAAXK@Z @ 0x1C004DCF0 (-Pid@HANDLELOCK@@QEAAXK@Z.c)
 *     ?GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C004E690 (-GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 *     HmgDecProcessHandleCount @ 0x1C0051618 (HmgDecProcessHandleCount.c)
 *     HmgIncProcessHandleCount @ 0x1C0053EA4 (HmgIncProcessHandleCount.c)
 *     GreIncQuotaCount @ 0x1C0081CB0 (GreIncQuotaCount.c)
 *     ??0HANDLELOCK@@QEAA@PEAUHOBJ__@@HHH@Z @ 0x1C00A9654 (--0HANDLELOCK@@QEAA@PEAUHOBJ__@@HHH@Z.c)
 *     ?RECSTACKBACKTRACE@@YAXI@Z @ 0x1C00EFC28 (-RECSTACKBACKTRACE@@YAXI@Z.c)
 *     McTemplateK0pqz @ 0x1C00FD6C8 (McTemplateK0pqz.c)
 *     McTemplateK0pz @ 0x1C00FD780 (McTemplateK0pz.c)
 */

__int64 __fastcall GreSetDCOwnerEx(struct HOBJ__ *a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // r14d
  unsigned int v6; // edi
  struct _ERESOURCE *v7; // rbx
  __int64 v8; // rdx
  int v9; // ecx
  __int64 v10; // r8
  __int64 v11; // r9
  unsigned __int16 *v12; // r15
  unsigned int v13; // edi
  __int64 v14; // rcx
  unsigned int v15; // r8d
  unsigned int v16; // edx
  __int64 v17; // rcx
  __int64 v18; // r13
  unsigned int v19; // r12d
  unsigned int v20; // ebx
  _OWORD *v21; // rax
  _OWORD *v22; // rcx
  __int64 v23; // rdx
  unsigned int v24; // edi
  __int64 v25; // rcx
  unsigned int v26; // r9d
  unsigned int v27; // edx
  __int64 v28; // r8
  _QWORD *v29; // rdx
  unsigned int CurrentProcessId; // eax
  int v31; // r14d
  BOOL v32; // eax
  unsigned int v33; // edi
  GdiHandleManager *v34; // r14
  __int64 v35; // rcx
  unsigned int v36; // r8d
  unsigned int v37; // edx
  __int64 v38; // r9
  _DWORD *v39; // rdx
  int v40; // eax
  __int64 v41; // rbx
  __int64 v42; // rcx
  unsigned int v43; // r8d
  unsigned int v44; // edx
  __int64 v45; // r10
  __int64 v47; // rdx
  unsigned int v48; // ebx
  unsigned int v49; // eax
  int v50; // edi
  int v51; // r8d
  unsigned int v52; // eax
  __int64 v53; // rdx
  __int64 v54; // rcx
  int v55; // r14d
  _OWORD *v56; // rcx
  _OWORD *v57; // rax
  __int64 v58; // rdx
  unsigned int v59; // edi
  __int64 v60; // rcx
  unsigned int v61; // r9d
  unsigned int v62; // edx
  __int64 v63; // r8
  _QWORD *v64; // rdx
  unsigned int v65; // ecx
  unsigned int v66; // ebx
  __int64 CurrentProcessWin32Process; // rax
  unsigned int v68; // ebx
  unsigned int v69; // ebx
  unsigned int v70; // ebx
  unsigned int v71; // edi
  int v72; // [rsp+30h] [rbp-88h]
  BOOL v73; // [rsp+34h] [rbp-84h]
  __int64 DcAttr; // [rsp+40h] [rbp-78h]
  unsigned __int16 *v75; // [rsp+58h] [rbp-60h] BYREF
  int v76; // [rsp+60h] [rbp-58h]
  __int64 v77; // [rsp+70h] [rbp-48h]
  int v78; // [rsp+D0h] [rbp+18h]
  int v79; // [rsp+D8h] [rbp+20h]

  v79 = a4;
  v78 = a3;
  v4 = a2;
  v6 = 0;
  v72 = 0;
  DcAttr = 0LL;
  v73 = a3 == 0;
  if ( (_DWORD)a2 == -2147483646 && !(_DWORD)a3 )
    DcAttr = HmgAllocateDcAttr((__int64)a1, a2, a3, a4);
  v7 = ghsemHmgr;
  if ( ghsemHmgr )
  {
    PsEnterPriorityRegion();
    ExEnterCriticalRegionAndAcquireResourceExclusive(v7);
  }
  if ( gbLockEtw && ((unsigned __int8)Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
    McTemplateK0pqz((_DWORD)a1, a2, a3, (_DWORD)ghsemHmgr, 16, (__int64)L"ghsemHmgr");
  HANDLELOCK::HANDLELOCK((HANDLELOCK *)&v75, a1, 0, 0, 0);
  if ( v76 )
  {
    v12 = v75;
    v13 = *(_DWORD *)v75 & 0xFFFFFF;
    if ( v13 >= 0x10000 )
    {
      if ( *(_DWORD *)gpHandleManager > 0x10000u )
      {
        v66 = *v75;
        if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                    *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                    v66,
                                    1)
             + 13) == HIWORD(v13) )
          v13 = v66;
      }
      else
      {
        v13 = *v75;
      }
    }
    v14 = *((_QWORD *)gpHandleManager + 2);
    v15 = *(_DWORD *)(v14 + 2056);
    if ( v13 >= v15 + ((*(unsigned __int16 *)(v14 + 2) + 0xFFFF) << 16) )
    {
      v18 = 0LL;
    }
    else
    {
      if ( v13 >= v15 )
        v16 = ((v13 - v15) >> 16) + 1;
      else
        v16 = 0;
      v17 = *(_QWORD *)(v14 + 8LL * v16 + 8);
      v77 = v17;
      if ( v16 )
        v13 += ((1 - v16) << 16) - v15;
      if ( v13 >= *(_DWORD *)(v17 + 20) )
        v18 = 0LL;
      else
        v18 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v17 + 24) + 8LL * (v13 >> 8)) + 16LL * (unsigned __int8)v13 + 8);
    }
    if ( *((_BYTE *)v12 + 14) != 1 )
      goto LABEL_43;
    if ( v12[6] != WORD1(a1) )
      goto LABEL_43;
    if ( *(_WORD *)(v18 + 12) )
    {
      v12 = v75;
      if ( *(struct _KTHREAD **)(v18 + 16) != KeGetCurrentThread() )
        goto LABEL_43;
    }
    v19 = v4;
    if ( v4 == -2147483630 )
      goto LABEL_21;
    if ( (*((_DWORD *)v12 + 2) & 0xFFFFFFFE) == 0x80000012 )
      GrepValidateVisRgn((struct DC *)v18, *(struct REGION **)(v18 + 1536));
    if ( !v4 )
    {
LABEL_21:
      v20 = *((_DWORD *)v12 + 2) & 0xFFFFFFFE;
      if ( v20 == ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) )
      {
        v21 = (_OWORD *)(v18 + 560);
        v22 = *(_OWORD **)(v18 + 80);
        if ( v22 != (_OWORD *)(v18 + 560) )
        {
          v23 = 3LL;
          do
          {
            *v21 = *v22;
            v21[1] = v22[1];
            v21[2] = v22[2];
            v21[3] = v22[3];
            v21[4] = v22[4];
            v21[5] = v22[5];
            v21[6] = v22[6];
            v21 += 8;
            *(v21 - 1) = v22[7];
            v22 += 8;
            --v23;
          }
          while ( v23 );
          *v21 = *v22;
          v21[1] = v22[1];
          DcAttr = *(_QWORD *)(v18 + 80);
          if ( DcAttr == v18 + 984 )
            DcAttr = *(_QWORD *)(v18 + 976);
          *(_QWORD *)(v18 + 80) = v18 + 560;
          *((_QWORD *)v12 + 2) = 0LL;
        }
        *((_DWORD *)v12 + 2) = v4 ^ ((unsigned __int8)v4 ^ (unsigned __int8)*((_DWORD *)v12 + 2)) & 1;
        v24 = *(_DWORD *)v12 & 0xFFFFFF;
        if ( v24 >= 0x10000 )
        {
          if ( *(_DWORD *)gpHandleManager > 0x10000u )
          {
            v69 = *v12;
            if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                        *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                        v69,
                                        1)
                 + 13) == HIWORD(v24) )
              v24 = v69;
          }
          else
          {
            v24 = *v12;
          }
        }
        v25 = *((_QWORD *)gpHandleManager + 2);
        v26 = *(_DWORD *)(v25 + 2056);
        if ( v24 >= v26 + ((*(unsigned __int16 *)(v25 + 2) + 0xFFFF) << 16) )
          goto LABEL_142;
        if ( v24 >= v26 )
          v27 = ((v24 - v26) >> 16) + 1;
        else
          v27 = 0;
        v28 = *(_QWORD *)(v25 + 8LL * v27 + 8);
        if ( v27 )
          v24 += ((1 - v27) << 16) - v26;
        if ( v24 >= *(_DWORD *)(v28 + 20) )
LABEL_142:
          v29 = 0LL;
        else
          v29 = *(_QWORD **)(*(_QWORD *)(**(_QWORD **)(v28 + 24) + 8 * ((unsigned __int64)v24 >> 8))
                           + 16LL * (unsigned __int8)v24
                           + 8);
        if ( gbGdiHmgrStacks && gpentHmgrStacks )
          RECSTACKBACKTRACE((unsigned __int16)*v29 | ((unsigned int)*v29 >> 8) & 0xFF0000);
        if ( v79 )
        {
          CurrentProcessId = (unsigned int)PsGetCurrentProcessId();
          HmgDecProcessHandleCount(CurrentProcessId & 0xFFFFFFFC);
        }
        v31 = 1;
        v72 = 1;
        v32 = v73;
        goto LABEL_42;
      }
      v65 = *((_DWORD *)v12 + 2) & 0xFFFFFFFE;
      if ( v65 == -2147483630 )
      {
        HANDLELOCK::Pid((HANDLELOCK *)&v75, v4);
        v31 = 1;
        v72 = 1;
        v32 = v73;
        goto LABEL_42;
      }
      v32 = v73;
      if ( !v65 && !v4 )
      {
        v31 = 1;
        v72 = 1;
        v32 = 0;
        goto LABEL_42;
      }
    }
    else
    {
      v32 = v73;
      if ( v4 == -2147483646 )
      {
        v48 = (unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC;
        v49 = *((_DWORD *)v12 + 2) & 0xFFFFFFFE;
        if ( v49 != -2147483630 && v49 != v48 && v49 )
        {
          v31 = 0;
LABEL_102:
          v32 = v73;
LABEL_42:
          if ( v19 != -2147483630 && v31 && v32 && (unsigned int)GreSetBrushOwner(**(HBRUSH **)(v18 + 144), v19) )
            GreSetBrushOwner(**(HBRUSH **)(v18 + 152), v19);
LABEL_43:
          v33 = *(_DWORD *)v12 & 0xFFFFFF;
          if ( v33 >= 0x10000 )
          {
            if ( *(_DWORD *)gpHandleManager > 0x10000u )
            {
              v70 = *v12;
              if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                          *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                          v70,
                                          1)
                   + 13) == HIWORD(v33) )
                v33 = v70;
            }
            else
            {
              v33 = *v12;
            }
          }
          v34 = gpHandleManager;
          v35 = *((_QWORD *)gpHandleManager + 2);
          v36 = *(_DWORD *)(v35 + 2056);
          if ( v33 >= v36 + ((*(unsigned __int16 *)(v35 + 2) + 0xFFFF) << 16) )
            goto LABEL_149;
          if ( v33 >= v36 )
            v37 = ((v33 - v36) >> 16) + 1;
          else
            v37 = 0;
          v38 = *(_QWORD *)(v35 + 8LL * v37 + 8);
          if ( v37 )
            v33 += ((1 - v37) << 16) - v36;
          if ( v33 >= *(_DWORD *)(v38 + 20) )
LABEL_149:
            v39 = 0LL;
          else
            v39 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)(v38 + 24) + 8 * ((unsigned __int64)v33 >> 8))
                             + 16LL * (unsigned __int8)v33
                             + 8);
          v40 = (unsigned __int16)*v39;
          v41 = v40 | (*v39 >> 8) & 0xFF0000u;
          if ( (unsigned int)v41 >= 0x10000 )
          {
            if ( *(_DWORD *)gpHandleManager > 0x10000u )
            {
              v71 = (unsigned __int16)v40;
              if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                          *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                          (unsigned __int16)v40,
                                          1)
                   + 13) == WORD1(v41) )
                v41 = v71;
            }
            else
            {
              v41 = (unsigned __int16)v40;
            }
          }
          v42 = *((_QWORD *)v34 + 2);
          v43 = *(_DWORD *)(v42 + 2056);
          if ( (unsigned int)v41 < v43 + ((*(unsigned __int16 *)(v42 + 2) + 0xFFFF) << 16) )
          {
            if ( (unsigned int)v41 >= v43 )
              v44 = (((unsigned int)v41 - v43) >> 16) + 1;
            else
              v44 = 0;
            v45 = *(_QWORD *)(v42 + 8LL * v44 + 8);
            if ( v44 )
              v41 = ((1 - v44) << 16) - v43 + (unsigned int)v41;
            *(_DWORD *)(*(_QWORD *)v45 + 24 * v41 + 8) &= ~1u;
            ExReleasePushLockExclusiveEx(
              *(_QWORD *)(**(_QWORD **)(v45 + 24) + 8 * ((unsigned __int64)(unsigned int)v41 >> 8))
            + 16LL * (unsigned __int8)v41,
              0LL);
            KeLeaveCriticalRegion();
          }
          v76 = 0;
          v75 = 0LL;
          KeLeaveCriticalRegion();
          v6 = v72;
          goto LABEL_63;
        }
        v50 = 0;
        v51 = 1;
        v72 = 1;
        if ( v49 != v48 && v79 )
        {
          v52 = HmgIncProcessHandleCount(v48, v47);
          v51 = v52;
          v72 = v52;
          if ( !v52 )
          {
            v55 = v78;
            if ( v78 )
            {
              CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v54, v53, v52);
              GreIncQuotaCount(CurrentProcessWin32Process);
              v50 = 1;
              v51 = 1;
              v72 = 1;
LABEL_84:
              if ( !*((_QWORD *)v12 + 2) )
              {
                v56 = (_OWORD *)DcAttr;
                if ( DcAttr )
                {
                  *(_QWORD *)(v18 + 80) = DcAttr;
                  *((_QWORD *)v12 + 2) = DcAttr;
                  v57 = (_OWORD *)(v18 + 560);
                  v58 = 3LL;
                  do
                  {
                    *v56 = *v57;
                    v56[1] = v57[1];
                    v56[2] = v57[2];
                    v56[3] = v57[3];
                    v56[4] = v57[4];
                    v56[5] = v57[5];
                    v56[6] = v57[6];
                    v56 += 8;
                    *(v56 - 1) = v57[7];
                    v57 += 8;
                    --v58;
                  }
                  while ( v58 );
                  *v56 = *v57;
                  v56[1] = v57[1];
                  DcAttr = 0LL;
                }
                else if ( !v55 )
                {
                  v31 = 0;
                  v72 = 0;
                  goto LABEL_136;
                }
              }
LABEL_89:
              if ( v51 )
              {
                *((_DWORD *)v12 + 2) = v48 ^ ((unsigned __int8)v48 ^ (unsigned __int8)*((_DWORD *)v12 + 2)) & 1;
                v59 = *(_DWORD *)v12 & 0xFFFFFF;
                if ( v59 >= 0x10000 )
                {
                  if ( *(_DWORD *)gpHandleManager > 0x10000u )
                  {
                    v68 = *v12;
                    if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                                *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                                v68,
                                                1)
                         + 13) == HIWORD(v59) )
                      v59 = v68;
                  }
                  else
                  {
                    v59 = *v12;
                  }
                }
                v60 = *((_QWORD *)gpHandleManager + 2);
                v61 = *(_DWORD *)(v60 + 2056);
                if ( v59 >= v61 + ((*(unsigned __int16 *)(v60 + 2) + 0xFFFF) << 16) )
                  goto LABEL_132;
                if ( v59 >= v61 )
                  v62 = ((v59 - v61) >> 16) + 1;
                else
                  v62 = 0;
                v63 = *(_QWORD *)(v60 + 8LL * v62 + 8);
                if ( v62 )
                  v59 += ((1 - v62) << 16) - v61;
                if ( v59 >= *(_DWORD *)(v63 + 20) )
LABEL_132:
                  v64 = 0LL;
                else
                  v64 = *(_QWORD **)(*(_QWORD *)(**(_QWORD **)(v63 + 24) + 8 * ((unsigned __int64)v59 >> 8))
                                   + 16LL * (unsigned __int8)v59
                                   + 8);
                if ( gbGdiHmgrStacks && gpentHmgrStacks )
                  RECSTACKBACKTRACE((unsigned __int16)*v64 | ((unsigned int)*v64 >> 8) & 0xFF0000);
                v31 = v72;
                goto LABEL_102;
              }
              v31 = v72;
LABEL_136:
              if ( v50 )
                HmgDecProcessHandleCount(v48);
              goto LABEL_102;
            }
LABEL_83:
            if ( !v51 )
              goto LABEL_89;
            goto LABEL_84;
          }
          v50 = 1;
        }
        v55 = v78;
        goto LABEL_83;
      }
    }
    v31 = 0;
    goto LABEL_42;
  }
LABEL_63:
  if ( gbLockEtw && ((unsigned __int8)Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
    McTemplateK0pz(v9, (unsigned int)&LockRelease, v10, (_DWORD)ghsemHmgr, (__int64)L"ghsemHmgr");
  if ( ghsemHmgr )
  {
    ExReleaseResourceAndLeaveCriticalRegion(ghsemHmgr);
    PsLeavePriorityRegion();
  }
  if ( DcAttr )
    HmgFreeDcAttr(DcAttr, v8, v10, v11);
  return v6;
}
