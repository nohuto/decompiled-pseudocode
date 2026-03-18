/*
 * XREFs of ?VmBusSendLock2@DXGADAPTER@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAU_D3DKMT_LOCK2@@EII@Z @ 0x1C003056C
 * Callers:
 *     ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C00B43A0 (-Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESET.c)
 *     ?Lock@DXGDEVICE@@QEAAJPEAU_D3DKMT_LOCK@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00C12EC (-Lock@DXGDEVICE@@QEAAJPEAU_D3DKMT_LOCK@@PEAVCOREDEVICEACCESS@@@Z.c)
 *     DxgkLock2 @ 0x1C00CA6A0 (DxgkLock2.c)
 *     ?PrepareStagingBuffer@BLTQUEUE@@QEAAJPEAVDXGDEVICE@@IPEAVCOREDEVICEACCESS@@@Z @ 0x1C01B4C30 (-PrepareStagingBuffer@BLTQUEUE@@QEAAJPEAVDXGDEVICE@@IPEAVCOREDEVICEACCESS@@@Z.c)
 * Callees:
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0006E30 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0006ED0 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C000755C (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     ?VmBusSendSyncMessage@@YAJPEAUVMBCHANNEL__@@PEAUDXGKVMB_COMMAND@@IPEAXPEAIPEAU_MDL@@@Z @ 0x1C0032214 (-VmBusSendSyncMessage@@YAJPEAUVMBCHANNEL__@@PEAUDXGKVMB_COMMAND@@IPEAXPEAIPEAU_MDL@@@Z.c)
 *     ?MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1C00871E4 (-MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C00CCDB0 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C00CCDF0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C0100FA0 (--0DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x1C01A1DC4 (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
 */

