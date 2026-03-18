/*
 * XREFs of ?Lock@DXGDEVICE@@QEAAJPEAU_D3DKMT_LOCK@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00E8760
 * Callers:
 *     DxgkLock @ 0x1C00CAEF0 (DxgkLock.c)
 *     ?DxgkCddLock@@YAJPEAU_D3DKMT_LOCK@@I@Z @ 0x1C00D37A0 (-DxgkCddLock@@YAJPEAU_D3DKMT_LOCK@@I@Z.c)
 *     ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C0101F80 (-Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESET.c)
 *     ?PresentCddShadowBuffer@@YAJPEAVDXGCONTEXT@@PEAVDXGHWQUEUE@@_KI@Z @ 0x1C016FA54 (-PresentCddShadowBuffer@@YAJPEAVDXGCONTEXT@@PEAVDXGHWQUEUE@@_KI@Z.c)
 *     ?DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z @ 0x1C0170610 (-DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z.c)
 *     ?SetPresentDodArg@PRESENTDODARG@@QEAAJPEAVDXGCONTEXT@@IPEAVDXGALLOCATION@@KEPEBUtagRECT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C01D64FC (-SetPresentDodArg@PRESENTDODARG@@QEAAJPEAVDXGCONTEXT@@IPEAVDXGALLOCATION@@KEPEBUtagRECT@@PEBU_D3.c)
 *     ?CheckPrimaryContentTile@VIDPNSOURCEINFO@@AEAAJPEAVDXGDEVICE@@IIPEBUtagRECT@@PEAVCOREDEVICEACCESS@@PEAI3@Z @ 0x1C01EA524 (-CheckPrimaryContentTile@VIDPNSOURCEINFO@@AEAAJPEAVDXGDEVICE@@IIPEBUtagRECT@@PEAVCOREDEVICEACCES.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00150F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C001552C (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXXZ @ 0x1C0015700 (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x1C001576C (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C001B314 (McTemplateK0q.c)
 *     IsThreadCrossSessionAttached @ 0x1C001B400 (IsThreadCrossSessionAttached.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00E5A90 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C00E8320 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C00E8360 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?VmBusSendLock2@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAU_D3DKMT_LOCK2@@EII@Z @ 0x1C0183378 (-VmBusSendLock2@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAU_D3DKMT_LOCK.c)
 */

