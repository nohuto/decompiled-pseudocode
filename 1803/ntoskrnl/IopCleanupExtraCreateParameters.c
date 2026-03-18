/*
 * XREFs of IopCleanupExtraCreateParameters @ 0x140554BB8
 * Callers:
 *     NtQueryFullAttributesFile @ 0x140554980 (NtQueryFullAttributesFile.c)
 *     NtDeleteFile @ 0x1405F3880 (NtDeleteFile.c)
 *     IoQueryInformationByName @ 0x14071C390 (IoQueryInformationByName.c)
 * Callees:
 *     FsRtlFreeExtraCreateParameterList @ 0x1404D1CB0 (FsRtlFreeExtraCreateParameterList.c)
 *     FsRtlFreeExtraCreateParameter @ 0x1404D1FD0 (FsRtlFreeExtraCreateParameter.c)
 */

void __fastcall IopCleanupExtraCreateParameters(__int64 a1)
{
  struct _ECP_LIST *v2; // rcx
  _LIST_ENTRY *p_EcpList; // rdi
  struct _LIST_ENTRY *Flink; // rbx
  struct _LIST_ENTRY **p_Blink; // rdx
  struct _LIST_ENTRY *v6; // rcx
  int Blink; // eax
  struct _LIST_ENTRY *v8; // rax

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
        v6 = Flink;
        Blink = (int)Flink[2].Blink;
        Flink = Flink->Flink;
        if ( (Blink & 1) == 0 )
        {
          if ( Flink->Blink != v6 || (v8 = v6->Blink, v8->Flink != v6) )
            __fastfail(3u);
          v8->Flink = Flink;
          Flink->Blink = v8;
          v6->Flink = 0LL;
          p_Blink[2] = 0LL;
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
