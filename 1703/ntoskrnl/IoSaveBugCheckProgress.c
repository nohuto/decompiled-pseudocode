/*
 * XREFs of IoSaveBugCheckProgress @ 0x1401F0EA4
 * Callers:
 *     IoWriteCrashDump @ 0x1401F1224 (IoWriteCrashDump.c)
 *     KeBugCheck2 @ 0x1401FEE60 (KeBugCheck2.c)
 *     KiDisplayBlueScreen @ 0x1402000B4 (KiDisplayBlueScreen.c)
 * Callees:
 *     IoUpdateBugCheckProgressEnvVariable @ 0x1401F1138 (IoUpdateBugCheckProgressEnvVariable.c)
 */

__int64 __fastcall IoSaveBugCheckProgress(unsigned __int16 a1)
{
  int v1; // r8d
  __int64 result; // rax

  if ( CrashdmpDumpBlock )
  {
    v1 = *(_DWORD *)(CrashdmpDumpBlock + 1404);
    if ( (v1 & 0x60000) == 0 )
    {
      *(_DWORD *)(CrashdmpDumpBlock + 1404) = v1 ^ (a1 ^ (unsigned __int16)v1) & 0x1FF;
      return IoUpdateBugCheckProgressEnvVariable();
    }
  }
  return result;
}