int __fastcall DXGDEVICE::Lock(PERESOURCE *this, struct _D3DKMT_LOCK *a2, struct COREDEVICEACCESS *a3)
{
  POWNER_ENTRY OwnerTable; // rbx
  struct DXGPROCESS *Current; // rax
  int result; // eax
  struct _D3DDDICB_LOCKFLAGS::$ED792A498079A6342A08F53AEABA2A3A::$E5338CF7B743D9B09B49C7CF5F2B6ABC Value; // r9d
  int v9; // r13d
  _BOOL8 v10; // rcx
  PERESOURCE v11; // rbp
  D3DKMT_HANDLE hAllocation; // ebx
  int v13; // edx
  int v14; // ecx
  int v15; // edx
  int v16; // r8d
  int v17; // ecx
  int v18; // edx
  int v19; // ecx
  int v20; // r12d
  __int64 v21; // rcx
  __int64 v22; // r8
  int v23; // r9d
  __int64 v24; // rax
  __int64 v25; // r8
  int v26; // ecx
  struct _EX_RUNDOWN_REF *v27; // rdx
  __int64 v28; // rdx
  ULONG_PTR v29; // rcx
  __int64 v30; // r8
  ULONG_PTR Count; // r14
  int v32; // eax
  int v33; // eax
  PERESOURCE v34; // rax
  unsigned int v35; // edi
  D3DKMT_HANDLE v36; // ebp
  bool v37; // zf
  __int64 v38; // r13
  PVOID SharedWaiters; // r12
  struct DXGPROCESS *v40; // rax
  char *v41; // rbx
  __int64 v42; // rcx
  __int64 v43; // r8
  int v44; // r9d
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // rdi
  char *v48; // rcx
  PERESOURCE v49; // rax
  PVOID v50; // r14
  __int64 v51; // r13
  ULONG_PTR v52; // r12
  struct DXGPROCESS *v53; // rbx
  __int64 v54; // rcx
  __int64 v55; // r8
  int v56; // r9d
  __int16 v57; // r14
  PERESOURCE v58; // r13
  D3DKMT_HANDLE v59; // r12d
  __int64 v60; // rcx
  __int64 v61; // r8
  int v62; // r9d
  D3DKMT_HANDLE v63; // ebx
  unsigned int v64; // ecx
  __int64 v65; // r9
  int v66; // edx
  int v67; // eax
  __int64 v68; // rdx
  __int64 v69; // rcx
  _QWORD *v70; // rax
  __int64 NumPages; // rcx
  __int64 v72; // rax
  _QWORD *v73; // rax
  struct _EX_RUNDOWN_REF *v74; // rcx
  __int64 v75; // rcx
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v77; // rax
  int CurrentProcessSessionId; // esi
  __int64 *ThreadWin32Thread; // rax
  __int64 v80; // rcx
  __int64 v81; // rax
  struct _KTHREAD *v82; // rbx
  __int64 v83; // rax
  __int64 v84; // rcx
  int v85; // esi
  __int64 v86; // rax
  __int64 v87; // rbx
  _QWORD *v88; // rax
  unsigned int v89; // [rsp+28h] [rbp-90h]
  unsigned int v90; // [rsp+30h] [rbp-88h]
  struct _EX_RUNDOWN_REF *v91; // [rsp+50h] [rbp-68h] BYREF
  struct DXGPROCESS *v92; // [rsp+58h] [rbp-60h] BYREF
  _D3DKMT_LOCK2 v93; // [rsp+60h] [rbp-58h] BYREF
  int v94; // [rsp+C0h] [rbp+8h]
  UINT PrivateDriverData; // [rsp+D8h] [rbp+20h]

  if ( !*((_DWORD *)this + 18) )
    ExIsResourceAcquiredExclusiveLite(this[13]);
  if ( (*((_BYTE *)this + 1709) & 1) != 0 )
  {
    memset(&v93, 0, sizeof(v93));
    v93.hAllocation = a2->hAllocation;
    OwnerTable = this[2]->OwnerTable;
    Current = DXGPROCESS::GetCurrent((__int64)this, (__int64)a2);
    result = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendLock2(
               (DXG_GUEST_VIRTUALGPU_VMBUS *)&OwnerTable[255],
               Current,
               (struct DXGDEVICE *)this,
               &v93,
               1u,
               v89,
               v90);
    if ( result >= 0 )
      a2->pData = v93.pData;
  }
  else
  {
    Value = (struct _D3DDDICB_LOCKFLAGS::$ED792A498079A6342A08F53AEABA2A3A::$E5338CF7B743D9B09B49C7CF5F2B6ABC)a2->Flags.Value;
    v9 = 1;
    v94 = 1;
    if ( *(unsigned int *)&Value >= 0x800 )
    {
LABEL_87:
      v70 = (_QWORD *)WdLogNewEntry5_WdWarning(this, a2, a3);
      v70[3] = this;
      NumPages = a2->Flags.Value;
LABEL_88:
      v70[4] = NumPages;
      LODWORD(v47) = -1073741811;
      v70[5] = -1073741811LL;
      WdLogEvent5_WdWarning(v70);
    }
    else
    {
      while ( 1 )
      {
        v10 = a2->NumPages == 0;
        if ( v10 != (a2->pPages == 0LL) )
        {
          v70 = (_QWORD *)WdLogNewEntry5_WdWarning(v10, a2, a3);
          v70[3] = this;
          NumPages = a2->NumPages;
          goto LABEL_88;
        }
        v11 = this[5];
        hAllocation = a2->hAllocation;
        v13 = ((*(_BYTE *)&Value & 4) == 0) | 2;
        if ( (*(_BYTE *)&Value & 8) == 0 )
          v13 = (*(_BYTE *)&Value & 4) == 0;
        v14 = v13 | 4;
        if ( (*(_BYTE *)&Value & 0x20) == 0 )
          v14 = v13;
        v15 = v14 | 8;
        if ( (*(_BYTE *)&Value & 0x40) == 0 )
          v15 = v14;
        v16 = v15 | 0x10;
        if ( *(_BYTE *)&Value >= 0 )
          v16 = v15;
        v17 = v16 | 0x20;
        if ( (*(_WORD *)&Value & 0x100) == 0 )
          v17 = v16;
        v18 = v17 | 0x48;
        if ( (*(_WORD *)&Value & 0x200) == 0 )
          v18 = v17;
        v19 = v18 | 0x80;
        if ( (*(_WORD *)&Value & 0x400) == 0 )
          v19 = v18;
        v20 = v19 | 0x200;
        if ( (*(_BYTE *)&Value & 1) == 0 )
          v20 = v19;
        KeEnterCriticalRegion();
        if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(&v11[2], 0LL) )
        {
          if ( bTracingEnabled )
          {
            v23 = (int)v11[2].OwnerTable;
            if ( v23 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
              McTemplateK0q(v21, &EventBlockThread, v22, v23);
          }
          ExAcquirePushLockSharedEx(&v11[2], 0LL);
        }
        v24 = (hAllocation >> 6) & 0xFFFFFF;
        if ( (unsigned int)v24 < LODWORD(v11[2].ExclusiveWaiters)
          && (v25 = *(_QWORD *)&v11[2].ActiveCount,
              v26 = *(_DWORD *)(v25 + 16 * v24 + 8),
              ((hAllocation >> 25) & 0x60) == (*(_BYTE *)(v25 + 16 * v24 + 8) & 0x60))
          && (v26 & 0x2000) == 0
          && (v26 & 0x1F) == 5 )
        {
          v27 = *(struct _EX_RUNDOWN_REF **)(v25 + 16LL * (unsigned int)v24);
        }
        else
        {
          v27 = 0LL;
        }
        DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v91, v27);
        ExReleasePushLockSharedEx(&v11[2], 0LL);
        KeLeaveCriticalRegion();
        if ( !v91 )
          break;
        Count = v91[3].Count;
        if ( !Count )
        {
          v73 = (_QWORD *)WdLogNewEntry5_WdWarning(v29, v28, v30);
          LODWORD(v47) = -1073741811;
          v73[3] = this;
          v73[4] = a2->hAllocation;
          v73[5] = v91;
          v73[6] = -1073741811LL;
          goto LABEL_95;
        }
        if ( (PERESOURCE *)v91[1].Count != this )
        {
          v73 = (_QWORD *)WdLogNewEntry5_WdWarning(v29, v28, v30);
          LODWORD(v47) = -1073741811;
          v73[3] = v91;
          v73[4] = this;
          v73[5] = v91[1].Count;
          v73[6] = -1073741811LL;
          goto LABEL_95;
        }
        v29 = v91[6].Count;
        v28 = *(unsigned int *)(v29 + 4);
        if ( (v28 & 2) == 0 )
        {
          v29 = v91[5].Count;
          if ( v29 )
          {
            v32 = *(_DWORD *)(v29 + 4);
            if ( (v32 & 1) != 0 && (v32 & 2) == 0 )
            {
              v29 = (ULONG_PTR)this[2]->OwnerTable;
              v33 = *(_DWORD *)(v29 + 300);
              if ( (v33 & 0x10) == 0 && (v33 & 8) == 0 )
                break;
            }
          }
        }
        v34 = this[2];
        v35 = v20 | 0x100;
        v36 = a2->hAllocation & 0x3F;
        v37 = v9 == 1;
        v38 = *(_QWORD *)&v34[5].ActiveCount;
        if ( !v37 )
          v35 = v20;
        SharedWaiters = v34[5].SharedWaiters;
        PrivateDriverData = a2->PrivateDriverData;
        v40 = DXGPROCESS::GetCurrent(v29, v28);
        v92 = v40;
        if ( v40 )
        {
          v41 = (char *)v40 + 144;
          if ( *((struct _KTHREAD **)v40 + 19) == KeGetCurrentThread() )
          {
            v92 = 0LL;
          }
          else
          {
            KeEnterCriticalRegion();
            if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v41, 0LL) )
            {
              if ( bTracingEnabled )
              {
                v44 = *((_DWORD *)v41 + 4);
                if ( v44 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
                  McTemplateK0q(v42, &EventBlockThread, v43, v44);
              }
              ExAcquirePushLockExclusiveEx(v41, 0LL);
            }
            *((_QWORD *)v41 + 1) = KeGetCurrentThread();
          }
        }
        LODWORD(v47) = (*(__int64 (__fastcall **)(PVOID, ULONG_PTR, _QWORD, _QWORD, UINT, _QWORD, struct DXGPROCESS **, void **))(*(_QWORD *)(v38 + 8) + 256LL))(
                         SharedWaiters,
                         Count,
                         v36,
                         v35,
                         PrivateDriverData,
                         0LL,
                         &v92,
                         &a2->pData);
        if ( v92 )
        {
          v48 = (char *)v92 + 144;
          *((_QWORD *)v92 + 19) = 0LL;
          ExReleasePushLockExclusiveEx(v48, 0LL);
          KeLeaveCriticalRegion();
        }
        v49 = this[2];
        v50 = v49[5].SharedWaiters;
        v51 = *(_QWORD *)&v49[5].ActiveCount;
        v52 = v91[3].Count;
        v53 = DXGPROCESS::GetCurrent(v46, v45);
        if ( v53 )
        {
          if ( *((struct _KTHREAD **)v53 + 19) == KeGetCurrentThread() )
          {
            v53 = 0LL;
          }
          else
          {
            KeEnterCriticalRegion();
            if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx((char *)v53 + 144, 0LL) )
            {
              if ( bTracingEnabled )
              {
                v56 = *((_DWORD *)v53 + 40);
                if ( v56 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
                  McTemplateK0q(v54, &EventBlockThread, v55, v56);
              }
              ExAcquirePushLockExclusiveEx((char *)v53 + 144, 0LL);
            }
            *((_QWORD *)v53 + 19) = KeGetCurrentThread();
          }
        }
        v57 = (*(__int64 (__fastcall **)(PVOID, ULONG_PTR))(*(_QWORD *)(v51 + 8) + 272LL))(v50, v52);
        if ( v53 )
        {
          *((_QWORD *)v53 + 19) = 0LL;
          ExReleasePushLockExclusiveEx((char *)v53 + 144, 0LL);
          KeLeaveCriticalRegion();
        }
        v58 = this[5];
        v59 = a2->hAllocation;
        KeEnterCriticalRegion();
        if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(&v58[2], 0LL) )
        {
          if ( bTracingEnabled )
          {
            v62 = (int)v58[2].OwnerTable;
            if ( v62 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
              McTemplateK0q(v60, &EventBlockThread, v61, v62);
          }
          ExAcquirePushLockExclusiveEx(&v58[2], 0LL);
        }
        v63 = 0;
        v64 = (v59 >> 6) & 0xFFFFFF;
        v58[2].SystemResourcesList.Blink = (struct _LIST_ENTRY *)KeGetCurrentThread();
        if ( v64 < LODWORD(v58[2].ExclusiveWaiters) )
        {
          v65 = *(_QWORD *)&v58[2].ActiveCount;
          v66 = *(_DWORD *)(v65 + 16LL * v64 + 8);
          if ( ((v59 >> 25) & 0x60) == (*(_BYTE *)(v65 + 16LL * v64 + 8) & 0x60)
            && (v66 & 0x2000) == 0
            && (v66 & 0x1F) != 0 )
          {
            *(_DWORD *)(v65 + 16LL * v64 + 8) = v66 ^ ((unsigned __int16)v66 ^ (unsigned __int16)(v57 << 7)) & 0x1F80;
            v63 = (*(_DWORD *)(*(_QWORD *)&v58[2].ActiveCount + 16LL * v64 + 8) >> 7) & 0x3F | ((v64 | ((*(_DWORD *)(*(_QWORD *)&v58[2].ActiveCount + 16LL * v64 + 8) & 0xFFFFFFE0) << 19)) << 6);
          }
        }
        v58[2].SystemResourcesList.Blink = 0LL;
        ExReleasePushLockExclusiveEx(&v58[2], 0LL);
        KeLeaveCriticalRegion();
        a2->hAllocation = v63;
        if ( (_DWORD)v47 != -1071775484 )
          goto LABEL_96;
        COREDEVICEACCESS::Release(a3);
        LODWORD(v47) = (*(__int64 (__fastcall **)(PVOID, ULONG_PTR, _QWORD, __int64))(*(_QWORD *)(*(_QWORD *)&this[2][5].ActiveCount
                                                                                                + 8LL)
                                                                                    + 608LL))(
                         this[2][5].SharedWaiters,
                         v91[3].Count,
                         a2->hAllocation & 0x3F,
                         2LL);
        if ( (int)v47 < 0 )
          goto LABEL_96;
        v67 = COREDEVICEACCESS::AcquireShared(a3);
        v47 = v67;
        if ( v67 < 0 )
        {
          v72 = WdLogNewEntry5_WdEvent(v69, v68);
          *(_QWORD *)(v72 + 24) = v47;
          WdLogEvent5_WdEvent(v72);
          COREDEVICEACCESS::AcquireSharedUncheck(a3);
          goto LABEL_96;
        }
        a2->Flags.Value &= ~0x80u;
        if ( v94 != 1 )
          goto LABEL_96;
        v9 = 2;
        v94 = 2;
        DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v91);
        Value = (struct _D3DDDICB_LOCKFLAGS::$ED792A498079A6342A08F53AEABA2A3A::$E5338CF7B743D9B09B49C7CF5F2B6ABC)a2->Flags.Value;
        if ( *(unsigned int *)&Value >= 0x800 )
          goto LABEL_87;
      }
      v73 = (_QWORD *)WdLogNewEntry5_WdWarning(v29, v28, v30);
      LODWORD(v47) = -1073741811;
      v73[3] = this;
      v73[4] = a2->hAllocation;
      v73[5] = -1073741811LL;
