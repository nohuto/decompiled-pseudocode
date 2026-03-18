/*
 * XREFs of ?Lock@DXGDEVICE@@QEAAJPEAU_D3DKMT_LOCK@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00C12EC
 * Callers:
 *     ?DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z @ 0x1C008A630 (-DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z.c)
 *     DxgkLock @ 0x1C009DBE0 (DxgkLock.c)
 *     ?DxgkCddLock@@YAJPEAU_D3DKMT_LOCK@@I@Z @ 0x1C00A4090 (-DxgkCddLock@@YAJPEAU_D3DKMT_LOCK@@I@Z.c)
 *     ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C00B43A0 (-Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESET.c)
 *     ?PresentCddShadowBuffer@@YAJPEAVDXGCONTEXT@@I@Z @ 0x1C011D764 (-PresentCddShadowBuffer@@YAJPEAVDXGCONTEXT@@I@Z.c)
 *     ?SetPresentDodArg@PRESENTDODARG@@QEAAJPEAVDXGCONTEXT@@PEAVDXGALLOCATION@@KEPEBUtagRECT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C01B5F44 (-SetPresentDodArg@PRESENTDODARG@@QEAAJPEAVDXGCONTEXT@@PEAVDXGALLOCATION@@KEPEBUtagRECT@@PEBU_D3D.c)
 * Callees:
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x1C0005890 (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C000590C (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0006DD0 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0006E30 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?VidMmBeginCPUAccess@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@KKIPEAU_VIDMM_REGION@@PEAPEAX@Z @ 0x1C000DA38 (-VidMmBeginCPUAccess@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@KKIPEAU_VIDMM_.c)
 *     ??0DXGPROCESSVIDMMLOCK@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C000E010 (--0DXGPROCESSVIDMMLOCK@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 *     ?VmBusSendLock2@DXGADAPTER@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAU_D3DKMT_LOCK2@@EII@Z @ 0x1C003056C (-VmBusSendLock2@DXGADAPTER@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAU_D3DKMT_LOCK2@@EII@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00BF530 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C00CCDB0 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C00CCDF0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 */

