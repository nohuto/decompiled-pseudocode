/*
 * XREFs of KiAbEntryUpdateOwnerTreePosition @ 0x14011F070
 * Callers:
 *     KiAbProcessContextSwitch @ 0x1400EC3E0 (KiAbProcessContextSwitch.c)
 *     KiAbProcessThreadLocks @ 0x14011EB5C (KiAbProcessThreadLocks.c)
 * Callees:
 *     RtlRbRemoveNode @ 0x140048460 (RtlRbRemoveNode.c)
 *     RtlRbInsertNodeEx @ 0x14004A340 (RtlRbInsertNodeEx.c)
 *     KiAbOwnerComputeCpuPriorityKey @ 0x14011F10C (KiAbOwnerComputeCpuPriorityKey.c)
 */

void __fastcall KiAbEntryUpdateOwnerTreePosition(unsigned __int64 a1)
{
  char v2; // al
  __int64 v3; // r9
  __int64 v4; // rdi
  bool v5; // cl
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // rax

  v2 = KiAbOwnerComputeCpuPriorityKey(a1);
  if ( *(_BYTE *)(a1 + 48) == v2 )
    return;
  v4 = v3 + 48;
  *(_BYTE *)(a1 + 48) = v2;
  RtlRbRemoveNode(v3 + 48, (unsigned __int64 *)a1);
  v5 = 0;
  v6 = *(_QWORD *)v4;
  if ( !*(_QWORD *)v4 )
    goto LABEL_3;
  while ( 1 )
  {
    if ( *(_BYTE *)(v6 + 48) > *(_BYTE *)(a1 + 48) )
    {
      v7 = *(_QWORD *)v6;
      if ( (*(_BYTE *)(v4 + 8) & 1) != 0 )
      {
        if ( !v7 )
          goto LABEL_3;
        v7 ^= v6;
      }
      if ( !v7 )
        goto LABEL_3;
      goto LABEL_10;
    }
    v7 = *(_QWORD *)(v6 + 8);
    if ( (*(_BYTE *)(v4 + 8) & 1) != 0 )
      break;
LABEL_6:
    if ( !v7 )
      goto LABEL_7;
LABEL_10:
    v6 = v7;
  }
  if ( v7 )
  {
    v7 ^= v6;
    goto LABEL_6;
  }
LABEL_7:
  v5 = 1;
LABEL_3:
  RtlRbInsertNodeEx(v4, v6, v5, a1);
}
