/*
 * XREFs of ?bDeleteDC@XDCOBJ@@QEAAHH@Z @ 0x1C004B990
 * Callers:
 *     GreRestoreDC @ 0x1C00400D0 (GreRestoreDC.c)
 *     ?vDeleteDCInternalWorker@@YAXPEAVXDCOBJ@@H@Z @ 0x1C0050890 (-vDeleteDCInternalWorker@@YAXPEAVXDCOBJ@@H@Z.c)
 * Callees:
 *     GreAcquireHmgrSemaphore @ 0x1C003E210 (GreAcquireHmgrSemaphore.c)
 *     EngAcquireSemaphore @ 0x1C003E250 (EngAcquireSemaphore.c)
 *     HmgDecrementShareReferenceCountEx @ 0x1C003FE40 (HmgDecrementShareReferenceCountEx.c)
 *     Win32FreePool @ 0x1C0041890 (Win32FreePool.c)
 *     GreReleaseHmgrSemaphore @ 0x1C0042CA0 (GreReleaseHmgrSemaphore.c)
 *     ?GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C004E690 (-GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 *     ?AcquireEntryLock@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C004E710 (-AcquireEntryLock@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 *     ?ReleaseLockAndEntry@GdiHandleEntryDirectory@@QEAAXI_N@Z @ 0x1C004E75C (-ReleaseLockAndEntry@GdiHandleEntryDirectory@@QEAAXI_N@Z.c)
 *     ?vFreeOrCacheRBrush@RBRUSH@@QEAAXW4RBTYPE@@@Z @ 0x1C0063810 (-vFreeOrCacheRBrush@RBRUSH@@QEAAXW4RBTYPE@@@Z.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C0070F10 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     ??1XEPATHOBJ@@QEAA@XZ @ 0x1C009F11C (--1XEPATHOBJ@@QEAA@XZ.c)
 *     ??0XEPATHOBJ@@QEAA@PEAUHPATH__@@@Z @ 0x1C009F158 (--0XEPATHOBJ@@QEAA@PEAUHPATH__@@@Z.c)
 *     ??0HANDLELOCK@@QEAA@PEAUHOBJ__@@HHH@Z @ 0x1C00A9654 (--0HANDLELOCK@@QEAA@PEAUHOBJ__@@HHH@Z.c)
 *     ?vReleaseCache@RFONTOBJ@@QEAAXXZ @ 0x1C00EDC58 (-vReleaseCache@RFONTOBJ@@QEAAXXZ.c)
 *     McTemplateK0pqz @ 0x1C00FD6C8 (McTemplateK0pqz.c)
 *     McTemplateK0pz @ 0x1C00FD780 (McTemplateK0pz.c)
 */

