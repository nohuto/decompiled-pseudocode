/*
 * XREFs of MiRecheckCombineVm @ 0x140143918
 * Callers:
 *     MiConvertStandbyToProto @ 0x1401433FC (MiConvertStandbyToProto.c)
 * Callees:
 *     MiCombineCandidate @ 0x140030060 (MiCombineCandidate.c)
 *     MiGetAnyMultiplexedVm @ 0x1400493AC (MiGetAnyMultiplexedVm.c)
 *     MiGetTopLevelPfn @ 0x1400D5C50 (MiGetTopLevelPfn.c)
 */

__int64 __fastcall MiRecheckCombineVm(__int64 *a1, unsigned int a2, __int64 a3, char *a4)
{
  int v6; // eax
  unsigned int v7; // ebx
  int v8; // esi
  __int64 TopLevelPfn; // rcx
  unsigned __int64 v10; // rax
  __int64 v11; // rdx
  char *v12; // rax

  v6 = MiCombineCandidate(a1, a2, a3);
  v7 = 0;
  v8 = v6;
  if ( !v6 )
    return 0LL;
  if ( v6 != 2 )
  {
    TopLevelPfn = MiGetTopLevelPfn(a3);
    v10 = (*(_QWORD *)TopLevelPfn >> 13) & 0x7FFFFFFFFFF0LL | 0xFFFF800000000000uLL;
    v11 = (*(_QWORD *)(TopLevelPfn + 24) >> 62) & 1LL;
    if ( TopLevelPfn != a3 )
      _InterlockedAnd64((volatile signed __int64 *)(TopLevelPfn + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( v8 == 1 )
    {
      v12 = (char *)(v10 + 1280);
      goto LABEL_7;
    }
    if ( !(_DWORD)v11 )
    {
      v12 = (char *)(v10 + 3008);
LABEL_7:
      if ( a4 == v12 )
        return 1LL;
    }
    return 0LL;
  }
  LOBYTE(v7) = a4 == MiGetAnyMultiplexedVm(2);
  return v7;
}
