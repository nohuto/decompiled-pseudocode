/*
 * XREFs of IoSetBugCheckProgressAndFlag @ 0x1401F0EE8
 * Callers:
 *     IoWriteCrashDump @ 0x1401F1224 (IoWriteCrashDump.c)
 * Callees:
 *     IoUpdateBugCheckProgressEnvVariable @ 0x1401F1138 (IoUpdateBugCheckProgressEnvVariable.c)
 */

__int64 IoSetBugCheckProgressAndFlag()
{
  __int64 result; // rax
  int v1; // ecx

  result = CrashdmpDumpBlock;
  if ( CrashdmpDumpBlock )
  {
    v1 = *(_DWORD *)(CrashdmpDumpBlock + 1404);
    if ( (v1 & 0x60000) == 0 )
    {
      *(_DWORD *)(CrashdmpDumpBlock + 1404) = v1 & 0xFFFFFE00 | 0x25;
      result = CrashdmpDumpBlock;
    }
    *(_DWORD *)(result + 1404) |= 0x800u;
    return IoUpdateBugCheckProgressEnvVariable();
  }
  return result;
}