__int64 __fastcall DXGADAPTER::VmBusSendLock2(
        DXGADAPTER *this,
        struct DXGPROCESS *a2,
        struct DXGDEVICE *a3,
        struct _D3DKMT_LOCK2 *a4,
        unsigned __int8 a5)
{
  D3DKMT_HANDLE hAllocation; // ebx
  unsigned int v10; // r8d
  __int64 v11; // rdx
  int v12; // ecx
  struct DXGALLOCATION *v13; // rdx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  _QWORD *v18; // rbx
  __int64 v19; // rdi
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  _QWORD *v23; // rax
  void *v24; // rax
  __int64 v25; // r12
  unsigned int HostProcess; // eax
  __int64 v27; // r8
  __int64 v28; // r9
  struct VMBCHANNEL__ *v29; // rcx
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  unsigned int v34; // eax
  ULONG *v35; // rsi
  NTSTATUS v36; // eax
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // rax
  __int64 v40; // rdx
  PVOID v41; // rcx
  __int64 v42; // r8
  __int64 v43; // r9
  struct _MDL *Mdl; // rax
  __int64 v45; // rdx
  __int64 v46; // rcx
  struct _MDL *v47; // r8
  _QWORD *v48; // rax
  struct _MDL *v49; // rdx
  struct _MDL *v50; // rax
  __int64 v51; // rcx
  __int64 v52; // r8
  NTSTATUS v53; // eax
  __int64 v54; // rcx
  int v55; // eax
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // rax
  __int64 v59; // rax
  __int64 v60; // rax
  struct _MDL *Protect; // [rsp+28h] [rbp-89h]
  PMDL NewMdl; // [rsp+30h] [rbp-81h] BYREF
  PVOID BaseAddress; // [rsp+38h] [rbp-79h] BYREF
  _QWORD *v65; // [rsp+40h] [rbp-71h] BYREF
  __int64 v66; // [rsp+48h] [rbp-69h] BYREF
  int v67; // [rsp+50h] [rbp-61h]
  unsigned int v68; // [rsp+54h] [rbp-5Dh]
  int v69; // [rsp+58h] [rbp-59h]
  int v70; // [rsp+5Ch] [rbp-55h]
  struct _D3DDDICB_LOCK2FLAGS::$8E8E2CD94D4182533FEB50916D5F70D0::$345C9315266921A5615E194C0B7E8CDB Value; // [rsp+60h] [rbp-51h]
  char v72; // [rsp+70h] [rbp-41h]
  __int64 v73; // [rsp+74h] [rbp-3Dh]
  _QWORD v74[3]; // [rsp+80h] [rbp-31h] BYREF
  int v75; // [rsp+98h] [rbp-19h] BYREF
  unsigned __int64 v76; // [rsp+A0h] [rbp-11h]

  DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v65);
  hAllocation = a4->hAllocation;
  DXGPUSHLOCK::AcquireShared((struct DXGPROCESS *)((char *)a2 + 168));
  v10 = (hAllocation >> 6) & 0xFFFFFF;
  if ( v10 < *((_DWORD *)a2 + 52)
    && (v11 = *((_QWORD *)a2 + 24),
        v12 = *(_DWORD *)(v11 + 16LL * v10 + 8),
        ((hAllocation >> 26) & 0x30) == (*(_BYTE *)(v11 + 16LL * v10 + 8) & 0x30))
    && (v12 & 0x1000) == 0
    && (v12 & 0xF) != 0
    && (*(_BYTE *)(v11 + 16LL * v10 + 8) & 0xF) == 5 )
  {
    v13 = *(struct DXGALLOCATION **)(v11 + 16LL * v10);
  }
  else
  {
    v13 = 0LL;
  }
  DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&BaseAddress, v13);
  ExReleasePushLockSharedEx((char *)a2 + 168, 0LL);
  KeLeaveCriticalRegion();
  DXGALLOCATIONREFERENCE::MoveAssign(&v65, &BaseAddress);
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&BaseAddress);
  v18 = v65;
  LODWORD(v19) = -1073741811;
  if ( !v65 )
  {
    v20 = WdLogNewEntry5_WdWarning(v15, v14, v16, v17);
    *(_QWORD *)(v20 + 24) = 3375LL;
    WdLogEvent5_WdWarning(v20);
    goto LABEL_45;
  }
  v21 = *(_QWORD *)(v65[1] + 16LL);
  v22 = *(_QWORD *)(*((_QWORD *)a3 + 2) + 16LL);
  if ( *(_QWORD *)(v21 + 16) != v22 )
  {
    v23 = (_QWORD *)WdLogNewEntry5_WdError(v22, v21);
    v23[3] = a3;
    v23[4] = v18;
    v23[5] = -1073741811LL;
    WdLogEvent5_WdError(v23);
    goto LABEL_45;
  }
  v24 = (void *)v65[13];
  if ( v24 )
  {
    a4->pData = v24;
    LODWORD(v19) = 0;
    goto LABEL_45;
  }
  v25 = v65[6];
  HostProcess = DXGPROCESS::GetHostProcess(a2);
  v67 = 27;
  v66 = 0LL;
  v72 = 0;
  v73 = 0LL;
  v68 = HostProcess;
  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v74, a2, v27, v28);
  v70 = *((_DWORD *)v18 + 24);
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v74);
  v69 = *((_DWORD *)a3 + 84);
  Value = (struct _D3DDDICB_LOCK2FLAGS::$8E8E2CD94D4182533FEB50916D5F70D0::$345C9315266921A5615E194C0B7E8CDB)a4->Flags.Value;
  if ( a5 )
  {
    v72 = 1;
    v73 = 0LL;
  }
  v29 = (struct VMBCHANNEL__ *)*((_QWORD *)this + 484);
  LODWORD(NewMdl) = 16;
  LODWORD(v19) = VmBusSendSyncMessage(
                   v29,
                   (struct DXGKVMB_COMMAND *)&v66,
                   0x38u,
                   &v75,
                   (unsigned int *)&NewMdl,
                   Protect);
  if ( (unsigned int)NewMdl < 0x10 || v75 < 0 )
  {
    v60 = WdLogNewEntry5_WdAssertion(v31, v30, v32, v33);
    *(_QWORD *)(v60 + 24) = v75;
    WdLogEvent5_WdAssertion(v60);
    goto LABEL_45;
  }
  v34 = *(_DWORD *)(v25 + 4);
  v35 = (ULONG *)(v18 + 15);
  BaseAddress = 0LL;
  NewMdl = 0LL;
  if ( (v34 & 0x40000) != 0 )
  {
    v74[0] = v76;
    v74[1] = *(_QWORD *)v35;
    v55 = MmAllocateMdlForIoSpace(v74, 1LL, &NewMdl);
    v19 = v55;
    if ( v55 < 0 )
    {
      v39 = WdLogNewEntry5_WdError(v57, v56);
      *(_QWORD *)(v39 + 24) = v19;
      *(_QWORD *)(v39 + 32) = 3477LL;
      goto LABEL_21;
    }
    BaseAddress = MmMapLockedPagesSpecifyCache(
                    NewMdl,
                    0,
                    (MEMORY_CACHING_TYPE)(2 - ((*(_DWORD *)(v25 + 4) & 0x80000) != 0)),
                    0LL,
                    0,
                    0x10u);
    v41 = BaseAddress;
    if ( !BaseAddress )
    {
      v58 = WdLogNewEntry5_WdError(0LL, v40);
      *(_QWORD *)(v58 + 24) = 3489LL;
      WdLogEvent5_WdError(v58);
      LODWORD(v19) = -1073741801;
      goto LABEL_38;
    }
    v18[14] = NewMdl;
    NewMdl = 0LL;
  }
  else
  {
    v36 = ZwAllocateVirtualMemory(
            (HANDLE)0xFFFFFFFFFFFFFFFFLL,
            &BaseAddress,
            0LL,
            v18 + 15,
            0x801000u,
            ~(unsigned __int16)(v34 >> 9) & 0x400 | 4);
    v19 = v36;
    if ( v36 < 0 )
    {
      v39 = WdLogNewEntry5_WdError(v38, v37);
      *(_QWORD *)(v39 + 24) = this;
      *(_QWORD *)(v39 + 32) = v19;
LABEL_21:
      WdLogEvent5_WdError(v39);
      goto LABEL_37;
    }
    Mdl = IoAllocateMdl(0LL, *v35, 0, 0, 0LL);
    NewMdl = Mdl;
    v47 = Mdl;
    if ( !Mdl )
    {
      v48 = (_QWORD *)WdLogNewEntry5_WdError(v46, v45);
      LODWORD(v19) = -1073741801;
      v48[3] = this;
      v48[4] = -1073741801LL;
      v48[5] = 3449LL;
      WdLogEvent5_WdError(v48);
      goto LABEL_38;
    }
    v49 = Mdl + 1;
    v50 = (struct _MDL *)(v76 >> 12);
    v51 = *(_QWORD *)v35 >> 12;
    if ( (_DWORD)v51 )
    {
      v52 = (unsigned int)v51;
      do
      {
        v49->Next = v50;
        v50 = (struct _MDL *)((char *)v50 + 1);
        v49 = (struct _MDL *)((char *)v49 + 8);
        --v52;
      }
      while ( v52 );
      v47 = NewMdl;
    }
    v53 = MmRotatePhysicalView(BaseAddress, v18 + 15, v47, MmToFrameBufferNoCopy, 0LL, 0LL);
    v19 = v53;
    if ( v53 < 0 )
    {
      v39 = WdLogNewEntry5_WdError(v54, v40);
      *(_QWORD *)(v39 + 24) = v19;
      *(_QWORD *)(v39 + 32) = 3464LL;
      goto LABEL_21;
    }
    *((_DWORD *)v18 + 18) |= 0x80000u;
    v41 = BaseAddress;
  }
  v18[13] = v41;
  a4->pData = v41;
LABEL_37:
  if ( (int)v19 < 0 )
  {
LABEL_38:
    v59 = WdLogNewEntry5_WdAssertion(v41, v40, v42, v43);
    *(_QWORD *)(v59 + 24) = (int)v19;
    WdLogEvent5_WdAssertion(v59);
    if ( BaseAddress )
    {
      if ( (*(_DWORD *)(v25 + 4) & 0x40000) != 0 )
        MmUnmapLockedPages(BaseAddress, NewMdl);
      else
        ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, v18 + 15, 0x8000u);
    }
  }
  if ( NewMdl )
    IoFreeMdl(NewMdl);
LABEL_45:
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v65);
  return (unsigned int)v19;
}
