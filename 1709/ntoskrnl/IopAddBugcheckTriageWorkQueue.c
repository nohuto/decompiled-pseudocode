/*
 * XREFs of IopAddBugcheckTriageWorkQueue @ 0x1401FD4C4
 * Callers:
 *     IopAddBugcheckPnpTriageData @ 0x1401FCD2C (IopAddBugcheckPnpTriageData.c)
 *     IopAddBugcheckPowerTriageData @ 0x1401FCE38 (IopAddBugcheckPowerTriageData.c)
 * Callees:
 *     IoAddTriageDumpDataBlock @ 0x14015ACC8 (IoAddTriageDumpDataBlock.c)
 *     IopIsAddressRangeValid @ 0x14015ADD0 (IopIsAddressRangeValid.c)
 *     IopAddBugcheckTriageThread @ 0x1401FD328 (IopAddBugcheckTriageThread.c)
 */

__int64 __fastcall IopAddBugcheckTriageWorkQueue(__int64 a1)
{
  unsigned int v1; // ebx
  int v3; // r14d
  _QWORD **v4; // rsi
  _QWORD *v5; // rdi
  _QWORD *v6; // rbp

  v1 = 0;
  v3 = 0;
  if ( IopIsAddressRangeValid(a1, 688LL) )
  {
    IoAddTriageDumpDataBlock(a1, 688);
    v4 = (_QWORD **)(a1 + 672);
    v5 = *v4;
    if ( *v4 )
    {
      v6 = v4;
      while ( v5 != v4 && v3 < 10 )
      {
        ++v3;
        if ( !IopIsAddressRangeValid((__int64)v5, 16LL) || (_QWORD *)v5[1] != v6 )
          return (unsigned int)-1073741823;
        IopAddBugcheckTriageThread((__int64)(v5 - 65));
        v6 = v5;
        v5 = (_QWORD *)*v5;
        if ( !v5 )
          return v1;
      }
    }
  }
  else
  {
    return (unsigned int)-1073741823;
  }
  return v1;
}
