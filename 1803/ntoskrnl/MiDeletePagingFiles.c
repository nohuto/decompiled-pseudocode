/*
 * XREFs of MiDeletePagingFiles @ 0x14074EA48
 * Callers:
 *     MiDeletePartitionResources @ 0x14026E874 (MiDeletePartitionResources.c)
 *     MiShutdownSystem @ 0x1404850A8 (MiShutdownSystem.c)
 * Callees:
 *     MiReturnCommit @ 0x14000A1A0 (MiReturnCommit.c)
 *     MiDeletePagefile @ 0x14074E938 (MiDeletePagefile.c)
 */

__int64 __fastcall MiDeletePagingFiles(__int64 a1)
{
  unsigned int v1; // eax
  unsigned __int64 v3; // rbx
  __int64 v4; // rdi
  __int64 *v5; // r14
  __int64 v6; // r15
  __int64 v7; // rcx
  __int16 v8; // bp
  unsigned __int64 v9; // rax

  v1 = *(_DWORD *)(a1 + 6872);
  v3 = 0LL;
  v4 = 0LL;
  if ( v1 )
  {
    v5 = (__int64 *)(a1 + 6880);
    v6 = v1;
    do
    {
      v7 = *v5;
      if ( *v5 )
      {
        v8 = *(_WORD *)(v7 + 204) & 0x50;
        if ( !v8 )
          v4 += *(_QWORD *)v7;
        MiDeletePagefile((char *)v7, 1LL);
        v9 = v3 + 2;
        if ( v8 )
          v9 = v3;
        v3 = v9;
      }
      ++v5;
      --v6;
    }
    while ( v6 );
    if ( v3 )
      MiReturnCommit(a1, v3);
  }
  return v4;
}
