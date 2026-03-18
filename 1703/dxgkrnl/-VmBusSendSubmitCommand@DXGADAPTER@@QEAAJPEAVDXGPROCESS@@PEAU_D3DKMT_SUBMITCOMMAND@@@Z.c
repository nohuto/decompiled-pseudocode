/*
 * XREFs of ?VmBusSendSubmitCommand@DXGADAPTER@@QEAAJPEAVDXGPROCESS@@PEAU_D3DKMT_SUBMITCOMMAND@@@Z @ 0x1C0031C68
 * Callers:
 *     ?DxgkSubmitCommandInternal@@YAJPEBU_D3DKMT_SUBMITCOMMAND@@PEAVDXGPROCESS@@@Z @ 0x1C00CBD30 (-DxgkSubmitCommandInternal@@YAJPEBU_D3DKMT_SUBMITCOMMAND@@PEAVDXGPROCESS@@@Z.c)
 * Callees:
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C0006EBC (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C000755C (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000D778 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000D7E0 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?GetAllocationUnsafe@DXGPROCESS@@QEAA?AVDXGALLOCATIONREFERENCE@@I@Z @ 0x1C0013970 (-GetAllocationUnsafe@DXGPROCESS@@QEAA-AVDXGALLOCATIONREFERENCE@@I@Z.c)
 *     memmove @ 0x1C00153C0 (memmove.c)
 *     ?VmBusSendSyncMessageStatusReturn@@YAJPEAUVMBCHANNEL__@@PEAUDXGKVMB_COMMAND@@IPEAU_MDL@@@Z @ 0x1C0032468 (-VmBusSendSyncMessageStatusReturn@@YAJPEAUVMBCHANNEL__@@PEAUDXGKVMB_COMMAND@@IPEAU_MDL@@@Z.c)
 *     ?MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1C00871E4 (-MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C00AF918 (--_V@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00B1A9C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C00CCDF0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C0100FA0 (--0DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x1C01A1DC4 (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
 */

