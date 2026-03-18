/*
 * XREFs of ?Lock@DXGDEVICE@@QEAAJPEAU_D3DKMT_LOCK@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0094290
 * Callers:
 *     ?DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z @ 0x1C007D550 (-DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z.c)
 *     ?SetPresentDodArg@PRESENTDODARG@@QEAAJPEAVDXGCONTEXT@@PEAVDXGALLOCATION@@KEPEBUtagRECT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C007E58C (-SetPresentDodArg@PRESENTDODARG@@QEAAJPEAVDXGCONTEXT@@PEAVDXGALLOCATION@@KEPEBUtagRECT@@PEBU_D3D.c)
 *     DxgkLock @ 0x1C0092200 (DxgkLock.c)
 *     ?DxgkCddLock@@YAJPEAU_D3DKMT_LOCK@@I@Z @ 0x1C00BAE30 (-DxgkCddLock@@YAJPEAU_D3DKMT_LOCK@@I@Z.c)
 *     ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C00C6330 (-Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESET.c)
 *     ?PresentCddShadowBuffer@@YAJPEAVDXGCONTEXT@@I@Z @ 0x1C011DBF4 (-PresentCddShadowBuffer@@YAJPEAVDXGCONTEXT@@I@Z.c)
 * Callees:
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C0001B00 (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXXZ @ 0x1C0001D2C (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x1C0001DA0 (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0002A50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     McTemplateK0q @ 0x1C00152E0 (McTemplateK0q.c)
 *     IsThreadCrossSessionAttached @ 0x1C001557C (IsThreadCrossSessionAttached.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C0086DD0 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C0086E10 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C009E4B0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?VmBusSendLock2@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAU_D3DKMT_LOCK2@@EII@Z @ 0x1C0196A80 (-VmBusSendLock2@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAU_D3DKMT_LOCK.c)
 */

