/*
 * XREFs of ?MsgSQMCleanupProcessPair@@YAXPEAUtagMSGSQM_PROCESSPAIR@@@Z @ 0x1C01F2490
 * Callers:
 *     ?MsgSQMFreeProcessPair@@YAXPEAUtagMSGSQM_PROCESSPAIR@@@Z @ 0x1C01F2668 (-MsgSQMFreeProcessPair@@YAXPEAUtagMSGSQM_PROCESSPAIR@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall MsgSQMCleanupProcessPair(struct tagMSGSQM_PROCESSPAIR ***a1)
{
  struct tagMSGSQM_PROCESSPAIR **v1; // rax
  struct tagMSGSQM_PROCESSPAIR **v2; // rdx
  struct tagMSGSQM_PROCESSPAIR **v3; // r8
  struct tagMSGSQM_PROCESSPAIR **v4; // rdx

  if ( a1 && !a1[6] )
  {
    v1 = *a1;
    if ( (*a1)[1] != (struct tagMSGSQM_PROCESSPAIR *)a1 || (v2 = a1[1], *v2 != (struct tagMSGSQM_PROCESSPAIR *)a1) )
      __fastfail(3u);
    *v2 = (struct tagMSGSQM_PROCESSPAIR *)v1;
    v1[1] = (struct tagMSGSQM_PROCESSPAIR *)v2;
    v3 = a1[2];
    if ( v3[1] != (struct tagMSGSQM_PROCESSPAIR *)(a1 + 2)
      || (v4 = a1[3], *v4 != (struct tagMSGSQM_PROCESSPAIR *)(a1 + 2)) )
    {
      __fastfail(3u);
    }
    *v4 = (struct tagMSGSQM_PROCESSPAIR *)v3;
    v3[1] = (struct tagMSGSQM_PROCESSPAIR *)v4;
    Win32FreePool(a1, v4, v3);
  }
}
