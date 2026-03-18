/*
 * XREFs of IopAddBugcheckTriageDevice @ 0x1401FCFD0
 * Callers:
 *     IopAddBugcheckPowerTriageData @ 0x1401FCE38 (IopAddBugcheckPowerTriageData.c)
 *     IopAddBugcheckTriageDeviceNode @ 0x1401FD0DC (IopAddBugcheckTriageDeviceNode.c)
 * Callees:
 *     IoAddTriageDumpDataBlock @ 0x14015ACC8 (IoAddTriageDumpDataBlock.c)
 *     IopIsAddressRangeValid @ 0x14015ADD0 (IopIsAddressRangeValid.c)
 *     IopAddBugcheckTriageUnicodeString @ 0x1401FD428 (IopAddBugcheckTriageUnicodeString.c)
 */

__int64 __fastcall IopAddBugcheckTriageDevice(__int64 a1)
{
  unsigned int v1; // edi
  int v3; // ebp
  unsigned __int16 v4; // si
  unsigned int v5; // edx
  __int64 v6; // rsi
  __int64 v7; // rsi
  __int128 v9; // [rsp+20h] [rbp-18h] BYREF

  v1 = 0;
  v3 = 0;
  while ( 1 )
  {
    ++v3;
    if ( !IopIsAddressRangeValid(a1, 336LL) )
      break;
    v4 = *(_WORD *)(a1 + 2);
    if ( v4 <= 0x3000u && IopIsAddressRangeValid(a1, (v4 + 7LL) & 0xFFFFFFFFFFFFFFF8uLL) )
      v5 = (v4 + 7) & 0xFFFFFFF8;
    else
      v5 = 336;
    IoAddTriageDumpDataBlock(a1, v5);
    v6 = *(_QWORD *)(a1 + 312);
    if ( IopIsAddressRangeValid(v6, 104LL) )
      IoAddTriageDumpDataBlock(v6, 104);
    v7 = *(_QWORD *)(a1 + 8);
    if ( IopIsAddressRangeValid(v7, 336LL) )
    {
      IoAddTriageDumpDataBlock(v7, 336);
      v9 = *(_OWORD *)(v7 + 56);
      IopAddBugcheckTriageUnicodeString(&v9);
    }
    a1 = *(_QWORD *)(a1 + 24);
    if ( !a1 || v3 >= 10 )
      return v1;
  }
  return (unsigned int)-1073741823;
}
