/*
 * XREFs of Match_32 @ 0x1C0051B04
 * Callers:
 *     Match @ 0x1C0051A30 (Match.c)
 * Callees:
 *     FreeDataBuffs @ 0x1C0003118 (FreeDataBuffs.c)
 *     memset @ 0x1C0004540 (memset.c)
 *     IsCompatableDSDTRevision @ 0x1C0046E34 (IsCompatableDSDTRevision.c)
 *     ValidateArgTypes @ 0x1C0047D6C (ValidateArgTypes.c)
 *     EvalPackageElement @ 0x1C0049FE0 (EvalPackageElement.c)
 *     MatchData_32 @ 0x1C0051A6C (MatchData_32.c)
 */

__int64 __fastcall Match_32(__int64 a1, __int64 a2)
{
  unsigned int v3; // ebx
  __int64 v4; // rbx
  unsigned int *v5; // rbp
  unsigned int v6; // esi
  unsigned int v7; // ecx
  __int64 v8; // r9
  unsigned int v10[14]; // [rsp+20h] [rbp-38h] BYREF

  v3 = ValidateArgTypes(a1, *(_QWORD *)(a2 + 80), 0, "PIIIII");
  if ( !v3 )
  {
    v4 = *(_QWORD *)(a2 + 80);
    v5 = *(unsigned int **)(v4 + 32);
    memset(v10, 0, 0x28uLL);
    v6 = *(_DWORD *)(v4 + 216);
    do
    {
      FreeDataBuffs((__int64)v10, 1u);
      v3 = EvalPackageElement(v5, v6, (__int64)v10);
      if ( !v3
        && HIWORD(v10[0]) == 1
        && MatchData_32(v10[4], *(_DWORD *)(*(_QWORD *)(a2 + 80) + 56LL), *(_DWORD *)(*(_QWORD *)(a2 + 80) + 96LL))
        && MatchData_32(v7, *(_DWORD *)(v8 + 136), *(_DWORD *)(v8 + 176)) )
      {
        *(_WORD *)(*(_QWORD *)(a2 + 88) + 2LL) = 1;
        *(_DWORD *)(*(_QWORD *)(a2 + 88) + 16LL) = v6;
        goto LABEL_10;
      }
      ++v6;
    }
    while ( !v3 );
    if ( v3 == -1072431100 )
    {
      *(_WORD *)(*(_QWORD *)(a2 + 88) + 2LL) = 1;
      IsCompatableDSDTRevision();
      *(_DWORD *)(*(_QWORD *)(a2 + 88) + 16LL) = -1;
      v3 = 0;
    }
LABEL_10:
    FreeDataBuffs((__int64)v10, 1u);
  }
  return v3;
}
