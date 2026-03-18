/*
 * XREFs of VmpFaultEntryInsert @ 0x1402ABC38
 * Callers:
 *     VmpAccessFaultBatch @ 0x1402AB618 (VmpAccessFaultBatch.c)
 * Callees:
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1400E4380 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     RtlRbInsertNodeEx @ 0x1400E84C0 (RtlRbInsertNodeEx.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140125970 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 */

__int64 __fastcall VmpFaultEntryInsert(__int64 a1, _QWORD *a2, unsigned int a3)
{
  _QWORD *v3; // rdi
  unsigned __int64 v5; // rsi
  unsigned __int8 CurrentIrql; // r14
  volatile LONG *v7; // rbp
  unsigned __int64 *v8; // rbx
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rdx
  bool v11; // r8
  int v12; // ecx
  unsigned __int64 v13; // rax
  __int64 result; // rax

  v3 = a2;
  v5 = (unsigned __int64)&a2[6 * a3];
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  v7 = (volatile LONG *)(a1 + 64);
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(a1 + 64));
  if ( (unsigned __int64)v3 < v5 )
  {
    v8 = (unsigned __int64 *)(a1 + 48);
    do
    {
      v9 = v8[1];
      v10 = *v8;
      if ( (v9 & 1) != 0 && v10 )
        v10 ^= (unsigned __int64)v8;
      v11 = 0;
      v12 = v9 & 1;
      if ( v10 )
      {
        while ( 1 )
        {
          if ( (v3[3] & 0xFFFFFFFFFFFFFuLL) >= (*(_QWORD *)(v10 + 24) & 0xFFFFFFFFFFFFFuLL) )
          {
            v13 = *(_QWORD *)(v10 + 8);
            if ( v12 )
            {
              if ( !v13 )
                goto LABEL_18;
              v13 ^= v10;
            }
            if ( !v13 )
            {
LABEL_18:
              v11 = 1;
              break;
            }
          }
          else
          {
            v13 = *(_QWORD *)v10;
            if ( v12 )
            {
              if ( !v13 )
                goto LABEL_12;
              v13 ^= v10;
            }
            if ( !v13 )
            {
LABEL_12:
              v11 = 0;
              break;
            }
          }
          v10 = v13;
        }
      }
      RtlRbInsertNodeEx((unsigned __int64)v8, v10, v11, v3);
      v3 += 6;
    }
    while ( (unsigned __int64)v3 < v5 );
  }
  ExReleaseSpinLockExclusiveFromDpcLevel(v7);
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
