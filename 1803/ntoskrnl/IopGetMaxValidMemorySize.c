/*
 * XREFs of IopGetMaxValidMemorySize @ 0x140234EB0
 * Callers:
 *     IoFillTriageDumpBuffer @ 0x140233034 (IoFillTriageDumpBuffer.c)
 *     IopAddRunTimeTriageDataBlocks @ 0x140234884 (IopAddRunTimeTriageDataBlocks.c)
 *     IopUpdateMinidumpContext @ 0x1402354E0 (IopUpdateMinidumpContext.c)
 *     IopAddBugcheckTriageThread @ 0x14023A124 (IopAddBugcheckTriageThread.c)
 * Callees:
 *     MiIsAddressValid @ 0x140122C40 (MiIsAddressValid.c)
 */

__int64 __fastcall IopGetMaxValidMemorySize(__int64 a1, unsigned int a2)
{
  int v2; // ebp
  unsigned int v3; // ebx
  unsigned __int64 v4; // rsi

  v2 = 4096 - (a1 & 0xFFF);
  v3 = 0;
  v4 = a1 & 0xFFFFFFFFFFFFF000uLL;
  if ( !a2 )
    return a2;
  do
  {
    if ( !MiIsAddressValid(v4) )
      break;
    v3 += v2;
    v4 += 4096LL;
    if ( !v4 )
      break;
    v2 = 4096;
  }
  while ( v3 < a2 );
  if ( v3 >= a2 )
    return a2;
  return v3;
}
