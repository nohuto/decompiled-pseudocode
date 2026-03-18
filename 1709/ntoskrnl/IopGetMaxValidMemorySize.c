/*
 * XREFs of IopGetMaxValidMemorySize @ 0x1401F7B74
 * Callers:
 *     IoFillTriageDumpBuffer @ 0x1401F5B40 (IoFillTriageDumpBuffer.c)
 *     IopAddRunTimeTriageDataBlocks @ 0x1401F756C (IopAddRunTimeTriageDataBlocks.c)
 *     IopUpdateMinidumpContext @ 0x1401F819C (IopUpdateMinidumpContext.c)
 *     IopAddBugcheckTriageThread @ 0x1401FD328 (IopAddBugcheckTriageThread.c)
 * Callees:
 *     MiIsAddressValid @ 0x140066790 (MiIsAddressValid.c)
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
