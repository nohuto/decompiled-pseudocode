/*
 * XREFs of KiAbEntryUpdateWaiterTreePosition @ 0x1400AA8CC
 * Callers:
 *     KiAbProcessThreadLocks @ 0x1400A7650 (KiAbProcessThreadLocks.c)
 *     KiAbForceProcessLockEntry @ 0x14013F9F0 (KiAbForceProcessLockEntry.c)
 * Callees:
 *     RtlRbInsertNodeEx @ 0x14005E640 (RtlRbInsertNodeEx.c)
 *     RtlRbRemoveNode @ 0x14005EF60 (RtlRbRemoveNode.c)
 */

void __fastcall KiAbEntryUpdateWaiterTreePosition(unsigned __int64 a1, __int64 a2)
{
  char v3; // al
  __int64 v4; // rdi
  bool v5; // cl
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // rax

  v3 = *(_BYTE *)(a1 - (unsigned __int16)(16 * *(unsigned __int8 *)(a1 + 24)) + 195);
  if ( v3 > 15 )
    v3 = 15;
  if ( *(_BYTE *)(a1 + 48) == v3 )
    return;
  v4 = a2 + 64;
  *(_BYTE *)(a1 + 48) = v3;
  RtlRbRemoveNode(a2 + 64, a1);
  v5 = 0;
  v6 = *(_QWORD *)v4;
  if ( !*(_QWORD *)v4 )
    goto LABEL_9;
  while ( 1 )
  {
    if ( *(_BYTE *)(v6 + 48) < *(_BYTE *)(a1 + 48) )
    {
      v7 = *(_QWORD *)v6;
      if ( (*(_BYTE *)(v4 + 8) & 1) != 0 )
      {
        if ( !v7 )
          goto LABEL_9;
        v7 ^= v6;
      }
      if ( !v7 )
        goto LABEL_9;
      goto LABEL_13;
    }
    v7 = *(_QWORD *)(v6 + 8);
    if ( (*(_BYTE *)(v4 + 8) & 1) != 0 )
      break;
LABEL_7:
    if ( !v7 )
      goto LABEL_8;
LABEL_13:
    v6 = v7;
  }
  if ( v7 )
  {
    v7 ^= v6;
    goto LABEL_7;
  }
LABEL_8:
  v5 = 1;
LABEL_9:
  RtlRbInsertNodeEx(v4, v6, v5, a1);
}
