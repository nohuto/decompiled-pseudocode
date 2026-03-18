/*
 * XREFs of ?VmBusSendSubmitCommand@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAU_D3DKMT_SUBMITCOMMAND@@@Z @ 0x1C0184F90
 * Callers:
 *     ?DxgkSubmitCommandInternal@@YAJPEBU_D3DKMT_SUBMITCOMMAND@@PEAVDXGPROCESS@@@Z @ 0x1C00E71E0 (-DxgkSubmitCommandInternal@@YAJPEBU_D3DKMT_SUBMITCOMMAND@@PEAVDXGPROCESS@@@Z.c)
 * Callees:
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C0015020 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0015040 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C0015080 (--_V@YAXPEAX@Z.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C00152B0 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0015410 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0015490 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?GetAllocationUnsafe@DXGPROCESS@@QEAA?AVDXGALLOCATIONREFERENCE@@I@Z @ 0x1C001A6A4 (-GetAllocationUnsafe@DXGPROCESS@@QEAA-AVDXGALLOCATIONREFERENCE@@I@Z.c)
 *     memmove @ 0x1C001C600 (memmove.c)
 *     ?MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1C00962E0 (-MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C00E8360 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?VmBusSendSyncMessageStatusReturn@@YAJPEAUVMBCHANNEL__@@PEAUDXGKVMB_COMMAND_BASE@@IPEAU_MDL@@@Z @ 0x1C0185834 (-VmBusSendSyncMessageStatusReturn@@YAJPEAUVMBCHANNEL__@@PEAUDXGKVMB_COMMAND_BASE@@IPEAU_MDL@@@Z.c)
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x1C01B6F44 (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
 */

__int64 __fastcall DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendSubmitCommand(
        DXG_GUEST_VIRTUALGPU_VMBUS *this,
        struct DXGPROCESS *a2,
        struct _D3DKMT_SUBMITCOMMAND *a3)
{
  __int64 v6; // rdx
  __int64 v7; // r8
  unsigned __int64 v9; // rcx
  unsigned int v10; // r14d
  __int64 v11; // r15
  __int64 v12; // rax
  unsigned int v13; // eax
  __int64 v14; // rcx
  __int64 v15; // rax
  struct _EX_RUNDOWN_REF *v16; // rax
  __int64 v17; // rcx
  struct _EX_RUNDOWN_REF *v18; // rsi
  __int64 v19; // rax
  struct _EX_RUNDOWN_REF *v20; // rax
  struct _D3DKMT_SUBMITCOMMAND *v21; // rcx
  __int64 v22; // rdx
  struct _EX_RUNDOWN_REF *v23; // r12
  size_t v24; // r8
  char *v25; // r15
  D3DKMT_HANDLE *HistoryBufferArray; // rdx
  size_t PrivateDriverDataSize; // r8
  char *pPrivateDriverData; // rdx
  unsigned int v29; // r15d
  struct DXGALLOCATION **AllocationUnsafe; // rax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  unsigned int v34; // r15d
  struct DXGALLOCATION **v35; // rax
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // rdx
  __int64 v40; // r8
  __int64 v41; // rax
  struct DXGPROCESS *v42; // rcx
  __int64 v43; // r11
  __int64 v44; // rax
  struct _MDL *v45; // r9
  int v46; // eax
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 v50; // rdi
  __int64 v51; // rax
  __int64 v52; // rax
  struct _EX_RUNDOWN_REF **v53; // rcx
  __int64 v54; // rax
  __int64 v55; // rax
  char v56[8]; // [rsp+20h] [rbp-98h] BYREF
  __int64 v57; // [rsp+28h] [rbp-90h]
  char v58; // [rsp+30h] [rbp-88h]
  struct _EX_RUNDOWN_REF *v59; // [rsp+38h] [rbp-80h] BYREF
  struct _EX_RUNDOWN_REF *v60; // [rsp+40h] [rbp-78h] BYREF
  unsigned int v61; // [rsp+48h] [rbp-70h]
  struct _EX_RUNDOWN_REF *v62; // [rsp+50h] [rbp-68h] BYREF
  struct _EX_RUNDOWN_REF *v63[2]; // [rsp+58h] [rbp-60h] BYREF
  _BYTE v64[80]; // [rsp+68h] [rbp-50h] BYREF

