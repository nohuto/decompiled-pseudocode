/*
 * XREFs of MiCapturePfnVm @ 0x140124730
 * Callers:
 *     MiProcessCrcList @ 0x1405B6E90 (MiProcessCrcList.c)
 * Callees:
 *     MiCombineCandidate @ 0x140030060 (MiCombineCandidate.c)
 *     MiGetAnyMultiplexedVm @ 0x1400493AC (MiGetAnyMultiplexedVm.c)
 *     MiAttachToOwningSession @ 0x1400C6954 (MiAttachToOwningSession.c)
 *     MiIsStoreProcess @ 0x1400D5C14 (MiIsStoreProcess.c)
 *     MiGetTopLevelPfn @ 0x1400D5C50 (MiGetTopLevelPfn.c)
 *     ObReferenceObjectSafeWithTag @ 0x1400FED50 (ObReferenceObjectSafeWithTag.c)
 *     MiLockPageAtDpcInline @ 0x140124DA0 (MiLockPageAtDpcInline.c)
 */

char *__fastcall MiCapturePfnVm(__int64 *a1, ULONG_PTR a2, unsigned int a3, _QWORD *a4, unsigned __int64 *a5, int *a6)
{
  unsigned __int8 CurrentIrql; // r12
  int v11; // ecx
  __int64 TopLevelPfn; // rdi
  unsigned __int64 v13; // rbx
  char *AnyMultiplexedVm; // r14
  __int64 v15; // rcx
  _KPROCESS *v17; // rax

  *a4 = 0LL;
  *a5 = 0LL;
  *a6 = 24;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  MiLockPageAtDpcInline(a2);
  v11 = MiCombineCandidate(a1, a3, a2);
  if ( v11 )
  {
    *a5 = *(_QWORD *)(a2 + 8) | 0x8000000000000000uLL;
    *a6 = (*(_DWORD *)(a2 + 16) >> 5) & 0x1F;
    if ( v11 == 1 )
    {
      TopLevelPfn = MiGetTopLevelPfn(a2);
      v13 = (*(_QWORD *)TopLevelPfn >> 13) & 0x7FFFFFFFFFF0LL | 0xFFFF800000000000uLL;
      AnyMultiplexedVm = (char *)(v13 + 1280);
      if ( (unsigned int)MiIsStoreProcess(v13) )
        AnyMultiplexedVm = 0LL;
      if ( ObReferenceObjectSafeWithTag(v15) )
        *a4 = v13;
      else
        AnyMultiplexedVm = 0LL;
      if ( TopLevelPfn != a2 )
        _InterlockedAnd64((volatile signed __int64 *)(TopLevelPfn + 24), 0x7FFFFFFFFFFFFFFFuLL);
    }
    else if ( v11 == 2 )
    {
      AnyMultiplexedVm = MiGetAnyMultiplexedVm(2);
    }
    else
    {
      v17 = MiAttachToOwningSession(a2, 0x11u, 0LL);
      if ( v17 )
      {
        AnyMultiplexedVm = (char *)(v17[1].ActiveProcessors.Bitmap[2] + 3008);
        *a4 = v17;
      }
      else
      {
        AnyMultiplexedVm = 0LL;
      }
    }
    _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    __writecr8(CurrentIrql);
    return AnyMultiplexedVm;
  }
  else
  {
    _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    __writecr8(CurrentIrql);
    return 0LL;
  }
}
