/*
 * XREFs of PnpRebalance @ 0x1406A9D3C
 * Callers:
 *     PnpProcessRebalance @ 0x1401FB2FC (PnpProcessRebalance.c)
 *     PnpAllocateResources @ 0x14055A118 (PnpAllocateResources.c)
 *     PnpReallocateResources @ 0x1406A7CA0 (PnpReallocateResources.c)
 * Callees:
 *     PnpDiagnosticTraceObjectWithStatus @ 0x140036914 (PnpDiagnosticTraceObjectWithStatus.c)
 *     PnpDiagnosticTraceObject @ 0x1400682D8 (PnpDiagnosticTraceObject.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     memset @ 0x140192D80 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     PnpFindBestConfiguration @ 0x1405B0ABC (PnpFindBestConfiguration.c)
 *     PnpBuildCmResourceLists @ 0x1405B0DE4 (PnpBuildCmResourceLists.c)
 *     PnpFreeResourceRequirementsForAssignTable @ 0x1405B1068 (PnpFreeResourceRequirementsForAssignTable.c)
 *     IopCommitConfiguration @ 0x1405B5C18 (IopCommitConfiguration.c)
 *     PnpTraceRebalanceResult @ 0x1406A65E8 (PnpTraceRebalanceResult.c)
 *     PnpCancelStopDeviceSubtree @ 0x1406A9900 (PnpCancelStopDeviceSubtree.c)
 *     PnpFindRebalanceCandidates @ 0x1406A9930 (PnpFindRebalanceCandidates.c)
 *     PnpStopDeviceSubtree @ 0x1406AA080 (PnpStopDeviceSubtree.c)
 */

__int64 __fastcall PnpRebalance(__int64 a1, void *a2, unsigned int a3, char a4)
{
  __int64 v5; // r14
  void *v6; // rcx
  unsigned __int16 *v9; // r12
  _QWORD *PoolWithTag; // rax
  UCHAR v11; // dl
  _QWORD *v12; // rdi
  int BestConfiguration; // ebx
  unsigned int v14; // r12d
  _DWORD *v15; // r15
  __int64 v16; // r13
  int v17; // eax
  unsigned int v18; // ecx
  unsigned __int64 v19; // r15
  __int64 v20; // rax
  void *v21; // rcx
  unsigned int v24; // [rsp+34h] [rbp-A5h] BYREF
  _QWORD *i; // [rsp+38h] [rbp-A1h]
  unsigned int v26; // [rsp+40h] [rbp-99h]
  size_t Size; // [rsp+48h] [rbp-91h]
  void *v28; // [rsp+50h] [rbp-89h]
  _QWORD *v29[3]; // [rsp+58h] [rbp-81h] BYREF
  _OWORD v30[7]; // [rsp+70h] [rbp-69h] BYREF

  v5 = a3;
  v6 = *(void **)(a1 + 712);
  v28 = a2;
  if ( v6 )
    memset(v6, 0, 0x58uLL);
  memset(v30, 0, sizeof(v30));
  v9 = (unsigned __int16 *)(a1 + 40);
  *((_QWORD *)&v30[2] + 1) = IopRootDeviceNode;
  *((_QWORD *)&v30[1] + 1) = IopRootDeviceNode;
  *((_QWORD *)&v30[3] + 1) = MEMORY[0xFFFFF78000000008];
  LOBYTE(v30[3]) = a4;
  PnpDiagnosticTraceObject(&KMPnPEvt_Rebalance_Start, (unsigned __int16 *)(a1 + 40));
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned __int64)(unsigned int)IopNumberDeviceNodes << 6, 0x30706E50u);
  v12 = PoolWithTag;
  if ( !PoolWithTag )
  {
    LODWORD(v30[1]) = 2;
    BestConfiguration = -1073741670;
    goto LABEL_17;
  }
  if ( (_DWORD)v5 )
    memmove(PoolWithTag, a2, v5 << 6);
  v14 = 0;
  v15 = &v30[1];
  v24 = 0;
  BestConfiguration = 0;
  v16 = 0LL;
  Size = v5 << 6;
  v17 = (_DWORD)v12 + ((_DWORD)v5 << 6);
  for ( i = &v12[8 * v5]; ; v17 = (int)i )
  {
    ++DWORD1(v30[0]);
    v26 = v14;
    PnpFindRebalanceCandidates(v16, a1, v17, &v24, a4, (__int64)v30);
    v14 = v24;
    if ( !(_DWORD)v5 && !a4 )
    {
      v18 = 0;
      if ( !v24 )
      {
LABEL_13:
        BestConfiguration = -1073741823;
        if ( *(_DWORD *)(a1 + 300) == 777 )
          *((_DWORD *)&v30[1] + v16) = 4;
        else
          *((_DWORD *)&v30[1] + v16) = 3;
LABEL_15:
        PnpCancelStopDeviceSubtree(IopRootDeviceNode);
        v19 = (unsigned __int64)i;
        goto LABEL_16;
      }
      while ( v12[8 * (unsigned __int64)v18] != *(_QWORD *)(a1 + 32) )
      {
        if ( ++v18 >= v24 )
          goto LABEL_13;
      }
    }
    if ( v26 != v24 )
      break;
    if ( !*v15 )
      *v15 = 5;
    if ( BestConfiguration != -1073739512 )
      BestConfiguration = -1073741823;
LABEL_28:
    v16 = (unsigned int)(v16 + 1);
    ++v15;
    if ( (unsigned int)v16 >= 2 )
      goto LABEL_15;
  }
  BestConfiguration = PnpFindBestConfiguration((__int64)v12, (unsigned int)v5 + v24, (__int64)v29);
  if ( BestConfiguration < 0 )
  {
    if ( !*v15 )
      *v15 = 6;
    goto LABEL_28;
  }
  PnpStopDeviceSubtree(IopRootDeviceNode);
  IopCommitConfiguration(v29);
  v19 = (unsigned __int64)i;
  if ( (_DWORD)v5 )
    PnpBuildCmResourceLists((unsigned __int64)v12, (unsigned __int64)i, 0);
  PnpBuildCmResourceLists(v19, (unsigned __int64)&v12[8 * (unsigned __int64)((unsigned int)v5 + v14)], 1);
  if ( (_DWORD)v5 )
    memmove(v28, v12, Size);
LABEL_16:
  PnpFreeResourceRequirementsForAssignTable(v19, (unsigned __int64)&v12[8 * (unsigned __int64)((unsigned int)v5 + v14)]);
  ExFreePoolWithTag(v12, 0x30706E50u);
  v9 = (unsigned __int16 *)(a1 + 40);
LABEL_17:
  PnpTraceRebalanceResult((__int64)v30, v11);
  if ( BestConfiguration >= 0 )
  {
    v21 = *(void **)(a1 + 712);
    if ( v21 )
    {
      ExFreePoolWithTag(v21, 0x62655250u);
      *(_QWORD *)(a1 + 712) = 0LL;
    }
  }
  else
  {
    v20 = *(_QWORD *)(a1 + 712);
    if ( v20 )
    {
      *(_OWORD *)v20 = v30[0];
      *(_OWORD *)(v20 + 16) = v30[1];
      *(_OWORD *)(v20 + 32) = v30[2];
      *(_OWORD *)(v20 + 48) = v30[3];
      *(_OWORD *)(v20 + 64) = v30[4];
      *(_QWORD *)(v20 + 80) = *(_QWORD *)&v30[5];
    }
  }
  PnpDiagnosticTraceObjectWithStatus(&KMPnPEvt_Rebalance_Stop, v9, BestConfiguration);
  return (unsigned int)BestConfiguration;
}