LABEL_95:
      WdLogEvent5_WdWarning(v73);
LABEL_96:
      v74 = v91;
      if ( v91 )
        ExReleaseRundownProtection(v91 + 11);
      if ( *((_DWORD *)DXGGLOBAL::GetGlobal((__int64)v74) + 223) )
      {
        CurrentThread = KeGetCurrentThread();
        if ( !CurrentThread )
        {
          v77 = WdLogNewEntry5_WdAssertion(v75);
          *(_QWORD *)(v77 + 24) = 94LL;
          WdLogEvent5_WdAssertion(v77);
        }
        CurrentProcessSessionId = PsGetCurrentProcessSessionId(v75);
        if ( CurrentProcessSessionId )
        {
          if ( (unsigned int)PsGetThreadSessionId(CurrentThread) == CurrentProcessSessionId
            && !IsThreadCrossSessionAttached() )
          {
            ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
            if ( ThreadWin32Thread )
            {
              v81 = *ThreadWin32Thread;
              if ( v81 )
              {
                if ( *(_QWORD *)(v81 + 80) )
                {
                  v82 = KeGetCurrentThread();
                  if ( !v82 )
                  {
                    v83 = WdLogNewEntry5_WdAssertion(v80);
                    *(_QWORD *)(v83 + 24) = 94LL;
                    WdLogEvent5_WdAssertion(v83);
                  }
                  v85 = PsGetCurrentProcessSessionId(v80);
                  if ( v85
                    && (unsigned int)PsGetThreadSessionId(v82) == v85
                    && !IsThreadCrossSessionAttached()
                    && (v86 = PsGetThreadWin32Thread(v82)) != 0
                    && *(_QWORD *)v86 )
                  {
                    v87 = *(_QWORD *)(*(_QWORD *)v86 + 80LL);
                  }
                  else
                  {
                    v87 = 0LL;
                  }
                  if ( *(_DWORD *)(v87 + 136) )
                  {
                    v88 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v84);
                    v88[3] = 275LL;
                    v88[4] = 38LL;
                    v88[5] = *(int *)(v87 + 136);
                    v88[6] = 0LL;
                    v88[7] = 0LL;
                    WdLogEvent5_WdCriticalError(v88);
                  }
                }
              }
            }
          }
        }
      }
    }
    return v47;
  }
  return result;
}
