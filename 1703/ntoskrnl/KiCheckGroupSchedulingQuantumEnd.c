/*
 * XREFs of KiCheckGroupSchedulingQuantumEnd @ 0x1400F2C90
 * Callers:
 *     KeClockInterruptNotify @ 0x1400F3A30 (KeClockInterruptNotify.c)
 * Callees:
 *     <none>
 */

char __fastcall KiCheckGroupSchedulingQuantumEnd(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 i; // rax
  __int64 v6; // rdx
  char v7; // cl
  unsigned __int64 v8; // rcx

  if ( MEMORY[0xFFFFF78000000320] > *(_QWORD *)(a1 + 23520) )
    return 1;
  v3 = *(_QWORD *)(a2 + 104);
  if ( v3 )
  {
    for ( i = *(unsigned int *)(a1 + 216) + v3; i; i = *(_QWORD *)(i + 408) )
    {
      v6 = i - *(unsigned int *)(a1 + 216);
      v7 = *(_BYTE *)(i + 112);
      if ( (v7 & 4) != 0 )
      {
        if ( (v7 & 0x10) != 0 )
        {
          v8 = *(_QWORD *)(i + 24);
          goto LABEL_9;
        }
        if ( (v7 & 2) == 0 && (*(__int64 *)(v6 + 48) <= 0 || *(_QWORD *)i >= *(_QWORD *)(i + 24)) )
          return 1;
      }
      else
      {
        if ( (v7 & 0x10) != 0 )
        {
          v8 = *(_QWORD *)(i + 8);
LABEL_9:
          if ( *(_QWORD *)i >= v8 )
            return 1;
          continue;
        }
        if ( (v7 & 2) == 0 && *(__int64 *)(v6 + 48) <= 0 )
          return 1;
      }
    }
  }
  return 0;
}
