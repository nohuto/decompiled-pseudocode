/*
 * XREFs of ?Unlock@DXGDEVICE@@QEAAJPEBU_D3DKMT_UNLOCK@@E@Z @ 0x1C00C1704
 * Callers:
 *     ?DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z @ 0x1C008A630 (-DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z.c)
 *     DxgkLock @ 0x1C009DBE0 (DxgkLock.c)
 *     DxgkUnlock @ 0x1C009F070 (DxgkUnlock.c)
 *     ?DxgkCddUnlock@@YAJPEAU_D3DKMT_UNLOCK@@I@Z @ 0x1C00A4D40 (-DxgkCddUnlock@@YAJPEAU_D3DKMT_UNLOCK@@I@Z.c)
 *     ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C00B43A0 (-Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESET.c)
 *     ?PresentCddShadowBuffer@@YAJPEAVDXGCONTEXT@@I@Z @ 0x1C011D764 (-PresentCddShadowBuffer@@YAJPEAVDXGCONTEXT@@I@Z.c)
 *     ?SetPresentDodArg@PRESENTDODARG@@QEAAJPEAVDXGCONTEXT@@PEAVDXGALLOCATION@@KEPEBUtagRECT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C01B5F44 (-SetPresentDodArg@PRESENTDODARG@@QEAAJPEAVDXGCONTEXT@@PEAVDXGALLOCATION@@KEPEBUtagRECT@@PEBU_D3D.c)
 * Callees:
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0005B90 (--1COREACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXXZ @ 0x1C0005C34 (-AcquireShared@COREACCESS@@QEAAXXZ.c)
 *     ?IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z @ 0x1C000B6D4 (-IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z.c)
 *     ?VidMmEndCPUAccess@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@KKPEAU_VIDMM_REGION@@@Z @ 0x1C000DAF4 (-VidMmEndCPUAccess@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@KKPEAU_VIDMM_REG.c)
 *     ?VmBusChannelOpened@DXG_HOST_GLOBAL_VMBUS@@SAJPEAUVMBCHANNEL__@@@Z @ 0x1C000E1F0 (-VmBusChannelOpened@DXG_HOST_GLOBAL_VMBUS@@SAJPEAUVMBCHANNEL__@@@Z.c)
 *     ?GetDisplayedPrimary@DXGDEVICE@@QEAAPEBVDXGALLOCATION@@I@Z @ 0x1C000F5E0 (-GetDisplayedPrimary@DXGDEVICE@@QEAAPEBVDXGALLOCATION@@I@Z.c)
 *     ??0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z @ 0x1C001374C (--0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z.c)
 *     ?GetAllocationSafe@DXGPROCESS@@QEAA?AVDXGALLOCATIONREFERENCE@@I@Z @ 0x1C0013830 (-GetAllocationSafe@DXGPROCESS@@QEAA-AVDXGALLOCATIONREFERENCE@@I@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00BF530 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C00CCDF0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?UpdateDodFrontBuffer@DXGDEVICE@@QEAAJPEAVDXGALLOCATION@@@Z @ 0x1C019789C (-UpdateDodFrontBuffer@DXGDEVICE@@QEAAJPEAVDXGALLOCATION@@@Z.c)
 */

