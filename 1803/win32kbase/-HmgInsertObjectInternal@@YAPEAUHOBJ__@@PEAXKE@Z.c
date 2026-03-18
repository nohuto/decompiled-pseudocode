/*
 * XREFs of ?HmgInsertObjectInternal@@YAPEAUHOBJ__@@PEAXKE@Z @ 0x1C0024450
 * Callers:
 *     ?hrgnAssociate@RGNOBJ@@QEAAPEAUHRGN__@@XZ @ 0x1C0020A14 (-hrgnAssociate@RGNOBJ@@QEAAPEAUHRGN__@@XZ.c)
 *     NtGdiCreateRectRgn @ 0x1C00430D0 (NtGdiCreateRectRgn.c)
 *     ??0BRUSHMEMOBJ@@QEAA@KKHH@Z @ 0x1C0043810 (--0BRUSHMEMOBJ@@QEAA@KKHH@Z.c)
 *     ??0PATHMEMOBJ@@QEAA@XZ @ 0x1C0044B50 (--0PATHMEMOBJ@@QEAA@XZ.c)
 *     ?Insert@HmgInsertObjectHelper@@QEAAPEAUHOBJ__@@PEAVOBJECT@@_N1E@Z @ 0x1C0044C10 (-Insert@HmgInsertObjectHelper@@QEAAPEAUHOBJ__@@PEAVOBJECT@@_N1E@Z.c)
 * Callees:
 *     HmgIncProcessHandleCount @ 0x1C001ED30 (HmgIncProcessHandleCount.c)
 *     W32GetThreadWin32Thread @ 0x1C0023134 (W32GetThreadWin32Thread.c)
 *     ?AcquireEntryIndex@GdiHandleManager@@QEAA_NPEAI@Z @ 0x1C002BA30 (-AcquireEntryIndex@GdiHandleManager@@QEAA_NPEAI@Z.c)
 *     ?GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C002BFC0 (-GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 *     ?GetEntryObject@GdiHandleEntryTable@@QEAAPEAVOBJECT@@I@Z @ 0x1C002C230 (-GetEntryObject@GdiHandleEntryTable@@QEAAPEAVOBJECT@@I@Z.c)
 *     HmgDecProcessHandleCount @ 0x1C002E1C4 (HmgDecProcessHandleCount.c)
 *     ?RECALTLOCK@@YAXPEAUHOBJ__@@PEAU_BASEOBJECT@@@Z @ 0x1C002FA48 (-RECALTLOCK@@YAXPEAUHOBJ__@@PEAU_BASEOBJECT@@@Z.c)
 *     ?TrackObjectReferenceInitialization@@YAXW4ReferenceTrackerCountedType@@PEAXI@Z @ 0x1C005F110 (-TrackObjectReferenceInitialization@@YAXW4ReferenceTrackerCountedType@@PEAXI@Z.c)
 *     ?RECSTACKBACKTRACE@@YAXI@Z @ 0x1C00C2A64 (-RECSTACKBACKTRACE@@YAXI@Z.c)
 *     McTemplateK0pqz @ 0x1C00DA608 (McTemplateK0pqz.c)
 *     McTemplateK0pz @ 0x1C00DA6C0 (McTemplateK0pz.c)
 */

struct HOBJ__ *__fastcall HmgInsertObjectInternal(struct _BASEOBJECT *a1, unsigned __int16 a2, char a3)
{
  struct HOBJ__ *v3; // rbx
  unsigned __int64 v7; // rdi
  __int64 ThreadWin32Thread; // rax
  int v9; // edx
  unsigned __int64 v10; // rcx
  int v11; // r8d
  struct _ERESOURCE *v12; // rsi
  unsigned int v13; // r8d
  unsigned int v14; // edi
  __int64 v15; // rdx
  unsigned int v16; // r8d
  __int64 v17; // rcx
  GdiHandleEntryTable *v18; // r9
  __int64 v19; // rsi
  __int64 v20; // rax
  __int64 v21; // r15
  int v22; // ecx
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v24; // edx
  unsigned __int16 v25; // cx
  int v26; // eax
  struct HOBJ__ *v27; // rdi
  unsigned int v28; // esi
  GdiHandleManager *v29; // r15
  __int64 v30; // rdx
  __int64 v31; // rax
  signed __int32 v33[8]; // [rsp+0h] [rbp-78h] BYREF
  unsigned int v34; // [rsp+30h] [rbp-48h]
  unsigned __int16 v35; // [rsp+88h] [rbp+10h]
  unsigned int v36; // [rsp+98h] [rbp+20h] BYREF