int __fastcall DXGDEVICE::Lock(PERESOURCE *this, struct _D3DKMT_LOCK *a2, struct COREDEVICEACCESS *a3)
{
  POWNER_ENTRY OwnerTable; // rbx
  struct DXGPROCESS *Current; // rax
  int result; // eax
  int v8; // r13d
  _BOOL8 v9; // rcx
  struct _D3DDDICB_LOCKFLAGS::$ED792A498079A6342A08F53AEABA2A3A::$E5338CF7B743D9B09B49C7CF5F2B6ABC v10; // r8d
  PERESOURCE v11; // rbp
  D3DKMT_HANDLE hAllocation; // ebx
  int v13; // edx
  int v14; // ecx
  int v15; // edx
  int v16; // ecx
  int v17; // edx
  int v18; // ecx
  int v19; // edx
  int v20; // r12d
  __int64 v21; // rcx
  __int64 v22; // r8
  int Blink; // r9d
  __int64 v24; // rax
  POWNER_ENTRY v25; // r8
  ULONG TableSize; // edx
  struct _EX_RUNDOWN_REF *OwnerThread; // rdx
  __int64 v28; // rdx
  POWNER_ENTRY v29; // rcx
  __int64 v30; // r8
  ULONG_PTR Count; // r14
  ULONG_PTR v32; // rcx
  int v33; // eax
  int v34; // eax
  PERESOURCE v35; // rax
  unsigned int v36; // edi
  D3DKMT_HANDLE v37; // ebp
  bool v38; // zf
  struct _LIST_ENTRY *v39; // r13
  POWNER_ENTRY v40; // r12
  struct DXGPROCESS *v41; // rax
  char *v42; // rbx
  __int64 v43; // rcx
  __int64 v44; // r8
  int v45; // r9d
  __int64 v46; // rdi
  char *v47; // rcx
  PERESOURCE v48; // rax
  POWNER_ENTRY v49; // r14
  struct _LIST_ENTRY *v50; // r13
  ULONG_PTR v51; // r12
  struct DXGPROCESS *v52; // rbx
  __int64 v53; // rcx
  __int64 v54; // r8
  int v55; // r9d
  __int16 v56; // r14
  PERESOURCE v57; // r13
  D3DKMT_HANDLE v58; // r12d
  __int64 v59; // rcx
  __int64 v60; // r8
  int v61; // r9d
  D3DKMT_HANDLE v62; // ebx
  unsigned int v63; // ecx
  POWNER_ENTRY v64; // r9
  ULONG v65; // edx
  int v66; // eax
  _QWORD *v67; // rax
  __int64 Value; // rcx
  __int64 v69; // rax
  _QWORD *v70; // rax
  struct _EX_RUNDOWN_REF *v71; // rcx
  __int64 v72; // rcx
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v74; // rax
  int CurrentProcessSessionId; // esi
  __int64 *ThreadWin32Thread; // rax
  __int64 v77; // rcx
  __int64 v78; // rax
  struct _KTHREAD *v79; // rbx
  __int64 v80; // rax
  __int64 v81; // rdx
  __int64 v82; // rcx
  int v83; // esi
  __int64 v84; // r8
  __int64 v85; // rax
  __int64 v86; // rbx
  _QWORD *v87; // rax
  unsigned int v88; // [rsp+28h] [rbp-90h]
  unsigned int v89; // [rsp+30h] [rbp-88h]
  struct _EX_RUNDOWN_REF *v90; // [rsp+50h] [rbp-68h] BYREF
  struct DXGPROCESS *v91; // [rsp+58h] [rbp-60h] BYREF
  _D3DKMT_LOCK2 v92; // [rsp+60h] [rbp-58h] BYREF
  int v93; // [rsp+C0h] [rbp+8h]
  UINT PrivateDriverData; // [rsp+D8h] [rbp+20h]

  if ( !*((_DWORD *)this + 18) )
    ExIsResourceAcquiredExclusiveLite(this[13]);
  if ( *((_BYTE *)this + 1693) )
  {
    memset(&v92, 0, sizeof(v92));
    v92.hAllocation = a2->hAllocation;
    OwnerTable = this[2]->OwnerTable;
    Current = DXGPROCESS::GetCurrent();
    result = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendLock2(
               (DXG_GUEST_VIRTUALGPU_VMBUS *)&OwnerTable[243],
               Current,
               (struct DXGDEVICE *)this,
               &v92,
               1u,
               v88,
               v89);
    if ( result >= 0 )
      a2->pData = v92.pData;
  }
  else
  {
    v8 = 1;
    v93 = 1;
    if ( a2->Flags.Value >= 0x800 )
    {
LABEL_88:
      v67 = (_QWORD *)WdLogNewEntry5_WdWarning(this, a2, a3);
      v67[3] = this;
      Value = a2->Flags.Value;
LABEL_89:
      v67[4] = Value;
      LODWORD(v46) = -1073741811;
      v67[5] = -1073741811LL;
      WdLogEvent5_WdWarning(v67);
    }
    else
    {
      while ( 1 )
      {
        v9 = a2->pPages == 0LL;
        if ( (a2->NumPages == 0) != v9 )
        {
          v67 = (_QWORD *)WdLogNewEntry5_WdWarning(v9, a2, a3);
          v67[3] = this;
          Value = a2->NumPages;
          goto LABEL_89;
        }
        v10 = (struct _D3DDDICB_LOCKFLAGS::$ED792A498079A6342A08F53AEABA2A3A::$E5338CF7B743D9B09B49C7CF5F2B6ABC)a2->Flags.Value;
        v11 = this[5];
        hAllocation = a2->hAllocation;
        v13 = ((*(_BYTE *)&v10 & 4) == 0) | 2;
        if ( (*(_BYTE *)&v10 & 8) == 0 )
          v13 = (*(_BYTE *)&v10 & 4) == 0;
        v14 = v13 | 4;
        if ( (*(_BYTE *)&v10 & 0x20) == 0 )
          v14 = v13;
        v15 = v14 | 8;
        if ( (*(_BYTE *)&v10 & 0x40) == 0 )
          v15 = v14;
        v16 = v15 | 0x10;
        if ( *(_BYTE *)&v10 >= 0 )
          v16 = v15;
        v17 = v16 | 0x20;
        if ( (*(_WORD *)&v10 & 0x100) == 0 )
          v17 = v16;
        v18 = v17 | 0x48;
        if ( (*(_WORD *)&v10 & 0x200) == 0 )
          v18 = v17;
        v19 = v18 | 0x80;
        if ( (*(_WORD *)&v10 & 0x400) == 0 )
          v19 = v18;
        v20 = v19 | 0x200;
        if ( (*(_BYTE *)&v10 & 1) == 0 )
          v20 = v19;
        KeEnterCriticalRegion();
        if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(&v11[1].SpinLock, 0LL) )
        {
          if ( bTracingEnabled )
          {
            Blink = (int)v11[2].SystemResourcesList.Blink;
            if ( Blink != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
              McTemplateK0q(v21, &EventBlockThread, v22, Blink);
          }
          ExAcquirePushLockSharedEx(&v11[1].SpinLock, 0LL);
        }
        v24 = (hAllocation >> 6) & 0xFFFFFF;
        if ( (unsigned int)v24 < LODWORD(v11[2].SharedWaiters)
          && (v25 = v11[2].OwnerTable,
              TableSize = v25[v24].TableSize,
              ((hAllocation >> 25) & 0x60) == (*(_BYTE *)&v25[v24].0 & 0x60))
          && (TableSize & 0x2000) == 0
          && (TableSize & 0x1F) != 0
          && (*(_BYTE *)&v25[(unsigned int)v24].0 & 0x1F) == 5 )
        {
          OwnerThread = (struct _EX_RUNDOWN_REF *)v25[(unsigned int)v24].OwnerThread;
        }
        else
        {
          OwnerThread = 0LL;
        }
        DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v90, OwnerThread);
        ExReleasePushLockSharedEx(&v11[1].SpinLock, 0LL);
        KeLeaveCriticalRegion();
        if ( !v90 )
          break;
        Count = v90[3].Count;
        if ( !Count )
        {
          v70 = (_QWORD *)WdLogNewEntry5_WdWarning(v29, v28, v30);
          LODWORD(v46) = -1073741811;
          v70[3] = this;
          v70[4] = a2->hAllocation;
          v70[5] = v90;
          v70[6] = -1073741811LL;
          goto LABEL_96;
        }
        if ( (PERESOURCE *)v90[1].Count != this )
        {
          v70 = (_QWORD *)WdLogNewEntry5_WdWarning(v29, v28, v30);
          LODWORD(v46) = -1073741811;
          v70[3] = v90;
          v70[4] = this;
          v70[5] = v90[1].Count;
          v70[6] = -1073741811LL;
          goto LABEL_96;
        }
        v28 = *(unsigned int *)(v90[6].Count + 4);
        if ( (v28 & 2) == 0 )
        {
          v32 = v90[5].Count;
          if ( v32 )
          {
            v33 = *(_DWORD *)(v32 + 4);
            if ( (v33 & 1) != 0 && (v33 & 2) == 0 )
            {
              v29 = this[2]->OwnerTable;
              v34 = *((_DWORD *)&v29[18].8 + 1);
              if ( (v34 & 0x10) == 0 && (v34 & 8) == 0 )
                break;
            }
          }
        }
        v35 = this[2];
        v36 = v20 | 0x100;
        v37 = a2->hAllocation & 0x3F;
        v38 = v8 == 1;
        v39 = v35[5].SystemResourcesList.Blink;
        if ( !v38 )
          v36 = v20;
        v40 = v35[5].OwnerTable;
        PrivateDriverData = a2->PrivateDriverData;
        v41 = DXGPROCESS::GetCurrent();
        v91 = v41;
        if ( v41 )
        {
          v42 = (char *)v41 + 136;
          if ( *((struct _KTHREAD **)v41 + 18) == KeGetCurrentThread() )
          {
            v91 = 0LL;
          }
          else
          {
            KeEnterCriticalRegion();
            if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v42, 0LL) )
            {
              if ( bTracingEnabled )
              {
                v45 = *((_DWORD *)v42 + 4);
                if ( v45 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
                  McTemplateK0q(v43, &EventBlockThread, v44, v45);
              }
              ExAcquirePushLockExclusiveEx(v42, 0LL);
            }
            *((_QWORD *)v42 + 1) = KeGetCurrentThread();
          }
        }
        LODWORD(v46) = ((__int64 (__fastcall *)(POWNER_ENTRY, ULONG_PTR, _QWORD, _QWORD, UINT, _QWORD, struct DXGPROCESS **, void **))v39->Blink[16].Flink)(
                         v40,
                         Count,
                         v37,
                         v36,
                         PrivateDriverData,
                         0LL,
                         &v91,
                         &a2->pData);
        if ( v91 )
        {
          v47 = (char *)v91 + 136;
          *((_QWORD *)v91 + 18) = 0LL;
          ExReleasePushLockExclusiveEx(v47, 0LL);
          KeLeaveCriticalRegion();
        }
        v48 = this[2];
        v49 = v48[5].OwnerTable;
        v50 = v48[5].SystemResourcesList.Blink;
        v51 = v90[3].Count;
        v52 = DXGPROCESS::GetCurrent();
        if ( v52 )
        {
          if ( *((struct _KTHREAD **)v52 + 18) == KeGetCurrentThread() )
          {
            v52 = 0LL;
          }
          else
          {
            KeEnterCriticalRegion();
            if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx((char *)v52 + 136, 0LL) )
            {
              if ( bTracingEnabled )
              {
                v55 = *((_DWORD *)v52 + 38);
                if ( v55 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
                  McTemplateK0q(v53, &EventBlockThread, v54, v55);
              }
              ExAcquirePushLockExclusiveEx((char *)v52 + 136, 0LL);
            }
            *((_QWORD *)v52 + 18) = KeGetCurrentThread();
          }
        }
        v56 = ((__int64 (__fastcall *)(POWNER_ENTRY, ULONG_PTR))v50->Blink[17].Flink)(v49, v51);
        if ( v52 )
        {
          *((_QWORD *)v52 + 18) = 0LL;
          ExReleasePushLockExclusiveEx((char *)v52 + 136, 0LL);
          KeLeaveCriticalRegion();
        }
        v57 = this[5];
        v58 = a2->hAllocation;
        KeEnterCriticalRegion();
        if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(&v57[1].SpinLock, 0LL) )
        {
          if ( bTracingEnabled )
          {
            v61 = (int)v57[2].SystemResourcesList.Blink;
            if ( v61 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
              McTemplateK0q(v59, &EventBlockThread, v60, v61);
          }
          ExAcquirePushLockExclusiveEx(&v57[1].SpinLock, 0LL);
        }
        v62 = 0;
        v63 = (v58 >> 6) & 0xFFFFFF;
        v57[2].SystemResourcesList.Flink = (struct _LIST_ENTRY *)KeGetCurrentThread();
        if ( v63 < LODWORD(v57[2].SharedWaiters) )
        {
          v64 = v57[2].OwnerTable;
          v65 = v64[v63].TableSize;
          if ( ((v58 >> 25) & 0x60) == (*(_BYTE *)&v64[v63].0 & 0x60) && (v65 & 0x2000) == 0 && (v65 & 0x1F) != 0 )
          {
            v64[v63].TableSize = v65 ^ ((unsigned __int16)v65 ^ (unsigned __int16)(v56 << 7)) & 0x1F80;
            v62 = (v57[2].OwnerTable[v63].TableSize >> 7) & 0x3F | ((v63 | ((v57[2].OwnerTable[v63].TableSize & 0xFFFFFFE0) << 19)) << 6);
          }
        }
        v57[2].SystemResourcesList.Flink = 0LL;
        ExReleasePushLockExclusiveEx(&v57[1].SpinLock, 0LL);
        KeLeaveCriticalRegion();
        a2->hAllocation = v62;
        if ( (_DWORD)v46 != -1071775484 )
          goto LABEL_97;
        COREDEVICEACCESS::Release(a3);
        LODWORD(v46) = ((__int64 (__fastcall *)(POWNER_ENTRY, ULONG_PTR, _QWORD, __int64))this[2][5].SystemResourcesList.Blink->Blink[38].Flink)(
                         this[2][5].OwnerTable,
                         v90[3].Count,
                         a2->hAllocation & 0x3F,
                         2LL);
        if ( (int)v46 < 0 )
          goto LABEL_97;
        v66 = COREDEVICEACCESS::AcquireShared(a3);
        v46 = v66;
        if ( v66 < 0 )
        {
          v69 = WdLogNewEntry5_WdEvent();
          *(_QWORD *)(v69 + 24) = v46;
          WdLogEvent5_WdEvent(v69);
          COREDEVICEACCESS::AcquireSharedUncheck(a3);
          goto LABEL_97;
        }
        a2->Flags.Value &= ~0x80u;
        if ( v93 != 1 )
          goto LABEL_97;
        v8 = 2;
        v93 = 2;
        DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v90);
        if ( a2->Flags.Value >= 0x800 )
          goto LABEL_88;
      }
      v70 = (_QWORD *)WdLogNewEntry5_WdWarning(v29, v28, v30);
      LODWORD(v46) = -1073741811;
      v70[3] = this;
      v70[4] = a2->hAllocation;
      v70[5] = -1073741811LL;
