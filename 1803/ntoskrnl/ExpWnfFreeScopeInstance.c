/*
 * XREFs of ExpWnfFreeScopeInstance @ 0x14056705C
 * Callers:
 *     ExpWnfResolveScopeInstance @ 0x1404F63DC (ExpWnfResolveScopeInstance.c)
 *     ExpWnfDeleteScopeById @ 0x140511974 (ExpWnfDeleteScopeById.c)
 *     ExpWnfDeleteScopeInstances @ 0x1407CA63C (ExpWnfDeleteScopeInstances.c)
 * Callees:
 *     ExWaitForRundownProtectionRelease @ 0x140040D50 (ExWaitForRundownProtectionRelease.c)
 *     ZwClose @ 0x1401A76A0 (ZwClose.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExpWnfDeleteNameInstanceCallback @ 0x140567104 (ExpWnfDeleteNameInstanceCallback.c)
 */

void __fastcall ExpWnfFreeScopeInstance(struct _EX_RUNDOWN_REF *P, char a2)
{
  _QWORD *Count; // rcx
  __int64 v4; // rdi
  unsigned __int64 v5; // rdi
  _QWORD *v6; // rax
  _QWORD *v7; // rax
  void *Ptr; // rcx
  void *v9; // rcx

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
            v7 = Count;
            Count = (_QWORD *)*Count;
            *v7 = 0LL;
          }
          if ( !Count[1] )
            break;
          v6 = Count;
          Count = (_QWORD *)Count[1];
          v6[1] = 0LL;
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
  v9 = P[9].Ptr;
  if ( v9 )
    ZwClose(v9);
  ExFreePoolWithTag(P, 0x20666E57u);
}