__int64 __fastcall DXGADAPTER::VmBusSendSubmitCommand(
        struct VMBCHANNEL__ **this,
        struct DXGPROCESS *a2,
        struct _D3DKMT_SUBMITCOMMAND *a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  unsigned __int64 v11; // r14
  unsigned int v12; // r15d
  unsigned int v13; // eax
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rax
  _DWORD *v17; // rax
  __int64 v18; // rcx
  _DWORD *v19; // rsi
  __int64 v20; // rax
  _OWORD *v21; // rax
  struct _D3DKMT_SUBMITCOMMAND *v22; // rcx
  __int64 v23; // rdx
  _DWORD *v24; // r13
  size_t v25; // r8
  char *v26; // r14
  D3DKMT_HANDLE *HistoryBufferArray; // rdx
  size_t PrivateDriverDataSize; // r8
  char *pPrivateDriverData; // rdx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // r9
  int v33; // r14d
  DXGALLOCATIONREFERENCE *AllocationUnsafe; // rax
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 v39; // rax
  DXGALLOCATIONREFERENCE *v40; // rcx
  unsigned int v41; // edi
  int v42; // r14d
  DXGALLOCATIONREFERENCE *v43; // rax
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r8
  __int64 v47; // r9
  __int64 v48; // rax
  __int64 v49; // rdx
  __int64 v50; // r8
  __int64 v51; // rcx
  __int64 v52; // r10
  __int64 v53; // rax
  __int64 v54; // rax
  struct _MDL *v55; // r9
  char v56[8]; // [rsp+20h] [rbp-98h] BYREF
  DXGADAPTER *v57; // [rsp+28h] [rbp-90h]
  char v58; // [rsp+30h] [rbp-88h]
  __int64 v59; // [rsp+38h] [rbp-80h] BYREF
  __int64 v60; // [rsp+40h] [rbp-78h] BYREF
  unsigned int v61; // [rsp+48h] [rbp-70h]
  char v62[8]; // [rsp+50h] [rbp-68h] BYREF
  char v63[8]; // [rsp+58h] [rbp-60h] BYREF
  _DWORD *v64; // [rsp+60h] [rbp-58h]
  _BYTE v65[80]; // [rsp+68h] [rbp-50h] BYREF

  v57 = (DXGADAPTER *)this;
  v58 = 0;
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v56);
  if ( *((_DWORD *)this + 44) != 1 )
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
  v11 = 4LL * a3->NumHistoryBuffers;
  v12 = -1;
  if ( v11 > 0xFFFFFFFF )
  {
    v14 = WdLogNewEntry5_WdWarning(v7, v6, v8, v9);
    *(_QWORD *)(v14 + 24) = 4208LL;
    goto LABEL_59;
  }
  v13 = v11 + 400;
  if ( (unsigned int)v11 >= 0xFFFFFE70 )
  {
    v14 = WdLogNewEntry5_WdWarning(400LL, 0xFFFFFFFFLL, v8, v9);
    *(_QWORD *)(v14 + 24) = 4213LL;
LABEL_59:
    WdLogEvent5_WdWarning(v14);
    if ( v58 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v56);
    return 3221225485LL;
  }
  v15 = v13 + a3->PrivateDriverDataSize;
  if ( (unsigned int)v15 >= v13 )
    v12 = v13 + a3->PrivateDriverDataSize;
  v61 = v12;
  if ( (unsigned int)v15 < v13 )
  {
    v14 = WdLogNewEntry5_WdWarning(v15, v13, v8, v9);
    *(_QWORD *)(v14 + 24) = 4218LL;
    goto LABEL_59;
  }
  if ( v12 > 0x10000 )
  {
    v16 = WdLogNewEntry5_WdWarning(v15, v13, v8, v9);
    *(_QWORD *)(v16 + 24) = 4223LL;
    WdLogEvent5_WdWarning(v16);
    if ( v58 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v56);
    return 3221225659LL;
  }
  v17 = operator new[](v12, 0x4B677844u, (enum _POOL_TYPE)512);
  v19 = v17;
  v64 = v17;
  if ( !v17 )
  {
    v20 = WdLogNewEntry5_WdLowResource(v18);
    *(_QWORD *)(v20 + 24) = 4229LL;
    WdLogEvent5_WdLowResource(v20);
    if ( v58 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v56);
    return 3221225495LL;
  }
  v17[2] = 23;
  v17[3] = DXGPROCESS::GetHostProcess(a2);
  v21 = v19 + 4;
  v22 = a3;
  v23 = 3LL;
  do
  {
    *v21 = *(_OWORD *)&v22->Commands;
    v21[1] = *(_OWORD *)&v22->PresentHistoryToken;
    v21[2] = *(_OWORD *)&v22->BroadcastContext[1];
    v21[3] = *(_OWORD *)&v22->BroadcastContext[5];
    v21[4] = *(_OWORD *)&v22->BroadcastContext[9];
    v21[5] = *(_OWORD *)&v22->BroadcastContext[13];
    v21[6] = *(_OWORD *)&v22->BroadcastContext[17];
    v21 += 8;
    *(v21 - 1) = *(_OWORD *)&v22->BroadcastContext[21];
    v22 = (struct _D3DKMT_SUBMITCOMMAND *)((char *)v22 + 128);
    --v23;
  }
  while ( v23 );
  v24 = v19 + 100;
  v25 = (unsigned int)v11;
  v26 = (char *)v19 + (unsigned int)v11 + 400;
  HistoryBufferArray = a3->HistoryBufferArray;
  if ( (D3DKMT_HANDLE *)((char *)HistoryBufferArray + v25) < HistoryBufferArray
    || (unsigned __int64)HistoryBufferArray + v25 > MmUserProbeAddress )
  {
    *(_BYTE *)MmUserProbeAddress = 0;
  }
  memmove(v19 + 100, HistoryBufferArray, v25);
  PrivateDriverDataSize = a3->PrivateDriverDataSize;
  pPrivateDriverData = (char *)a3->pPrivateDriverData;
  if ( &pPrivateDriverData[PrivateDriverDataSize] < pPrivateDriverData
    || (unsigned __int64)&pPrivateDriverData[PrivateDriverDataSize] > MmUserProbeAddress )
  {
    *(_BYTE *)MmUserProbeAddress = 0;
  }
  memmove(v26, pPrivateDriverData, PrivateDriverDataSize);
  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v65, a2, v30, v31);
  v33 = 0;
  if ( a3->NumPrimaries )
  {
    while ( 1 )
    {
      DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v59);
      AllocationUnsafe = DXGPROCESS::GetAllocationUnsafe((__int64)a2, (DXGALLOCATIONREFERENCE *)v62, v19[v33 + 80]);
      DXGALLOCATIONREFERENCE::MoveAssign(&v59, AllocationUnsafe);
      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)v62);
      if ( !v59 )
        break;
      v19[v33 + 80] = *(_DWORD *)(v59 + 96);
      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v59);
      if ( ++v33 >= a3->NumPrimaries )
        goto LABEL_39;
    }
    v39 = WdLogNewEntry5_WdWarning(v36, v35, v37, v38);
    *(_QWORD *)(v39 + 24) = 4265LL;
    WdLogEvent5_WdWarning(v39);
    v40 = (DXGALLOCATIONREFERENCE *)&v59;
    goto LABEL_37;
  }
