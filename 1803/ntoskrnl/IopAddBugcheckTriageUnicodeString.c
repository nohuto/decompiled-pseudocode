/*
 * XREFs of IopAddBugcheckTriageUnicodeString @ 0x14023A224
 * Callers:
 *     IopAddBugcheckTriageDevice @ 0x140239DD0 (IopAddBugcheckTriageDevice.c)
 *     IopAddBugcheckTriageDeviceNode @ 0x140239ED8 (IopAddBugcheckTriageDeviceNode.c)
 * Callees:
 *     IoAddTriageDumpDataBlock @ 0x140185870 (IoAddTriageDumpDataBlock.c)
 *     KiIsAddressRangeValid @ 0x140185978 (KiIsAddressRangeValid.c)
 */

__int64 __fastcall IopAddBugcheckTriageUnicodeString(__int64 a1)
{
  unsigned __int16 v1; // ax
  unsigned int v2; // ebx
  unsigned __int64 v4; // rdi

  v1 = *(_WORD *)(a1 + 2);
  v2 = 0;
  if ( v1 )
  {
    if ( v1 > 0x100u )
    {
      if ( KiIsAddressRangeValid(*(_QWORD *)(a1 + 8), 256LL) )
      {
        IoAddTriageDumpDataBlock(*(_QWORD *)(a1 + 8), 256);
        return (unsigned int)-2147483643;
      }
    }
    else
    {
      v4 = ((unsigned __int64)v1 + 7) >> 3;
      if ( KiIsAddressRangeValid(*(_QWORD *)(a1 + 8), 8 * v4) )
        IoAddTriageDumpDataBlock(*(_QWORD *)(a1 + 8), 8 * v4);
      else
        return (unsigned int)-1073741823;
    }
  }
  return v2;
}