  v57 = *((_QWORD *)this + 6);
  v58 = 0;
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v56);
  if ( *(_DWORD *)(*((_QWORD *)this + 6) + 176LL) != 1 )
  {
    if ( v58 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v56);
    return 3221226166LL;
  }
  if ( g_VgpuDisableSubmitCommand )
  {
    if ( v58 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v56);
    return 0LL;
  }
  v9 = 4LL * a3->NumHistoryBuffers;
  v10 = -1;
  if ( v9 > 0xFFFFFFFF )
  {
    v12 = WdLogNewEntry5_WdWarning(v9, v6, v7);
    *(_QWORD *)(v12 + 24) = 6651LL;
LABEL_12:
    WdLogEvent5_WdWarning(v12);
    if ( v58 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v56);
    return 3221225485LL;
  }
  v11 = (unsigned int)v9;
  v13 = v9 + 408;
  if ( (unsigned int)v9 >= 0xFFFFFE68 )
  {
    v12 = WdLogNewEntry5_WdWarning(408LL, 0xFFFFFFFFLL, v7);
    *(_QWORD *)(v12 + 24) = 6656LL;
    goto LABEL_12;
  }
  v14 = v13 + a3->PrivateDriverDataSize;
  if ( (unsigned int)v14 >= v13 )
    v10 = v13 + a3->PrivateDriverDataSize;
  v61 = v10;
  if ( (unsigned int)v14 < v13 )
  {
    v12 = WdLogNewEntry5_WdWarning(v14, v13, v7);
    *(_QWORD *)(v12 + 24) = 6661LL;
    goto LABEL_12;
  }
  if ( v10 > 0x20000 )
  {
    v15 = WdLogNewEntry5_WdWarning(v14, v13, v7);
    *(_QWORD *)(v15 + 24) = 6666LL;
    WdLogEvent5_WdWarning(v15);
    if ( v58 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v56);
    return 3221225659LL;
  }
  v16 = (struct _EX_RUNDOWN_REF *)operator new[](v10, 0x4B677844u, (POOL_TYPE)512);
  v18 = v16;
  v63[1] = v16;
  if ( !v16 )
  {
    v19 = WdLogNewEntry5_WdLowResource(v17);
    *(_QWORD *)(v19 + 24) = 6672LL;
    WdLogEvent5_WdLowResource(v19);
    if ( v58 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v56);
    return 3221225495LL;
  }
  v16->Count = 0LL;
  v16[1].Count = 0LL;
  LODWORD(v16[2].Count) = 20;
  LODWORD(v16[1].Count) = DXGPROCESS::GetHostProcess(a2);
  v20 = v18 + 3;
  v21 = a3;
  v22 = 3LL;
  do
  {
    *(_OWORD *)&v20->Count = *(_OWORD *)&v21->Commands;
    *(_OWORD *)&v20[2].Count = *(_OWORD *)&v21->PresentHistoryToken;
    *(_OWORD *)&v20[4].Count = *(_OWORD *)&v21->BroadcastContext[1];
    *(_OWORD *)&v20[6].Count = *(_OWORD *)&v21->BroadcastContext[5];
    *(_OWORD *)&v20[8].Count = *(_OWORD *)&v21->BroadcastContext[9];
    *(_OWORD *)&v20[10].Count = *(_OWORD *)&v21->BroadcastContext[13];
    *(_OWORD *)&v20[12].Count = *(_OWORD *)&v21->BroadcastContext[17];
    v20 += 16;
    *(_OWORD *)&v20[-2].Count = *(_OWORD *)&v21->BroadcastContext[21];
    v21 = (struct _D3DKMT_SUBMITCOMMAND *)((char *)v21 + 128);
    --v22;
  }
  while ( v22 );
  v23 = v18 + 51;
  v24 = (unsigned int)v11;
  v25 = (char *)&v18[51] + v11;
  HistoryBufferArray = a3->HistoryBufferArray;
  if ( (D3DKMT_HANDLE *)((char *)HistoryBufferArray + v24) < HistoryBufferArray
    || (unsigned __int64)HistoryBufferArray + v24 > MmUserProbeAddress )
  {
    *(_BYTE *)MmUserProbeAddress = 0;
  }
  memmove(&v18[51], HistoryBufferArray, v24);
  PrivateDriverDataSize = a3->PrivateDriverDataSize;
  pPrivateDriverData = (char *)a3->pPrivateDriverData;
  if ( &pPrivateDriverData[PrivateDriverDataSize] < pPrivateDriverData
    || (unsigned __int64)&pPrivateDriverData[PrivateDriverDataSize] > MmUserProbeAddress )
  {
    *(_BYTE *)MmUserProbeAddress = 0;
  }
  memmove(v25, pPrivateDriverData, PrivateDriverDataSize);
  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v64, (struct _KTHREAD **)a2);
  v29 = 0;
  if ( a3->NumPrimaries )
  {
    while ( 1 )
    {
      v59 = 0LL;
      AllocationUnsafe = (struct DXGALLOCATION **)DXGPROCESS::GetAllocationUnsafe(
                                                    (__int64)a2,
                                                    (DXGALLOCATIONREFERENCE *)&v62,
                                                    *((_DWORD *)&v18[41].Count + v29));
      DXGALLOCATIONREFERENCE::MoveAssign((struct DXGALLOCATION **)&v59, AllocationUnsafe);
      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v62);
      if ( !v59 )
        break;
      *((_DWORD *)&v18[41].Count + v29) = v59[12].Count;
      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v59);
      if ( ++v29 >= a3->NumPrimaries )
        goto LABEL_40;
    }
    v52 = WdLogNewEntry5_WdWarning(v32, v31, v33);
    *(_QWORD *)(v52 + 24) = 6708LL;
    WdLogEvent5_WdWarning(v52);
    v53 = &v59;
    goto LABEL_54;
  }
