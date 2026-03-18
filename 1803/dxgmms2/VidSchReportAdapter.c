/*
 * XREFs of VidSchReportAdapter @ 0x1C00BD650
 * Callers:
 *     <none>
 * Callees:
 *     VidSchiSchedulerNodeToDriverEngine @ 0x1C0002EB0 (VidSchiSchedulerNodeToDriverEngine.c)
 *     memset @ 0x1C0017DC0 (memset.c)
 *     McTemplateK0pqq @ 0x1C00244A0 (McTemplateK0pqq.c)
 *     McTemplateK0ppp @ 0x1C00247E4 (McTemplateK0ppp.c)
 *     McTemplateK0ppqpttq @ 0x1C0028CE0 (McTemplateK0ppqpttq.c)
 *     VidSchiSchedulerNodeToDriverNode @ 0x1C002CAE4 (VidSchiSchedulerNodeToDriverNode.c)
 *     McTemplateK0pqqqqqqqqppp @ 0x1C002DD70 (McTemplateK0pqqqqqqqqppp.c)
 */

__int64 __fastcall VidSchReportAdapter(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  __int64 v6; // r14
  __int64 v7; // r15
  unsigned int i; // esi
  __int64 v9; // rdi
  __int64 v10; // rdi
  __int64 v11; // rcx
  unsigned int v12; // edx
  unsigned __int8 v13; // r10
  char v14; // r11
  char v15; // r12
  __int64 v16; // r9
  unsigned int j; // esi
  __int64 v18; // rdi
  __int64 v19; // rcx
  unsigned int v20; // edx
  char v21; // dl
  char v22; // r9
  __int64 v23; // r9
  unsigned int k; // edi
  __int64 v25; // rsi
  unsigned int v26; // edx
  char v27; // dl
  char v28; // r9
  unsigned int m; // edi
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r9
  __int64 v33; // [rsp+28h] [rbp-49h]
  __int64 v34; // [rsp+30h] [rbp-41h]
  __int64 v35; // [rsp+40h] [rbp-31h]
  unsigned int v36; // [rsp+40h] [rbp-31h]
  __int64 v37; // [rsp+48h] [rbp-29h]
  _DWORD v38[8]; // [rsp+88h] [rbp+17h] BYREF

  if ( a1 )
  {
    v6 = *(_QWORD *)(a1 + 216);
    if ( v6 && bTracingEnabled && ((unsigned __int16)Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
    {
      v36 = (*(_DWORD *)(v6 + 48) >> 1) & 1;
      McTemplateK0ppqpttq(
        v36,
        &EventReportDevice,
        a3,
        0LL,
        *(_QWORD *)(a1 + 16),
        -1,
        v6,
        v36,
        (*(_DWORD *)(v6 + 48) >> 2) & 1);
    }
    v7 = *(_QWORD *)(a1 + 232);
    if ( v7 && bTracingEnabled && ((unsigned __int16)Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
    {
      LODWORD(v37) = (*(_DWORD *)(v7 + 48) >> 2) & 1;
      LODWORD(v35) = (*(_DWORD *)(v7 + 48) >> 1) & 1;
      LODWORD(v34) = -1;
      McTemplateK0ppqpttq((unsigned int)v35, &EventReportDevice, a3, 0LL, *(_QWORD *)(a1 + 16), v34, v7, v35, v37);
    }
    for ( i = 0; i < *(_DWORD *)(a1 + 64); ++i )
    {
      v9 = *(_QWORD *)(a1 + 8LL * i + 440);
      if ( v9 )
      {
        v10 = *(_QWORD *)(v9 + 32);
        if ( v10 )
        {
          memset(v38, 0, sizeof(v38));
          if ( bTracingEnabled )
          {
            VidSchiSchedulerNodeToDriverEngine(a1, *(_DWORD *)(v10 + 88));
            v15 = VidSchiSchedulerNodeToDriverNode(a1, v12);
            if ( ((unsigned __int16)Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
              McTemplateK0pqqqqqqqqppp(
                v13,
                &EventReportContext,
                a3,
                v6,
                v15,
                v14,
                v38[0],
                v38[1],
                v38[2],
                v38[3],
                v38[4],
                (2 * (v13 | (2 * a3))) | 1,
                v10);
          }
          v16 = *(_QWORD *)(v10 + 56);
          if ( !v16 || (*(_DWORD *)(v10 + 112) & 0x40) != 0 )
            v16 = v10;
          if ( ((unsigned __int8)Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          {
            LODWORD(v34) = *(_DWORD *)(v10 + 404);
            LODWORD(v33) = *(_DWORD *)(v10 + 400);
            McTemplateK0pqq(v11, &EventChangePriority, a3, v16, v33, v34);
          }
        }
      }
    }
    if ( *(_QWORD *)(a1 + 240) )
    {
      for ( j = 0; j < *(_DWORD *)(a1 + 60); ++j )
      {
        v18 = *(_QWORD *)(*(_QWORD *)(a1 + 240) + 8LL * j);
        if ( v18 )
        {
          memset(v38, 0, sizeof(v38));
          if ( bTracingEnabled )
          {
            VidSchiSchedulerNodeToDriverEngine(a1, *(_DWORD *)(v18 + 88));
            v21 = VidSchiSchedulerNodeToDriverNode(a1, v20);
            if ( ((unsigned __int16)Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
              McTemplateK0pqqqqqqqqppp(
                v38[3],
                &EventReportContext,
                a3,
                v7,
                v21,
                v22,
                v38[0],
                v38[1],
                v38[2],
                v38[3],
                v38[4],
                (2 * a3) | 1,
                v18);
          }
          v23 = *(_QWORD *)(v18 + 56);
          if ( !v23 || (*(_DWORD *)(v18 + 112) & 0x40) != 0 )
            v23 = v18;
          if ( ((unsigned __int8)Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          {
            LODWORD(v34) = *(_DWORD *)(v18 + 404);
            LODWORD(v33) = *(_DWORD *)(v18 + 400);
            McTemplateK0pqq(v19, &EventChangePriority, a3, v23, v33, v34);
          }
        }
      }
    }
    if ( *(_QWORD *)(a1 + 248) )
    {
      for ( k = 0; k < *(_DWORD *)(a1 + 60); ++k )
      {
        v25 = *(_QWORD *)(*(_QWORD *)(a1 + 248) + 8LL * k);
        if ( v25 )
        {
          memset(v38, 0, sizeof(v38));
          if ( bTracingEnabled )
          {
            VidSchiSchedulerNodeToDriverEngine(a1, *(unsigned __int16 *)(*(_QWORD *)(v25 + 16) + 4LL));
            v27 = VidSchiSchedulerNodeToDriverNode(a1, v26);
            if ( ((unsigned __int16)Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
              McTemplateK0pqqqqqqqqppp(
                v38[3],
                &EventReportContext,
                a3,
                v7,
                v27,
                v28,
                v38[0],
                v38[1],
                v38[2],
                v38[3],
                v38[4],
                (2 * a3) | 1,
                v25);
          }
        }
      }
    }
    if ( *(_QWORD *)(a1 + 256) )
    {
      for ( m = 0; m < *(_DWORD *)(a1 + 60); ++m )
      {
        v30 = *(_QWORD *)(*(_QWORD *)(a1 + 256) + 8LL * m);
        if ( v30 && bTracingEnabled )
        {
          v31 = *(_QWORD *)(v30 + 24);
          v32 = *(_QWORD *)(v31 + 24);
          if ( !v32 || (*(_DWORD *)(v31 + 48) & 0x40) != 0 )
            v32 = *(_QWORD *)(v30 + 24);
          if ( ((unsigned __int16)Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
            McTemplateK0ppp(v31, &EventReportHwQueue, a3, v32, 0LL, v30);
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
