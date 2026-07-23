/*
 * XREFs of VmpFaultEntryInsert @ 0x1402ABC38
 * Callers:
 *     VmpAccessFaultBatch @ 0x1402AB618 (VmpAccessFaultBatch.c)
 * Callees:
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1400E4380 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     RtlRbInsertNodeEx @ 0x1400E84C0 (RtlRbInsertNodeEx.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140125970 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 */

__int64 __fastcall VmpFaultEntryInsert(__int64 a1, _RTL_BALANCED_NODE *a2, unsigned int a3)
{
  _RTL_BALANCED_NODE *v3; // rdi
  unsigned __int64 v5; // rsi
  unsigned __int8 CurrentIrql; // r14
  volatile LONG *v7; // rbp
  _RTL_RB_TREE *v8; // rbx
  _RTL_BALANCED_NODE *Min; // rax
  unsigned __int64 Root; // rdx
  BOOLEAN v11; // r8
  int v12; // ecx
  unsigned __int64 v13; // rax
  __int64 result; // rax

  v3 = a2;
  v5 = (unsigned __int64)&a2[2 * a3];
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  v7 = (volatile LONG *)(a1 + 64);
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(a1 + 64));
  if ( (unsigned __int64)v3 < v5 )
  {
    v8 = (_RTL_RB_TREE *)(a1 + 48);
    do
    {
      Min = v8->Min;
      Root = (unsigned __int64)v8->Root;
      if ( ((unsigned __int8)Min & 1) != 0 && Root )
        Root ^= (unsigned __int64)v8;
      v11 = 0;
      v12 = (unsigned __int8)Min & 1;
      if ( Root )
      {
        while ( 1 )
        {
          if ( ((unsigned __int64)v3[1].Children[0] & 0xFFFFFFFFFFFFFLL) >= (*(_QWORD *)(Root + 24) & 0xFFFFFFFFFFFFFuLL) )
          {
            v13 = *(_QWORD *)(Root + 8);
            if ( v12 )
            {
              if ( !v13 )
                goto LABEL_18;
              v13 ^= Root;
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
            v13 = *(_QWORD *)Root;
            if ( v12 )
            {
              if ( !v13 )
                goto LABEL_12;
              v13 ^= Root;
            }
            if ( !v13 )
            {
LABEL_12:
              v11 = 0;
              break;
            }
          }
          Root = v13;
        }
      }
      RtlRbInsertNodeEx(v8, (PRTL_BALANCED_NODE)Root, v11, v3);
      v3 += 2;
    }
    while ( (unsigned __int64)v3 < v5 );
  }
  ExReleaseSpinLockExclusiveFromDpcLevel(v7);
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