LABEL_40:
  v34 = 0;
  if ( a3->NumHistoryBuffers )
  {
    while ( 1 )
    {
      v60 = 0LL;
      v35 = (struct DXGALLOCATION **)DXGPROCESS::GetAllocationUnsafe(
                                       (__int64)a2,
                                       (DXGALLOCATIONREFERENCE *)v63,
                                       *((_DWORD *)&v23->Count + v34));
      DXGALLOCATIONREFERENCE::MoveAssign((struct DXGALLOCATION **)&v60, v35);
      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(v63);
      if ( !v60 )
        break;
      *((_DWORD *)&v23->Count + v34) = v60[12].Count;
      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v60);
      if ( ++v34 >= a3->NumHistoryBuffers )
        goto LABEL_43;
    }
    v54 = WdLogNewEntry5_WdWarning(v37, v36, v38);
    *(_QWORD *)(v54 + 24) = 6720LL;
    WdLogEvent5_WdWarning(v54);
    v53 = &v60;
LABEL_54:
    LODWORD(v50) = -1073741811;
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(v53);
    goto LABEL_55;
  }
LABEL_43:
  v39 = 0LL;
  if ( !LODWORD(v18[6].Count) )
  {
LABEL_51:
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v64);
    v46 = VmBusSendSyncMessageStatusReturn(*(struct VMBCHANNEL__ **)this, (struct DXGKVMB_COMMAND_BASE *)v18, v10, v45);
    v50 = v46;
    if ( v46 < 0 )
    {
      v51 = WdLogNewEntry5_WdWarning(v48, v47, v49);
      *(_QWORD *)(v51 + 24) = v50;
      WdLogEvent5_WdWarning(v51);
    }
    goto LABEL_58;
  }
  while ( 1 )
  {
    v40 = *((unsigned int *)&v18[6].Ptr + (unsigned int)v39 + 1);
    v41 = (*((_DWORD *)&v18[6].Ptr + (unsigned int)v39 + 1) >> 6) & 0xFFFFFF;
    v42 = a2;
    if ( (unsigned int)v41 >= *((_DWORD *)a2 + 62) )
      break;
    v43 = *((_QWORD *)a2 + 29);
    v42 = (struct DXGPROCESS *)*(unsigned int *)(v43 + 16 * v41 + 8);
    v40 = ((unsigned int)v40 >> 25) & 0x60;
    if ( (_BYTE)v40 != (*(_BYTE *)(v43 + 16 * v41 + 8) & 0x60) )
      break;
    if ( ((unsigned __int16)v42 & 0x2000) != 0 )
      break;
    if ( ((unsigned __int8)v42 & 0x1F) == 0 )
      break;
    v42 = (struct DXGPROCESS *)((unsigned __int8)v42 & 0x1F);
    if ( (_BYTE)v42 != 7 )
      break;
    v44 = *(_QWORD *)(v43 + 16LL * (unsigned int)v41);
    if ( !v44 )
      break;
    *((_DWORD *)&v18[6].Ptr + (unsigned int)v39 + 1) = *(_DWORD *)(v44 + 28);
    v39 = (unsigned int)(v39 + 1);
    if ( (unsigned int)v39 >= LODWORD(v18[6].Count) )
      goto LABEL_51;
  }
  v55 = WdLogNewEntry5_WdWarning(v42, v39, v40);
  *(_QWORD *)(v55 + 24) = 6731LL;
  WdLogEvent5_WdWarning(v55);
  LODWORD(v50) = -1073741811;
LABEL_55:
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v64);
LABEL_58:
  operator delete[](v18);
  if ( v58 )
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v56);
  return (unsigned int)v50;
}
