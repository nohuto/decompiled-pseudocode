/*
 * XREFs of ?Unlock@DXGDEVICE@@QEAAJPEBU_D3DKMT_UNLOCK@@E@Z @ 0x1C00E9030
 * Callers:
 *     DxgkLock @ 0x1C00CAEF0 (DxgkLock.c)
 *     DxgkUnlock @ 0x1C00CE6A0 (DxgkUnlock.c)
 *     ?DxgkCddUnlock@@YAJPEAU_D3DKMT_UNLOCK@@I@Z @ 0x1C00D3660 (-DxgkCddUnlock@@YAJPEAU_D3DKMT_UNLOCK@@I@Z.c)
 *     ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C0101F80 (-Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESET.c)
 *     ?PresentCddShadowBuffer@@YAJPEAVDXGCONTEXT@@PEAVDXGHWQUEUE@@_KI@Z @ 0x1C016FA54 (-PresentCddShadowBuffer@@YAJPEAVDXGCONTEXT@@PEAVDXGHWQUEUE@@_KI@Z.c)
 *     ?DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z @ 0x1C0170610 (-DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z.c)
 *     ?SetPresentDodArg@PRESENTDODARG@@QEAAJPEAVDXGCONTEXT@@IPEAVDXGALLOCATION@@KEPEBUtagRECT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C01D64FC (-SetPresentDodArg@PRESENTDODARG@@QEAAJPEAVDXGCONTEXT@@IPEAVDXGALLOCATION@@KEPEBUtagRECT@@PEBU_D3.c)
 *     ?CheckPrimaryContentTile@VIDPNSOURCEINFO@@AEAAJPEAVDXGDEVICE@@IIPEBUtagRECT@@PEAVCOREDEVICEACCESS@@PEAI3@Z @ 0x1C01EA524 (-CheckPrimaryContentTile@VIDPNSOURCEINFO@@AEAAJPEAVDXGDEVICE@@IIPEBUtagRECT@@PEAVCOREDEVICEACCES.c)
 * Callees:
 *     ?IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z @ 0x1C0014AF8 (-IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00150F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C00157C0 (--1COREACCESS@@QEAA@XZ.c)
 *     ??0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z @ 0x1C00158C0 (--0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z.c)
 *     ?AcquireShared@COREACCESS@@QEAAXXZ @ 0x1C00158E4 (-AcquireShared@COREACCESS@@QEAAXXZ.c)
 *     ?GetDisplayedPrimary@DXGDEVICE@@QEAAPEBVDXGALLOCATION@@I@Z @ 0x1C0019AB4 (-GetDisplayedPrimary@DXGDEVICE@@QEAAPEBVDXGALLOCATION@@I@Z.c)
 *     ?GetAllocationSafe@DXGPROCESS@@QEAA?AVDXGALLOCATIONREFERENCE@@I@Z @ 0x1C001A57C (-GetAllocationSafe@DXGPROCESS@@QEAA-AVDXGALLOCATIONREFERENCE@@I@Z.c)
 *     ?VidMmEndCPUAccess@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@KKPEAU_VIDMM_REGION@@@Z @ 0x1C001AA1C (-VidMmEndCPUAccess@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@KKPEAU_VIDMM_REG.c)
 *     IsThreadCrossSessionAttached @ 0x1C001B400 (IsThreadCrossSessionAttached.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00E5A90 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C00E8360 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?VmBusSendUnlock2@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAU_D3DKMT_UNLOCK2@@E@Z @ 0x1C0185890 (-VmBusSendUnlock2@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAU_D3DKMT_UN.c)
 *     ?UpdateDodFrontBuffer@DXGDEVICE@@QEAAJPEAVDXGALLOCATION@@@Z @ 0x1C01A75CC (-UpdateDodFrontBuffer@DXGDEVICE@@QEAAJPEAVDXGALLOCATION@@@Z.c)
 */

