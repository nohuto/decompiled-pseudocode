/*
 * XREFs of IopCleanupExtraCreateParameters @ 0x1405E630C
 * Callers:
 *     NtDeleteFile @ 0x1405E61C0 (NtDeleteFile.c)
 *     IoQueryInformationByName @ 0x1406B7700 (IoQueryInformationByName.c)
 * Callees:
 *     FsRtlFreeExtraCreateParameterList @ 0x14053D570 (FsRtlFreeExtraCreateParameterList.c)
 *     FsRtlFreeExtraCreateParameter @ 0x14053D630 (FsRtlFreeExtraCreateParameter.c)
 */

void __fastcall IopCleanupExtraCreateParameters(__int64 a1)
{
  struct _ECP_LIST *v2; // rcx
  _LIST_ENTRY *p_EcpList; // rdi
  struct _LIST_ENTRY *Flink; // rbx
  struct _LIST_ENTRY **p_Blink; // rcx
  struct _LIST_ENTRY *v6; // rax
  struct _LIST_ENTRY *v7; // rdx
  struct _LIST_ENTRY *v8; // r8

  v2 = *(struct _ECP_LIST **)(a1 + 168);
  if ( v2 )
  {
    if ( (v2->Flags & 1) != 0 )
    {
      p_EcpList = &v2->EcpList;
      Flink = v2->EcpList.Flink;
      while ( Flink != p_EcpList )
      {
        p_Blink = &Flink[-1].Blink;
        Flink = Flink->Flink;
        if ( ((_DWORD)p_Blink[6] & 1) == 0 )
        {
          v6 = (struct _LIST_ENTRY *)(p_Blink + 1);
          v7 = p_Blink[1];
          if ( (struct _LIST_ENTRY **)v7->Blink != p_Blink + 1 || (v8 = p_Blink[2], v8->Flink != v6) )
            __fastfail(3u);
          v8->Flink = v7;
          v7->Blink = v8;
          p_Blink[2] = 0LL;
          v6->Flink = 0LL;
          FsRtlFreeExtraCreateParameter(p_Blink + 9);
        }
      }
    }
    else
    {
      FsRtlFreeExtraCreateParameterList(v2);
      *(_QWORD *)(a1 + 168) = 0LL;
    }
  }
}
