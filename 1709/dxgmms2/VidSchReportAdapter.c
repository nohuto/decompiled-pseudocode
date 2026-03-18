/*
 * XREFs of VidSchReportAdapter @ 0x1C00B4AA0
 * Callers:
 *     <none>
 * Callees:
 *     VidSchiSchedulerNodeToDriverEngine @ 0x1C0012F44 (VidSchiSchedulerNodeToDriverEngine.c)
 *     memset @ 0x1C0018400 (memset.c)
 *     McTemplateK0pqq @ 0x1C0021B54 (McTemplateK0pqq.c)
 *     McTemplateK0ppqpttq @ 0x1C00260AC (McTemplateK0ppqpttq.c)
 *     VidSchiSchedulerNodeToDriverNode @ 0x1C0029BD8 (VidSchiSchedulerNodeToDriverNode.c)
 *     McTemplateK0pqqqqqqqqppp @ 0x1C002AD20 (McTemplateK0pqqqqqqqqppp.c)
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
  unsigned __int8 v14; // r10
  char v15; // r11
  char v16; // r12
  __int64 v17; // r9
  __int64 j; // rsi
  __int64 v19; // rdi
  __int64 v20; // rcx
  __int64 v21; // r8
  unsigned int v22; // edx
  char v23; // dl
  char v24; // r9
  __int64 v25; // r9
  __int64 v26; // [rsp+28h] [rbp-39h]
  __int64 v27; // [rsp+30h] [rbp-31h]
  __int64 v28; // [rsp+40h] [rbp-21h]
  unsigned int v29; // [rsp+40h] [rbp-21h]
  __int64 v30; // [rsp+48h] [rbp-19h]
  _DWORD v31[8]; // [rsp+88h] [rbp+27h] BYREF

  if ( a1 )
  {
    v6 = *(_QWORD *)(a1 + 216);
    if ( v6 && bTracingEnabled && ((unsigned __int16)Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
    {
      v29 = (*(_DWORD *)(v6 + 48) >> 1) & 1;
      McTemplateK0ppqpttq(
        v29,
        &EventReportDevice,
        a3,
        0LL,
        *(_QWORD *)(a1 + 16),
        -1,
        v6,
        v29,
        (*(_DWORD *)(v6 + 48) >> 2) & 1);
    }
    v7 = *(_QWORD *)(a1 + 232);
    if ( v7 && bTracingEnabled && ((unsigned __int16)Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
    {
      LODWORD(v30) = (*(_DWORD *)(v7 + 48) >> 2) & 1;
      LODWORD(v28) = (*(_DWORD *)(v7 + 48) >> 1) & 1;
      LODWORD(v27) = -1;
      McTemplateK0ppqpttq((unsigned int)v28, &EventReportDevice, a3, 0LL, *(_QWORD *)(a1 + 16), v27, v7, v28, v30);
    }
    for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 60); i = (unsigned int)(i + 1) )
    {
      v9 = *(_QWORD *)(a1 + 8 * i + 424);
      if ( v9 )
      {
        v10 = *(_QWORD *)(v9 + 32);
        if ( v10 )
        {
          memset(v31, 0, sizeof(v31));
          if ( bTracingEnabled )
          {
            VidSchiSchedulerNodeToDriverEngine(a1, *(_DWORD *)(v10 + 88));
            v16 = VidSchiSchedulerNodeToDriverNode(a1, v13);
            if ( ((unsigned __int16)Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
              McTemplateK0pqqqqqqqqppp(
                v14,
                &EventReportContext,
                v12,
                v6,
                v16,
                v15,
                v31[0],
                v31[1],
                v31[2],
                v31[3],
                v31[4],
                (2 * (v14 | (2 * v12))) | 1,
                v10);
          }
          v17 = *(_QWORD *)(v10 + 56);
          if ( !v17 || (*(_DWORD *)(v10 + 112) & 0x40) != 0 )
            v17 = v10;
          if ( ((unsigned __int8)Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          {
            LODWORD(v27) = *(_DWORD *)(v10 + 396);
            LODWORD(v26) = *(_DWORD *)(v10 + 392);
            McTemplateK0pqq(v11, &EventChangePriority, v12, v17, v26, v27);
          }
        }
      }
    }
    if ( *(_QWORD *)(a1 + 240) )
    {
      for ( j = 0LL; (unsigned int)j < *(_DWORD *)(a1 + 56); j = (unsigned int)(j + 1) )
      {
        v19 = *(_QWORD *)(*(_QWORD *)(a1 + 240) + 8 * j);
        if ( v19 )
        {
          memset(v31, 0, sizeof(v31));
          if ( bTracingEnabled )
          {
            VidSchiSchedulerNodeToDriverEngine(a1, *(_DWORD *)(v19 + 88));
            v23 = VidSchiSchedulerNodeToDriverNode(a1, v22);
            if ( ((unsigned __int16)Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
              McTemplateK0pqqqqqqqqppp(
                v31[3],
                &EventReportContext,
                v21,
                v7,
                v23,
                v24,
                v31[0],
                v31[1],
                v31[2],
                v31[3],
                v31[4],
                (2 * v21) | 1,
                v19);
          }
          v25 = *(_QWORD *)(v19 + 56);
          if ( !v25 || (*(_DWORD *)(v19 + 112) & 0x40) != 0 )
            v25 = v19;
          if ( ((unsigned __int8)Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          {
            LODWORD(v27) = *(_DWORD *)(v19 + 396);
            LODWORD(v26) = *(_DWORD *)(v19 + 392);
            McTemplateK0pqq(v20, &EventChangePriority, v21, v25, v26, v27);
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