__int64 __fastcall DXGDEVICE::Unlock(DXGDEVICE *this, const struct _D3DKMT_UNLOCK *a2, __int64 a3, __int64 a4)
{
  __int64 NumAllocations; // rcx
  int v7; // r12d
  __int64 v8; // r14
  unsigned int *v9; // rdx
  unsigned int v10; // esi
  unsigned int v11; // r15d
  __int64 v12; // rdx
  __int64 v13; // r9
  struct DXGALLOCATION *v14; // r8
  __int64 v15; // rcx
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // r15
  __int64 v23; // rax
  _QWORD *v24; // rax
  __int64 v25; // rax
  struct VMBCHANNEL__ *v26; // rcx
  _QWORD *v27; // rax
  unsigned int v28; // r15d
  unsigned int v29; // r15d
  bool v30; // r8
  struct DXGALLOCATION *DisplayedPrimary; // rax
  _QWORD *v32; // rax
  unsigned int v33; // [rsp+30h] [rbp-68h]
  struct DXGALLOCATION *v34; // [rsp+38h] [rbp-60h] BYREF
  _BYTE v35[88]; // [rsp+40h] [rbp-58h] BYREF
  char v36; // [rsp+B0h] [rbp+18h]
  unsigned int v37; // [rsp+B8h] [rbp+20h]

  v36 = a3;
  NumAllocations = a2->NumAllocations;
  if ( !(_DWORD)NumAllocations || !a2->phAllocations )
  {
    v23 = WdLogNewEntry5_WdWarning(NumAllocations, a2, a3, a4);
    *(_QWORD *)(v23 + 24) = this;
    *(_QWORD *)(v23 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v23);
    return 3221225485LL;
  }
  if ( !*((_BYTE *)this + 1821) )
  {
    v7 = 0;
    v8 = 0LL;
    while ( 1 )
    {
      if ( (unsigned int)v8 >= a2->NumAllocations )
        return (unsigned int)v7;
      if ( (_BYTE)a3 )
      {
        v9 = (unsigned int *)&a2->phAllocations[v8];
        if ( (unsigned __int64)v9 >= MmUserProbeAddress )
          v9 = (unsigned int *)MmUserProbeAddress;
        v10 = *v9;
        v33 = *v9;
      }
      else
      {
        v10 = a2->phAllocations[v8];
        v33 = v10;
      }
      v11 = v10 & 0x3F;
      v37 = v11;
      DXGPROCESS::GetAllocationSafe(*((_QWORD *)this + 5), (DXGALLOCATIONREFERENCE *)&v34, v10);
      v14 = v34;
      v15 = 0LL;
      if ( !v34 )
        break;
      if ( !*((_QWORD *)v34 + 3) )
      {
        v27 = (_QWORD *)WdLogNewEntry5_WdWarning(0LL, v12, v34, v13);
        v27[3] = this;
        v27[4] = v10;
        v27[5] = v34;
        v27[6] = -1073741811LL;
        goto LABEL_29;
      }
      if ( !*((_DWORD *)this + 82) )
      {
        v28 = *(_DWORD *)(*((_QWORD *)v34 + 6) + 4LL);
        if ( (v28 & 4) != 0 && v36 )
        {
          v29 = (v28 >> 6) & 0xF;
          COREACCESS::COREACCESS((COREACCESS *)v35, *((struct DXGADAPTER *const *)this + 225));
          COREACCESS::AcquireShared((COREACCESS *)v35);
          if ( *((_DWORD *)this + 102) == 1
            && ADAPTER_DISPLAY::IsVidPnSourceOwner(*(DXGADAPTER ***)(*((_QWORD *)this + 225) + 2280LL), this, v29) )
          {
            DisplayedPrimary = DXGDEVICE::GetDisplayedPrimary(this, v29, v30);
            if ( DisplayedPrimary == v34 )
              DXGDEVICE::UpdateDodFrontBuffer(this, v34);
          }
          COREACCESS::~COREACCESS((COREACCESS *)v35);
          v10 = v33;
          v14 = v34;
        }
        v11 = v37;
      }
      if ( *((DXGDEVICE **)v14 + 1) != this )
      {
        v24 = (_QWORD *)WdLogNewEntry5_WdWarning(v15, v12, v14, v13);
        v24[3] = v34;
        v24[4] = this;
        v24[5] = *((_QWORD *)v34 + 1);
        v24[6] = -1073741811LL;
        WdLogEvent5_WdWarning(v24);
        DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v34);
        return 3221225485LL;
      }
      v16 = VIDMM_EXPORT::VidMmEndCPUAccess(
              *(VIDMM_EXPORT **)(*((_QWORD *)this + 2) + 432LL),
              *(struct VIDMM_GLOBAL **)(*((_QWORD *)this + 2) + 440LL),
              *((struct _VIDMM_MULTI_ALLOC **)v14 + 3),
              v11);
      v21 = v16;
      if ( v16 < 0 )
      {
        v32 = (_QWORD *)WdLogNewEntry5_WdWarning(v18, v17, v19, v20);
        v32[3] = this;
        v32[4] = v10;
        v32[5] = v34;
        v32[6] = v21;
        WdLogEvent5_WdWarning(v32);
      }
LABEL_16:
      if ( v7 >= 0 )
        v7 = v21;
      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v34);
      v8 = (unsigned int)(v8 + 1);
      LOBYTE(a3) = v36;
    }
    v27 = (_QWORD *)WdLogNewEntry5_WdWarning(0LL, v12, 0LL, v13);
    v27[3] = this;
    v27[4] = v10;
    v27[5] = -1073741811LL;
LABEL_29:
    WdLogEvent5_WdWarning(v27);
    LODWORD(v21) = -1073741811;
    goto LABEL_16;
  }
  if ( (_DWORD)NumAllocations == 1 )
  {
    DXGPROCESS::GetCurrent(NumAllocations);
    return DXG_HOST_GLOBAL_VMBUS::VmBusChannelOpened(v26);
  }
  else
  {
    v25 = WdLogNewEntry5_WdError(NumAllocations, a2);
    *(_QWORD *)(v25 + 24) = this;
    *(_QWORD *)(v25 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v25);
    return 3221225485LL;
  }
}
