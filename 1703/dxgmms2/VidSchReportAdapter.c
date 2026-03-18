/*
 * XREFs of VidSchReportAdapter @ 0x1C00AC0E0
 * Callers:
 *     <none>
 * Callees:
 *     VidSchiSchedulerNodeToDriverEngine @ 0x1C0012030 (VidSchiSchedulerNodeToDriverEngine.c)
 *     memset @ 0x1C0015FC0 (memset.c)
 *     Template_pqq @ 0x1C001FA90 (Template_pqq.c)
 *     Template_ppqpttq @ 0x1C0024030 (Template_ppqpttq.c)
 *     VidSchiSchedulerNodeToDriverNode @ 0x1C0027864 (VidSchiSchedulerNodeToDriverNode.c)
 *     Template_pqqqqqqqqppp @ 0x1C0028E20 (Template_pqqqqqqqqppp.c)
 */

__int64 __fastcall VidSchReportAdapter(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  __int64 v6; // r14
  __int64 v7; // r15
  __int64 i; // rsi
  __int64 v9; // rdi
  __int64 v10; // rdi
  __int64 v11; // rcx
  __int64 v12; // r8
  unsigned int v13; // edx
  char v14; // al
  int v15; // r8d
  char v16; // r9
  __int64 v17; // r9
  __int64 j; // rsi
  __int64 v19; // rdi
  __int64 v20; // rcx
  __int64 v21; // r8
  unsigned int v22; // edx
  char v23; // al
  int v24; // r8d
  char v25; // r9
  __int64 v26; // r9
  __int64 v27; // [rsp+28h] [rbp-39h]
  __int64 v28; // [rsp+30h] [rbp-31h]
  __int64 v29; // [rsp+40h] [rbp-21h]
  unsigned int v30; // [rsp+40h] [rbp-21h]
  __int64 v31; // [rsp+48h] [rbp-19h]
  _DWORD v32[8]; // [rsp+88h] [rbp+27h] BYREF

  if ( a1 )
  {
    v6 = *(_QWORD *)(a1 + 208);
    if ( v6 && bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
    {
      v30 = (*(_DWORD *)(v6 + 48) >> 1) & 1;
      Template_ppqpttq(
        v30,
        &EventReportDevice,
        a3,
        0LL,
        *(_QWORD *)(a1 + 16),
        -1,
        v6,
        v30,
        (*(_DWORD *)(v6 + 48) >> 2) & 1);
    }
    v7 = *(_QWORD *)(a1 + 224);
    if ( v7 && bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
    {
      LODWORD(v31) = (*(_DWORD *)(v7 + 48) >> 2) & 1;
      LODWORD(v29) = (*(_DWORD *)(v7 + 48) >> 1) & 1;
      LODWORD(v28) = -1;
      Template_ppqpttq((unsigned int)v29, &EventReportDevice, a3, 0LL, *(_QWORD *)(a1 + 16), v28, v7, v29, v31);
    }
    for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 60); i = (unsigned int)(i + 1) )
    {
      v9 = *(_QWORD *)(a1 + 8 * i + 416);
      if ( v9 )
      {
        v10 = *(_QWORD *)(v9 + 32);
        if ( v10 )
        {
          memset(v32, 0, sizeof(v32));
          if ( bTracingEnabled )
          {
            v12 = *(_DWORD *)(v10 + 112) & 0x40;
            v11 = *(_DWORD *)(*(_QWORD *)(v10 + 104) + 48LL) >> 4;
            LOBYTE(v11) = (*(_DWORD *)(*(_QWORD *)(v10 + 104) + 48LL) & 0x10) != 0;
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
            {
              VidSchiSchedulerNodeToDriverEngine(a1, *(_DWORD *)(v10 + 88));
              v14 = VidSchiSchedulerNodeToDriverNode(a1, v13);
              Template_pqqqqqqqqppp(
                v32[0],
                &EventReportContext,
                v15,
                v6,
                v14,
                v15,
                v32[0],
                v32[1],
                v32[2],
                v32[3],
                v32[4],
                v16,
                v10);
            }
          }
          v17 = *(_QWORD *)(v10 + 56);
          if ( !v17 || (*(_DWORD *)(v10 + 112) & 0x40) != 0 )
            v17 = v10;
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          {
            LODWORD(v28) = *(_DWORD *)(v10 + 396);
            LODWORD(v27) = *(_DWORD *)(v10 + 392);
            Template_pqq(v11, &EventChangePriority, v12, v17, v27, v28);
          }
        }
      }
    }
    if ( *(_QWORD *)(a1 + 232) )
    {
      for ( j = 0LL; (unsigned int)j < *(_DWORD *)(a1 + 56); j = (unsigned int)(j + 1) )
      {
        v19 = *(_QWORD *)(*(_QWORD *)(a1 + 232) + 8 * j);
        if ( v19 )
        {
          memset(v32, 0, sizeof(v32));
          if ( bTracingEnabled )
          {
            v20 = *(_DWORD *)(*(_QWORD *)(v19 + 104) + 48LL) >> 4;
            LOBYTE(v20) = (*(_DWORD *)(*(_QWORD *)(v19 + 104) + 48LL) & 0x10) != 0;
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
            {
              VidSchiSchedulerNodeToDriverEngine(a1, *(_DWORD *)(v19 + 88));
              v23 = VidSchiSchedulerNodeToDriverNode(a1, v22);
              Template_pqqqqqqqqppp(
                v32[0],
                &EventReportContext,
                v24,
                v7,
                v23,
                v25,
                v32[0],
                v32[1],
                v32[2],
                v32[3],
                v32[4],
                v24,
                v19);
            }
          }
          v26 = *(_QWORD *)(v19 + 56);
          if ( !v26 || (*(_DWORD *)(v19 + 112) & 0x40) != 0 )
            v26 = v19;
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          {
            LODWORD(v28) = *(_DWORD *)(v19 + 396);
            LODWORD(v27) = *(_DWORD *)(v19 + 392);
            Template_pqq(v20, &EventChangePriority, v21, v26, v27, v28);
          }
        }
      }
    }
    return 0LL;
  }
  else
  {
    v4 = WdLogNewEntry5_WdAssertion(0LL, a2);
    *(_QWORD *)(v4 + 24) = -1073741811LL;
    WdLogEvent5_WdAssertion(v4);
    return 3221225485LL;
  }
}
