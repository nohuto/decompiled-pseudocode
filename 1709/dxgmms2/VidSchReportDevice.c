/*
 * XREFs of VidSchReportDevice @ 0x1C00B4EB0
 * Callers:
 *     <none>
 * Callees:
 *     VidSchiSchedulerNodeToDriverEngine @ 0x1C0012F44 (VidSchiSchedulerNodeToDriverEngine.c)
 *     memset @ 0x1C0018400 (memset.c)
 *     McTemplateK0pqq @ 0x1C0021B54 (McTemplateK0pqq.c)
 *     VidSchiSchedulerNodeToDriverNode @ 0x1C0029BD8 (VidSchiSchedulerNodeToDriverNode.c)
 *     McTemplateK0pqqqqqqqqppp @ 0x1C002AD20 (McTemplateK0pqqqqqqqqppp.c)
 */

__int64 __fastcall VidSchReportDevice(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v4; // rdi
  __int64 v5; // rbx
  __int64 v6; // rcx
  __int64 v7; // r8
  unsigned int v8; // edx
  char v9; // dl
  __int64 v10; // r9
  char v11; // r10
  __int64 v12; // r9
  __int64 v13; // [rsp+20h] [rbp-88h]
  __int64 v14; // [rsp+28h] [rbp-80h]
  _DWORD v15[8]; // [rsp+80h] [rbp-28h] BYREF

  if ( a1 )
  {
    v4 = *(_QWORD *)(a1 + 32);
    if ( a1 == *(_QWORD *)(v4 + 216) )
      v5 = *(_QWORD *)(v4 + 224);
    else
      v5 = 0LL;
    if ( v5 )
    {
      memset(v15, 0, sizeof(v15));
      if ( bTracingEnabled )
      {
        VidSchiSchedulerNodeToDriverEngine(v4, *(_DWORD *)(v5 + 88));
        v9 = VidSchiSchedulerNodeToDriverNode(v4, v8);
        if ( ((unsigned __int16)Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
          McTemplateK0pqqqqqqqqppp(
            v15[3],
            &EventReportContext,
            v7,
            v10,
            v9,
            v11,
            v15[0],
            v15[1],
            v15[2],
            v15[3],
            v15[4],
            (2 * v7) | 1,
            v5);
      }
      v12 = *(_QWORD *)(v5 + 56);
      if ( !v12 || (*(_DWORD *)(v5 + 112) & 0x40) != 0 )
        v12 = v5;
      if ( ((unsigned __int8)Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      {
        LODWORD(v14) = *(_DWORD *)(v5 + 396);
        LODWORD(v13) = *(_DWORD *)(v5 + 392);
        McTemplateK0pqq(v6, &EventChangePriority, v7, v12, v13, v14);
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
