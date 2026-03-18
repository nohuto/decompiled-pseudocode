/*
 * XREFs of ?VmBusSendSubmitCommand@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAU_D3DKMT_SUBMITCOMMAND@@@Z @ 0x1C0198354
 * Callers:
 *     ?DxgkSubmitCommandInternal@@YAJPEBU_D3DKMT_SUBMITCOMMAND@@PEAVDXGPROCESS@@@Z @ 0x1C0085D50 (-DxgkSubmitCommandInternal@@YAJPEBU_D3DKMT_SUBMITCOMMAND@@PEAVDXGPROCESS@@@Z.c)
 * Callees:
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C0002D7C (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0003310 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0003360 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0008B68 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?GetAllocationUnsafe@DXGPROCESS@@QEAA?AVDXGALLOCATIONREFERENCE@@I@Z @ 0x1C00146EC (-GetAllocationUnsafe@DXGPROCESS@@QEAA-AVDXGALLOCATIONREFERENCE@@I@Z.c)
 *     memmove @ 0x1C0016740 (memmove.c)
 *     ?MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1C00799D8 (-MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C0086E10 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00CECE8 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?VmBusSendSyncMessageStatusReturn@@YAJPEAUVMBCHANNEL__@@PEAUDXGKVMB_COMMAND_BASE@@IPEAU_MDL@@@Z @ 0x1C0198BC8 (-VmBusSendSyncMessageStatusReturn@@YAJPEAUVMBCHANNEL__@@PEAUDXGKVMB_COMMAND_BASE@@IPEAU_MDL@@@Z.c)
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x1C01B9AF8 (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
 */

__int64 __fastcall DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendSubmitCommand(
        DXG_GUEST_VIRTUALGPU_VMBUS *this,
        struct DXGPROCESS *a2,
        struct _D3DKMT_SUBMITCOMMAND *a3)
{
  __int64 v6; // rdx
  __int64 v7; // r8
  unsigned __int64 v9; // rcx
  unsigned int v10; // r15d
  __int64 v11; // r14
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
  struct _EX_RUNDOWN_REF *v23; // r13
  size_t v24; // r8
  char *v25; // r14
  D3DKMT_HANDLE *HistoryBufferArray; // rdx
  size_t PrivateDriverDataSize; // r8
  char *pPrivateDriverData; // rdx
  __int64 v29; // rdx
  unsigned int v30; // r14d
  struct DXGALLOCATION **AllocationUnsafe; // rax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // rax
  struct _EX_RUNDOWN_REF **v36; // rcx
  unsigned int v37; // edi
  unsigned int v38; // r14d
  struct DXGALLOCATION **v39; // rax
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // rax
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 v46; // rax
  __int64 v47; // r10
  int v48; // r9d
  __int64 v49; // rax
  __int64 v50; // rax
  struct _MDL *v51; // r9
  char v52[8]; // [rsp+20h] [rbp-98h] BYREF
  __int64 v53; // [rsp+28h] [rbp-90h]
  char v54; // [rsp+30h] [rbp-88h]
  struct _EX_RUNDOWN_REF *v55; // [rsp+38h] [rbp-80h] BYREF
  struct _EX_RUNDOWN_REF *v56; // [rsp+40h] [rbp-78h] BYREF
  unsigned int v57; // [rsp+48h] [rbp-70h]
  struct _EX_RUNDOWN_REF *v58; // [rsp+50h] [rbp-68h] BYREF
  struct _EX_RUNDOWN_REF *v59[2]; // [rsp+58h] [rbp-60h] BYREF
  _BYTE v60[80]; // [rsp+68h] [rbp-50h] BYREF

