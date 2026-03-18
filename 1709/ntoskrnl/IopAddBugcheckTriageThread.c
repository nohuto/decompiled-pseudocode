/*
 * XREFs of IopAddBugcheckTriageThread @ 0x1401FD328
 * Callers:
 *     IopUpdateMinidumpContext @ 0x1401F819C (IopUpdateMinidumpContext.c)
 *     IopAddBugcheckPnpTriageData @ 0x1401FCD2C (IopAddBugcheckPnpTriageData.c)
 *     IopAddBugcheckPowerTriageData @ 0x1401FCE38 (IopAddBugcheckPowerTriageData.c)
 *     IopAddBugcheckTriageWorkQueue @ 0x1401FD4C4 (IopAddBugcheckTriageWorkQueue.c)
 * Callees:
 *     IoAddTriageDumpDataBlock @ 0x14015ACC8 (IoAddTriageDumpDataBlock.c)
 *     IopIsAddressRangeValid @ 0x14015ADD0 (IopIsAddressRangeValid.c)
 *     IopGetMaxValidMemorySize @ 0x1401F7B74 (IopGetMaxValidMemorySize.c)
 *     IopAddBugcheckTriageIrp @ 0x1401FD1CC (IopAddBugcheckTriageIrp.c)
 */

__int64 __fastcall IopAddBugcheckTriageThread(__int64 a1)
{
  unsigned int v1; // ebx
  int v3; // r15d
  __int64 v4; // rcx
  __int64 v5; // rdx
  unsigned int v6; // ecx
  unsigned __int64 v7; // rsi
  int MaxValidMemorySize; // eax
  _QWORD *v9; // rsi
  _QWORD *v10; // rdi
  _QWORD *v11; // r14

  v1 = 0;
  v3 = 0;
  if ( IopIsAddressRangeValid(a1, 2072LL) )
  {
    IoAddTriageDumpDataBlock(a1, 2072);
    if ( (*(_DWORD *)(a1 + 120) & 0x20000) != 0 )
    {
      v4 = *(_QWORD *)(a1 + 56);
      v5 = *(_QWORD *)(a1 + 88);
      if ( (unsigned __int64)(v4 - v5) >= 0x3FFF )
        v6 = 0x3FFF;
      else
        v6 = v4 - v5;
      v7 = (v5 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
      MaxValidMemorySize = IopGetMaxValidMemorySize(v7, v6);
      if ( MaxValidMemorySize )
        IoAddTriageDumpDataBlock(v7, MaxValidMemorySize);
    }
    v9 = (_QWORD *)(a1 + 1648);
    v10 = *(_QWORD **)(a1 + 1648);
    v11 = v9;
    while ( v10 && v10 != v9 && v3 < 10 )
    {
      ++v3;
      if ( !IopIsAddressRangeValid((__int64)(v10 - 4), 208LL) || (_QWORD *)v10[1] != v11 )
        return (unsigned int)-1073741823;
      IopAddBugcheckTriageIrp((__int64)(v10 - 4), 1);
      v11 = v10;
      v10 = (_QWORD *)*v10;
    }
  }
  else
  {
    return (unsigned int)-1073741823;
  }
  return v1;
}