LABEL_39:
  v42 = 0;
  if ( a3->NumHistoryBuffers )
  {
    while ( 1 )
    {
      DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v60);
      v43 = DXGPROCESS::GetAllocationUnsafe((__int64)a2, (DXGALLOCATIONREFERENCE *)v63, v24[v42]);
      DXGALLOCATIONREFERENCE::MoveAssign(&v60, v43);
      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)v63);
      if ( !v60 )
        break;
      v24[v42] = *(_DWORD *)(v60 + 96);
      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v60);
      if ( ++v42 >= a3->NumHistoryBuffers )
        goto LABEL_44;
    }
    v48 = WdLogNewEntry5_WdWarning(v45, v44, v46, v47);
    *(_QWORD *)(v48 + 24) = 4277LL;
    WdLogEvent5_WdWarning(v48);
    v40 = (DXGALLOCATIONREFERENCE *)&v60;
LABEL_37:
    v41 = -1073741811;
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(v40);
    goto LABEL_38;
  }
LABEL_44:
  v49 = 0LL;
  if ( !v19[10] )
  {
LABEL_54:
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v65);
    v41 = VmBusSendSyncMessageStatusReturn(this[484], (struct DXGKVMB_COMMAND *)v19, v12, v55);
    goto LABEL_55;
  }
  while ( 1 )
  {
    v50 = (unsigned int)v19[(unsigned int)v49 + 11];
    v51 = (v19[(unsigned int)v49 + 11] >> 6) & 0xFFFFFF;
    if ( (unsigned int)v51 >= *((_DWORD *)a2 + 52) )
      break;
    v52 = *((_QWORD *)a2 + 24);
    v32 = *(unsigned int *)(v52 + 16LL * (unsigned int)v51 + 8);
    v50 = ((unsigned int)v50 >> 26) & 0x30;
    if ( (_BYTE)v50 != (*(_BYTE *)(v52 + 16LL * (unsigned int)v51 + 8) & 0x30) )
      break;
    if ( (v32 & 0x1000) != 0 )
      break;
    if ( (v32 & 0xF) == 0 )
      break;
    v50 = 2LL * (unsigned int)v51;
    if ( (*(_BYTE *)(v52 + 16LL * (unsigned int)v51 + 8) & 0xF) != 7 )
      break;
    v53 = *(_QWORD *)(v52 + 16LL * (unsigned int)v51);
    if ( !v53 )
      break;
    v19[(unsigned int)v49 + 11] = *(_DWORD *)(v53 + 28);
    v49 = (unsigned int)(v49 + 1);
    if ( (unsigned int)v49 >= v19[10] )
      goto LABEL_54;
  }
  v54 = WdLogNewEntry5_WdWarning(v51, v49, v50, v32);
  *(_QWORD *)(v54 + 24) = 4288LL;
  WdLogEvent5_WdWarning(v54);
  v41 = -1073741811;
LABEL_38:
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v65);
LABEL_55:
  operator delete[](v19);
  if ( v58 )
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v56);
  return v41;
}
