/*
 * XREFs of VidSchReportDevice @ 0x1C00AC4F0
 * Callers:
 *     <none>
 * Callees:
 *     VidSchiSchedulerNodeToDriverEngine @ 0x1C0012030 (VidSchiSchedulerNodeToDriverEngine.c)
 *     memset @ 0x1C0015FC0 (memset.c)
 *     Template_pqq @ 0x1C001FA90 (Template_pqq.c)
 *     VidSchiSchedulerNodeToDriverNode @ 0x1C0027864 (VidSchiSchedulerNodeToDriverNode.c)
 *     Template_pqqqqqqqqppp @ 0x1C0028E20 (Template_pqqqqqqqqppp.c)
 */

__int64 __fastcall VidSchReportDevice(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v4; // rdi
  __int64 v5; // rbx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rax
  unsigned int v9; // edx
  char v10; // al
  int v11; // r8d
  __int64 v12; // r9
  char v13; // r10
  __int64 v14; // r9
  __int64 v15; // [rsp+20h] [rbp-88h]
  __int64 v16; // [rsp+28h] [rbp-80h]
  _DWORD v17[8]; // [rsp+80h] [rbp-28h] BYREF

  if ( a1 )
  {
    v4 = *(_QWORD *)(a1 + 32);
    if ( a1 == *(_QWORD *)(v4 + 208) )
      v5 = *(_QWORD *)(v4 + 216);
    else
      v5 = 0LL;
    if ( v5 )
    {
      memset(v17, 0, sizeof(v17));
      if ( bTracingEnabled )
      {
        v8 = *(_QWORD *)(v5 + 104);
        v7 = *(_DWORD *)(v8 + 48) >> 4;
        LOBYTE(v7) = (*(_DWORD *)(v8 + 48) & 0x10) != 0;
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        {
          VidSchiSchedulerNodeToDriverEngine(v4, *(_DWORD *)(v5 + 88));
          v10 = VidSchiSchedulerNodeToDriverNode(v4, v9);
          Template_pqqqqqqqqppp(
            v17[0],
            &EventReportContext,
            v11,
            v12,
            v10,
            v13,
            v17[0],
            v17[1],
            v17[2],
            v17[3],
            v17[4],
            v11,
            v5);
        }
      }
      v14 = *(_QWORD *)(v5 + 56);
      if ( !v14 || (*(_DWORD *)(v5 + 112) & 0x40) != 0 )
        v14 = v5;
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      {
        LODWORD(v16) = *(_DWORD *)(v5 + 396);
        LODWORD(v15) = *(_DWORD *)(v5 + 392);
        Template_pqq(v6, &EventChangePriority, v7, v14, v15, v16);
      }
    }
    return 0LL;
  }
  else
  {
    v2 = WdLogNewEntry5_WdAssertion(0LL, a2);
    *(_QWORD *)(v2 + 24) = -1073741811LL;
    WdLogEvent5_WdAssertion(v2);
    return 3221225485LL;
  }
}
