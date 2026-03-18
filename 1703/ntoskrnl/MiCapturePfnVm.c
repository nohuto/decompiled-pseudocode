/*
 * XREFs of MiCapturePfnVm @ 0x140078F10
 * Callers:
 *     MiProcessCrcList @ 0x1404C89E0 (MiProcessCrcList.c)
 * Callees:
 *     MiAttachToOwningSession @ 0x140076418 (MiAttachToOwningSession.c)
 *     MiGetTopLevelPfn @ 0x140079090 (MiGetTopLevelPfn.c)
 *     MiLockPageAtDpcInline @ 0x14009C240 (MiLockPageAtDpcInline.c)
 *     MiCombineCandidate @ 0x1400A33A0 (MiCombineCandidate.c)
 *     MiGetAnyMultiplexedVm @ 0x1400B1BCC (MiGetAnyMultiplexedVm.c)
 *     ObReferenceObjectSafeWithTag @ 0x1400EFD50 (ObReferenceObjectSafeWithTag.c)
 */

__int64 __fastcall MiCapturePfnVm(__int64 a1, __int64 a2, ULONG_PTR *a3, unsigned __int64 *a4, int *a5)
{
  unsigned __int8 CurrentIrql; // r12
  int v10; // ecx
  volatile signed __int64 *TopLevelPfn; // rsi
  volatile signed __int64 v12; // rdi
  __int64 AnyMultiplexedVm; // r14
  __int64 v14; // rax
  ULONG_PTR v16; // rax

  *a3 = 0LL;
  *a4 = 0LL;
  *a5 = 24;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  MiLockPageAtDpcInline(a2);
  v10 = MiCombineCandidate(a1, a2);
  if ( v10 )
  {
    *a4 = *(_QWORD *)(a2 + 8) | 0x8000000000000000uLL;
    *a5 = (*(_DWORD *)(a2 + 16) >> 5) & 0x1F;
    if ( v10 == 1 )
    {
      TopLevelPfn = (volatile signed __int64 *)MiGetTopLevelPfn(a2, 0LL);
      v12 = *TopLevelPfn;
      AnyMultiplexedVm = *TopLevelPfn + 1280;
      v14 = *(_QWORD *)(qword_14036C8F8 + 8LL * *(unsigned __int16 *)(*TopLevelPfn + 1452));
      if ( *(_DWORD *)(v14 + 1192) && *(_QWORD *)(v14 + 1296) == v12 )
        AnyMultiplexedVm = 0LL;
      if ( (unsigned __int8)ObReferenceObjectSafeWithTag(v12, 1953261124LL) )
        *a3 = v12;
      else
        AnyMultiplexedVm = 0LL;
      if ( TopLevelPfn != (volatile signed __int64 *)a2 )
        _InterlockedAnd64(TopLevelPfn + 3, 0x7FFFFFFFFFFFFFFFuLL);
    }
    else if ( v10 == 2 )
    {
      AnyMultiplexedVm = MiGetAnyMultiplexedVm(2LL);
    }
    else
    {
      v16 = MiAttachToOwningSession(a2, 0x11u);
      if ( v16 )
      {
        AnyMultiplexedVm = *(_QWORD *)(v16 + 1024) + 3008LL;
        *a3 = v16;
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
