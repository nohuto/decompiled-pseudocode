/*
 * XREFs of MiDeleteSystemPageTableTail @ 0x140137870
 * Callers:
 *     <none>
 * Callees:
 *     MiReturnCommit @ 0x14000A1A0 (MiReturnCommit.c)
 *     MiFlushTbList @ 0x140116C90 (MiFlushTbList.c)
 *     MiReturnSystemCharges @ 0x1401377CC (MiReturnSystemCharges.c)
 *     MiFreeUnmappedPageTables @ 0x140137914 (MiFreeUnmappedPageTables.c)
 *     memset @ 0x1401BCC40 (memset.c)
 */

__int64 __fastcall MiDeleteSystemPageTableTail(__int64 a1)
{
  __int64 v2; // rdi
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // rcx
  __int64 v7; // rbx
  _QWORD v8[5]; // [rsp+20h] [rbp-28h] BYREF

  memset(v8, 0, 0x20uLL);
  v2 = *(_QWORD *)(a1 + 168);
  MiFlushTbList(*(_QWORD *)(v2 + 16), v3, v4);
  v5 = *(_QWORD *)(v2 + 8);
  if ( v5 )
  {
    MiFreeUnmappedPageTables(v5, v8);
    *(_QWORD *)(v2 + 8) = 0LL;
    if ( v8[3] )
    {
      if ( qword_1403CFCA8 )
      {
        v7 = *(_QWORD *)(qword_1403CBD88 + 8LL * *(unsigned __int16 *)(*(_QWORD *)(a1 + 24) + 174LL));
        MiReturnCommit(v7, v8[3] - v8[1]);
        MiReturnSystemCharges(v7, v8[3], *(_DWORD *)v2);
      }
    }
  }
  return 0LL;
}