LABEL_96:
      WdLogEvent5_WdWarning(v70);
LABEL_97:
      v71 = v90;
      if ( v90 )
        ExReleaseRundownProtection(v90 + 11);
      if ( *((_DWORD *)DXGGLOBAL::GetGlobal((__int64)v71) + 203) )
      {
        CurrentThread = KeGetCurrentThread();
        if ( !CurrentThread )
        {
          v74 = WdLogNewEntry5_WdAssertion(v72);
          *(_QWORD *)(v74 + 24) = 94LL;
          WdLogEvent5_WdAssertion(v74);
        }
        CurrentProcessSessionId = PsGetCurrentProcessSessionId();
        if ( CurrentProcessSessionId )
        {
          if ( (unsigned int)PsGetThreadSessionId(CurrentThread) == CurrentProcessSessionId
            && !IsThreadCrossSessionAttached() )
          {
            ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
            if ( ThreadWin32Thread )
            {
              v78 = *ThreadWin32Thread;
              if ( v78 )
              {
                if ( *(_QWORD *)(v78 + 80) )
                {
                  v79 = KeGetCurrentThread();
                  if ( !v79 )
                  {
                    v80 = WdLogNewEntry5_WdAssertion(v77);
                    *(_QWORD *)(v80 + 24) = 94LL;
                    WdLogEvent5_WdAssertion(v80);
                  }
                  v83 = PsGetCurrentProcessSessionId();
                  if ( v83
                    && (unsigned int)PsGetThreadSessionId(v79) == v83
                    && !IsThreadCrossSessionAttached()
                    && (v85 = PsGetThreadWin32Thread(v79)) != 0
                    && *(_QWORD *)v85 )
                  {
                    v86 = *(_QWORD *)(*(_QWORD *)v85 + 80LL);
                  }
                  else
                  {
                    v86 = 0LL;
                  }
                  if ( *(_DWORD *)(v86 + 136) )
                  {
                    v87 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v82, v81, v84);
                    v87[3] = 275LL;
                    v87[4] = 25LL;
                    v87[5] = *(int *)(v86 + 136);
                    v87[6] = 0LL;
                    v87[7] = 0LL;
                    WdLogEvent5_WdCriticalError(v87);
                  }
                }
              }
            }
          }
        }
      }
    }
    return v46;
  }
  return result;
}