  v3 = 0LL;
  v7 = (unsigned __int64)PsGetCurrentProcessId() & 0xFFFFFFFC;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  if ( ThreadWin32Thread )
  {
    v10 = *(_QWORD *)(ThreadWin32Thread + 72);
    if ( v10 )
      LODWORD(v7) = *(_DWORD *)(v10 + 8);
  }
  v12 = ghsemHmgr;
  if ( ghsemHmgr )
  {
    PsEnterPriorityRegion();
    ExEnterCriticalRegionAndAcquireResourceExclusive(v12);
  }
  if ( gbLockEtw && ((unsigned __int8)Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
    McTemplateK0pqz(v10, v9, v11, (_DWORD)ghsemHmgr, 16, (__int64)L"ghsemHmgr");
  if ( (a2 & 8) != 0 || (unsigned int)HmgIncProcessHandleCount(v7, v9, v11) )
  {
    v36 = 0;
    if ( GdiHandleManager::AcquireEntryIndex((GdiHandleManager *)v10, &v36) )
    {
      v14 = v36;
      if ( v36 >= 0x10000 )
      {
        if ( *(_DWORD *)gpHandleManager > 0x10000u )
        {
          if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                      *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                      (unsigned __int16)v36,
                                      1)
               + 13) == HIWORD(v14) )
            v14 = (unsigned __int16)v14;
        }
        else
        {
          v14 = (unsigned __int16)v36;
        }
      }
      v15 = *((_QWORD *)gpHandleManager + 2);
      v16 = *(_DWORD *)(v15 + 2056);
      if ( v14 >= v16 + ((*(unsigned __int16 *)(v15 + 2) + 0xFFFF) << 16) )
      {
        v19 = 0LL;
      }
      else
      {
        v17 = ((v14 - v16) >> 16) + 1;
        if ( v14 < v16 )
          v17 = 0LL;
        v18 = *(GdiHandleEntryTable **)(v15 + 8 * v17 + 8);
        if ( (_DWORD)v17 )
          v14 += ((1 - (_DWORD)v17) << 16) - v16;
        v19 = 0LL;
        if ( v14 < *((_DWORD *)v18 + 5) || GdiHandleEntryTable::GetEntryObject(v18, v14) )
          v19 = *(_QWORD *)v18 + 24LL * v14;
      }
      v20 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
      if ( !v20 || (a2 & 0x10) != 0 )
        v21 = 0LL;
      else
        v21 = *(_QWORD *)(v20 + 72);
      v22 = *(_DWORD *)(v19 + 8) & 1;
      *(_BYTE *)(v19 + 14) = a3;
      *(_BYTE *)(v19 + 15) = 0;
      *(_QWORD *)(v19 + 16) = 0LL;
      if ( (a2 & 8) == 0 )
      {
        if ( v21 )
          v22 |= *(_DWORD *)(v21 + 8) & 0xFFFFFFFE;
        else
          v22 |= (unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC;
      }
      if ( (a2 & 1) != 0 )
      {
        if ( v21 )
          CurrentThread = *(struct _KTHREAD **)v21;
        else
          CurrentThread = KeGetCurrentThread();
        *((_QWORD *)a1 + 2) = CurrentThread;
      }
      *((_WORD *)a1 + 6) = a2 & 1;
      v24 = v36;
      LOBYTE(v35) = a3;
      *((_DWORD *)a1 + 2) = (a2 >> 1) & 1;
      HIBYTE(v35) = BYTE2(v24);
      *(_DWORD *)(v19 + 8) = v22;
      v25 = v35;
      *(_WORD *)(v19 + 12) = v35;
      *(_QWORD *)(v19 + 16) = 0LL;
      v34 = HIWORD(v24);
      if ( (a2 & 0x40) != 0 )
      {
        v25 = v35 | 0x80;
        *(_WORD *)(v19 + 12) = v35 | 0x80;
      }
      if ( (a2 & 0x80u) != 0 )
        *(_BYTE *)(v19 + 15) |= 1u;
      *(_QWORD *)v19 = v24 | 0xFFFFFFFFFF000000uLL;
      v26 = v25 << 16;
      LODWORD(v10) = (unsigned __int16)v24;
      v27 = (struct HOBJ__ *)((unsigned __int16)v24 | (unsigned __int64)v26);
      *(_QWORD *)a1 = v27;
      _InterlockedOr(v33, 0);
      v28 = v36;
      v29 = gpHandleManager;
      if ( v36 >= 0x10000 )
      {
        if ( *(_DWORD *)gpHandleManager > 0x10000u )
        {
          LODWORD(v10) = *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                                *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                                (unsigned __int16)v36,
                                                1)
                         + 13);
          if ( (_DWORD)v10 == v34 )
            v28 = (unsigned __int16)v28;
        }
        else
        {
          v28 = (unsigned __int16)v36;
        }
      }
      v30 = *((_QWORD *)v29 + 2);
      v13 = *(_DWORD *)(v30 + 2056);
      if ( v28 < v13 + ((*(unsigned __int16 *)(v30 + 2) + 0xFFFF) << 16) )
      {
        v10 = ((v28 - v13) >> 16) + 1;
        if ( v28 < v13 )
          v10 = 0LL;
        v31 = *(_QWORD *)(v30 + 8 * v10 + 8);
        if ( (_DWORD)v10 )
          v28 += ((1 - (_DWORD)v10) << 16) - v13;
        if ( v28 < *(_DWORD *)(v31 + 20) )
        {
          LODWORD(v10) = 2 * (unsigned __int8)v28;
          *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v31 + 24) + 8 * ((unsigned __int64)v28 >> 8))
                    + 16LL * (unsigned __int8)v28
                    + 8) = a1;
        }
      }
      v3 = v27;
      if ( gbGdiHmgrStacks && gpentHmgrStacks )
        RECSTACKBACKTRACE((unsigned __int16)v27 | ((unsigned int)v27 >> 8) & 0xFF0000);
      if ( a3 == 5 )
      {
        if ( (a2 & 2) != 0 )
          RECALTLOCK(v27, a1);
        TrackObjectReferenceInitialization(0LL, *((_QWORD *)a1 + 85), *((unsigned int *)a1 + 2));
      }
      else if ( a3 == 16 )
      {
        TrackObjectReferenceInitialization(2LL, *((_QWORD *)a1 + 17), *((unsigned int *)a1 + 2));
      }
    }
    else if ( (a2 & 8) == 0 )
    {
      HmgDecProcessHandleCount((unsigned int)v7);
    }
  }
  if ( gbLockEtw && ((unsigned __int8)Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
    McTemplateK0pz(v10, (unsigned int)&LockRelease, v13, (_DWORD)ghsemHmgr, (__int64)L"ghsemHmgr");
  if ( ghsemHmgr )
  {
    ExReleaseResourceAndLeaveCriticalRegion(ghsemHmgr);
    PsLeavePriorityRegion();
  }
  return v3;
}