  v53 = *((_QWORD *)this + 2);
  v54 = 0;
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v52);
  if ( *(_DWORD *)(*((_QWORD *)this + 2) + 176LL) != 1 )
  {
    if ( v54 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v52);
    return 3221226166LL;
  }
  if ( g_VgpuDisableSubmitCommand )
  {
    if ( v54 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v52);
    return 0LL;
  }
  v9 = 4LL * a3->NumHistoryBuffers;
  v10 = -1;
  if ( v9 > 0xFFFFFFFF )
  {
    v12 = WdLogNewEntry5_WdWarning(v9, v6, v7);
    *(_QWORD *)(v12 + 24) = 5892LL;
LABEL_12:
    WdLogEvent5_WdWarning(v12);
    if ( v54 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v52);
    return 3221225485LL;
  }
  v11 = (unsigned int)v9;
  v13 = v9 + 408;
  if ( (unsigned int)v9 >= 0xFFFFFE68 )
  {
    v12 = WdLogNewEntry5_WdWarning(408LL, 0xFFFFFFFFLL, v7);
    *(_QWORD *)(v12 + 24) = 5897LL;
    goto LABEL_12;
  }
  v14 = v13 + a3->PrivateDriverDataSize;
  if ( (unsigned int)v14 >= v13 )
    v10 = v13 + a3->PrivateDriverDataSize;
  v57 = v10;
  if ( (unsigned int)v14 < v13 )
  {
    v12 = WdLogNewEntry5_WdWarning(v14, v13, v7);
    *(_QWORD *)(v12 + 24) = 5902LL;
    goto LABEL_12;
  }
  if ( v10 > 0x20000 )
  {
    v15 = WdLogNewEntry5_WdWarning(v14, v13, v7);
    *(_QWORD *)(v15 + 24) = 5907LL;
    WdLogEvent5_WdWarning(v15);
    if ( v54 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v52);
    return 3221225659LL;
  }
  v16 = (struct _EX_RUNDOWN_REF *)operator new[](v10, 0x4B677844u, (POOL_TYPE)512);
  v18 = v16;
  v59[1] = v16;
  if ( !v16 )
  {
    v19 = WdLogNewEntry5_WdLowResource(v17);
    *(_QWORD *)(v19 + 24) = 5913LL;
    WdLogEvent5_WdLowResource(v19);
    if ( v54 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v52);
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
  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v60, a2);
  v30 = 0;
  if ( a3->NumPrimaries )
  {
    while ( 1 )
    {
      v55 = 0LL;
      AllocationUnsafe = (struct DXGALLOCATION **)DXGPROCESS::GetAllocationUnsafe(
                                                    (__int64)a2,
                                                    (DXGALLOCATIONREFERENCE *)&v58,
                                                    *((_DWORD *)&v18[41].Count + v30));
      DXGALLOCATIONREFERENCE::MoveAssign((struct DXGALLOCATION **)&v55, AllocationUnsafe);
      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v58);
      if ( !v55 )
        break;
      *((_DWORD *)&v18[41].Count + v30) = v55[12].Count;
      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v55);
      if ( ++v30 >= a3->NumPrimaries )
        goto LABEL_44;
    }
    v35 = WdLogNewEntry5_WdWarning(v33, v32, v34);
    *(_QWORD *)(v35 + 24) = 5949LL;
    WdLogEvent5_WdWarning(v35);
    v36 = &v55;
    goto LABEL_42;
  }
LABEL_44:
  v38 = 0;
  if ( a3->NumHistoryBuffers )
  {
    while ( 1 )
    {
      v56 = 0LL;
      v39 = (struct DXGALLOCATION **)DXGPROCESS::GetAllocationUnsafe(
                                       (__int64)a2,
                                       (DXGALLOCATIONREFERENCE *)v59,
                                       *((_DWORD *)&v23->Count + v38));
      DXGALLOCATIONREFERENCE::MoveAssign((struct DXGALLOCATION **)&v56, v39);
      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(v59);
      if ( !v56 )
        break;
      *((_DWORD *)&v23->Count + v38) = v56[12].Count;
      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v56);
      if ( ++v38 >= a3->NumHistoryBuffers )
        goto LABEL_49;
    }
    v43 = WdLogNewEntry5_WdWarning(v41, v40, v42);
    *(_QWORD *)(v43 + 24) = 5961LL;
    WdLogEvent5_WdWarning(v43);
    v36 = &v56;
LABEL_42:
    v37 = -1073741811;
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(v36);
    goto LABEL_43;
  }
LABEL_49:
  v44 = 0LL;
  if ( !LODWORD(v18[6].Count) )
  {
LABEL_59:
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v60);
    v37 = VmBusSendSyncMessageStatusReturn(*(struct VMBCHANNEL__ **)this, (struct DXGKVMB_COMMAND_BASE *)v18, v10, v51);
    goto LABEL_60;
  }
  while ( 1 )
  {
    v45 = *((unsigned int *)&v18[6].Ptr + (unsigned int)v44 + 1);
    v46 = (*((_DWORD *)&v18[6].Ptr + (unsigned int)v44 + 1) >> 6) & 0xFFFFFF;
    if ( (unsigned int)v46 >= *((_DWORD *)a2 + 60) )
      break;
    v29 = (unsigned int)v46;
    v47 = *((_QWORD *)a2 + 28);
    v48 = *(_DWORD *)(v47 + 16 * v46 + 8);
    v45 = ((unsigned int)v45 >> 25) & 0x60;
    if ( (_BYTE)v45 != (*(_BYTE *)(v47 + 16 * v46 + 8) & 0x60) )
      break;
    if ( (v48 & 0x2000) != 0 )
      break;
    if ( (v48 & 0x1F) == 0 )
      break;
    v29 = 2LL * (unsigned int)v46;
    if ( (*(_BYTE *)(v47 + 16LL * (unsigned int)v46 + 8) & 0x1F) != 7 )
      break;
    v49 = *(_QWORD *)(v47 + 16LL * (unsigned int)v46);
    if ( !v49 )
      break;
    *((_DWORD *)&v18[6].Ptr + (unsigned int)v44 + 1) = *(_DWORD *)(v49 + 28);
    v44 = (unsigned int)(v44 + 1);
    if ( (unsigned int)v44 >= LODWORD(v18[6].Count) )
      goto LABEL_59;
  }
  v50 = WdLogNewEntry5_WdWarning(v44, v29, v45);
  *(_QWORD *)(v50 + 24) = 5972LL;
  WdLogEvent5_WdWarning(v50);
  v37 = -1073741811;
LABEL_43:
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v60);
LABEL_60:
  ExFreePoolWithTag(v18, 0);
  if ( v54 )
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v52);
  return v37;
}
