/*
 * XREFs of MiCapturePfnVm @ 0x1400E6A5C
 * Callers:
 *     MiProcessCrcList @ 0x14053FBA0 (MiProcessCrcList.c)
 * Callees:
 *     MiCombineCandidate @ 0x14005BD10 (MiCombineCandidate.c)
 *     ObReferenceObjectSafeWithTag @ 0x140083060 (ObReferenceObjectSafeWithTag.c)
 *     MiAttachToOwningSession @ 0x1400B4828 (MiAttachToOwningSession.c)
 *     MiGetAnyMultiplexedVm @ 0x1400C0094 (MiGetAnyMultiplexedVm.c)
 *     MiLockPageInline @ 0x1400E1510 (MiLockPageInline.c)
 *     MiIsStoreProcess @ 0x1400E6B90 (MiIsStoreProcess.c)
 *     MiGetTopLevelPfn @ 0x1400E6BD0 (MiGetTopLevelPfn.c)
 */

char *__fastcall MiCapturePfnVm(__int64 *a1, __int64 a2, char a3, unsigned __int64 *a4, unsigned __int64 *a5, int *a6)
{
  char *v7; // rsi
  unsigned __int8 v11; // r13
  int v12; // ecx
  __int64 v13; // r9
  unsigned __int64 v14; // r8
  __int64 TopLevelPfn; // rdi
  unsigned __int64 v16; // r14
  char *AnyMultiplexedVm; // rbx
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rcx
  _QWORD *v23; // rax

  v7 = 0LL;
  *a4 = 0LL;
  *a5 = 0LL;
  *a6 = 24;
  v11 = MiLockPageInline(a2);
  v12 = MiCombineCandidate(a1, a3, a2);
  v14 = 0x7FFFFFFFFFFFFFFFLL;
  if ( v12 )
  {
    *a5 = *(_QWORD *)(a2 + 8) | 0x8000000000000000uLL;
    *a6 = (*(_DWORD *)(a2 + 16) >> 5) & 0x1F;
    if ( v12 == 1 )
    {
      TopLevelPfn = MiGetTopLevelPfn(a2, 0LL, 0x7FFFFFFFFFFFFFFFLL, v13);
      v16 = (*(_QWORD *)TopLevelPfn >> 13) & 0x7FFFFFFFFFF0LL | 0xFFFF800000000000uLL;
      AnyMultiplexedVm = (char *)(v16 + 1280);
      if ( (unsigned int)MiIsStoreProcess(v16, v18, v19, v20) )
        AnyMultiplexedVm = 0LL;
      if ( ObReferenceObjectSafeWithTag(v21) )
        *a4 = v16;
      else
        AnyMultiplexedVm = 0LL;
      v14 = 0x7FFFFFFFFFFFFFFFLL;
      if ( TopLevelPfn != a2 )
        _InterlockedAnd64((volatile signed __int64 *)(TopLevelPfn + 24), 0x7FFFFFFFFFFFFFFFuLL);
    }
    else if ( v12 == 2 )
    {
      AnyMultiplexedVm = MiGetAnyMultiplexedVm(2);
    }
    else
    {
      v23 = MiAttachToOwningSession(a2, 0x11u, 0LL, v13);
      v14 = 0x7FFFFFFFFFFFFFFFLL;
      if ( v23 )
      {
        AnyMultiplexedVm = (char *)(v23[128] + 3008LL);
        *a4 = (unsigned __int64)v23;
      }
      else
      {
        AnyMultiplexedVm = 0LL;
      }
    }
    v7 = AnyMultiplexedVm;
  }
  _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), v14);
  __writecr8(v11);
  return v7;
}