__int64 __fastcall XDCOBJ::bDeleteDC(struct HOBJ__ ***this, unsigned int a2)
{
  struct HOBJ__ *v3; // rbx
  struct HOBJ__ **v5; // rbx
  volatile signed __int32 *v6; // rcx
  struct HOBJ__ *v7; // rax
  struct HOBJ__ **v8; // rbx
  volatile signed __int32 *v9; // rcx
  struct HOBJ__ *v10; // rax
  struct HOBJ__ **v11; // rbx
  volatile signed __int32 *v12; // rcx
  struct HOBJ__ *v13; // rax
  struct HOBJ__ **v14; // rbx
  volatile signed __int32 *v15; // rcx
  struct HOBJ__ *v16; // rax
  struct HOBJ__ **v17; // rbx
  struct HPATH__ *v18; // rdx
  int v19; // edx
  int v20; // r8d
  struct HOBJ__ *v21; // rbx
  __int64 v22; // rcx
  unsigned __int8 v23; // r13
  struct _ERESOURCE *v24; // rbx
  __int64 v25; // rbp
  struct HOBJ__ *v26; // rdi
  unsigned __int64 v27; // rdx
  int v28; // ecx
  __int64 v29; // r8
  __int64 v30; // r9
  unsigned __int16 *v31; // r14
  unsigned int v32; // edi
  __int64 v33; // rcx
  unsigned int v34; // r9d
  int v35; // ebx
  signed int v36; // edi
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 CurrentProcessWin32Process; // rax
  __int64 v41; // rdx
  int v42; // ecx
  int v43; // r8d
  unsigned int v44; // edi
  GdiHandleManager *v45; // r14
  __int64 v46; // rcx
  unsigned int v47; // r8d
  unsigned int v48; // edx
  __int64 v49; // r9
  _DWORD *v50; // r15
  int v51; // eax
  __int64 v52; // rbx
  __int64 v53; // r8
  __int64 v54; // rdi
  unsigned int v55; // edx
  unsigned int v56; // ecx
  __int64 v57; // r9
  __int64 v58; // r11
  void * near *v59; // rbx
  __int64 v60; // rax
  struct HOBJ__ *v62; // rdi
  unsigned int v63; // ebp
  unsigned int v64; // ebx
  __int64 ProcessWin32Process; // rax
  unsigned int v66; // ebx
  unsigned int v67; // edi
  unsigned int v68; // edi
  __int64 v69; // rcx
  unsigned __int16 *v70; // [rsp+30h] [rbp-D8h] BYREF
  int v71; // [rsp+38h] [rbp-D0h]
  char v72[8]; // [rsp+50h] [rbp-B8h] BYREF
  struct OBJECT *v73; // [rsp+58h] [rbp-B0h]
  PEPROCESS Process; // [rsp+110h] [rbp+8h] BYREF
  __int64 v75; // [rsp+120h] [rbp+18h] BYREF
  struct PFT *v76; // [rsp+128h] [rbp+20h] BYREF

  v3 = (*this)[274];
  v75 = 0LL;
  if ( (int)IsRFONTOBJ_vConstructPRFONTSupported() >= 0 )
    RFONTOBJ_vConstructPRFONTWrap(&v75, v3);
  v5 = *this;
  v6 = (volatile signed __int32 *)(*this)[204];
  if ( v6 )
  {
    if ( _InterlockedExchangeAdd(v6, 0xFFFFFFFF) == 1 )
      RBRUSH::vFreeOrCacheRBrush(v6, 1LL);
    v5[204] = 0LL;
  }
  v7 = v5[201];
  if ( v7 )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)v7 - 4, 0xFFFFFFFF) == 1 )
      RBRUSH::vFreeOrCacheRBrush((char *)v7 - 16, 0LL);
    v5[201] = 0LL;
  }
  v8 = *this;
  v9 = (volatile signed __int32 *)(*this)[222];
  if ( v9 )
  {
    if ( _InterlockedExchangeAdd(v9, 0xFFFFFFFF) == 1 )
      RBRUSH::vFreeOrCacheRBrush(v9, 1LL);
    v8[222] = 0LL;
  }
  v10 = v8[219];
  if ( v10 )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)v10 - 4, 0xFFFFFFFF) == 1 )
      RBRUSH::vFreeOrCacheRBrush((char *)v10 - 16, 0LL);
    v8[219] = 0LL;
  }
  v11 = *this;
  v12 = (volatile signed __int32 *)(*this)[240];
  if ( v12 )
  {
    if ( _InterlockedExchangeAdd(v12, 0xFFFFFFFF) == 1 )
      RBRUSH::vFreeOrCacheRBrush(v12, 1LL);
    v11[240] = 0LL;
  }
  v13 = v11[237];
  if ( v13 )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)v13 - 4, 0xFFFFFFFF) == 1 )
      RBRUSH::vFreeOrCacheRBrush((char *)v13 - 16, 0LL);
    v11[237] = 0LL;
  }
  v14 = *this;
  v15 = (volatile signed __int32 *)(*this)[258];
  if ( v15 )
  {
    if ( _InterlockedExchangeAdd(v15, 0xFFFFFFFF) == 1 )
      RBRUSH::vFreeOrCacheRBrush(v15, 1LL);
    v14[258] = 0LL;
  }
  v16 = v14[255];
  if ( v16 )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)v16 - 4, 0xFFFFFFFF) == 1 )
      RBRUSH::vFreeOrCacheRBrush((char *)v16 - 16, 0LL);
    v14[255] = 0LL;
  }
  v17 = *this;
  v18 = (*this)[21];
  if ( v18 )
  {
    XEPATHOBJ::XEPATHOBJ((XEPATHOBJ *)v72, v18);
    if ( v73 && (*((_DWORD *)v73 + 22) & 1) == 0 )
      HmgDecrementShareReferenceCountEx(v73, 0LL);
    XEPATHOBJ::~XEPATHOBJ((XEPATHOBJ *)v72);
    v17[21] = 0LL;
  }
  if ( (int)IsXDCOBJ_vCleanupColorTransformSupported() >= 0 )
    XDCOBJ_vCleanupColorTransformWrap(this, a2);
  v21 = (*this)[313];
  while ( v21 )
  {
    v62 = v21;
    v21 = (struct HOBJ__ *)*((_QWORD *)v21 + 1);
    EngAcquireSemaphore(ghsemPublicPFT);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemPublicPFT", ghsemPublicPFT, 14LL);
    v63 = 32;
    v76 = *(struct PFT **)(*(_QWORD *)v62 + 128LL);
    if ( v76 == gpPFTPrivate )
      v63 = 64;
    --*(_DWORD *)(*(_QWORD *)v62 + 64LL);
    if ( (int)IsPFTOBJ_bUnloadWorkhorseSupported() >= 0 )
      PFTOBJ_bUnloadWorkhorseWrap(&v76, *(_QWORD *)v62, 0LL, v63);
    Win32FreePool((__int64)v62);
  }
  v22 = (__int64)(*this)[39];
  if ( v22 && (struct HOBJ__ **)v22 != (struct HOBJ__ **)((char *)*this + 276) )
  {
    Win32FreePool(v22);
    (*this)[39] = 0LL;
  }
  v23 = 0;
  v24 = ghsemHmgr;
  v25 = 0LL;
  v26 = **this;
  if ( ghsemHmgr )
  {
    PsEnterPriorityRegion(v22);
    ExEnterCriticalRegionAndAcquireResourceExclusive(v24);
  }
  if ( gbLockEtw && ((unsigned __int8)Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
    McTemplateK0pqz(v22, v19, v20, (_DWORD)ghsemHmgr, 16, (__int64)L"ghsemHmgr");
  HANDLELOCK::HANDLELOCK((HANDLELOCK *)&v70, v26, 0, 0, 0);
  if ( v71 )
  {
    v31 = v70;
    v32 = *(_DWORD *)v70 & 0xFFFFFF;
    if ( v32 >= 0x10000 )
    {
      if ( *(_DWORD *)gpHandleManager > 0x10000u )
      {
        v64 = *v70;
        if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                    *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                    v64,
                                    1)
             + 13) == HIWORD(v32) )
          v32 = v64;
      }
      else
      {
        v32 = *v70;
      }
    }
    v33 = *((_QWORD *)gpHandleManager + 2);
    v34 = *(_DWORD *)(v33 + 2056);
    if ( v32 < v34 + ((*(unsigned __int16 *)(v33 + 2) + 0xFFFF) << 16) )
    {
      if ( v32 >= v34 )
        LODWORD(v27) = ((v32 - v34) >> 16) + 1;
      else
        LODWORD(v27) = 0;
      v29 = *(_QWORD *)(v33 + 8LL * (unsigned int)v27 + 8);
      if ( (_DWORD)v27 )
        v32 += ((1 - (_DWORD)v27) << 16) - v34;
      if ( v32 < *(_DWORD *)(v29 + 20) )
      {
        v27 = (unsigned __int64)v32 >> 8;
        LODWORD(v33) = 2 * (unsigned __int8)v32;
        v25 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v29 + 24) + 8 * v27) + 16LL * (unsigned __int8)v32 + 8);
      }
    }
    v35 = *((_DWORD *)v31 + 2);
    v23 = *((_BYTE *)v31 + 14);
    v36 = v35 & 0xFFFFFFFE;
    if ( (v35 & 0xFFFFFFFE) != 0 && v36 != -2147483630 )
    {
      GreAcquireHmgrSemaphore(v33, v27, v29);
      if ( v36 == ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) )
      {
        CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v38, v37, v39);
        if ( CurrentProcessWin32Process )
          --*(_DWORD *)(CurrentProcessWin32Process + 60);
      }
      else if ( PsLookupProcessByProcessId((HANDLE)v36, &Process) >= 0 )
      {
        ProcessWin32Process = PsGetProcessWin32Process(Process);
        if ( ProcessWin32Process )
          --*(_DWORD *)(ProcessWin32Process + 60);
        ObfDereferenceObject(Process);
      }
      GreReleaseHmgrSemaphore(v42, v41, v43);
    }
    *((_BYTE *)v31 + 14) = 0;
    *((_QWORD *)v31 + 2) = 0LL;
    *((_DWORD *)v31 + 2) = v35 & 1;
    v44 = *(_DWORD *)v31 & 0xFFFFFF;
    if ( v44 >= 0x10000 )
    {
      if ( *(_DWORD *)gpHandleManager > 0x10000u )
      {
        v66 = *v31;
        if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                    *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                    v66,
                                    1)
             + 13) == HIWORD(v44) )
          v44 = v66;
      }
      else
      {
        v44 = *v31;
      }
    }
    v45 = gpHandleManager;
    v46 = *((_QWORD *)gpHandleManager + 2);
    v47 = *(_DWORD *)(v46 + 2056);
    if ( v44 >= v47 + ((*(unsigned __int16 *)(v46 + 2) + 0xFFFF) << 16) )
      goto LABEL_119;
    if ( v44 >= v47 )
      v48 = ((v44 - v47) >> 16) + 1;
    else
      v48 = 0;
    v49 = *(_QWORD *)(v46 + 8LL * v48 + 8);
    if ( v48 )
      v44 += ((1 - v48) << 16) - v47;
    if ( v44 >= *(_DWORD *)(v49 + 20) )
