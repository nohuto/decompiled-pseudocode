/*
 * XREFs of MiRecheckCombineVm @ 0x140231A64
 * Callers:
 *     MiConvertStandbyToProto @ 0x140231350 (MiConvertStandbyToProto.c)
 * Callees:
 *     MiCombineCandidate @ 0x14005BD10 (MiCombineCandidate.c)
 *     MiGetAnyMultiplexedVm @ 0x1400C0094 (MiGetAnyMultiplexedVm.c)
 *     MiGetTopLevelPfn @ 0x1400E6BD0 (MiGetTopLevelPfn.c)
 */

__int64 __fastcall MiRecheckCombineVm(__int64 *a1, char a2, __int64 a3, char *a4)
{
  unsigned int v6; // ebx
  int v7; // esi
  __int64 TopLevelPfn; // rcx
  unsigned __int64 v10; // rax
  __int64 v11; // rdx
  char *v12; // rax

  v6 = 0;
  v7 = MiCombineCandidate(a1, a2, a3);
  if ( !v7 )
    return 0LL;
  if ( v7 == 2 )
  {
    LOBYTE(v6) = a4 == MiGetAnyMultiplexedVm(2);
    return v6;
  }
  TopLevelPfn = MiGetTopLevelPfn(a3, 0LL);
  v10 = (*(_QWORD *)TopLevelPfn >> 13) & 0x7FFFFFFFFFF0LL | 0xFFFF800000000000uLL;
  v11 = (*(_QWORD *)(TopLevelPfn + 24) >> 62) & 1LL;
  if ( TopLevelPfn != a3 )
    _InterlockedAnd64((volatile signed __int64 *)(TopLevelPfn + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( v7 == 1 )
  {
    v12 = (char *)(v10 + 1280);
  }
  else
  {
    if ( (_DWORD)v11 )
      return 0LL;
    v12 = (char *)(v10 + 3008);
  }
  return a4 == v12;
}