__int64 __fastcall DXGDEVICE::Lock(PERESOURCE *this, struct _D3DKMT_LOCK *a2, struct COREDEVICEACCESS *a3, __int64 a4)
{
  int v6; // edi
  _BOOL8 v7; // rcx
  struct _D3DDDICB_LOCKFLAGS::$ED792A498079A6342A08F53AEABA2A3A::$E5338CF7B743D9B09B49C7CF5F2B6ABC Value; // r8d
  PERESOURCE v9; // rsi
  D3DKMT_HANDLE hAllocation; // ebx
  int v11; // edx
  int v12; // ecx
  int v13; // edx
  int v14; // ecx
  int v15; // edx
  int v16; // ecx
  int v17; // edx
  int v18; // r12d
  unsigned int v19; // r8d
  _QWORD *Address; // rdx
  int v21; // ecx
  struct DXGALLOCATION *v22; // rdx
  __int64 v23; // rdx
  POWNER_ENTRY v24; // rcx
  struct _VIDMM_MULTI_ALLOC *v25; // r8
  __int64 v26; // r9
  __int64 v27; // rcx
  unsigned int v28; // r10d
  __int64 v29; // r14
  PERESOURCE v30; // rax
  __int64 v31; // rsi
  POWNER_ENTRY v32; // rbx
  __int64 v33; // rdi
  __int64 v34; // rcx
  struct _KTHREAD **v35; // rax
  int v36; // eax
  __int64 v37; // rcx
  int v38; // esi
  PERESOURCE v39; // r12
  D3DKMT_HANDLE v40; // edi
  D3DKMT_HANDLE v41; // ebx
  unsigned int v42; // r8d
  _DWORD *v43; // rdx
  int v44; // ecx
  __int64 result; // rax
  int v46; // eax
  int v47; // eax
  __int64 v48; // rcx
  DXGADAPTER *OwnerTable; // rbx
  struct DXGPROCESS *Current; // rax
  _QWORD *v51; // rax
  __int64 v52; // rax
  _QWORD *v53; // rax
  __int64 NumPages; // rcx
  struct _VIDMM_REGION *v55; // [rsp+30h] [rbp-30h]
  __int64 v56; // [rsp+40h] [rbp-20h] BYREF
  struct _D3DKMT_LOCK2 v57; // [rsp+48h] [rbp-18h] BYREF
  int v58; // [rsp+A0h] [rbp+40h]
  _QWORD *v60; // [rsp+B8h] [rbp+58h] BYREF

  if ( !*((_DWORD *)this + 18) )
    ExIsResourceAcquiredExclusiveLite(this[13]);
  if ( *((_BYTE *)this + 1821) )
  {
    memset(&v57, 0, sizeof(v57));
    v57.hAllocation = a2->hAllocation;
    OwnerTable = (DXGADAPTER *)this[2]->OwnerTable;
    Current = DXGPROCESS::GetCurrent((__int64)this);
    result = DXGADAPTER::VmBusSendLock2(OwnerTable, Current, (struct DXGDEVICE *)this, &v57, 1u);
    if ( (int)result >= 0 )
      a2->pData = v57.pData;
  }
  else
  {
    v6 = 1;
    v58 = 1;
    while ( a2->Flags.Value < 0x800 )
    {
      v7 = a2->NumPages == 0;
      if ( v7 != (a2->pPages == 0LL) )
      {
        v53 = (_QWORD *)WdLogNewEntry5_WdWarning(v7, a2, a3, a4);
        v53[3] = this;
        NumPages = a2->NumPages;
        goto LABEL_66;
      }
      Value = (struct _D3DDDICB_LOCKFLAGS::$ED792A498079A6342A08F53AEABA2A3A::$E5338CF7B743D9B09B49C7CF5F2B6ABC)a2->Flags.Value;
      v9 = this[5];
      hAllocation = a2->hAllocation;
      v11 = ((*(_BYTE *)&Value & 4) == 0) | 2;
      if ( (*(_BYTE *)&Value & 8) == 0 )
        v11 = (*(_BYTE *)&Value & 4) == 0;
      v12 = v11 | 4;
      if ( (*(_BYTE *)&Value & 0x20) == 0 )
        v12 = v11;
      v13 = v12 | 8;
      if ( (*(_BYTE *)&Value & 0x40) == 0 )
        v13 = v12;
      v14 = v13 | 0x10;
      if ( *(_BYTE *)&Value >= 0 )
        v14 = v13;
      v15 = v14 | 0x20;
      if ( (*(_WORD *)&Value & 0x100) == 0 )
        v15 = v14;
      v16 = v15 | 0x48;
      if ( (*(_WORD *)&Value & 0x200) == 0 )
        v16 = v15;
      v17 = v16 | 0x80;
      if ( (*(_WORD *)&Value & 0x400) == 0 )
        v17 = v16;
      v18 = v17 | 0x200;
      if ( (*(_BYTE *)&Value & 1) == 0 )
        v18 = v17;
      DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)&v9[1].ActiveEntries);
      v19 = (hAllocation >> 6) & 0xFFFFFF;
      if ( v19 < LODWORD(v9[2].SystemResourcesList.Flink)
        && (Address = v9[1].Address,
            v21 = Address[2 * v19 + 1],
            ((hAllocation >> 26) & 0x30) == (Address[2 * v19 + 1] & 0x30))
        && (v21 & 0x1000) == 0
        && (v21 & 0xF) != 0
        && (Address[2 * v19 + 1] & 0xF) == 5 )
      {
        v22 = (struct DXGALLOCATION *)Address[2 * v19];
      }
      else
      {
        v22 = 0LL;
      }
      DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v60, v22);
      ExReleasePushLockSharedEx(&v9[1].ActiveEntries, 0LL);
      KeLeaveCriticalRegion();
      if ( !v60 )
      {
LABEL_58:
        v51 = (_QWORD *)WdLogNewEntry5_WdWarning(v24, v23, v25, v26);
        LODWORD(v29) = -1073741811;
        v51[3] = this;
        v51[4] = a2->hAllocation;
        v51[5] = -1073741811LL;
LABEL_59:
        WdLogEvent5_WdWarning(v51);
LABEL_45:
        DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v60);
        return (unsigned int)v29;
      }
      v25 = (struct _VIDMM_MULTI_ALLOC *)v60[3];
      if ( !v25 )
      {
        v51 = (_QWORD *)WdLogNewEntry5_WdWarning(v24, v23, 0LL, v26);
        v51[3] = this;
        v51[4] = a2->hAllocation;
        v51[5] = v60;
        goto LABEL_63;
      }
      if ( (PERESOURCE *)v60[1] != this )
      {
        v51 = (_QWORD *)WdLogNewEntry5_WdWarning(v24, v23, v25, v26);
        v51[3] = v60;
        v51[4] = this;
        v51[5] = v60[1];
LABEL_63:
        LODWORD(v29) = -1073741811;
        v51[6] = -1073741811LL;
        goto LABEL_59;
      }
      v23 = *(unsigned int *)(v60[6] + 4LL);
      if ( (v23 & 2) == 0 )
      {
        v27 = v60[5];
        if ( v27 )
        {
          if ( (*(_DWORD *)(v27 + 4) & 3) == 1 )
          {
            v24 = this[2]->OwnerTable;
            v46 = *((_DWORD *)&v24[18].8 + 1);
            if ( (v46 & 0x10) == 0 && (v46 & 8) == 0 )
              goto LABEL_58;
          }
        }
      }
      v28 = v18 | 0x100;
      if ( v6 != 1 )
        v28 = v18;
      LODWORD(v29) = VIDMM_EXPORT::VidMmBeginCPUAccess(
                       (VIDMM_EXPORT *)this[2][4].OwnerTable,
                       *(struct VIDMM_GLOBAL **)&this[2][4].ActiveCount,
                       v25,
                       a2->hAllocation & 0x3F,
                       v28,
                       a2->PrivateDriverData,
                       v55,
                       &a2->pData);
      v30 = this[2];
      v31 = *(_QWORD *)&v30[4].ActiveCount;
      v32 = v30[4].OwnerTable;
      v33 = v60[3];
      v35 = (struct _KTHREAD **)DXGPROCESS::GetCurrent(v34);
      DXGPROCESSVIDMMLOCK::DXGPROCESSVIDMMLOCK((DXGPROCESSVIDMMLOCK *)&v56, v35);
      v36 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)&v32->0 + 272LL))(v31, v33);
      v37 = v56;
      v38 = v36;
      if ( v56 )
      {
        *(_QWORD *)(v56 + 120) = 0LL;
        ExReleasePushLockExclusiveEx(v37 + 112, 0LL);
        KeLeaveCriticalRegion();
      }
      v39 = this[5];
      v40 = a2->hAllocation;
      DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)&v39[1].ActiveEntries);
      v41 = 0;
      v42 = (v40 >> 6) & 0xFFFFFF;
      if ( v42 < LODWORD(v39[2].SystemResourcesList.Flink) )
      {
        v43 = v39[1].Address;
        v44 = v43[4 * v42 + 2];
        if ( ((v40 >> 26) & 0x30) == (v43[4 * v42 + 2] & 0x30) && (v44 & 0x1000) == 0 && (v44 & 0xF) != 0 )
        {
          v43[4 * v42 + 2] ^= (v43[4 * v42 + 2] ^ (v38 << 6)) & 0xFC0;
          v41 = (*(_DWORD *)(v39[1].CreatorBackTraceIndex + 16LL * v42 + 8) >> 6) & 0x3F | (((*(_DWORD *)(v39[1].CreatorBackTraceIndex + 16LL * v42 + 8) << 20) ^ (v42 ^ (*(_DWORD *)(v39[1].CreatorBackTraceIndex + 16LL * v42 + 8) << 20)) & 0xFFFFFF) << 6);
        }
      }
      *(_QWORD *)&v39[1].NumberOfSharedWaiters = 0LL;
      ExReleasePushLockExclusiveEx(&v39[1].ActiveEntries, 0LL);
      KeLeaveCriticalRegion();
      a2->hAllocation = v41;
      if ( (_DWORD)v29 != -1071775484 )
        goto LABEL_45;
      COREDEVICEACCESS::Release(a3);
      LODWORD(v29) = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64))(*(_QWORD *)&this[2][4].OwnerTable->0
                                                                                + 608LL))(
                       *(_QWORD *)&this[2][4].ActiveCount,
                       v60[3],
                       a2->hAllocation & 0x3F,
                       2LL);
      if ( (int)v29 < 0 )
        goto LABEL_45;
      v47 = COREDEVICEACCESS::AcquireShared(a3);
      v29 = v47;
      if ( v47 < 0 )
      {
        v52 = WdLogNewEntry5_WdEvent(v48);
        *(_QWORD *)(v52 + 24) = v29;
        WdLogEvent5_WdEvent(v52);
        goto LABEL_45;
      }
      a2->Flags.Value &= ~0x80u;
      if ( v58 != 1 )
        goto LABEL_45;
      v6 = 2;
      v58 = 2;
      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v60);
    }
    v53 = (_QWORD *)WdLogNewEntry5_WdWarning(this, a2, a3, a4);
    v53[3] = this;
    NumPages = a2->Flags.Value;
LABEL_66:
    v53[4] = NumPages;
    LODWORD(v29) = -1073741811;
    v53[5] = -1073741811LL;
    WdLogEvent5_WdWarning(v53);
    return (unsigned int)v29;
  }
  return result;
}