LABEL_119:
      v50 = 0LL;
    else
      v50 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)(v49 + 24) + 8 * ((unsigned __int64)v44 >> 8))
                       + 16LL * (unsigned __int8)v44
                       + 8);
    v51 = (unsigned __int16)*v50;
    v52 = v51 | (*v50 >> 8) & 0xFF0000u;
    if ( (unsigned int)v52 >= 0x10000 )
    {
      if ( *(_DWORD *)gpHandleManager > 0x10000u )
      {
        v67 = (unsigned __int16)v51;
        if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                    *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                    (unsigned __int16)v51,
                                    1)
             + 13) == WORD1(v52) )
          v52 = v67;
      }
      else
      {
        v52 = (unsigned __int16)v51;
      }
    }
    v53 = *((_QWORD *)v45 + 3);
    if ( v53 )
    {
      v68 = *(_DWORD *)(v53 + 4LL * (unsigned __int16)v52);
      if ( v68 )
      {
        if ( GdiHandleEntryDirectory::AcquireEntryLock(*((GdiHandleEntryDirectory **)v45 + 2), v68, 1) )
          GdiHandleEntryDirectory::ReleaseLockAndEntry(*((GdiHandleEntryDirectory **)v45 + 2), v68, 1);
        *(_DWORD *)(4LL * (unsigned __int16)v52 + *((_QWORD *)v45 + 3)) = 0;
        --*((_DWORD *)v45 + 1);
      }
    }
    v54 = *((_QWORD *)v45 + 2);
    v55 = *(_DWORD *)(v54 + 2056);
    if ( (unsigned int)v52 < v55 + ((*(unsigned __int16 *)(v54 + 2) + 0xFFFF) << 16) )
    {
      if ( (unsigned int)v52 >= v55 )
        v56 = (((unsigned int)v52 - v55) >> 16) + 1;
      else
        v56 = 0;
      v57 = *(_QWORD *)(v54 + 8LL * v56 + 8);
      if ( v56 )
        v52 = ((1 - v56) << 16) - v55 + (unsigned int)v52;
      if ( (unsigned int)v52 < *(_DWORD *)(v57 + 20) )
      {
        v58 = *(_QWORD *)(**(_QWORD **)(v57 + 24) + 8 * ((unsigned __int64)(unsigned int)v52 >> 8));
        if ( *(_QWORD *)(v58 + 16LL * (unsigned __int8)v52 + 8) )
        {
          *(_QWORD *)(v58 + 16LL * (unsigned __int8)v52 + 8) = 0LL;
          *(_QWORD *)(*(_QWORD *)v57 + 24 * v52) = *(unsigned int *)(v57 + 12);
          --*(_DWORD *)(v57 + 16);
          *(_DWORD *)(v57 + 12) = v52;
        }
      }
      ExReleasePushLockExclusiveEx(
        *(_QWORD *)(**(_QWORD **)(v57 + 24) + 8 * ((unsigned __int64)(unsigned int)v52 >> 8))
      + 16LL * (unsigned __int8)v52,
        0LL);
      KeLeaveCriticalRegion();
      *(_BYTE *)v54 = 0;
    }
    *(_QWORD *)v50 = 0LL;
    --*((_DWORD *)v45 + 1);
    KeLeaveCriticalRegion();
  }
  if ( gbLockEtw && ((unsigned __int8)Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
    McTemplateK0pz(v28, (unsigned int)&LockRelease, v29, (_DWORD)ghsemHmgr, (__int64)L"ghsemHmgr");
  if ( ghsemHmgr )
  {
    ExReleaseResourceAndLeaveCriticalRegion(ghsemHmgr);
    PsLeavePriorityRegion();
  }
  if ( v25 )
  {
    if ( *(__int16 *)(v25 + 14) >= 0 )
    {
      Win32FreePool(v25);
    }
    else
    {
      v59 = (&pHmgLookAsideList)[v23];
      if ( (int)IsWin32FreeToPagedLookasideListImplSupported() >= 0 )
        Win32FreeToPagedLookasideListImpl(v59, v25);
    }
  }
  v60 = v75;
  *this = 0LL;
  if ( v60 )
  {
    v69 = *(unsigned int *)(v60 + 720);
    if ( (v69 & 0x81) != 0 && (int)IsRFONTOBJ_dtHelperSupported(v69, v27, v29, v30) >= 0 )
      RFONTOBJ_dtHelperWrap(&v75, 1LL);
    RFONTOBJ::vReleaseCache((RFONTOBJ *)&v75);
  }
  return 1LL;
}
