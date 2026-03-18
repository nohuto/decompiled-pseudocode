/*
 * XREFs of ProcessorpValidateTargetSet @ 0x1C008F824
 * Callers:
 *     ProcessorpFindIdtEntriesApic @ 0x1C008ED20 (ProcessorpFindIdtEntriesApic.c)
 * Callees:
 *     <none>
 */

bool __fastcall ProcessorpValidateTargetSet(__int64 a1)
{
  USHORT v1; // si
  char v4; // bl
  __int64 v5; // rdx
  _QWORD *v6; // rdx
  _QWORD *v7; // rcx

  v1 = *(_WORD *)(a1 + 8);
  if ( v1 >= KeQueryMaximumGroupCount() )
    return 0;
  v4 = 0;
  v5 = *(_QWORD *)(ProcessorGroupByNumber + 8LL * v1);
  if ( !v5 )
    return 0;
  if ( *(_DWORD *)(v5 + 36) == 1
    && (!*(_QWORD *)a1 || (*(_QWORD *)a1 & (*(_QWORD *)a1 ^ (*(_QWORD *)a1 - 1LL))) != *(_QWORD *)a1)
    && IrqMachinePolicy != 6 )
  {
    return 0;
  }
  v6 = (_QWORD *)(v5 + 16);
  v7 = (_QWORD *)*v6;
  if ( (_QWORD *)*v6 == v6 )
  {
LABEL_11:
    if ( IrqMachinePolicy == 6 )
      return KeQueryGroupAffinity(v1) == *(_QWORD *)a1;
  }
  else
  {
    while ( (*(_QWORD *)a1 & v7[3]) != *(_QWORD *)a1 )
    {
      v7 = (_QWORD *)*v7;
      if ( v7 == v6 )
        goto LABEL_11;
    }
    return 1;
  }
  return v4;
}
