/*
 * XREFs of MiRecheckCombineVm @ 0x14013055C
 * Callers:
 *     MiConvertStandbyToProto @ 0x140130148 (MiConvertStandbyToProto.c)
 * Callees:
 *     MiGetTopLevelPfn @ 0x140079090 (MiGetTopLevelPfn.c)
 *     MiCombineCandidate @ 0x1400A33A0 (MiCombineCandidate.c)
 *     MiGetAnyMultiplexedVm @ 0x1400B1BCC (MiGetAnyMultiplexedVm.c)
 */

__int64 __fastcall MiRecheckCombineVm(__int64 *a1, __int64 a2, char *a3)
{
  int v5; // eax
  int v6; // edi
  __int64 TopLevelPfn; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  char *v10; // rax
  unsigned int v12; // r8d

  v5 = MiCombineCandidate(a1, a2);
  v6 = v5;
  if ( v5 )
  {
    if ( v5 == 2 )
    {
      LOBYTE(v12) = a3 == MiGetAnyMultiplexedVm(2);
      return v12;
    }
    TopLevelPfn = MiGetTopLevelPfn(a2, 0LL);
    v8 = *(_QWORD *)TopLevelPfn;
    v9 = (*(_QWORD *)(TopLevelPfn + 24) >> 62) & 1LL;
    if ( TopLevelPfn != a2 )
      _InterlockedAnd64((volatile signed __int64 *)(TopLevelPfn + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( v6 == 1 )
    {
      v10 = (char *)(v8 + 1280);
      goto LABEL_7;
    }
    if ( (_DWORD)v9 != 1 )
    {
      v10 = (char *)(v8 + 3008);
LABEL_7:
      if ( a3 == v10 )
        return 1LL;
    }
  }
  return 0LL;
}