__int64 __fastcall DXGDEVICE::Unlock(DXGDEVICE *this, const struct _D3DKMT_UNLOCK *a2, __int64 a3)
{
  const struct _D3DKMT_UNLOCK *v3; // r13
  __int64 NumAllocations; // rcx
  __int64 v6; // rax
  __int64 v8; // rax
  __int64 v9; // rbx
  struct DXGPROCESS *Current; // rax
  int v11; // r12d
  __int64 v12; // r15
  unsigned int *v13; // rdx
  unsigned int v14; // ebx
  unsigned int v15; // r14d
  __int64 v16; // rdx
  __int64 v17; // rcx
  struct DXGALLOCATION *v18; // r8
  _QWORD *v19; // rax
  __int64 v20; // rsi
  _QWORD *v21; // rax
  unsigned int v22; // esi
  unsigned int v23; // esi
  struct DXGALLOCATION *DisplayedPrimary; // rax
  _QWORD *v25; // rax
  int v26; // eax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  _QWORD *v30; // rax
  struct DXGALLOCATION *v31; // rcx
  __int64 v32; // rcx
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v34; // rax
  int CurrentProcessSessionId; // ebx
  __int64 v36; // rbx
  __int64 v37; // rcx
  __int64 *ThreadWin32Thread; // rax
  __int64 v39; // rax
  struct _KTHREAD *v40; // rsi
  __int64 v41; // rax
  __int64 v42; // rcx
  int v43; // ebx
  __int64 v44; // rbx
  __int64 *v45; // rax
  __int64 v46; // rbx
  _QWORD *v47; // rax
  _D3DKMT_UNLOCK2 v48; // [rsp+30h] [rbp-68h] BYREF
  struct DXGALLOCATION *v49; // [rsp+38h] [rbp-60h] BYREF
  DXGADAPTER *v50[11]; // [rsp+40h] [rbp-58h] BYREF
  char v51; // [rsp+B0h] [rbp+18h]
  unsigned int v52; // [rsp+B8h] [rbp+20h]

  v51 = a3;
  v3 = a2;
  NumAllocations = a2->NumAllocations;
  if ( (_DWORD)NumAllocations && (a2 = (const struct _D3DKMT_UNLOCK *)a2->phAllocations) != 0LL )
  {
    if ( (*((_BYTE *)this + 1709) & 1) != 0 )
    {
      if ( (_DWORD)NumAllocations == 1 )
      {
        v48 = 0LL;
        v48.hAllocation = a2->hDevice;
        v9 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
        Current = DXGPROCESS::GetCurrent(NumAllocations, (__int64)a2);
        return DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendUnlock2(
                 (DXG_GUEST_VIRTUALGPU_VMBUS *)(v9 + 4080),
                 Current,
                 this,
                 &v48,
                 1);
      }
      else
      {
        v8 = WdLogNewEntry5_WdError(NumAllocations);
        *(_QWORD *)(v8 + 24) = this;
        *(_QWORD *)(v8 + 32) = -1073741811LL;
        WdLogEvent5_WdError(v8);
        return 3221225485LL;
      }
    }
    else
    {
      v11 = 0;
      v12 = 0LL;
      while ( 1 )
      {
        v48.hDevice = v12;
        if ( (unsigned int)v12 >= v3->NumAllocations )
          return (unsigned int)v11;
        if ( (_BYTE)a3 )
        {
          v13 = (unsigned int *)&v3->phAllocations[v12];
          if ( (unsigned __int64)v13 >= MmUserProbeAddress )
            v13 = (unsigned int *)MmUserProbeAddress;
          v14 = *v13;
          v52 = *v13;
        }
        else
        {
          v14 = v3->phAllocations[v12];
          v52 = v14;
        }
        v15 = v14 & 0x3F;
        DXGPROCESS::GetAllocationSafe(*((_QWORD *)this + 5), (DXGALLOCATIONREFERENCE *)&v49, v14);
        v18 = v49;
        if ( v49 )
        {
          if ( *((_QWORD *)v49 + 3) )
          {
            if ( !*((_DWORD *)this + 82) )
            {
              v22 = *(_DWORD *)(*((_QWORD *)v49 + 6) + 4LL);
              if ( (v22 & 4) != 0 )
              {
                if ( v51 )
                {
                  v23 = (v22 >> 6) & 0xF;
                  COREACCESS::COREACCESS((COREACCESS *)v50, *((struct DXGADAPTER *const *)this + 211));
                  COREACCESS::AcquireShared(v50);
                  if ( *((_DWORD *)this + 106) == 1
                    && ADAPTER_DISPLAY::IsVidPnSourceOwner(
                         *(DXGADAPTER ***)(*((_QWORD *)this + 211) + 2456LL),
                         this,
                         v23) )
                  {
                    DisplayedPrimary = DXGDEVICE::GetDisplayedPrimary(this, v23);
                    if ( DisplayedPrimary == v49 )
                      DXGDEVICE::UpdateDodFrontBuffer(this, v49);
                  }
                  COREACCESS::~COREACCESS((COREACCESS *)v50);
                  v14 = v52;
                  v18 = v49;
                }
              }
            }
            if ( *((DXGDEVICE **)v18 + 1) != this )
            {
              v25 = (_QWORD *)WdLogNewEntry5_WdWarning(v17, v16, v18);
              v25[3] = v49;
              v25[4] = this;
              v25[5] = *((_QWORD *)v49 + 1);
              v25[6] = -1073741811LL;
              WdLogEvent5_WdWarning(v25);
              DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v49);
              return 3221225485LL;
            }
            v26 = VIDMM_EXPORT::VidMmEndCPUAccess(
                    *(VIDMM_EXPORT **)(*((_QWORD *)this + 2) + 544LL),
                    *(struct VIDMM_GLOBAL **)(*((_QWORD *)this + 2) + 552LL),
                    *((struct _VIDMM_MULTI_ALLOC **)v18 + 3),
                    v15);
            v20 = v26;
            if ( v26 < 0 )
            {
              v30 = (_QWORD *)WdLogNewEntry5_WdWarning(v28, v27, v29);
              v30[3] = this;
              v30[4] = v14;
              v30[5] = v49;
              v30[6] = v20;
              WdLogEvent5_WdWarning(v30);
            }
          }
          else
          {
            v21 = (_QWORD *)WdLogNewEntry5_WdWarning(v17, v16, v49);
            v21[3] = this;
            v21[4] = v14;
            v21[5] = v49;
            v21[6] = -1073741811LL;
            WdLogEvent5_WdWarning(v21);
            LODWORD(v20) = -1073741811;
          }
        }
        else
        {
          v19 = (_QWORD *)WdLogNewEntry5_WdWarning(v17, v16, 0LL);
          v19[3] = this;
          v19[4] = v14;
          v19[5] = -1073741811LL;
          WdLogEvent5_WdWarning(v19);
          LODWORD(v20) = -1073741811;
        }
        if ( v11 < 0 )
          LODWORD(v20) = v11;
        v11 = v20;
        v31 = v49;
        if ( v49 )
          ExReleaseRundownProtection((PEX_RUNDOWN_REF)v49 + 11);
        if ( *((_DWORD *)DXGGLOBAL::GetGlobal((__int64)v31) + 223) )
        {
          CurrentThread = KeGetCurrentThread();
          if ( !CurrentThread )
          {
            v34 = WdLogNewEntry5_WdAssertion(v32);
            *(_QWORD *)(v34 + 24) = 94LL;
            WdLogEvent5_WdAssertion(v34);
          }
          CurrentProcessSessionId = PsGetCurrentProcessSessionId(v32);
          if ( CurrentProcessSessionId && (unsigned int)PsGetThreadSessionId(CurrentThread) == CurrentProcessSessionId )
          {
            v36 = 0LL;
            if ( !IsThreadCrossSessionAttached() )
            {
              ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
              if ( ThreadWin32Thread )
                v36 = *ThreadWin32Thread;
            }
            if ( v36 )
              v39 = *(_QWORD *)(v36 + 80);
            else
              v39 = 0LL;
            if ( v39 )
            {
              v40 = KeGetCurrentThread();
              if ( !v40 )
              {
                v41 = WdLogNewEntry5_WdAssertion(v37);
                *(_QWORD *)(v41 + 24) = 94LL;
                WdLogEvent5_WdAssertion(v41);
              }
              v43 = PsGetCurrentProcessSessionId(v37);
              if ( !v43 || (unsigned int)PsGetThreadSessionId(v40) != v43 )
                goto LABEL_56;
              v44 = 0LL;
              if ( !IsThreadCrossSessionAttached() )
              {
                v45 = (__int64 *)PsGetThreadWin32Thread(v40);
                if ( v45 )
                  v44 = *v45;
              }
              if ( v44 )
                v46 = *(_QWORD *)(v44 + 80);
              else
LABEL_56:
                v46 = 0LL;
              if ( *(_DWORD *)(v46 + 136) )
              {
                v47 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v42);
                v47[3] = 275LL;
                v47[4] = 38LL;
                v47[5] = *(int *)(v46 + 136);
                v47[6] = 0LL;
                v47[7] = 0LL;
                WdLogEvent5_WdCriticalError(v47);
              }
            }
          }
        }
        v12 = (unsigned int)(v12 + 1);
        LOBYTE(a3) = v51;
      }
    }
  }
  else
  {
    v6 = WdLogNewEntry5_WdWarning(NumAllocations, a2, a3);
    *(_QWORD *)(v6 + 24) = this;
    *(_QWORD *)(v6 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v6);
    return 3221225485LL;
  }
}
