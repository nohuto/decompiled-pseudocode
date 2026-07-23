/*
 * XREFs of FsRtlpCleanupEcps @ 0x140542B00
 * Callers:
 *     IopCleanupExtraCreateParameters @ 0x14054284C (IopCleanupExtraCreateParameters.c)
 *     NtQueryAttributesFile @ 0x140542900 (NtQueryAttributesFile.c)
 * Callees:
 *     RtlpInterlockedPushEntrySList @ 0x1401894B0 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     FsRtlFreeExtraCreateParameter @ 0x140542BD0 (FsRtlFreeExtraCreateParameter.c)
 */

char __fastcall FsRtlpCleanupEcps(_SLIST_ENTRY *P)
{
  __int64 **v2; // rbx
  __int64 *v3; // rcx
  __int64 v4; // rax
  char *v6; // rbx
  char *v7; // rdi
  int v8; // eax
  __int64 *v9; // rcx
  __int64 v10; // r8
  _QWORD *v11; // rax
  _QWORD *v12; // rdx

  if ( (HIDWORD(P->Next) & 1) != 0 )
  {
    v6 = (char *)*((_QWORD *)&P->Next + 1);
    v7 = (char *)(&P->Next + 1);
    if ( v6 != (char *)(&P->Next + 1) )
    {
      do
      {
        v8 = *((_DWORD *)v6 + 10);
        v9 = (__int64 *)(v6 - 8);
        v6 = *(char **)v6;
        if ( (v8 & 1) == 0 )
        {
          v10 = v9[1];
          v11 = v9 + 1;
          v12 = (_QWORD *)v9[2];
          if ( *(__int64 **)(v10 + 8) != v9 + 1 || (_QWORD *)*v12 != v11 )
            __fastfail(3u);
          *v12 = v10;
          *(_QWORD *)(v10 + 8) = v12;
          v9[2] = 0LL;
          *v11 = 0LL;
          FsRtlFreeExtraCreateParameter(v9 + 9);
        }
      }
      while ( v6 != v7 );
    }
    return 0;
  }
  else
  {
    v2 = (__int64 **)(&P->Next + 1);
    while ( *v2 != (__int64 *)v2 )
    {
      v3 = *v2;
      v4 = **v2;
      if ( (__int64 **)(*v2)[1] != v2 || *(__int64 **)(v4 + 8) != v3 )
        __fastfail(3u);
      *v2 = (__int64 *)v4;
      *(_QWORD *)(v4 + 8) = v2;
      v3[1] = 0LL;
      *v3 = 0LL;
      FsRtlFreeExtraCreateParameter(v3 + 8);
    }
    if ( (HIDWORD(P->Next) & 4) == 0 )
    {
      ExFreePoolWithTag(P, 0);
      return 1;
    }
    ++dword_14036F25C;
    if ( LOWORD(FsRtlEcpListLookaside.Alignment) < (unsigned __int16)word_14036F250 )
    {
      RtlpInterlockedPushEntrySList(&FsRtlEcpListLookaside, P);
      return 1;
    }
    ++dword_14036F260;
    ((void (__fastcall *)(_SLIST_ENTRY *))qword_14036F278)(P);
    return 1;
  }
}
