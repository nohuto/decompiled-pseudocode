/*
 * XREFs of ?VmBusSendQueryStatistics@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAU_D3DKMT_QUERYSTATISTICS@@PEAVDXGPROCESS@@@Z @ 0x1C0184484
 * Callers:
 *     DxgkQueryStatisticsInternal @ 0x1C0168B08 (DxgkQueryStatisticsInternal.c)
 * Callees:
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     ?VmBusSendSyncMessage@@YAJPEAUVMBCHANNEL__@@PEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@@Z @ 0x1C018557C (-VmBusSendSyncMessage@@YAJPEAUVMBCHANNEL__@@PEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@@Z.c)
 */

__int64 __fastcall DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendQueryStatistics(
        struct VMBCHANNEL__ **this,
        struct _D3DKMT_QUERYSTATISTICS *a2,
        struct DXGPROCESS *a3)
{
  int v3; // eax
  __int64 v4; // rdi
  __int64 v7; // rcx
  struct _D3DKMT_QUERYSTATISTICS *v8; // rax
  char *v9; // rdx
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  int v22; // ebx
  __int64 v23; // r8
  _OWORD *v24; // rcx
  char *v25; // rax
  __int128 v26; // xmm1
  __int128 v27; // xmm0
  __int128 v28; // xmm1
  __int128 v29; // xmm0
  __int128 v30; // xmm1
  __int128 v31; // xmm0
  __int128 v32; // xmm1
  __int64 v33; // rax
  struct _MDL *v35; // [rsp+28h] [rbp-D8h]
  unsigned int v36[4]; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v37; // [rsp+40h] [rbp-C0h] BYREF
  int v38; // [rsp+48h] [rbp-B8h]
  int v39; // [rsp+4Ch] [rbp-B4h]
  int v40; // [rsp+50h] [rbp-B0h]
  char v41; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v42; // [rsp+68h] [rbp-98h]
  int v43; // [rsp+380h] [rbp+280h] BYREF
  char v44; // [rsp+388h] [rbp+288h] BYREF

  v3 = *((_DWORD *)a3 + 98);
  v4 = 6LL;
  v37 = 0LL;
  v39 = 0;
  v38 = v3;
  v7 = 6LL;
  v8 = a2;
  v40 = 49;
  v9 = &v41;
  do
  {
    v10 = *((_OWORD *)v8 + 1);
    *(_OWORD *)v9 = *(_OWORD *)v8;
    v11 = *((_OWORD *)v8 + 2);
    *((_OWORD *)v9 + 1) = v10;
    v12 = *((_OWORD *)v8 + 3);
    *((_OWORD *)v9 + 2) = v11;
    v13 = *((_OWORD *)v8 + 4);
    *((_OWORD *)v9 + 3) = v12;
    v14 = *((_OWORD *)v8 + 5);
    *((_OWORD *)v9 + 4) = v13;
    v15 = *((_OWORD *)v8 + 6);
    *((_OWORD *)v9 + 5) = v14;
    v16 = *((_OWORD *)v8 + 7);
    v8 = (struct _D3DKMT_QUERYSTATISTICS *)((char *)v8 + 128);
    *((_OWORD *)v9 + 6) = v15;
    v9 += 128;
    *((_OWORD *)v9 - 1) = v16;
    --v7;
  }
  while ( v7 );
  v17 = *(_OWORD *)v8;
  v18 = *((_OWORD *)v8 + 1);
  v19 = *((_QWORD *)v8 + 4);
  *(_OWORD *)v9 = v17;
  v36[0] = 784;
  *((_OWORD *)v9 + 1) = v18;
  *((_QWORD *)v9 + 4) = v19;
  v42 = 0LL;
  v22 = VmBusSendSyncMessage(*this, (struct DXGKVMB_COMMAND_BASE *)&v37, 0x340u, &v43, v36, v35);
  if ( v22 < 0 || (v22 = -1073741823, v36[0] < 0x310) || (v22 = v43, v43 < 0) )
  {
    v33 = WdLogNewEntry5_WdWarning(v21, v20, v23);
    *(_QWORD *)(v33 + 24) = v22;
    WdLogEvent5_WdWarning(v33);
  }
  else
  {
    v24 = (_OWORD *)((char *)a2 + 24);
    v25 = &v44;
    do
    {
      v26 = *((_OWORD *)v25 + 1);
      *v24 = *(_OWORD *)v25;
      v27 = *((_OWORD *)v25 + 2);
      v24[1] = v26;
      v28 = *((_OWORD *)v25 + 3);
      v24[2] = v27;
      v29 = *((_OWORD *)v25 + 4);
      v24[3] = v28;
      v30 = *((_OWORD *)v25 + 5);
      v24[4] = v29;
      v31 = *((_OWORD *)v25 + 6);
      v24[5] = v30;
      v32 = *((_OWORD *)v25 + 7);
      v25 += 128;
      v24[6] = v31;
      v24 += 8;
      *(v24 - 1) = v32;
      --v4;
    }
    while ( v4 );
    *(_QWORD *)v24 = *(_QWORD *)v25;
  }
  return (unsigned int)v22;
}
