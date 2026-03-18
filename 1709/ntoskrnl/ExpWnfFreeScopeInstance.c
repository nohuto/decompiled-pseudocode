/*
 * XREFs of ExpWnfFreeScopeInstance @ 0x14059AAFC
 * Callers:
 *     ExpWnfDeleteScopeById @ 0x1404FCB94 (ExpWnfDeleteScopeById.c)
 *     ExpWnfResolveScopeInstance @ 0x140502B1C (ExpWnfResolveScopeInstance.c)
 *     ExpWnfDeleteScopeInstances @ 0x140762B58 (ExpWnfDeleteScopeInstances.c)
 * Callees:
 *     ExWaitForRundownProtectionRelease @ 0x1400A9850 (ExWaitForRundownProtectionRelease.c)
 *     ZwClose @ 0x14017DAA0 (ZwClose.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExpWnfDeleteNameInstanceCallback @ 0x14059AB9C (ExpWnfDeleteNameInstanceCallback.c)
 */

void __fastcall ExpWnfFreeScopeInstance(struct _EX_RUNDOWN_REF *P, char a2)
{
  _QWORD *Count; // rcx
  __int64 v4; // rdi
  unsigned __int64 v5; // rdi
  void *Ptr; // rcx
  void *v7; // rcx
  _QWORD *v8; // rax
  _QWORD *v9; // rax

  if ( a2 )
  {
    ExWaitForRundownProtectionRelease(P + 1);
    Count = (_QWORD *)P[7].Count;
    if ( Count )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          while ( *Count )
          {
            v9 = Count;
            Count = (_QWORD *)*Count;
            *v9 = 0LL;
          }
          if ( !Count[1] )
            break;
          v8 = Count;
          Count = (_QWORD *)Count[1];
          v8[1] = 0LL;
        }
        v4 = Count[2];
        ExpWnfDeleteNameInstanceCallback(Count, P);
        v5 = v4 & 0xFFFFFFFFFFFFFFFCuLL;
        if ( !v5 )
          break;
        Count = (_QWORD *)v5;
      }
    }
    P[7].Count = 0LL;
  }
  Ptr = P[8].Ptr;
  if ( Ptr )
    ZwClose(Ptr);
  v7 = P[9].Ptr;
  if ( v7 )
    ZwClose(v7);
  ExFreePoolWithTag(P, 0x20666E57u);
}
