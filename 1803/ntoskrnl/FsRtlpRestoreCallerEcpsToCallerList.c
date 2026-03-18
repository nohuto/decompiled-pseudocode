/*
 * XREFs of FsRtlpRestoreCallerEcpsToCallerList @ 0x1402242C4
 * Callers:
 *     IopFastQueryNetworkAttributes @ 0x14071CC14 (IopFastQueryNetworkAttributes.c)
 * Callees:
 *     FsRtlFreeExtraCreateParameterList @ 0x1404D1CB0 (FsRtlFreeExtraCreateParameterList.c)
 */

__int64 __fastcall FsRtlpRestoreCallerEcpsToCallerList(__int64 a1, struct _ECP_LIST *a2)
{
  _LIST_ENTRY *p_EcpList; // r9
  struct _LIST_ENTRY *Flink; // rcx
  struct _LIST_ENTRY **p_Blink; // r10
  struct _LIST_ENTRY *v6; // rdx
  int Blink; // eax
  struct _LIST_ENTRY *v8; // rax
  struct _LIST_ENTRY *v9; // rax

  if ( (a2->Flags & 1) != 0 )
  {
    p_EcpList = &a2->EcpList;
    Flink = a2->EcpList.Flink;
    while ( Flink != p_EcpList )
    {
      p_Blink = &Flink[-1].Blink;
      v6 = Flink;
      Blink = (int)Flink[2].Blink;
      Flink = Flink->Flink;
      if ( (Blink & 1) != 0 )
      {
        if ( Flink->Blink != v6 || (v8 = v6->Blink, v8->Flink != v6) )
          __fastfail(3u);
        v8->Flink = Flink;
        Flink->Blink = v8;
        p_Blink[2] = 0LL;
        v6->Flink = 0LL;
        v9 = (struct _LIST_ENTRY *)MEMORY[0x10];
        if ( *MEMORY[0x10] != 8LL )
          __fastfail(3u);
        v6->Flink = (struct _LIST_ENTRY *)8;
        v6->Blink = v9;
        v9->Flink = v6;
        MEMORY[0x10] = v6;
      }
    }
  }
  FsRtlFreeExtraCreateParameterList(a2);
  return 0LL;
}
